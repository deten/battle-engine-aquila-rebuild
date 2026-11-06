// auto-ported from 004418a0_FUN_004418a0.c (FUN_004418a0, 312 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0062842c GLOBAL_AT(int, 0x0062842c)
#define DAT_00628428 GLOBAL_AT(int, 0x00628428)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define PTR_s_c__setuphistory_txt_006283e8 GLOBAL_AT(void*, 0x006283e8)
typedef char * (BEA_CDECL* FUN_004d6240_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d6240_t> FUN_004d6240 = {(FUN_004d6240_t)0x004d6240};
typedef int (BEA_CDECL* FUN_0055e38c_t)(void *, unsigned int, void *, ...);
static const bea_guard<FUN_0055e38c_t> FUN_0055e38c = {(FUN_0055e38c_t)0x0055e38c};
typedef void * (BEA_CDECL* FUN_0055e490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e490_t> FUN_0055e490 = {(FUN_0055e490_t)0x0055e490};
typedef int (BEA_CDECL* FUN_0055e4a3_t)(uint32_t);
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};
typedef int (BEA_CDECL* FUN_0055e520_t)(void *, void *, ...);
static const bea_guard<FUN_0055e520_t> FUN_0055e520 = {(FUN_0055e520_t)0x0055e520};

static void BEA_CDECL ap_004418a0(int param_1, undefined4 param_2, undefined4 param_3)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  if (*(int *)(param_1 + 0x9ec) != 0) {
    if (*(char *)(param_1 + 8) == '\0') {
      iVar2 = FUN_0055e490(bea_arg(*(undefined4 *)(param_1 + 4)), bea_arg(&DAT_0062842c));
      if (iVar2 == 0) {
        uVar3 = 0xffffffff;
        pcVar4 = *(char **)(param_1 + 4);
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (((cVar1 != '\0')));
        if ((*(char **)(param_1 + 4))[~uVar3 - 6] == 'p') {
          *(undefined **)(param_1 + 4) = PTR_s_c__setuphistory_txt_006283e8;
          iVar2 = FUN_0055e490(bea_arg(PTR_s_c__setuphistory_txt_006283e8), bea_arg(&DAT_0062842c));
        }
      }
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      iVar2 = FUN_0055e490(bea_arg(*(undefined4 *)(param_1 + 4)), bea_arg(&DAT_00628428));
    }
    if (iVar2 != 0) {
      FUN_0055e38c(local_100,param_2,&param_3);
      FUN_0055e520(iVar2,local_100);
      FUN_0055e4a3(bea_arg(iVar2));
      iVar2 = *(int *)(param_1 + 0x9e4) + 1;
      *(int *)(param_1 + 0x9e4) = iVar2;
      if (0x1d < iVar2) {
        *(undefined4 *)(param_1 + 0x9e4) = 0;
      }
      FUN_004d6240(bea_arg(*(int *)(param_1 + 0x9e4) * 0x50 + 9 + param_1), bea_arg(local_100), bea_arg(0x50));
      *(undefined1 *)(*(int *)(param_1 + 0x9e4) * 0x50 + 0x58 + param_1) = 0;
      *(undefined4 *)(param_1 + 0x9e8) = bea_piece32(DAT_00672fd0);
      *(undefined4 *)(param_1 + 0x96c + *(int *)(param_1 + 0x9e4) * 4) = bea_piece32(DAT_00672fd0);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004418a0, ap_004418a0));
