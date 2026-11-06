// auto-ported from 004d6f70_FUN_004d6f70.c (FUN_004d6f70, 643 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit extraout_var_01: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit extraout_var_00: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit extraout_var: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_006318d0 GLOBAL_AT(char, 0x006318d0)
#define DAT_006318cc GLOBAL_AT(char, 0x006318cc)
#define DAT_006318c4 GLOBAL_AT(char, 0x006318c4)
#define DAT_0066e8c0 GLOBAL_AT(char, 0x0066e8c0)
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_0083d97c GLOBAL_AT(int, 0x0083d97c)
#define DAT_006318a0 GLOBAL_AT(char, 0x006318a0)
#define s_data_Resources_Loading_res__0063183c ((char*)0x0063183c)
#define s_data_Resources__03d_res__s_aya_0063181c ((char*)0x0063181c)
#define s_data_Resources_base_res__006318a8 ((char*)0x006318a8)
#define s_data_Resources_goodie__02d_res___006317f4 ((char*)0x006317f4)
#define s_data_Resources_Frontend_res__00631880 ((char*)0x00631880)
#define s_data_Resources_Loading_res__s__d_00631858 ((char*)0x00631858)
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static undefined4 BEA_CDECL ap_004d6f70(char *param_1, int param_2, int param_3)
{
  char cVar1;
  undefined uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  char (&local_10)[16] = *reinterpret_cast<char (*)[16]>(bea_frame_ + 0x10 - 0x10);
  if (param_3 == 1) {
    pcVar7 = &DAT_006318d0;
  }
  else if (param_3 == 3) {
    pcVar7 = &DAT_006318cc;
  }
  else {
    if (param_3 != 2) goto LAB_004d6fc5;
    pcVar7 = &DAT_006318c4;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar6 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar7 = pcVar6 + -uVar3;
  pcVar6 = local_10;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  }
LAB_004d6fc5:
  if (param_2 != -1) {
    if (param_2 != -2) {
      if (param_2 != -3) {
        if (-1 < param_2) {
          uVar2 = FUN_0055de9b(param_1,s_data_Resources__03d_res__s_aya_0063181c,param_2,local_10);
          return CONCAT31(extraout_var_00,uVar2);
        }
        uVar2 = FUN_0055de9b(param_1,s_data_Resources_goodie__02d_res___006317f4,-1000 - param_2,
                             local_10);
        return CONCAT31(extraout_var_01,uVar2);
      }
      if ((DAT_0066e8c0 != '\0') && (DAT_0083d448 != 0)) {
        uVar2 = FUN_0055de9b(param_1,s_data_Resources_Loading_res__s__d_00631858,local_10,
                             DAT_0083d97c);
        return CONCAT31(extraout_var,uVar2);
      }
      uVar3 = 0xffffffff;
      *param_1 = '\0';
      pcVar7 = s_data_Resources_Loading_res__0063183c;
      do {
        pcVar6 = pcVar7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar6;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar3 = ~uVar3;
      iVar5 = -1;
      pcVar7 = param_1;
      do {
        pcVar8 = pcVar7;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      pcVar7 = pcVar6 + -uVar3;
      pcVar6 = pcVar8 + -1;
      for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      }
      uVar3 = 0xffffffff;
      pcVar7 = local_10;
      do {
        pcVar6 = pcVar7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar6;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar3 = ~uVar3;
      iVar5 = -1;
      pcVar7 = param_1;
      do {
        pcVar8 = pcVar7;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      pcVar7 = pcVar6 + -uVar3;
      pcVar6 = pcVar8 + -1;
      for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      }
      uVar3 = 0xffffffff;
      pcVar7 = &DAT_006318a0;
      do {
        pcVar6 = pcVar7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar6;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar3 = ~uVar3;
      iVar5 = -1;
      do {
        pcVar7 = param_1;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar7;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      pcVar6 = pcVar6 + -uVar3;
      pcVar7 = pcVar7 + -1;
      for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      return 0;
    }
    uVar3 = 0xffffffff;
    *param_1 = '\0';
    pcVar7 = s_data_Resources_Frontend_res__00631880;
    do {
      pcVar6 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar7 = param_1;
    do {
      pcVar8 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar7 = pcVar6 + -uVar3;
    pcVar6 = pcVar8 + -1;
    for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar7 = local_10;
    do {
      pcVar6 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar7 = param_1;
    do {
      pcVar8 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar7 = pcVar6 + -uVar3;
    pcVar6 = pcVar8 + -1;
    for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_006318a0;
    do {
      pcVar6 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar3 = ~uVar3;
    iVar5 = -1;
    do {
      pcVar7 = param_1;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar7;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar6 = pcVar6 + -uVar3;
    pcVar7 = pcVar7 + -1;
    for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    return 0;
  }
  uVar3 = 0xffffffff;
  *param_1 = '\0';
  pcVar7 = s_data_Resources_base_res__006318a8;
  do {
    pcVar6 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  iVar5 = -1;
  pcVar7 = param_1;
  do {
    pcVar8 = pcVar7;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar7 = pcVar6 + -uVar3;
  pcVar6 = pcVar8 + -1;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar7 = local_10;
  do {
    pcVar6 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  iVar5 = -1;
  pcVar7 = param_1;
  do {
    pcVar8 = pcVar7;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar7 = pcVar6 + -uVar3;
  pcVar6 = pcVar8 + -1;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_006318a0;
  do {
    pcVar6 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  iVar5 = -1;
  do {
    pcVar7 = param_1;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar7;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar6 = pcVar6 + -uVar3;
  pcVar7 = pcVar7 + -1;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d6f70, ap_004d6f70));
