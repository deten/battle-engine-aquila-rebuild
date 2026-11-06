// auto-ported from 005482d0_FUN_005482d0.c (FUN_005482d0, 665 bytes) by tools/autoport.py
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

static int BEA_THISCALL ap_005482d0(void * this_, int param_1)
{
  LPDWORD lpNumberOfBytesRead;
  HANDLE hFile;
  char cVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int &local_18 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x18);
  DWORD &local_14 = *reinterpret_cast<DWORD *>(bea_frame_ + 0x20 - 0x14);
  LPVOID &local_10 = *reinterpret_cast<LPVOID *>(bea_frame_ + 0x20 - 0x10);
  DWORD &local_c = *reinterpret_cast<DWORD *>(bea_frame_ + 0x20 - 0xc);
  int &local_8 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x8);
  uint &local_4 = *reinterpret_cast<uint *>(bea_frame_ + 0x20 - 0x4);
  if (param_1 == 0) {
    return 0;
  }
  local_18 = 0;
  if (*(int *)((int)this_ + 0x28) != 0) {
    if ((uint)(*(int *)((int)this_ + 4) + *(int *)((int)this_ + 0x1c)) <
        (uint)(*(int *)((int)this_ + 8) + param_1)) {
      *(undefined4 *)((int)this_ + 0x24) = 1;
      param_1 = (*(int *)((int)this_ + 4) - *(int *)((int)this_ + 8)) + *(int *)((int)this_ + 0x1c);
    }
  }
  if (0 < param_1) {
    DVar5 = *(DWORD *)((int)this_ + 0x1c);
    local_10 = *(LPVOID *)((int)this_ + 4);
    iVar2 = *(int *)((int)this_ + 8);
    lpNumberOfBytesRead = (LPDWORD)((int)this_ + 0x1c);
    if ((int)local_10 + DVar5 < (uint)(param_1 + iVar2)) {
      do {
        iVar2 = (int)local_10 + (DVar5 - iVar2);
        param_1 = param_1 - iVar2;
        local_18 = local_18 + iVar2;
        local_4 = DAT_00650f6c;
        pcVar7 = (char *)((int)this_ + 0x2c);
        uVar6 = 0xffffffff;
        pcVar8 = pcVar7;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        hFile = *(HANDLE *)this_;
        if (~uVar6 - 1 < 4) {
LAB_0054846d:
          iVar2 = ReadFile(hFile,local_10,local_4,lpNumberOfBytesRead,(LPOVERLAPPED)0x0);
        }
        else {
          uVar6 = 0xffffffff;
          pcVar8 = pcVar7;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (BEA_LOOP_GUARD((cVar1 != '\0')));
          iVar2 = FUN_00568390(bea_arg(pcVar7 + (~uVar6 - 5)), bea_arg(&DAT_006318a0));
          if (iVar2 != 0) goto LAB_0054846d;
          iVar2 = 0;
          *lpNumberOfBytesRead = 0;
          iVar3 = ReadFile(hFile,&local_c,4,&local_14,(LPOVERLAPPED)0x0);
          while (BEA_LOOP_GUARD(((((iVar3 != 0 && (local_14 == 4)) &&
                  (BVar4 = ReadFile(hFile,&DAT_008c029c,local_c,&local_14,(LPOVERLAPPED)0x0),
                  BVar4 != 0)) && (local_14 == local_c))))) {
            local_8 = 0x102927;
            iVar2 = uncompress(local_10,&local_8,&DAT_008c029c,local_c);
            if (iVar2 != 0) goto LAB_00548485;
            DVar5 = *lpNumberOfBytesRead;
            *lpNumberOfBytesRead = DVar5 + local_8;
            local_10 = (LPVOID)((int)local_10 + local_8);
            iVar2 = 1;
            if (DAT_00650f6c <= DVar5 + local_8) goto LAB_005484a7;
            iVar3 = ReadFile(hFile,&local_c,4,&local_14,(LPOVERLAPPED)0x0);
          }
        }
        if (iVar2 == 0) {
LAB_00548485:
          DVar5 = GetLastError();
          if (DVar5 != 0x26) {
            FUN_0042c750(bea_arg((int)this_ + 0x2c), bea_arg(0xffffffff));
          }
          *lpNumberOfBytesRead = 0;
        }
LAB_005484a7:
        DVar5 = *lpNumberOfBytesRead;
        if (DVar5 != *(DWORD *)((int)this_ + 0x18)) {
          *(undefined4 *)((int)this_ + 0x28) = 1;
        }
        pcVar7 = *(char **)((int)this_ + 4);
        *(char **)((int)this_ + 8) = pcVar7;
        if (*(int *)((int)this_ + 0xc) != 0) {
          cVar1 = '\0';
          for (; BEA_LOOP_GUARD((DVar5 != 0)); DVar5 = DVar5 - 1) {
            cVar1 = cVar1 + *pcVar7;
            pcVar7 = pcVar7 + 1;
          }
          if (cVar1 != **(char **)((int)this_ + 0x10)) {
            FUN_0042c750(bea_arg((int)this_ + 0x2c), bea_arg(0xffffffff));
          }
        }
        *(int *)((int)this_ + 0x10) = *(int *)((int)this_ + 0x10) + 1;
        if (*(int *)((int)this_ + 0x28) != 0) {
          if (*(int *)((int)this_ + 4) + *lpNumberOfBytesRead <
              (uint)(param_1 + *(int *)((int)this_ + 8))) {
            *(undefined4 *)((int)this_ + 0x24) = 1;
            param_1 = (*(int *)((int)this_ + 4) - *(int *)((int)this_ + 8)) + *lpNumberOfBytesRead;
          }
        }
        DVar5 = *lpNumberOfBytesRead;
        local_10 = *(LPVOID *)((int)this_ + 4);
        iVar2 = *(int *)((int)this_ + 8);
      } while (BEA_LOOP_GUARD(((int)local_10 + DVar5 < (uint)(param_1 + iVar2))));
    }
    local_18 = local_18 + param_1;
    *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + param_1;
  }
  *(int *)((int)this_ + 300) = *(int *)((int)this_ + 300) + local_18;
  return local_18;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005482d0, ap_005482d0));
