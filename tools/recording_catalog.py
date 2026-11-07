"""A catalog of every recorded test and the settings it needs (2026-11-06), for sharing the
recordings with another project: Markdown for people, JSON for tools.

    python -I tools/recording_catalog.py OUTDIR

Per test: the level, the recording, when it was made, how long it plays, the switches its
replay needs (replays.json), the options file it was made with, the starting mouse position,
the invert-Y settings, and the original game's result (baseline.json). Plus the settings
every test shares: the BEA.exe, the fixed step, the game's command line and the harness.
"""
import datetime, hashlib, json, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(os.path.join(ROOT, 'tools'))
import behaviour_bisect as bb  # noqa: E402

SWITCHES = {   # replays.json key -> what it means, as plain text
    'sync': 'made with BEA_SYNCJOBS=1 (background loading finishes before the game goes on)',
    'cheat': 'made with the invulnerability cheat (BEA_CHEAT)',
    'cheat_clock': 'the cheat began at this game clock (older recordings)',
    'protect': 'BEA_PROTECT: these unit types take no damage (a variant of a recorded win)',
    'mp1': 'BEA_MP_ONEPLAYER=1: in split screen the keyboard and mouse drive player 1 only',
    'goodies': 'BEA_GOODIES=3: every goodie unlocked',
    'allmaps': 'BEA_MPMAPS=1: every multiplayer map unlocked',
    'keepgoing': 'the replay runs on past the outcome',
    'endclock': 'the run ends at this game clock if nothing has happened',
    'secs': 'real-time cap for the run, in seconds',
    'client': 'the window client size the game saw while recording (an enlarged play window)',
    'options': 'the game options file (defaultoptions.bea) it was recorded with',
}


def sha(path):
    return hashlib.sha256(open(path, 'rb').read()).hexdigest()


def rec_info(path):
    info = {'version': 1, 'play_frames': 0, 'messages': 0, 'mouse_reads': 0, 'mouse0': None}
    for line in open(path, errors='replace'):
        k = line[:1]
        if k == 'V':
            info['version'] = int(line.split()[1])
        elif k == 'P' and info['version'] < 2:
            info['version'] = 2
        elif k in 'MN':
            info['messages'] += 1
            if k == 'N':
                info['play_frames'] = max(info['play_frames'], int(line.split()[1]))
        elif k in 'DE':
            info['mouse_reads'] += 1
        elif k == 'S':
            info['mouse0'] = ' '.join(line.split()[1:3])
    return info


def main():
    out = os.path.abspath(sys.argv[1])
    os.makedirs(out, exist_ok=True)
    reps = bb.replays()
    base = json.load(open(os.path.join(bb.SCRATCH, 'baseline.json')))
    tol = {}
    if os.path.exists(os.path.join(bb.SCRATCH, 'tolerances.json')):
        tol = json.load(open(os.path.join(bb.SCRATCH, 'tolerances.json')))
    exe = os.path.join(ROOT, 'Battle Engine Aquila', 'BEA.exe')
    common = {
        'bea_exe_sha256': sha(exe),
        'fixed_step_seconds': 0.016667,
        'game_command_line': '-forcewindowed -skipfmv -nosound -level <level>   (menu sessions: no -level)',
        'window': 'windowed, 640x480 back buffer',
        'clock': 'BEA_FIXEDSTEP: QueryPerformanceCounter and timeGetTime return frames x step (+0.1 us per read)',
        'export_switches': 'BEA_HOOKS_OFF=1 (the original game, no rebuilt functions), BEA_SYNCJOBS=1, BEA_FPSCLOCK=1, '
                           'US keyboard layout for the game process',
        'outcome_note': 'expected results are the original game\'s, as outcome@game clock; probes and tapes count Presents from the process start',
        'made': datetime.date.today().isoformat(),
    }
    rows = []
    for name in sorted(reps):
        rp = reps[name]
        path = rp['file']
        row = {'test': name, 'level': rp['level'], 'recording': os.path.basename(path),
               'recorded': datetime.datetime.fromtimestamp(os.path.getmtime(path)).strftime('%Y-%m-%d %H:%M') if os.path.exists(path) else None,
               'expected': base.get(name), 'tolerance': tol.get(name),
               # file names only: a path would name folders on this PC
               'switches': {k: (os.path.basename(v) if isinstance(v, str) and ('/' in v or '\\' in v) else v)
                            for k, v in rp.items() if k not in ('level', 'file')}}
        if os.path.exists(path):
            row.update(rec_info(path))
            log = re.sub(r'\.rec$', '.log', path)
            if os.path.exists(log):
                m = re.search(r'controls: invert walker (\d) (\d) jet (\d) (\d)', open(log, errors='replace').read())
                if m:
                    row['invert_y'] = 'walker %s %s, jet %s %s' % m.groups()
            opt = rp.get('options') or re.sub(r'\.rec$', '.options', path)
            if os.path.exists(opt):
                row['options_file'] = os.path.basename(opt)
                row['options_sha256'] = sha(opt)
        rows.append(row)
    json.dump({'common': common, 'switch_meanings': SWITCHES, 'tests': rows}, open(os.path.join(out, 'catalog.json'), 'w'), indent=1)

    md = ['# Recordings and their settings', '', 'Made %s. Every test is a recording of my own play, replayed in the original game.' % common['made'], '',
          '## Settings every test shares', '']
    md += ['- **%s:** %s' % (k.replace('_', ' '), v) for k, v in common.items() if k != 'made']
    md += ['', '## What the per-test switches mean', ''] + ['- `%s`: %s' % (k, v) for k, v in SWITCHES.items()]
    md += ['', '## The tests', '', '| Test | Level | Recording | Recorded | Play frames | Expected result | Switches | Options file | Start mouse | Invert Y |',
           '|---|---|---|---|---|---|---|---|---|---|']
    for r in rows:
        sw = ', '.join('%s=%s' % (k, v) if v is not True else k for k, v in r['switches'].items()) or '-'
        md.append('| %s | %s | %s | %s | %s | %s%s | %s | %s | %s | %s |' % (
            r['test'], r['level'], r['recording'], r.get('recorded') or '?', r.get('play_frames', '?'),
            r.get('expected') or '-', ' (tolerance %s)' % r['tolerance'] if r.get('tolerance') else '', sw,
            r.get('options_file', '-'), r.get('mouse0') or '-', r.get('invert_y', '-')))
    open(os.path.join(out, 'CATALOG.md'), 'w', encoding='utf-8').write('\n'.join(md) + '\n')
    print('catalog: %d tests -> %s' % (len(rows), out))


if __name__ == '__main__':
    main()
