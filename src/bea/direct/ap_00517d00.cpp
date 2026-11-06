// auto-ported from 00517d00_FUN_00517d00.c (FUN_00517d00, 525 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x2a0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00662dd4 GLOBAL_AT(int, 0x00662dd4)
#define DAT_0066307c GLOBAL_AT(int, 0x0066307c)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_Not_loading_XAP_during_resource_b_0063e80c ((char*)0x0063e80c)
#define s_Not_loading_compressed_sounds__0063e7ec ((char*)0x0063e7ec)
#define s_Loading_PC_XAP_file_0063e7bc ((char*)0x0063e7bc)
#define s_Failed_to_create_sample_0063e76c ((char*)0x0063e76c)
#define s_Caching__d_samples_from_PC_XAP_0063e79c ((char*)0x0063e79c)
#define s_XAP_file_0063e7e0 ((char*)0x0063e7e0)
#define s_not_found_0063e7d4 ((char*)0x0063e7d4)
#define s_Caching_sample__s_0063e788 ((char*)0x0063e788)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* FUN_0042cf70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042cf70_t> FUN_0042cf70 = {(FUN_0042cf70_t)0x0042cf70};
typedef int (BEA_THISCALL* FUN_004e0890_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e0890_t> FUN_004e0890 = {(FUN_004e0890_t)0x004e0890};
typedef void* (BEA_THISCALL* FUN_00547d70_t)(uint32_t);
static const bea_guard<FUN_00547d70_t> FUN_00547d70 = {(FUN_00547d70_t)0x00547d70};
typedef uint32_t (BEA_THISCALL* FUN_00547d90_t)(uint32_t);
static const bea_guard<FUN_00547d90_t> FUN_00547d90 = {(FUN_00547d90_t)0x00547d90};
typedef undefined4 (BEA_THISCALL* FUN_00547ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00547ec0_t> FUN_00547ec0 = {(FUN_00547ec0_t)0x00547ec0};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef undefined4 (BEA_THISCALL* FUN_00548c00_t)(uint32_t);
static const bea_guard<FUN_00548c00_t> FUN_00548c00 = {(FUN_00548c00_t)0x00548c00};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_00517d00(void * this_, undefined4 param_1)
{
  int iVar1;
  int iVar2;

  alignas(16) uint8_t bea_frame_[0x2a0] = {};   // the original stack frame (emulate_frame)
  int &local_294 = *reinterpret_cast<int *>(bea_frame_ + 0x2a0 - 0x294);
  int &local_290 = *reinterpret_cast<int *>(bea_frame_ + 0x2a0 - 0x290);
  undefined1 (&local_28c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x2a0 - 0x28c);
  int &local_288 = *reinterpret_cast<int *>(bea_frame_ + 0x2a0 - 0x288);
  undefined4 &local_284 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x2a0 - 0x284);
  char (&local_280)[64] = *reinterpret_cast<char (*)[64]>(bea_frame_ + 0x2a0 - 0x280);
  undefined1 (&local_240)[308] = *reinterpret_cast<undefined1 (*)[308]>(bea_frame_ + 0x2a0 - 0x240);
  undefined1 (&local_10c)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x2a0 - 0x10c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x2a0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x2a0 - 0x4);
  if (DAT_00662dd4 == 0) {
    if (DAT_0066307c == 0) {
      CRenderThing__vslot3(s_Not_loading_compressed_sounds__0063e7ec);
    }
    else {
      FUN_00547d70(bea_arg(local_240));
      iVar1 = FUN_00547ec0(bea_arg(local_240), bea_arg((int)this_ + 0x88), bea_arg(0x11), bea_arg(1), bea_arg(0));
      if (iVar1 == 0) {
        CRenderThing__vslot3(s_XAP_file_0063e7e0);
        CRenderThing__vslot3((int)this_ + 0x88);
        CRenderThing__vslot3(s_not_found_0063e7d4);
        FUN_00547d90(bea_arg(local_240));
      }
      else {
        CRenderThing__vslot3(s_Loading_PC_XAP_file_0063e7bc);
        FUN_00548570(bea_arg(local_240), bea_arg(local_28c), bea_arg(4));
        FUN_00548570(bea_arg(local_240), bea_arg(&local_294), bea_arg(4));
        FUN_0055de9b(local_10c,s_Caching__d_samples_from_PC_XAP_0063e79c,local_294);
        CRenderThing__vslot3(local_10c);
        local_290 = 0;
        if (0 < local_294) {
          do {
            iVar1 = local_290;
            FUN_00548570(bea_arg(local_240), bea_arg(local_28c), bea_arg(4));
            FUN_00548570(bea_arg(local_240), bea_arg(local_280), bea_arg(0x40));
            FUN_0055de9b(local_10c,s_Caching_sample__s_0063e788,local_280);
            CRenderThing__vslot3(local_10c);
            iVar2 = FUN_004e0890(bea_arg(this_), bea_arg(local_280), bea_arg(0), bea_arg(local_240), bea_arg(param_1));
            if (iVar2 == 0) {
              CRenderThing__vslot3(s_Failed_to_create_sample_0063e76c);
            }
            local_288 = local_294;
            FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg((float)local_290 / (float)local_294));
            local_290 = iVar1 + 1;
          } while (BEA_LOOP_GUARD((local_290 < local_294)));
        }
        FUN_00548c00(bea_arg(local_240));
        FUN_00547d90(bea_arg(local_240));
      }
    }
  }
  else {
    CRenderThing__vslot3(s_Not_loading_XAP_during_resource_b_0063e80c);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00517d00, ap_00517d00));
