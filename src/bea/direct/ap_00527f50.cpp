// auto-ported from 00527f50_FUN_00527f50.c (FUN_00527f50, 846 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089beb8 GLOBAL_AT(int, 0x0089beb8)
#define DAT_0089bec4 GLOBAL_AT(int, 0x0089bec4)
#define DAT_0089bec0 GLOBAL_AT(int, 0x0089bec0)
#define DAT_0089bebc GLOBAL_AT(int, 0x0089bebc)
#define DAT_0089beb0 GLOBAL_AT(int, 0x0089beb0)
#define DAT_0089bea8 GLOBAL_AT(int, 0x0089bea8)
#define DAT_0089bfd4 GLOBAL_AT(undefined4*, 0x0089bfd4)
#define DAT_0089bed0 GLOBAL_AT(int, 0x0089bed0)
#define DAT_0089becc GLOBAL_AT(int, 0x0089becc)
#define DAT_0089bed4 GLOBAL_AT(int, 0x0089bed4)
#define DAT_0089beac GLOBAL_AT(char, 0x0089beac)
#define DAT_0089bec8 GLOBAL_AT(undefined4*, 0x0089bec8)

static undefined4 BEA_CDECL ap_00527f50(void)
{
  DWORD DVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint a2;
  undefined4 *puVar5;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  uint &local_28 = *reinterpret_cast<uint *>(bea_frame_ + 0x30 - 0x28);
  int &local_24 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x1c);
  uint &uStack_18 = *reinterpret_cast<uint *>(bea_frame_ + 0x30 - 0x18);
  uint &local_14 = *reinterpret_cast<uint *>(bea_frame_ + 0x30 - 0x14);
  HANDLE &local_10 = *reinterpret_cast<HANDLE *>(bea_frame_ + 0x30 - 0x10);
  HANDLE &local_c = *reinterpret_cast<HANDLE *>(bea_frame_ + 0x30 - 0xc);
  HANDLE &local_8 = *reinterpret_cast<HANDLE *>(bea_frame_ + 0x30 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x4);
  local_10 = DAT_0089beb8;
  local_c = DAT_0089bec4;
  local_8 = DAT_0089bec0;
  local_4 = DAT_0089bebc;
  a2 = local_14;
switchD_00527fc8_default:
  while(BEA_LOOP_GUARD(( true ))) {
    DAT_0089beb0 = 0;
    DVar1 = WaitForMultipleObjects(4,&local_10,0,0xffffffff);
    if (DVar1 != 0xffffffff) break;
    GetLastError();
    Sleep(100);
  }
  DAT_0089bea8 = DVar1;
  DAT_0089beb0 = 1;
  switch(DVar1) {
  case 0:
    bea_vcall<uint32_t>(DAT_0089bfd4, 0xc);
    DAT_0089bed0 = 0;
    DAT_0089becc = 0;
    bea_vcall<uint32_t>(DAT_0089bfd4, 0x4, &DAT_0089bed4);
    DAT_0089beac = 0;
    uVar2 = bea_vcall<uint32_t>(DAT_0089bfd4, 0x10);
    if ((((char)uVar2 == '\0') || (iVar3 = bea_vcall<uint32_t>(DAT_0089bfd4, 0x18), iVar3 != 2)) ||
       (iVar3 = bea_vcall<uint32_t>(DAT_0089bfd4, 0x14), iVar3 != 0xac44)) {
      if (DAT_0089bec8 != (int *)0x0) {
        bea_vcall<uint32_t>(DAT_0089bec8, 0x48, DAT_0089bec8);
        ResetEvent(DAT_0089bec4);
        ResetEvent(DAT_0089bec0);
        ResetEvent(((void*)0x00528540));
      }
      goto switchD_00527fc8_default;
    }
    if ((DAT_0089bec8 != (int *)0x0) &&
       (bea_vcall<uint32_t>(DAT_0089bec8, 0x24, DAT_0089bec8,&local_14), (local_14 & 5) != 0))
    goto switchD_00527fc8_default;
    bea_vcall<uint32_t>(DAT_0089bec8, 0x2c, DAT_0089bec8,0,0,&local_24,&local_28,&local_1c,&local_20,2);
    bea_vcall<uint32_t>(DAT_0089bfd4, 0x8, local_28,local_24,&uStack_18);
    if (uStack_18 == 0) {
      DAT_0089beac = 1;
      if (DAT_0089bec8 != (int *)0x0) {
        bea_vcall<uint32_t>(DAT_0089bec8, 0x48, DAT_0089bec8);
        ResetEvent(DAT_0089bec4);
        ResetEvent(DAT_0089bec0);
        ResetEvent(((void*)0x00528540));
      }
      bea_vcall<uint32_t>(DAT_0089bec8, 0x4c, DAT_0089bec8,local_24,local_28,local_1c,local_20);
      goto switchD_00527fc8_default;
    }
    if (uStack_18 < local_28) {
      puVar5 = (undefined4 *)(local_24 + uStack_18);
      for (uVar4 = local_28 - uStack_18 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = local_28 - uStack_18 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      DAT_0089bed0 = DAT_0089bed0 + 1;
    }
    bea_vcall<uint32_t>(DAT_0089bec8, 0x4c, DAT_0089bec8,local_24,local_28,local_1c,local_20);
    bea_vcall<uint32_t>(DAT_0089bec8, 0x34, DAT_0089bec8,0);
    bea_vcall<uint32_t>(DAT_0089bec8, 0x30, DAT_0089bec8,0,0,1);
    break;
  case 1:
  case 2:
    if (2 < DAT_0089bed0) {
      if (DAT_0089bec8 != (int *)0x0) {
        bea_vcall<uint32_t>(DAT_0089bec8, 0x48, DAT_0089bec8);
        ResetEvent(DAT_0089bec4);
        ResetEvent(DAT_0089bec0);
        ResetEvent(((void*)0x00528540));
      }
      bea_vcall<uint32_t>(DAT_0089bfd4, 0xc);
      DAT_0089bed0 = 0;
      DAT_0089becc = 0;
      DAT_0089beac = 1;
      goto switchD_00527fc8_default;
    }
    if (DVar1 == 1) {
      a2 = 0;
    }
    else if (DVar1 == 2) {
      a2 = 0x40000;
    }
    bea_vcall<uint32_t>(DAT_0089bec8, 0x2c, DAT_0089bec8,a2,0x40000,&local_24,&local_28,&local_1c,&local_20,0);
    bea_vcall<uint32_t>(DAT_0089bfd4, 0x8, local_28,local_24,&uStack_18);
    if (uStack_18 < local_28) {
      puVar5 = (undefined4 *)(local_24 + uStack_18);
      for (uVar4 = local_28 - uStack_18 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = local_28 - uStack_18 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      DAT_0089bed0 = DAT_0089bed0 + 1;
    }
    bea_vcall<uint32_t>(DAT_0089bec8, 0x4c, DAT_0089bec8,local_24,local_28,local_1c,local_20);
    break;
  case 3:
    goto switchD_00527fc8_caseD_3;
  default:
    goto switchD_00527fc8_default;
  }
  DAT_0089becc = DAT_0089becc + local_28;
  goto switchD_00527fc8_default;
switchD_00527fc8_caseD_3:
  DAT_0089beb0 = 0;
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00527f50, ap_00527f50));
