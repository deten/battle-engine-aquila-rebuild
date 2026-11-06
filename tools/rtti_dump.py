"""Parse MSVC RTTI from a 32-bit PE and emit the class hierarchy and vtable map.

Usage: python -I rtti_dump.py BEA.exe out_dir

Writes:
  out_dir/rtti_classes.csv   class, vtable_va, col_va, type_descriptor_va, bases (ordered, MI aware)
  out_dir/rtti_hierarchy.txt indented tree (single-inheritance view) with multiple-inheritance notes
"""
import sys, struct, re, collections, os
import pefile

exe = sys.argv[1]
out = sys.argv[2]
os.makedirs(out, exist_ok=True)
pe = pefile.PE(exe)
base = pe.OPTIONAL_HEADER.ImageBase
img = pe.get_memory_mapped_image()
lo = base
hi = base + len(img)


def u32(va):
    off = va - base
    if off < 0 or off + 4 > len(img):
        return None
    return struct.unpack_from('<I', img, off)[0]


def cstr(va):
    off = va - base
    end = img.find(b'\0', off)
    return img[off:end].decode('latin1')


def in_img(va):
    return va is not None and lo <= va < hi


def undecorate(name):
    # ".?AVCFoo@@" -> "CFoo", ".?AUBar@@" -> "Bar" ; handles nested "A@B@@" -> "B::A"
    m = re.match(r'^\.\?A[VU](.*)@@$', name)
    if not m:
        return name
    parts = m.group(1).split('@')
    return '::'.join(reversed([p for p in parts if p]))


# 1. find all TypeDescriptors: {vtable_ptr(type_info), spare, name".?A..."}
tds = {}
for m in re.finditer(rb'\.\?A[VU][A-Za-z0-9_@?$]+@@', img):
    name_off = m.start()
    td_va = base + name_off - 8
    tds[td_va] = undecorate(m.group().decode())

# 2. find all COLs (RTTICompleteObjectLocator): {sig=0, offset, cdOffset, pTD, pCHD}
cols = {}
for off in range(0, len(img) - 20, 4):
    if struct.unpack_from('<I', img, off)[0] != 0:
        continue
    sig, offset, cd, ptd, pchd = struct.unpack_from('<5I', img, off)
    if ptd in tds and in_img(pchd) and offset < 0x10000:
        chd_sig = u32(pchd)
        if chd_sig == 0:
            cols[base + off] = (offset, ptd, pchd)

# 3. CHD -> BCA -> BCD[]
def bases_of(pchd):
    sig, attrs, nbases, pbca = struct.unpack_from('<4I', img, pchd - base)
    res = []
    for i in range(nbases):
        pbcd = u32(pbca + 4 * i)
        if not in_img(pbcd):
            break
        ptd, ncontained, mdisp, pdisp, vdisp, attr = struct.unpack_from('<6I', img, pbcd - base)
        res.append((tds.get(ptd, '?%x' % ptd), ncontained, mdisp, attrs))
    return attrs, res


# 4. vtables: a pointer to a COL immediately precedes the vtable
vt_by_col = collections.defaultdict(list)
for off in range(0, len(img) - 4, 4):
    v = struct.unpack_from('<I', img, off)[0]
    if v in cols:
        vt_by_col[v].append(base + off + 4)

rows = []
tree = collections.defaultdict(list)
all_classes = set()
mi_notes = []
for col_va, (offset, ptd, pchd) in sorted(cols.items()):
    cls = tds[ptd]
    attrs, bl = bases_of(pchd)
    all_classes.add(cls)
    names = [b[0] for b in bl]
    # bl[0] is the class itself; direct bases are those with contained-count forming the top-level
    direct = []
    i = 1
    while i < len(bl):
        direct.append(bl[i][0])
        i += 1 + bl[i][1]
    for vt in vt_by_col.get(col_va, []):
        rows.append((cls, vt, col_va, ptd, offset, attrs, direct, names[1:]))
    if offset == 0:
        if len(direct) > 1:
            mi_notes.append("%s : %s" % (cls, ", ".join(direct)))
        parent = direct[0] if direct else None
        tree[parent].append(cls)

with open(os.path.join(out, 'rtti_classes.csv'), 'w') as w:
    w.write("class,vtable_va,col_va,td_va,this_offset,chd_attrs,direct_bases,all_bases\n")
    for cls, vt, col, td, off, attrs, direct, allb in rows:
        w.write('%s,0x%08x,0x%08x,0x%08x,%d,%d,"%s","%s"\n' % (cls, vt, col, td, off, attrs, ';'.join(direct), ';'.join(allb)))

seen = set()


def emit(w, cls, depth):
    if cls in seen:
        w.write("  " * depth + cls + "  (dup)\n")
        return
    seen.add(cls)
    w.write("  " * depth + cls + "\n")
    for c in sorted(tree.get(cls, []), key=str.lower):
        emit(w, c, depth + 1)


with open(os.path.join(out, 'rtti_hierarchy.txt'), 'w') as w:
    w.write("# %d classes with COLs, %d vtables, %d type descriptors\n" % (len(all_classes), len(rows), len(tds)))
    w.write("# Multiple-inheritance classes (class : bases):\n")
    for n in mi_notes:
        w.write("#   " + n + "\n")
    w.write("\n")
    roots = sorted(tree.get(None, []), key=str.lower)
    for r in roots:
        emit(w, r, 0)
    # classes whose parent exists in TDs but has no COL (abstract/foreign)
    for parent in sorted([k for k in tree if k is not None and k not in seen], key=str.lower):
        w.write("\n[base without own vtable: %s]\n" % parent)
        emit(w, parent, 0)

print("type descriptors:", len(tds))
print("complete object locators:", len(cols))
print("vtables:", len(rows))
print("classes:", len(all_classes))
print("MI classes:", len(mi_notes))
