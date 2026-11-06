// auto-ported from 004bb530_FUN_004bb530.c (FUN_004bb530, 371 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_00679ec1 GLOBAL_AT(char, 0x00679ec1)
#define s_data_music_BEA_08_Master__wma_006309e4 ((char*)0x006309e4)
typedef uint32_t (BEA_THISCALL* FUN_004bb4b0_t)(uint32_t);
static const bea_guard<FUN_004bb4b0_t> FUN_004bb4b0 = {(FUN_004bb4b0_t)0x004bb4b0};
typedef uint32_t (BEA_THISCALL* FUN_004bb8c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bb8c0_t> FUN_004bb8c0 = {(FUN_004bb8c0_t)0x004bb8c0};
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static void BEA_THISCALL ap_004bb530(void * this_)
{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  bea_vcall<uint32_t>(this_, 0x20);
  if (*(char *)((int)this_ + 8) != '\0') {
    FUN_004bb4b0(bea_arg(this_));
    if (*(char *)((int)this_ + 0x38) != '\0') {
      if (*(int *)((int)this_ + 0x34) < 0) {
        *(undefined4 *)((int)this_ + 0x34) = 0;
      }
      if (0x7f < *(int *)((int)this_ + 0x34)) {
        *(undefined4 *)((int)this_ + 0x34) = 0x7f;
      }
      bea_vcall<uint32_t>(this_, 0x14, *(undefined4 *)((int)this_ + 0x34));
    }
    iVar2 = bea_vcall<uint32_t>(this_, 0x10);
    if (iVar2 != 0) {
      iVar2 = *(int *)((int)this_ + 4);
      if (iVar2 == 0) {
        if (*(char *)((int)this_ + 8) != '\0') {
          bea_vcall<uint32_t>(this_, 0xc);
          *(undefined1 *)((int)this_ + 8) = 0;
          return;
        }
      }
      else {
        if (iVar2 == 1) {
          if (*(int *)((int)this_ + 0x10) != 0) {
            *(undefined4 *)((int)this_ + 0x10) = *(undefined4 *)(*(int *)((int)this_ + 0x10) + 0x104);
          }
          if (*(int *)((int)this_ + 0x10) == 0) {
            *(undefined4 *)((int)this_ + 0x10) = *(undefined4 *)((int)this_ + 0xc);
          }
          pcVar3 = *(char **)((int)this_ + 0x10);
          if (pcVar3 != (char *)0x0) {
            if ((DAT_00662df4 != 0) || (DAT_00679ec1 != '\0')) {
              pcVar3 = s_data_music_BEA_08_Master__wma_006309e4;
            }
            if (*(char *)((int)this_ + 8) != '\0') {
              bea_vcall<uint32_t>(this_, 0x1c, pcVar3);
              return;
            }
LAB_004bb66d:
            uVar1 = *(undefined4 *)((int)this_ + 0x2c);
            *(undefined4 *)((int)this_ + 0x34) = uVar1;
            *(undefined4 *)((int)this_ + 0x28) = uVar1;
            bea_vcall<uint32_t>(this_, 0x14, uVar1);
            bea_vcall<uint32_t>(this_, 0x8, pcVar3);
            *(undefined1 *)((int)this_ + 8) = 1;
            return;
          }
        }
        else {
          if (iVar2 != 2) {
            if (iVar2 != 3) {
              return;
            }
            FUN_004bb8c0(bea_arg(this_), bea_arg(*(undefined4 *)((int)this_ + 0x3c)), bea_arg(0));
            return;
          }
          iVar2 = *(int *)((int)this_ + 0xc);
          if (iVar2 != 0) {
            iVar4 = 0;
            for (; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = *(int *)(iVar2 + 0x104)) {
              iVar4 = iVar4 + 1;
            }
            iVar2 = _rand();
            iVar2 = iVar2 % iVar4;
            pcVar3 = *(char **)((int)this_ + 0xc);
            if (0 < iVar2) {
              do {
                pcVar3 = *(char **)(pcVar3 + 0x104);
                iVar2 = iVar2 + -1;
              } while (BEA_LOOP_GUARD((iVar2 != 0)));
            }
            *(char **)((int)this_ + 0x10) = pcVar3;
            if ((DAT_00662df4 != 0) || (DAT_00679ec1 != '\0')) {
              pcVar3 = s_data_music_BEA_08_Master__wma_006309e4;
            }
            if (*(char *)((int)this_ + 8) != '\0') {
              bea_vcall<uint32_t>(this_, 0x1c, pcVar3);
              return;
            }
            goto LAB_004bb66d;
          }
        }
        if (*(char *)((int)this_ + 8) != '\0') {
          bea_vcall<uint32_t>(this_, 0xc);
          *(undefined1 *)((int)this_ + 8) = 0;
          return;
        }
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bb530, ap_004bb530));
