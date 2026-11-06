// auto-ported from 004189f0_FUN_004189f0.c (FUN_004189f0, 496 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004189f0(void * this_)
{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  int local_18;
  byte *local_14;
  int local_c;
  int local_4;
  
  iVar12 = 0;
  local_18 = *(int *)this_;
  iVar6 = 10000;
  iVar9 = 0;
  local_c = 10000;
  local_14 = (byte *)0x0;
  bVar4 = false;
  if (0 < *(int *)((int)this_ + 0x18)) {
    iVar1 = *(int *)((int)this_ + 0x14);
    do {
      bVar3 = false;
      iVar8 = 0;
      if (0 < iVar1) {
        do {
          if (*(byte *)(iVar8 + local_18) < *(byte *)((int)this_ + 0x20)) {
            bVar3 = true;
            if (iVar8 < local_c) {
              local_c = iVar8;
            }
            if (iVar9 < iVar8) {
              iVar9 = iVar8;
            }
          }
          iVar8 = iVar8 + 1;
        } while (BEA_LOOP_GUARD((iVar8 < iVar1)));
        if ((bVar3) && (bVar4 = true, local_14 = (byte *)iVar12, iVar12 < iVar6)) {
          iVar6 = iVar12;
        }
      }
      local_18 = local_18 + iVar1;
      iVar12 = iVar12 + 1;
    } while (BEA_LOOP_GUARD((iVar12 < *(int *)((int)this_ + 0x18))));
    if (bVar4) {
      iVar9 = iVar9 + 1;
      local_4 = (int)local_14 + 1;
      pcVar2 = *(char **)((int)this_ + 0xc);
      *pcVar2 = (char)local_c - (char)(iVar1 / 2);
      pcVar2[1] = (char)iVar6 - (char)(*(int *)((int)this_ + 0x18) / 2);
      pcVar2[2] = (char)iVar9 - (char)local_c;
      (*(uint8_t*)((char*)&local_14 + 0)) = (char)local_4;
      pcVar2[3] = (char)local_14 - (char)iVar6;
      pbVar10 = (byte *)(pcVar2 + 4);
      local_18 = *(int *)((int)this_ + 0x14) * iVar6 + *(int *)this_;
      if (iVar6 < local_4) {
        local_4 = local_4 - iVar6;
        do {
          local_14 = (byte *)(local_18 + local_c);
          iVar6 = local_c;
joined_r0x00418b10:
          if (iVar6 < iVar9) {
            pbVar11 = pbVar10 + 1;
            bVar7 = 0;
            bVar5 = 0;
            if (iVar6 < iVar9) {
              do {
                if (*(byte *)((int)this_ + 0x20) <= *local_14) break;
                bVar7 = bVar7 + 1;
                *pbVar11 = *local_14;
                pbVar11 = pbVar11 + 1;
                local_14 = local_14 + 1;
                iVar6 = iVar6 + 1;
              } while (BEA_LOOP_GUARD((iVar6 < iVar9)));
              if ('\0' < (char)bVar7) {
                *pbVar10 = bVar7;
                pbVar10 = pbVar11;
                if (iVar6 == iVar9) {
                  *pbVar11 = 0;
                  pbVar10 = pbVar11 + 1;
                }
                goto joined_r0x00418b10;
              }
              bVar5 = bVar7;
              if (iVar6 < iVar9) {
                do {
                  bVar5 = bVar7;
                  if (*local_14 < *(byte *)((int)this_ + 0x20)) break;
                  bVar7 = bVar7 - 1;
                  local_14 = local_14 + 1;
                  iVar6 = iVar6 + 1;
                  bVar5 = bVar7;
                } while (BEA_LOOP_GUARD((iVar6 < iVar9)));
              }
            }
            *pbVar10 = (iVar6 == iVar9) - 1U & bVar5;
            pbVar10 = pbVar11;
            goto joined_r0x00418b10;
          }
          local_18 = local_18 + *(int *)((int)this_ + 0x14);
          local_4 = local_4 + -1;
        } while (BEA_LOOP_GUARD((local_4 != 0)));
      }
      **(int **)((int)this_ + 0x10) = *(int *)((int)this_ + 0xc) - *(int *)((int)this_ + 4);
      *(byte **)((int)this_ + 0xc) = pbVar10;
      *(int *)((int)this_ + 0x10) = *(int *)((int)this_ + 0x10) + 4;
      return 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004189f0, ap_004189f0));
