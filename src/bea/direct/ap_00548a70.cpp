// auto-ported from 00548a70_FUN_00548a70.c (FUN_00548a70, 391 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char IAT;
#define DAT_006318a0 GLOBAL_AT(int, 0x006318a0)
#define DAT_008c029c GLOBAL_AT(undefined, 0x008c029c)
#define s_Write_failed_00651020 ((char*)0x00651020)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef uint32_t (BEA_CDECL* compress_t)(...);
#define compress (*(compress_t*)0x005d83bc)   /* ZLIB.DLL import, via the IAT */

static void BEA_THISCALL ap_00548a70(void * this_, undefined4 *param_1, uint param_2)
{
  char *pcVar1;
  char cVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  DWORD nNumberOfBytesToWrite;
  undefined4 *puVar6;
  undefined *lpBuffer;
  char *pcVar7;
  undefined4 *puVar8;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  DWORD &local_10 = *reinterpret_cast<DWORD *>(bea_frame_ + 0x10 - 0x10);
  HANDLE &local_c = *reinterpret_cast<HANDLE *>(bea_frame_ + 0x10 - 0xc);
  DWORD &local_8 = *reinterpret_cast<DWORD *>(bea_frame_ + 0x10 - 0x8);
  uint &local_4 = *reinterpret_cast<uint *>(bea_frame_ + 0x10 - 0x4);
  if (0 < (int)param_2) {
    while(BEA_LOOP_GUARD(( true ))) {
      puVar8 = *(undefined4 **)((int)this_ + 8);
      if ((undefined1 *)((int)puVar8 + param_2) <=
          (undefined1 *)(*(int *)((int)this_ + 4) + *(int *)((int)this_ + 0x18))) break;
      local_4 = (*(int *)((int)this_ + 4) - (int)puVar8) + *(int *)((int)this_ + 0x18);
      pcVar1 = (char *)((int)this_ + 0x2c);
      puVar6 = param_1;
      for (uVar5 = local_4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = local_4 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      local_c = *(HANDLE *)this_;
      uVar5 = 0xffffffff;
      pcVar7 = pcVar1;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (BEA_LOOP_GUARD((cVar2 != '\0')));
      nNumberOfBytesToWrite = *(DWORD *)((int)this_ + 0x18);
      lpBuffer = *(undefined **)((int)this_ + 4);
      if (~uVar5 - 1 < 4) {
LAB_00548b44:
        BVar4 = WriteFile(local_c,lpBuffer,nNumberOfBytesToWrite,&local_8,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) goto LAB_00548b5c;
      }
      else {
        uVar5 = 0xffffffff;
        pcVar7 = pcVar1;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (BEA_LOOP_GUARD((cVar2 != '\0')));
        iVar3 = FUN_00568390(bea_arg(pcVar1 + (~uVar5 - 5)), bea_arg(&DAT_006318a0));
        if (iVar3 != 0) goto LAB_00548b44;
        local_10 = 0x102927;
        compress(&DAT_008c029c,&local_10,lpBuffer,nNumberOfBytesToWrite);
        nNumberOfBytesToWrite = local_10;
        lpBuffer = &DAT_008c029c;
        BVar4 = WriteFile(local_c,&local_10,4,&local_8,(LPOVERLAPPED)0x0);
        if (BVar4 != 0) goto LAB_00548b44;
LAB_00548b5c:
        CRenderThing__vslot3(s_Write_failed_00651020);
        GetLastError();
      }
      *(undefined4 *)((int)this_ + 8) = *(undefined4 *)((int)this_ + 4);
      param_2 = param_2 - local_4;
      param_1 = (undefined4 *)((int)param_1 + local_4);
      *(undefined4 *)((int)this_ + 0x1c) = 0;
      *(uint *)((int)this_ + 300) = *(int *)((int)this_ + 300) + local_4;
      if ((int)param_2 < 1) {
        return;
      }
    }
    if (0 < (int)param_2) {
      puVar8 = *(undefined4 **)((int)this_ + 8);
      for (uVar5 = param_2 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
        *puVar8 = *param_1;
        param_1 = param_1 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = param_2 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(uint *)((int)this_ + 8) = *(int *)((int)this_ + 8) + param_2;
      *(uint *)((int)this_ + 0x1c) = *(int *)((int)this_ + 0x1c) + param_2;
      *(uint *)((int)this_ + 300) = *(int *)((int)this_ + 300) + param_2;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00548a70, ap_00548a70));
