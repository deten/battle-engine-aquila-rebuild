// auto-ported from 004e0890_FUN_004e0890.c (FUN_004e0890, 358 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_006324bc GLOBAL_AT(int, 0x006324bc)
#define DAT_006324b8 GLOBAL_AT(int, 0x006324b8)
#define s_sounds__s_006324cc ((char*)0x006324cc)
#define s_music__s_006324c0 ((char*)0x006324c0)
#define s_ERROR__Failed_to_create_sample_f_00632490 ((char*)0x00632490)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 (BEA_STDCALL* FUN_00517290_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00517290_t> FUN_00517290 = {(FUN_00517290_t)0x00517290};
typedef undefined4 * (BEA_STDCALL* FUN_005172a0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005172a0_t> FUN_005172a0 = {(FUN_005172a0_t)0x005172a0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef char * (BEA_CDECL* _strncpy_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<_strncpy_t> _strncpy = {(_strncpy_t)0x0055e980};

static int BEA_THISCALL ap_004e0890(void * this_, char *param_1, int param_2, int param_3, undefined4 param_4)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  iVar4 = 0;
  if (param_2 == 0) {
    pcVar6 = s_sounds__s_006324cc;
  }
  else {
    pcVar6 = s_music__s_006324c0;
  }
  FUN_0055de9b(local_100,pcVar6,param_1);
  if (param_3 == 0) {
    iVar2 = FUN_00517290(bea_arg(local_100), bea_arg(param_2));
  }
  else {
    if ((char)param_4 != '\0') {
      iVar4 = *(int *)this_;
      while (BEA_LOOP_GUARD(((iVar4 != 0 && (iVar2 = FUN_00568390(bea_arg(iVar4 + 8), bea_arg(param_1)), iVar2 != 0))))) {
        iVar4 = *(int *)(iVar4 + 0x74);
      }
    }
    iVar2 = FUN_005172a0(bea_arg(param_3), bea_arg(param_2), bea_arg(iVar4));
  }
  if (iVar2 == 0) {
    FUN_00441740(&DAT_0066f580,s_ERROR__Failed_to_create_sample_f_00632490,param_1);
  }
  else {
    *(int *)(iVar2 + 0x6c) = param_2;
    pcVar6 = (char *)(iVar2 + 8);
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 0x70) = 0;
    _strncpy(bea_arg(pcVar6), bea_arg(param_1), bea_arg(99));
    *(undefined1 *)(iVar2 + 0x6b) = 0;
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)this_;
      *(int *)this_ = iVar2;
    }
    uVar3 = 0xffffffff;
    pcVar5 = pcVar6;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    if (5 < ~uVar3 - 1) {
      uVar3 = 0xffffffff;
      pcVar5 = pcVar6;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      iVar4 = FUN_00568390(bea_arg(~uVar3 + 5 + iVar2), bea_arg(&DAT_006324bc));
      if (iVar4 == 0) {
        *(undefined4 *)(iVar2 + 4) = 1;
      }
      uVar3 = 0xffffffff;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      iVar4 = FUN_00568390(bea_arg(~uVar3 + 5 + iVar2), bea_arg(&DAT_006324b8));
      if (iVar4 == 0) {
        *(undefined4 *)(iVar2 + 4) = 2;
        return iVar2;
      }
    }
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e0890, ap_004e0890));
