// auto-ported from 0042ad30_FUN_0042ad30.c (FUN_0042ad30, 320 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x250: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define s_File_not_found_0062523c ((char*)0x0062523c)
#define s_Executing_script__s_0062524c ((char*)0x0062524c)
typedef uint32_t (BEA_CDECL* FUN_0042b840_t)(int, undefined4, ...);
static const bea_guard<FUN_0042b840_t> FUN_0042b840 = {(FUN_0042b840_t)0x0042b840};
typedef uint32_t (BEA_THISCALL* FUN_0042b9c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042b9c0_t> FUN_0042b9c0 = {(FUN_0042b9c0_t)0x0042b9c0};
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
typedef undefined4 (BEA_THISCALL* FUN_00548d30_t)(uint32_t);
static const bea_guard<FUN_00548d30_t> FUN_00548d30 = {(FUN_00548d30_t)0x00548d30};

static uint32_t BEA_THISCALL ap_0042ad30(void * this_, char *param_1)
{
  int iVar1;
  int iVar2;
  alignas(16) uint8_t bea_frame_[0x250] = {};   // the original stack frame (emulate_frame)
  char &local_241 = *reinterpret_cast<char *>(bea_frame_ + 0x250 - 0x241);
  undefined1 (&local_240)[308] = *reinterpret_cast<undefined1 (*)[308]>(bea_frame_ + 0x250 - 0x240);
  char (&local_10c)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x250 - 0x10c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x250 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x250 - 0x4);
  FUN_0042b840(this_,s_Executing_script__s_0062524c,param_1);
  FUN_00547d70(bea_arg(local_240));
  iVar1 = FUN_00547ec0(bea_arg(local_240), bea_arg(param_1), bea_arg(0x11), bea_arg(1), bea_arg(0));
  if (iVar1 == 0) {
    FUN_0042b840(this_,s_File_not_found_0062523c);
  }
  else {
    iVar1 = FUN_00548d30(bea_arg(local_240));
    while (BEA_LOOP_GUARD((iVar1 == 0))) {
      local_241 = '.';
      iVar1 = 0;
      iVar2 = FUN_00548d30(bea_arg(local_240));
      while (BEA_LOOP_GUARD(((iVar2 == 0 && (local_241 != '\n'))))) {
        FUN_00548570(bea_arg(local_240), bea_arg(&local_241), bea_arg(1));
        if ((local_241 != '\n') &&
           (((local_241 != '\r' && (local_241 != '\0')) &&
            (iVar2 = FUN_00548d30(bea_arg(local_240)), iVar2 == 0)))) {
          local_10c[iVar1] = local_241;
          iVar1 = iVar1 + 1;
        }
        iVar2 = FUN_00548d30(bea_arg(local_240));
      }
      local_10c[iVar1] = '\0';
      FUN_0042b9c0(bea_arg(this_), bea_arg(local_10c));
      iVar1 = FUN_00548d30(bea_arg(local_240));
    }
    FUN_00548c00(bea_arg(local_240));
  }
  return FUN_00547d90(bea_arg(local_240));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042ad30, ap_0042ad30));
