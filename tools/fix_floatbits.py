"""Keep the bits where a port moves 4 bytes between a float and an integer.

Ghidra prints a real conversion explicitly ((int)ROUND(x), (float)iVar, a
_ftol call).  An implicit one is the original moving the 4 bytes:
- float -> integer: `DAT_x = 0.6f` with DAT_x an undefined4, `puVar[3] =
  fVar`, `uVar = FUN_returning_float()`, `return fVar` from an undefined4
  function.  C++ converted the value (0.6 -> 0; 2026-10-20, 0x506010's event
  time read back as ~0 and level 211 played out differently).
- integer -> float: `fVar2 = DAT_008a9e44` with the global typed int (the
  original copies it with `mov`), which C++ converted with fild.
The compiler finds both (-Wconversion, SARIF output with exact source
ranges), and each converted expression is wrapped: bea_piece32(E) keeps a
float's bits as an integer, bea_fcast<float>(E) reads an integer's bits as a
float (ghidra_compat.h).

    python -I tools/fix_floatbits.py [--check] FILE.cpp...     (default: all of src/bea/direct)

--check only reports (exit 1 if anything would change).  Needs the MSYS2
MINGW32 g++ (run through C:/msys64/usr/bin/bash.exe -lc).
"""
import argparse, glob, json, os, re, subprocess, sys, tempfile
from concurrent.futures import ThreadPoolExecutor

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
BASH = r'C:\msys64\usr\bin\bash.exe'
# GCC spells a typedef as `'undefined4' {{aka 'unsigned int'}}` in SARIF (the
# braces doubled, SARIF placeholders), *after* the closing quote.  The
# pattern had the alias inside the quotes, so no store into an
# undefined4/uint slot was ever rewritten (0x4aede0's `puVar9[3] = local_14`
# converted by value; found by tools/fingerprint.py, 2026-10-20).
AKA = r"(?: \{\{aka '[^']*'\}\})?"
FLOAT = r"'(?:float|double|long double|float10)'" + AKA
INT4 = r"'(?:int|unsigned int|uint|uint32_t|undefined4|long int|long unsigned int|int32_t|ulong|long)'" + AKA
TO_INT = re.compile(r"^conversion from %s to %s (may change value|changes value)" % (FLOAT, INT4))
TO_FLOAT = re.compile(r"^conversion from %s to %s may change value" % (INT4, FLOAT))


def msys(path):
    p = os.path.abspath(path).replace('\\', '/')
    return '/' + p[0].lower() + p[2:]


def sites(cpp):
    """(start_line, start_col, end_line, end_col, wrapper) per conversion in cpp."""
    fd, out = tempfile.mkstemp(suffix='.sarif')
    os.close(fd)
    cmd = ("cd '%s' && g++ -fsyntax-only -std=gnu++17 -m32 -mfpmath=387 -fpermissive -Wconversion "
           "-fdiagnostics-format=sarif-stderr -I src -I third_party/minhook/include '%s' 2> '%s'"
           % (msys(ROOT), msys(cpp), msys(out)))
    subprocess.run([BASH, '-lc', cmd], env=dict(os.environ, MSYSTEM='MINGW32'), capture_output=True)
    try:
        raw = open(out, encoding='utf-8', errors='replace').read()
        # GCC 16 copies source snippets into the SARIF without escaping a
        # backslash: `!= '\0'` became an invalid JSON escape \0 and the port
        # (0x523bc0, 2026-10-28) was "NOT FIXABLE", sinking its batch
        raw = re.sub(r'\\(.)', lambda m: m.group(0) if m.group(1) in '"\\/bfnrtu' else '\\\\' + m.group(1), raw)
        data = json.loads(raw)
    except (OSError, ValueError):
        return None
    finally:
        os.remove(out)
    name = os.path.basename(cpp)
    found = []
    for r in data['runs'][0].get('results', []):
        msg = r['message']['text']
        wrap = 'bea_piece32' if TO_INT.match(msg) else 'bea_fcast<float>' if TO_FLOAT.match(msg) else None
        if not wrap:
            continue
        # the location in this file: the result itself, or (inside a macro or
        # a template from ghidra_compat.h) the related location in the port
        locs = [l['physicalLocation'] for l in r.get('locations', [])]
        locs += [l['physicalLocation'] for l in r.get('relatedLocations', []) if 'physicalLocation' in l]
        for loc in locs:
            if os.path.basename(loc['artifactLocation']['uri']) == name:
                g = loc['region']
                if 'startColumn' not in g:
                    continue
                found.append((g['startLine'], g['startColumn'], g.get('endLine', g['startLine']),
                              g.get('endColumn', g['startColumn'] + 1), wrap))
                break
    return sorted(set(found))


def expand_noop_guard(cpp):
    """autoport's `#define BEA_LOOP_GUARD(c) (c)` hides conversions inside
    loop conditions from the diagnostics (they point at the macro name):
    expand it in place, it is a no-op."""
    text = open(cpp, encoding='utf-8', newline='').read()
    if not re.search(r'^#define BEA_LOOP_GUARD\(c\) \(c\)\s*$', text, re.M) or 'BEA_LOOP_GUARD((' not in text:
        return
    text = text.replace('BEA_LOOP_GUARD((', '((')
    open(cpp, 'w', encoding='utf-8', newline='').write(text)


def fix(cpp, check):
    found = sites(cpp)
    if found and not check and 'BEA_LOOP_GUARD((' in open(cpp, encoding='utf-8').read():
        # a site may hide in a loop condition (reported at the macro name)
        expand_noop_guard(cpp)
        found = sites(cpp)
    if found is None:
        return cpp, 0, ['no diagnostics (compile failed?)']
    if not found:
        return cpp, 0, []
    text = open(cpp, encoding='utf-8', newline='').read()
    starts = [0] + [m.end() for m in re.finditer('\n', text)]
    spans, bad = {}, []
    for sl, sc, el, ec, wrap in found:
        s, e = starts[sl - 1] + sc - 1, starts[el - 1] + ec - 1
        # a macro use (DAT_xxxxxxxx) can come back as its first character only
        while e < len(text) and (text[e].isalnum() or text[e] == '_') and (text[e - 1].isalnum() or text[e - 1] == '_'):
            e += 1
        expr = text[s:e]
        # a function-like macro use (BEA_LOOP_GUARD(...)): the conversion is
        # inside it and is reported again at its own location
        if re.fullmatch(r'[A-Z_][A-Z0-9_]*', expr) and text[e:e + 1] == '(':
            continue
        if not expr.strip() or expr.count('(') != expr.count(')') or expr.count('[') != expr.count(']'):
            bad.append('%d:%d' % (sl, sc))
            continue
        if text[max(0, s - 17):s].endswith(('bea_piece32(', 'bea_fcast<float>(')):
            continue
        spans[(s, e)] = wrap
    # nested ranges: wrap the innermost (the next round sees the outer one)
    keep = {k: v for k, v in spans.items() if not any(o != k and k[0] <= o[0] and o[1] <= k[1] for o in spans)}
    if not check:
        for (s, e), wrap in sorted(keep.items(), reverse=True):
            text = text[:s] + wrap + '(' + text[s:e] + ')' + text[e:]
        open(cpp, 'w', encoding='utf-8', newline='').write(text)
    return cpp, len(keep), bad


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('files', nargs='*')
    ap.add_argument('--check', action='store_true')
    a = ap.parse_args()
    files = a.files or sorted(glob.glob(os.path.join(ROOT, 'src', 'bea', 'direct', 'ap_*.cpp')))
    # A file compiled clean once stays clean while neither it nor the headers
    # change: a cache of their hashes skips it.  Every build of the gated loop
    # ran g++ -Wconversion over all ~2,000 direct ports (12 of a round's ~20
    # minutes, 2026-10-23) to look at the ten new ones.
    import hashlib
    hdr = hashlib.sha1()
    for h in ('ghidra_compat.h', 'hooks.h', 'common.h'):
        p = os.path.join(ROOT, 'src', 'bea', h)
        if os.path.exists(p):
            hdr.update(open(p, 'rb').read())
    hdr = hdr.hexdigest()
    cache_path = os.path.join(ROOT, 'build', 'floatbits_clean.txt')
    try:
        clean = set(open(cache_path).read().split())
    except OSError:
        clean = set()
    def key(f):
        return hashlib.sha1(open(f, 'rb').read() + hdr.encode()).hexdigest()
    todo = [f for f in files if key(f) not in clean]
    skipped = len(files) - len(todo)
    files = todo
    total, unfixable = 0, 0
    # a fix can expose the next conversion (an enclosing expression): repeat
    for rnd in range(3):
        changed = []
        with ThreadPoolExecutor(min(16, (os.cpu_count() or 4))) as ex:
            for cpp, n, bad in ex.map(lambda f: fix(f, a.check), files):
                if n or bad:
                    print('%s: %d site(s)%s' % (os.path.relpath(cpp, ROOT), n,
                                                ('; NOT FIXABLE at ' + ', '.join(bad)) if bad else ''))
                if n:
                    changed.append(cpp)
                elif not bad:
                    clean.add(key(cpp))
                total += n
                if rnd == 0:
                    unfixable += len(bad)
        if a.check or not changed:
            break
        files = changed
    try:
        os.makedirs(os.path.dirname(cache_path), exist_ok=True)
        with open(cache_path, 'w') as f:
            f.write('\n'.join(sorted(clean)) + '\n')
    except OSError:
        pass
    print('%d float<->int site(s) %s, %d not fixable (%d file(s) skipped as unchanged and clean)'
          % (total, 'found' if a.check else 'fixed', unfixable, skipped))
    sys.exit(1 if (a.check and total) or unfixable else 0)


if __name__ == '__main__':
    main()
