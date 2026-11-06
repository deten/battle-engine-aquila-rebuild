"""Disassemble a range of BEA.exe with capstone.

Usage: python -I tools/disasm.py <exe> <va_hex> [length|end_hex]
       python -I tools/disasm.py <exe> <va_hex> --func   (stop after the first 'ret')
"""
import sys, pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

exe = sys.argv[1]
va = int(sys.argv[2], 16)
pe = pefile.PE(exe)
base = pe.OPTIONAL_HEADER.ImageBase
img = pe.get_memory_mapped_image()
mode_func = len(sys.argv) > 3 and sys.argv[3] == '--func'
if mode_func:
    length = 4096
else:
    arg = sys.argv[3] if len(sys.argv) > 3 else '64'
    v = int(arg, 16) if arg.startswith('0x') else int(arg)
    length = v - va if v > va else v
md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = False
for i in md.disasm(bytes(img[va - base: va - base + length]), va):
    print("%08x  %-20s %s %s" % (i.address, i.bytes.hex(), i.mnemonic, i.op_str))
    if mode_func and i.mnemonic.startswith('ret'):
        break
