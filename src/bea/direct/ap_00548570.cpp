// auto-ported from 00548570_FUN_00548570.c (FUN_00548570, 686 bytes) by tools/autoport.py
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

static int BEA_THISCALL ap_00548570(void * this_, undefined4 *param_1, uint param_2)
{
  HANDLE hFile;
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  DWORD DVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  LPVOID lpBuffer;
  undefined4 *puVar10;
  char *pcVar11;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int &local_14 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x14);
  undefined4 * &local_10 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x20 - 0x10);
  int &local_c = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0xc);
  undefined4 * &local_8 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x20 - 0x8);
  uint &local_4 = *reinterpret_cast<uint *>(bea_frame_ + 0x20 - 0x4);
  local_14 = 0;
  if (*(int *)((int)this_ + 0x28) != 0) {
    if ((uint)(*(int *)((int)this_ + 4) + *(int *)((int)this_ + 0x1c)) <
        param_2 + *(int *)((int)this_ + 8)) {
      *(undefined4 *)((int)this_ + 0x24) = 1;
      param_2 = (*(int *)((int)this_ + 4) - *(int *)((int)this_ + 8)) + *(int *)((int)this_ + 0x1c);
    }
  }
  if ((int)param_2 < 1) {
    local_14 = 0;
  }
  else {
    iVar3 = *(int *)((int)this_ + 0x1c);
    iVar4 = *(int *)((int)this_ + 4);
    puVar10 = *(undefined4 **)((int)this_ + 8);
    local_8 = param_1;
    puVar9 = param_1;
    if ((undefined1 *)(iVar4 + iVar3) < (undefined1 *)(param_2 + (int)puVar10)) {
      do {
        uVar2 = (iVar4 - (int)puVar10) + iVar3;
        local_14 = local_14 + uVar2;
        local_8 = (undefined4 *)((int)puVar9 + uVar2);
        for (uVar7 = uVar2 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
          *puVar9 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
        }
        pcVar8 = (char *)((int)this_ + 0x2c);
        for (uVar7 = uVar2 & 3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        param_2 = param_2 - uVar2;
        local_4 = DAT_00650f6c;
        uVar2 = 0xffffffff;
        pcVar11 = pcVar8;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        lpBuffer = *(LPVOID *)((int)this_ + 4);
        hFile = *(HANDLE *)this_;
        if (~uVar2 - 1 < 4) {
LAB_0054870b:
          iVar3 = ReadFile(hFile,lpBuffer,local_4,(LPDWORD)((int)this_ + 0x1c),(LPOVERLAPPED)0x0);
        }
        else {
          uVar2 = 0xffffffff;
          pcVar11 = pcVar8;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (BEA_LOOP_GUARD((cVar1 != '\0')));
          iVar3 = FUN_00568390(bea_arg(pcVar8 + (~uVar2 - 5)), bea_arg(&DAT_006318a0));
          if (iVar3 != 0) goto LAB_0054870b;
          iVar3 = 0;
          *(undefined4 *)((int)this_ + 0x1c) = 0;
          iVar4 = ReadFile(hFile,&local_10,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
          while (BEA_LOOP_GUARD(((((iVar4 != 0 && (param_1 == (undefined4 *)0x4)) &&
                  (BVar5 = ReadFile(hFile,&DAT_008c029c,(DWORD)local_10,(LPDWORD)&param_1,
                                    (LPOVERLAPPED)0x0), BVar5 != 0)) && (param_1 == local_10))))) {
            local_c = 0x102927;
            iVar3 = uncompress(lpBuffer,&local_c,&DAT_008c029c,local_10);
            if (iVar3 != 0) goto LAB_00548722;
            uVar2 = *(int *)((int)this_ + 0x1c) + local_c;
            lpBuffer = (LPVOID)((int)lpBuffer + local_c);
            *(uint *)((int)this_ + 0x1c) = uVar2;
            iVar3 = 1;
            if (DAT_00650f6c <= uVar2) goto LAB_00548744;
            iVar4 = ReadFile(hFile,&local_10,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
          }
        }
        if (iVar3 == 0) {
LAB_00548722:
          DVar6 = GetLastError();
          if (DVar6 != 0x26) {
            FUN_0042c750(bea_arg((int)this_ + 0x2c), bea_arg(0xffffffff));
          }
          *(undefined4 *)((int)this_ + 0x1c) = 0;
        }
LAB_00548744:
        iVar3 = *(int *)((int)this_ + 0x1c);
        if (iVar3 != *(int *)((int)this_ + 0x18)) {
          *(undefined4 *)((int)this_ + 0x28) = 1;
        }
        pcVar8 = *(char **)((int)this_ + 4);
        *(char **)((int)this_ + 8) = pcVar8;
        if (*(int *)((int)this_ + 0xc) != 0) {
          cVar1 = '\0';
          for (; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
            cVar1 = cVar1 + *pcVar8;
            pcVar8 = pcVar8 + 1;
          }
          if (cVar1 != **(char **)((int)this_ + 0x10)) {
            FUN_0042c750(bea_arg((int)this_ + 0x2c), bea_arg(0xffffffff));
          }
        }
        *(int *)((int)this_ + 0x10) = *(int *)((int)this_ + 0x10) + 1;
        if (*(int *)((int)this_ + 0x28) != 0) {
          if ((uint)(*(int *)((int)this_ + 4) + *(int *)((int)this_ + 0x1c)) <
              param_2 + *(int *)((int)this_ + 8)) {
            *(undefined4 *)((int)this_ + 0x24) = 1;
            param_2 = (*(int *)((int)this_ + 4) - *(int *)((int)this_ + 8)) +
                      *(int *)((int)this_ + 0x1c);
          }
        }
        iVar3 = *(int *)((int)this_ + 0x1c);
        iVar4 = *(int *)((int)this_ + 4);
        puVar10 = *(undefined4 **)((int)this_ + 8);
        puVar9 = local_8;
      } while (BEA_LOOP_GUARD(((undefined1 *)(iVar4 + iVar3) < (undefined1 *)(param_2 + (int)puVar10))));
    }
    puVar10 = *(undefined4 **)((int)this_ + 8);
    for (uVar2 = param_2 >> 2; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
      *local_8 = *puVar10;
      puVar10 = puVar10 + 1;
      local_8 = local_8 + 1;
    }
    local_14 = local_14 + param_2;
    for (uVar2 = param_2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
      *(undefined1 *)local_8 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      local_8 = (undefined4 *)((int)local_8 + 1);
    }
    *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + param_2;
  }
  *(int *)((int)this_ + 300) = *(int *)((int)this_ + 300) + local_14;
  return local_14;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00548570, ap_00548570));
