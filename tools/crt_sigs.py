"""Signatures of the statically linked VC6 CRT functions the game code calls
most often.  Ghidra has no symbols for them (no FID match), so the auto-port
transformer would refuse every caller.  Each entry was identified from the
disassembly (tools/disasm.py); the comment says how.

addr -> (return type, calling convention keyword, [parameter types], name)
"""
CRT_SIGS = {
    # game function, not CRT: a message dispatcher (switch on the first stack argument, 29 cases) that reads
    # `this` from ECX only inside the cases, after the jump table; conventions.py's linear scan saw no ECX
    # use and typed it __stdcall, Ghidra's header agreed, so every caller was refused (45 ports blocked,
    # among them CUnit::vslot88 0x4fc4e0 that level 311's open culprit calls).  6 stack arguments, ret 0x18.
    0x004fc6e0: ('uint32_t', '__thiscall', ['void *', 'uint32_t', 'uint32_t', 'uint32_t', 'uint32_t', 'uint32_t', 'uint32_t'], 'FUN_004fc6e0'),
    # FILE on stack with _IOWRT|_IOSTRG (0x42) and count 0x7fffffff, then _output: sprintf
    0x0055de9b: ('int', '__cdecl', ['char *', 'const char *', '...'], 'sprintf'),
    # FILE on stack with count 0x7fffffff, then _output(f, [ebp+0xc] format, [ebp+0x10] arg pointer):
    # vsprintf(buf, fmt, va_list) - it was listed as _snprintf(buf, count, fmt, ...) until 2026-10-29 (two
    # hand-port helpers); the one live caller 0x4418a0 pushes the same three dwords either way
    0x0055e38c: ('int', '__cdecl', ['char *', 'const char *', 'void *'], 'vsprintf'),
    # locks stdout (index 1), _output, _flsbuf: printf
    0x0055e183: ('int', '__cdecl', ['const char *', '...'], 'printf'),
    # case-insensitive compare with the C-locale fast path at 0x9d0990: _stricmp
    0x00568390: ('int', '__cdecl', ['const char *', 'const char *'], '_stricmp'),
    # (ptr, size, count, dtor), callee-cleaned: no call site has `add esp, 16`
    # after it (it was listed as cdecl qsort until 2026-10-20: every port
    # calling it popped 16 bytes twice): `eh vector destructor iterator'
    0x0055db0a: ('void', '__stdcall', ['void *', 'unsigned int', 'unsigned int', 'void *'], 'eh_vector_destructor_iterator'),
    # _control87(0x173f -> RC_DOWN, 0xffff) then frndint: floor
    0x0055dfe7: ('float10', '__cdecl', ['double'], 'floor'),
    # wide-string helpers
    0x0055e607: ('int', '__cdecl', ['const short *'], 'wcslen'),
    0x0055e624: ('short *', '__cdecl', ['short *', 'const short *'], 'wcscat'),
    # _fsopen(name, mode, _SH_DENYNO): fopen; FILE flag 0x40 test: fclose
    0x0055e490: ('void *', '__cdecl', ['const char *', 'const char *'], 'fopen'),
    0x0055e4a3: ('int', '__cdecl', ['void *'], 'fclose'),
    # same C-locale fast path as _stricmp with a length: _strnicmp; wcscpy loop
    0x0056e170: ('int', '__cdecl', ['const char *', 'const char *', 'unsigned int'], '_strnicmp'),
    0x0055e64e: ('short *', '__cdecl', ['short *', 'const short *'], 'wcscpy'),
    # Ghidra already names this one `_rand` (FID); listed so callers get a signature
    0x0055dbfe: ('int', '__cdecl', [], 'rand'),
    # SEH frame, loop count [ebp+0x10] times: ecx = ptr, call [ebp+0x14], ptr += size;
    # the unwind funclet uses the 5th argument; ret 0x14: `eh vector constructor iterator`
    # (ptr, size, count, ctor, dtor), __stdcall
    0x0055dc20: ('void', '__stdcall', ['void *', 'unsigned int', 'int', 'void *', 'void *'], 'eh_vector_constructor_iterator'),
    # game code, not CRT: the fatal-error exit.  sprintf(buf, "Fatal error: %s %d",
    # [esp+4], [esp+8]), the CRT message box, then exit(1); plain ret (cdecl)
    0x0042cfa0: ('void', '__cdecl', ['const char *', 'int'], 'fatal_error'),
    # identified 2026-10-21 from the disassembly (NOTES A1-15); the port calls the original at the
    # address, so only the argument count, convention and result width must be right
    0x0055e2a6: ('int', '__cdecl', ['const char *'], 'atoi'),             # push [esp+4]; call atol; pop ecx; ret
    0x0055e21b: ('int', '__cdecl', ['const char *'], 'atol'),             # skips _isctype(c, _SPACE) then converts
    0x0055e14f: ('int', '__cdecl', ['const char *', 'const char *', '...'], 'sscanf'),   # _IOREAD|_IOSTRG (0x49) FILE, _input
    0x0055eb00: ('short *', '__cdecl', ['short *', 'const short *', 'unsigned int'], 'wcsncpy'),
    0x0055f16e: ('unsigned int', '__cdecl', ['void *', 'unsigned int', 'unsigned int', 'void *'], 'fwrite'),  # _lock(stream); _fwrite_lk; _unlock
    0x0055f4d7: ('unsigned int', '__cdecl', ['void *', 'unsigned int', 'unsigned int', 'void *'], 'fread'),   # same shape, result used by callers
    0x0055eb3d: ('float10', '__cdecl', ['double'], 'FUN_0055eb3d'),        # double->double with the 0x7ff0 exponent test (floor's sibling)
    0x005be628: ('const char *', '__stdcall', ['int'], 'DXGetErrorString8A'),  # 46 KB of HRESULT -> name, ret 4
    0x005159b0: ('void', '__cdecl', [], 'FUN_005159b0'),                   # `mov ecx, 0x855bb0; jmp FUN_00512fc0`: a method on a global
    # ---- identified 2026-10-28 from the disassembly (25 routines + 1 x87 intrinsic, see the end) ----
    # VC6 CRT
    # (base, num, width, cmp): median-of-3 + 8-element insertion-sort cutoff, cmp called cdecl (pop ecx x2),
    # plain ret, callers `add esp, 0x10` (0x4581cb, 0x4906e4): qsort
    0x0055e7ae: ('void', '__cdecl', ['void *', 'unsigned int', 'unsigned int', 'void *'], 'qsort'),
    # (key, base, num, width, cmp): halving loop, returns the element or 0; caller `add esp, 0x14` (0x4f5c18): bsearch
    0x0055f44b: ('void *', '__cdecl', ['const void *', 'const void *', 'unsigned int', 'unsigned int', 'void *'], 'bsearch'),
    # like sprintf (FILE with _IOWRT|_IOSTRG 0x42, count 0x7fffffff) but through the wide _woutput 0x565083 and
    # terminated with two zero bytes; format strings are wide; callers `add esp, 0x10` (0x4cf49a): swprintf
    0x0055e598: ('int', '__cdecl', ['short *', 'const short *', '...'], 'swprintf'),
    # overlap test (dst > src && dst < src+n -> backward copy), rep movsd + jump tables, returns [ebp+8] (dst):
    # memmove (VC6 memcpy is the same body; the caller-visible ABI is identical)
    0x0055ed50: ('void *', '__cdecl', ['void *', 'const void *', 'unsigned int'], 'memmove'),
    # CreateDirectoryA(path, NULL); on failure GetLastError -> _dosmaperr, return -1, else 0: _mkdir
    0x0055f347: ('int', '__cdecl', ['const char *'], '_mkdir'),
    # 16-bit compare loop, returns -1/0/1: wcscmp; callers `add esp, 8` (0x4b7adb)
    0x0055f2e8: ('int', '__cdecl', ['const short *', 'const short *'], 'wcscmp'),
    # 16-bit substring search, returns the match pointer or 0: wcsstr; caller `add esp, 8` (0x4b7b08)
    0x0055f2a7: ('short *', '__cdecl', ['const short *', 'const short *'], 'wcsstr'),
    # FindFirstFileA, maps ERROR_FILE_NOT_FOUND/PATH_NOT_FOUND/NO_MORE_FILES/NOT_ENOUGH_MEMORY to errno, fills
    # attrib/time_create/time_access/time_write/size/name (strcpy 0x567de0), returns the handle or -1: _findfirst
    0x0055f5ee: ('int', '__cdecl', ['const char *', 'void *'], '_findfirst'),
    # skips _isctype(c, _SPACE), strlen, _fltin -> fld qword [eax+0x10]; callers `fstp` the result (0x42a9db): atof
    0x0055e1c4: ('float10', '__cdecl', ['const char *'], 'atof'),
    # _lock_file, _stbuf, _output(stream, fmt, &args), _ftbuf, _unlock_file; called right after fopen: fprintf
    0x0055e520: ('int', '__cdecl', ['void *', 'const char *', '...'], 'fprintf'),
    # small-block-heap / region lookups under lock 9, else HeapFree(_crtheap, 0, p); __fclose_lk calls it on
    # the stream buffer (0x55e50d): free
    0x0055f085: ('void', '__cdecl', ['void *'], 'free'),
    # strncpy (0x55e980) when no MBCS code page, else the lead-byte-aware byte-count copy with zero padding
    # under lock 0x19 (_MB_CP_LOCK), returns dst: _mbsnbcpy; caller `add esp, 0xc` (0x52859b)
    0x0055f807: ('char *', '__cdecl', ['char *', 'const char *', 'unsigned int'], '_mbsnbcpy'),
    # (buf, n, FILE*): _lock_file, reads bytes (_filbuf on empty) up to n-1 or '\n', NUL-terminates, returns
    # buf or 0 on immediate EOF: fgets; caller `add esp, 0xc` (0x528772)
    0x0055fc5d: ('char *', '__cdecl', ['char *', 'int', 'void *'], 'fgets'),
    # `_onexit(fn) ? 0 : -1` (neg/sbb/neg/dec); callers pass a code address and `add esp, 4`: atexit
    0x0055dfa6: ('int', '__cdecl', ['void *'], 'atexit'),
    # towlower (0x5d0a2a) compare loop under lock 0x13, ASCII 'A'..'Z' fast path when the locale is C: _wcsicmp
    0x005d04ec: ('int', '__cdecl', ['const short *', 'const short *'], '_wcsicmp'),

    # statically linked D3DX9 (all __stdcall, results are HRESULTs or the output pointer)
    # 7 args, ret 0x1c, D3DXERR_INVALIDDATA 0x88760b59; callers pass shader text ("; Snow shader" at
    # 0x5e5148), strlen, 0, 0, 0, &shader, &errors and test the HRESULT: D3DXAssembleShader
    0x00579a9a: ('int', '__stdcall', ['const char *', 'unsigned int', 'void *', 'void *', 'unsigned int', 'void *', 'void *'], 'D3DXAssembleShader'),
    # wrapper adds the surface to an inner (eax-passed) routine, ret 0x14; screenshot code passes a sprintf'd
    # name, format 4 (DDS) / 0 (BMP), the back buffer from IDirect3DDevice9::GetBackBuffer (vtbl+0x48),
    # palette 0, rect or 0: D3DXSaveSurfaceToFileA(file, format, surface, palette, rect)
    0x00574645: ('int', '__stdcall', ['const char *', 'int', 'void *', 'void *', 'void *'], 'D3DXSaveSurfaceToFileA'),
    # 15 args, ret 0x3c, forwards to the shared loader with Depth=1 and type 3 (D3DRTYPE_TEXTURE) inserted;
    # game call (0x5578d3): device, data, size, w, h, mips, 0, fmt, pool, filter 2, mipfilter -1, 0, 0, 0, &tex;
    # 0x575923 (ret 0x38) wraps it after loading a file: D3DXCreateTextureFromFileInMemoryEx
    0x005758e6: ('int', '__stdcall', ['void *', 'const void *', 'unsigned int', 'unsigned int', 'unsigned int', 'unsigned int', 'unsigned int', 'int', 'int', 'unsigned int', 'unsigned int', 'unsigned int', 'void *', 'void *', 'void *'], 'D3DXCreateTextureFromFileInMemoryEx'),
    # CPU-dispatch stubs: `push 1; call 0x58926b (D3DX table init); jmp [slot]` (callers go through the
    # `jmp` thunks 0x57600b / 0x576e0a / 0x576297, which autoport folds onto these names).  The slot's default
    # (table 0x657050) gives the semantics and the `ret N`:
    # slot 1 -> 0x576011: out.xyzw = v.x*m0 + v.y*m1 + v.z*m2 + m3 (4 outputs), ret 0xc: D3DXVec3Transform
    0x00575ffe: ('void *', '__stdcall', ['void *', 'const void *', 'const void *'], 'D3DXVec3Transform'),
    # slot 18 -> 0x576e10: 4x4 cofactor inverse, optional det out ([ebp+0xc] tested), ret 0xc; callers pass
    # (out, 0, m): D3DXMatrixInverse
    0x00576dfd: ('void *', '__stdcall', ['void *', 'float *', 'const void *'], 'D3DXMatrixInverse'),
    # slot 14 -> 0x578a20: multiplies the 3 optional matrices (world, view, proj), TransformCoord, then
    # X + (1+x)*W/2, Y + (1-y)*H/2, MinZ + z*(MaxZ-MinZ) from a DWORD viewport, ret 0x18: D3DXVec3Project
    # (out, v, viewport, proj, view, world)
    0x00576286: ('void *', '__stdcall', ['void *', 'const void *', 'const void *', 'const void *', 'const void *', 'const void *'], 'D3DXVec3Project'),

    # not CRT: game / library code above 0x55a420
    # `mov al, [esp+4]; mov [0x9d0c40], al; ret` - a byte setter (siblings 0x56eb60/70/80 set other globals;
    # callers push 4 of them then `add esp, 0x10`)
    0x0056eb50: ('void', '__cdecl', ['char'], 'FUN_0056eb50'),
    # game method on the global 0x9cc148: this = ecx (mov ebx, ecx), no stack arguments (all [esp+N] above the
    # frame are pushed-argument offsets), plain ret, callers ignore eax
    0x0055a420: ('void', '__thiscall', ['void *'], 'FUN_0055a420'),
    # game method on 0x9cc148: this = ecx, one stack argument (object, reads its +0x30 short), ret 4
    0x0055ae40: ('void', '__thiscall', ['void *', 'void *'], 'FUN_0055ae40'),
    # constructor (vtable 0x5e5a70, object size 0x3abc from the allocator at 0x449b5e), this = ecx,
    # returns this, plain ret
    0x0055b0e0: ('void *', '__thiscall', ['void *'], 'FUN_0055b0e0'),

    # NOT a CRT_SIGS entry: 0x55fa40 is the x87 intrinsic _CIpow (`sub esp,0x10; fxch; fstp qword [esp];
    # fst qword [esp+8]; call 0x55fa62` -> fyl2x core).  Callers do `fld base; fld exponent; call` and use ST0
    # (0x528630, 0x57bd9e).  Ghidra decompiles it as `FUN_0055fa40()` with no operands, so a CRT_SIGS line
    # cannot help; it belongs in tools/x87_intrinsics.csv (same operand layout as _CIfmod) followed by the
    # SetX87Intrinsics.java Ghidra re-run:
    #   0055fa40,_CIpow,2
    # 2026-10-29: the 16 callees Ghidra left without a convention (scratchpad sigs16.md)
    # FindNextFileA(handle, &WIN32_FIND_DATA on the stack); on failure GetLastError -> errno (ENOENT/ENOMEM/EINVAL)
    # and -1; on success attrib (0x80 -> 0), 3x __timet_from_ft (0x55f7a3), size, strcpy name into [arg2+0x14];
    # returns 0, plain ret, callers `push &finddata; push handle; call; add esp, 8`: _findnext
    0x0055f6bb: ('int', '__cdecl', ['int', 'void *'], '_findnext'),
    # __ismbcodepage == 0 -> _stricmp (0x568390); else _lock(_MB_CP_LOCK 0x19), _mbctype lead-byte test (0x9d34c1 & 4),
    # __crtLCMapStringA(..., LCMAP_UPPERCASE 0x200, ...) per character; _MBCS_ERR 0x7fffffff; plain ret: _mbsicmp
    0x0055f8a1: ('int', '__cdecl', ['const unsigned char *', 'const unsigned char *'], '_mbsicmp'),
    # `mov eax, [esp+4]; mov [0x656e5c], eax; ret` - NvTriStrip SetCacheSize: callers do SetCacheSize(0x18),
    # SetStitchStrips(1) 0x56eb70, SetMinStripSize(0) 0x56eb80, SetListsOnly(0) 0x56eb50, then
    # GenerateStrips(indices, n, &groups, &numGroups) 0x56eb90 and one `add esp, 0x20` for all eight pushes
    0x0056eb60: ('void', '__cdecl', ['unsigned int'], 'SetCacheSize'),
    # slot 37 -> 0x576b4d: out[i][j] = m[j][i] (diagonal copied only when out != m), returns out in eax, ret 8:
    # D3DXMatrixTranspose (callers go through the `jmp [0x656fc4]` thunk 0x576b47)
    0x00576b3a: ('void *', '__stdcall', ['void *', 'const void *'], 'D3DXMatrixTranspose'),
    # slot 3 -> 0x576904: 4x4 product of [ebp+0xc] and [ebp+0x10] into a temporary when out aliases either input,
    # returns out, ret 0xc: D3DXMatrixMultiply (callers go through the thunk 0x5768fe)
    0x005768f1: ('void *', '__stdcall', ['void *', 'const void *', 'const void *'], 'D3DXMatrixMultiply'),
    # slot 2 -> 0x5766ab: out.xyzw = v.x*m0j + v.y*m1j + v.z*m2j + v.w*m3j (4-float v), copied out with movsd,
    # returns out, ret 0xc: D3DXVec4Transform (callers go through the thunk 0x5766a5)
    0x00576698: ('void *', '__stdcall', ['void *', 'const void *', 'const void *'], 'D3DXVec4Transform'),
    # file-mapping helper (ctor 0x58864a, open(name, 0 = ANSI, not the UTF-8 0xfde9 path) 0x58865c, dtor 0x588896)
    # around the in-memory loader 0x574ae5(arg1..3, data, size, arg5..8); ret 0x20; the screenshot code passes
    # (surface, 0, 0, name, 0, D3DX_DEFAULT -1, 0, 0): D3DXLoadSurfaceFromFileA(dst, pal, dstRect, file, srcRect,
    # filter, colorkey, info)
    0x0057511b: ('int', '__stdcall', ['void *', 'void *', 'const void *', 'const char *', 'const void *', 'unsigned int', 'unsigned int', 'void *'], 'D3DXLoadSurfaceFromFileA'),
    # game method: this = ecx (`mov ebp, ecx` at entry), sub esp 0x4f4 + 4 pushes, reads [esp+0x508/0x50c/0x510]
    # = 3 stack args: a mode switched on 0/1/3, an optional object whose +8 vector is aimed at (fpatan),
    # an optional thing whose +0x1c position is subtracted; ret 0xc at 0x4daa00 (past Ghidra's 1779-byte
    # extent, which is why the convention was left unknown); callers ignore eax
    0x004d9f30: ('void', '__thiscall', ['void *', 'unsigned int', 'void *', 'void *'], 'FUN_004d9f30'),
    # game debug code, NO RETURN: stores [esp+4] in 0x83d454, then loops forever over the level list at
    # 0x632b04 ("**** STRESS TEST ****\n** Iteration %d", "Before level %d", "After level %d"); the body has
    # no ret at all, hence Ghidra's unknown convention; the caller 0x4f0330 does `push eax; call; add esp, 4`
    0x004f0200: ('void', '__cdecl', ['int'], 'FUN_004f0200'),
    # game method (HUD/overlay draw): this = ecx (`mov ebp, ecx`, reads [ebp+0x50]), sub esp 0x1e8 + 4 pushes,
    # no [esp+0x1fc..] argument reads, single plain ret at 0x483504; caller 0x487b72 `mov ecx, esi; call`
    # and ignores eax
    0x00482590: ('void', '__thiscall', ['void *'], 'FUN_00482590'),
    # game terrain height sample, a true __fastcall: ecx = this (table at +0x1028), EDX = x and [esp+4] = y
    # (16.8-ish fixed point: >>11 cell, >>8 &7 sub-cell, &0xff fraction), bilinear blend of 4 shorts,
    # ret 4; the caller (0x490c47) sets edx from [esp+0x1c], pushes y, mov ecx, ebx and reads `movsx ecx, ax`
    0x0047eb00: ('short', '__fastcall', ['void *', 'int', 'int'], 'FUN_0047eb00'),
    # game routine (blocking loop on the 0x88a0a8 timer/screen object until done); ECX is written
    # (`mov ecx, 0x88a0a8`) before any read, no stack arguments (frame SEH 0xc + 0x14 + 3 pushes, no
    # [esp+0x30..] reads), plain ret at 0x47288f; conventions.csv's argc 150 scanned past the ret.  The one
    # caller does `mov ecx, edi; call` (a member call whose this is unused) and Ghidra writes FUN_004726b0()
    0x004726b0: ('void', '__cdecl', [], 'FUN_004726b0'),
    # game method on the global 0x8a9a98: this = ecx (`mov edi, ecx`, reads [edi+0xf4]), ebp frame with
    # `and esp, -8` + _chkstk 0x24a0 (conventions.csv's argc 218 is that frame), no [ebp+8..] reads,
    # plain ret at 0x472220; caller 0x53ef9b `mov ecx, 0x8a9a98; call` ignores eax
    0x004714c0: ('void', '__thiscall', ['void *'], 'FUN_004714c0'),
    # game routine building the key/char tables 0x6799d4/0x6799f4 from 0x5db5fc/0x5db738: the entry
    # `push ecx` is VC6's 4-byte local reservation (the [esp+0xc] slot), not a use of ECX - cl is
    # zeroed (`xor cl, cl`) before any read; no stack args, plain ret.  Its caller, the ctor 0x53f730,
    # still holds this in ecx and Ghidra writes FUN_00465c10(this), so type it thiscall
    0x00465c10: ('void', '__thiscall', ['void *'], 'FUN_00465c10'),
    # game method (Cutscene.cpp: "LOADING cutscene !!!", sprintf "data\\cutscenes\\%s.cut" of this+0x5a8):
    # this = ecx (`mov ebx, ecx`), SEH + _chkstk 0x1114 frame (conventions.csv's argc 1088), no argument reads
    # ([esp+0x1128/0x112c] are the SEH state slot), `mov eax, 1` then plain ret at 0x43f20b
    0x0043ed80: ('int', '__thiscall', ['void *'], 'FUN_0043ed80'),
    # push [esp+4]; call [FindClose]; failure -> errno EINVAL (0x16) and -1, else 0; plain ret: _findclose
    0x0055f783: ('int', '__cdecl', ['int'], '_findclose'),
    # mov al, [esp+4]; mov [0x656e60], al; ret - the NvTriStrip option after SetCacheSize: SetStitchStrips
    0x0056eb70: ('void', '__cdecl', ['unsigned char'], 'SetStitchStrips'),
    # mov eax, [esp+4]; mov [0x9d0c3c], eax; ret - NvTriStrip SetMinStripSize
    0x0056eb80: ('void', '__cdecl', ['unsigned int'], 'SetMinStripSize'),
}

# Functions Ghidra already named (FID), keyed by that name: the C library ABI.
# x87-operand intrinsics (tools/x87_intrinsics.csv, SetX87Intrinsics.java): name -> (address, operand count).
# Their operands travel on the FPU stack, so a caller's port goes through bea_x87callN (ghidra_compat.h)
import csv as _csv, os as _os
X87_SIGS = {}
for _r in _csv.reader(open(_os.path.join(_os.path.dirname(_os.path.abspath(__file__)), 'x87_intrinsics.csv'), newline='')):
    if _r and not _r[0].startswith(('#', 'address')):
        X87_SIGS[_r[1].strip()] = (int(_r[0], 16), int(_r[2]))
NAME_SIGS = {
    # CRT helpers Ghidra names by FID (2026-10-21): the runtime's abort with an error number, and
    # the array constructor iterator `vector_constructor_iterator'(ptr, size, count, ctor) at 0x574a99
    '__amsg_exit': ('void', '__cdecl', ['int']),
    '_vector_constructor_iterator_': ('void', '__stdcall', ['void *', 'unsigned int', 'int', 'void *']),
    '_rand': ('int', '__cdecl', []),
    '_strlen': ('unsigned int', '__cdecl', ['const char *']),
    '_strcmp': ('int', '__cdecl', ['const char *', 'const char *']),
    '_strncmp': ('int', '__cdecl', ['const char *', 'const char *', 'unsigned int']),
    '_stricmp': ('int', '__cdecl', ['const char *', 'const char *']),
    '_strnicmp': ('int', '__cdecl', ['const char *', 'const char *', 'unsigned int']),
    '_strcpy': ('char *', '__cdecl', ['char *', 'const char *']),
    '_strncpy': ('char *', '__cdecl', ['char *', 'const char *', 'unsigned int']),
    '_strcat': ('char *', '__cdecl', ['char *', 'const char *']),
    '_strstr': ('char *', '__cdecl', ['const char *', 'const char *']),
    '_strchr': ('char *', '__cdecl', ['const char *', 'int']),
    '_strrchr': ('char *', '__cdecl', ['const char *', 'int']),
    '_memcpy': ('void *', '__cdecl', ['void *', 'const void *', 'unsigned int']),
    '_memset': ('void *', '__cdecl', ['void *', 'int', 'unsigned int']),
    '_memcmp': ('int', '__cdecl', ['const void *', 'const void *', 'unsigned int']),
    '_atoi': ('int', '__cdecl', ['const char *']),
    '_atol': ('int', '__cdecl', ['const char *']),
    '_atof': ('float10', '__cdecl', ['const char *']),
    '_toupper': ('int', '__cdecl', ['int']),
    '_tolower': ('int', '__cdecl', ['int']),
    '_sprintf': ('int', '__cdecl', ['char *', 'const char *', '...']),
    '_sscanf': ('int', '__cdecl', ['const char *', 'const char *', '...']),
    '_strtok': ('char *', '__cdecl', ['char *', 'const char *']),
    '_free': ('void', '__cdecl', ['void *']),
    '_malloc': ('void *', '__cdecl', ['unsigned int']),
}
for _n, (_a, _k) in X87_SIGS.items():
    NAME_SIGS[_n] = ('float10', '__cdecl', ['float10'] * _k)
