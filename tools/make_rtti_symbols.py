"""Produce ghidra_out/rtti_symbols.csv for ApplyRtti.java from rtti_classes.csv + vtable_slots_by_function.csv.
Each virtual function is named after the shallowest class (fewest bases) whose vtable holds it: Class::vslotN.
Usage: python -I make_rtti_symbols.py ghidra_out
"""
import csv, sys, os, collections
out = sys.argv[1]
classes = list(csv.DictReader(open(os.path.join(out, 'rtti_classes.csv'))))
depth = {}
for c in classes:
    nb = len([b for b in c['all_bases'].split(';') if b])
    depth[c['class']] = min(depth.get(c['class'], 99), nb)
slots = list(csv.DictReader(open(os.path.join(out, 'vtable_slots_by_function.csv'))))
byfn = collections.defaultdict(list)
for s in slots:
    byfn[int(s['function_va'], 16)].append((depth.get(s['class'], 99), s['class'], int(s['this_offset']), int(s['slot'])))
rows = []
for c in classes:
    off = int(c['this_offset'])
    name = 'vftable' if off == 0 else 'vftable_this%d' % off
    rows.append(('vtable', int(c['vtable_va'], 16), '%s::%s' % (c['class'], name)))
for va, lst in byfn.items():
    lst.sort()
    d, cls, off, slot = lst[0]
    suffix = '' if off == 0 else '_t%d' % off
    rows.append(('func', va, '%s::vslot%d%s' % (cls, slot, suffix)))
with open(os.path.join(out, 'rtti_symbols.csv'), 'w') as w:
    w.write('kind,va,name\n')
    for k, va, n in rows:
        w.write('%s,0x%08x,%s\n' % (k, va, n))
print('vtables', sum(1 for r in rows if r[0] == 'vtable'), 'funcs', sum(1 for r in rows if r[0] == 'func'))
