// auto-ported from 00548820_FUN_00548820.c (FUN_00548820, 580 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char IAT;
#define DAT_00650f6c GLOBAL_AT(int, 0x00650f6c)
#define DAT_006318a0 GLOBAL_AT(int, 0x006318a0)
#define DAT_008c029c GLOBAL_AT(int, 0x008c029c)
typedef uint32_t (BEA_STDCALL* FUN_0042c750_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042c750_t> FUN_0042c750 = {(FUN_0042c750_t)0x0042c750};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef uint32_t (BEA_CDECL* uncompress_t)(...);
#define uncompress (*(uncompress_t*)0x005d83b8)   /* ZLIB.DLL import, via the IAT */

static uint BEA_THISCALL ap_00548820(void * this_, int param_1, DWORD param_2)
{
  HANDLE hFile;
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  DWORD DVar6;
  char *pcVar7;
  LPVOID lpBuffer;
  char *pcVar8;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  DWORD &local_18 = *reinterpret_cast<DWORD *>(bea_frame_ + 0x20 - 0x18);
  int &local_14 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x14);
  uint &local_10 = *reinterpret_cast<uint *>(bea_frame_ + 0x20 - 0x10);
  int &local_c = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0xc);
  uint &local_8 = *reinterpret_cast<uint *>(bea_frame_ + 0x20 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x4);
  uVar2 = 0;
  iVar3 = param_2 - 1;
  local_10 = 0;
  local_c = 0;
  local_4 = iVar3;
  if (iVar3 < 1) {
LAB_00548a49:
    *(undefined1 *)(uVar2 + param_1) = 0;
    *(uint *)((int)this_ + 300) = *(int *)((int)this_ + 300) + uVar2;
    return uVar2;
  }
LAB_00548846:
  lpBuffer = *(LPVOID *)((int)this_ + 4);
  if ((uint)(*(int *)((int)this_ + 0x1c) + (int)lpBuffer) <= *(uint *)((int)this_ + 8)) {
    if (*(int *)((int)this_ + 0x28) != 0) {
      *(undefined4 *)((int)this_ + 0x24) = 1;
      uVar2 = local_10;
LAB_00548a2c:
      if ((1 < uVar2) && (*(char *)((uVar2 - 2) + param_1) == '\r')) {
        *(undefined1 *)((uVar2 - 2) + param_1) = 10;
        *(undefined1 *)((uVar2 - 1) + param_1) = 0;
      }
      goto LAB_00548a49;
    }
    pcVar7 = (char *)((int)this_ + 0x2c);
    local_8 = DAT_00650f6c;
    uVar2 = 0xffffffff;
    pcVar8 = pcVar7;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    hFile = *(HANDLE *)this_;
    if (~uVar2 - 1 < 4) {
LAB_00548963:
      iVar3 = ReadFile(hFile,lpBuffer,local_8,(LPDWORD)((int)this_ + 0x1c),(LPOVERLAPPED)0x0);
    }
    else {
      uVar2 = 0xffffffff;
      pcVar8 = pcVar7;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      iVar3 = FUN_00568390(bea_arg(pcVar7 + (~uVar2 - 5)), bea_arg(&DAT_006318a0));
      if (iVar3 != 0) goto LAB_00548963;
      iVar3 = 0;
      *(undefined4 *)((int)this_ + 0x1c) = 0;
      iVar4 = ReadFile(hFile,&local_18,4,&param_2,(LPOVERLAPPED)0x0);
      while (BEA_LOOP_GUARD(((((iVar4 != 0 && (param_2 == 4)) &&
              (BVar5 = ReadFile(hFile,&DAT_008c029c,local_18,&param_2,(LPOVERLAPPED)0x0), BVar5 != 0
              )) && (param_2 == local_18))))) {
        local_14 = 0x102927;
        iVar3 = uncompress(lpBuffer,&local_14,&DAT_008c029c,local_18);
        if (iVar3 != 0) goto LAB_0054897a;
        uVar2 = *(int *)((int)this_ + 0x1c) + local_14;
        lpBuffer = (LPVOID)((int)lpBuffer + local_14);
        *(uint *)((int)this_ + 0x1c) = uVar2;
        iVar3 = 1;
        if (DAT_00650f6c <= uVar2) goto LAB_0054899c;
        iVar4 = ReadFile(hFile,&local_18,4,&param_2,(LPOVERLAPPED)0x0);
      }
    }
    if (iVar3 == 0) {
LAB_0054897a:
      DVar6 = GetLastError();
      if (DVar6 != 0x26) {
        FUN_0042c750(bea_arg((int)this_ + 0x2c), bea_arg(0xffffffff));
      }
      *(undefined4 *)((int)this_ + 0x1c) = 0;
    }
LAB_0054899c:
    iVar3 = *(int *)((int)this_ + 0x1c);
    if (iVar3 != *(int *)((int)this_ + 0x18)) {
      *(undefined4 *)((int)this_ + 0x28) = 1;
    }
    pcVar7 = *(char **)((int)this_ + 4);
    *(char **)((int)this_ + 8) = pcVar7;
    if (*(int *)((int)this_ + 0xc) != 0) {
      cVar1 = '\0';
      for (; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
        cVar1 = cVar1 + *pcVar7;
        pcVar7 = pcVar7 + 1;
      }
      if (cVar1 != **(char **)((int)this_ + 0x10)) {
        FUN_0042c750(bea_arg((int)this_ + 0x2c), bea_arg(0xffffffff));
      }
    }
    *(int *)((int)this_ + 0x10) = *(int *)((int)this_ + 0x10) + 1;
    iVar3 = local_4;
  }
  uVar2 = local_10 + 1;
  *(undefined1 *)(local_10 + param_1) = **(undefined1 **)((int)this_ + 8);
  *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + 1;
  if ((*(char *)(local_10 + param_1) == '\n') ||
     (local_c = local_c + 1, local_10 = uVar2, iVar3 <= local_c)) goto LAB_00548a2c;
  goto LAB_00548846;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00548820, ap_00548820));
