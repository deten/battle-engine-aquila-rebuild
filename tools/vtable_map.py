"""Combine rtti_classes.csv (from rtti_dump.py) with Ghidra's functions.csv to
produce vtables.txt: every class vtable with its slots resolved to Ghidra
function names, plus a reverse map function -> (class, slot).

Usage: python -I vtable_map.py BEA.exe ghidra_out
"""
import sys, os, csv, struct, collections
import pefile

exe, out = sys.argv[1], sys.argv[2]
pe = pefile.PE(exe)
base = pe.OPTIONAL_HEADER.ImageBase
img = pe.get_memory_mapped_image()
text = [s for s in pe.sections if s.Name.startswith(b'.text')][0]
text_lo = base + text.VirtualAddress
text_hi = text_lo + text.Misc_VirtualSize

funcs = {}
for r in csv.DictReader(open(os.path.join(out, 'functions.csv'), encoding='utf-8', errors='replace')):
    if r['namespace'] and r['namespace'] != 'Global':
        r['name'] = r['namespace'] + '::' + r['name']
    funcs[int(r['address'], 16)] = r

classes = list(csv.DictReader(open(os.path.join(out, 'rtti_classes.csv'))))
# the set of every vtable start, so we know where one table ends
vt_starts = set(int(c['vtable_va'], 16) for c in classes)
# also any address that is referenced as a COL pointer (vtable-4)
col_ptrs = set(v - 4 for v in vt_starts)


def u32(va):
    return struct.unpack_from('<I', img, va - base)[0]


rev = collections.defaultdict(list)
lines = []
total_slots = 0
for c in sorted(classes, key=lambda c: (c['class'].lower(), int(c['this_offset']))):
    vt = int(c['vtable_va'], 16)
    off = int(c['this_offset'])
    bases = c['direct_bases'].replace(';', ', ')
    lines.append("== %s @0x%08x this+%d  bases: %s" % (c['class'], vt, off, bases))
    cur = vt
    slot = 0
    while True:
        if cur != vt and (cur in col_ptrs or cur in vt_starts):
            break
        try:
            v = u32(cur)
        except Exception:
            break
        if not (text_lo <= v < text_hi):
            break
        f = funcs.get(v)
        name = f['name'] if f else '<no function>'
        lines.append("  [%3d] 0x%08x %s" % (slot, v, name))
        rev[v].append((c['class'], off, slot))
        slot += 1
        total_slots += 1
        cur += 4
        if slot > 400:
            break

with open(os.path.join(out, 'vtables.txt'), 'w') as w:
    w.write("# %d vtables, %d slots\n" % (len(classes), total_slots))
    w.write("\n".join(lines) + "\n")

with open(os.path.join(out, 'vtable_slots_by_function.csv'), 'w') as w:
    w.write("function_va,function_name,class,this_offset,slot\n")
    for va in sorted(rev):
        f = funcs.get(va)
        for cls, off, slot in rev[va]:
            w.write("0x%08x,%s,%s,%d,%d\n" % (va, f['name'] if f else '', cls, off, slot))

print("vtables:", len(classes), "slots:", total_slots, "distinct virtual functions:", len(rev))
