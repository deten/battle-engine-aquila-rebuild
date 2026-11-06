// auto-ported from 00449dc0_FUN_00449dc0.c (FUN_00449dc0, 289 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_0089cdcc GLOBAL_AT(int, 0x0089cdcc)
#define DAT_0089c9cc GLOBAL_AT(int, 0x0089c9cc)
#define s_Loading_named_meshes_00628cbc ((char*)0x00628cbc)
typedef uint32_t (BEA_THISCALL* FUN_0042b500_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042b500_t> FUN_0042b500 = {(FUN_0042b500_t)0x0042b500};
typedef undefined4 (BEA_THISCALL* FUN_0042b800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b800_t> FUN_0042b800 = {(FUN_0042b800_t)0x0042b800};
typedef void * (BEA_CDECL* FUN_004aa6e0_t)(void *, undefined4, ...);
static const bea_guard<FUN_004aa6e0_t> FUN_004aa6e0 = {(FUN_004aa6e0_t)0x004aa6e0};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static uint32_t BEA_THISCALL ap_00449dc0(void * this_, void *param_1)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  int &local_10c = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0x10c);
  int &local_108 = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0x108);
  uint &local_104 = *reinterpret_cast<uint *>(bea_frame_ + 0x110 - 0x104);
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x110 - 0x100);
  *(undefined4 *)((int)this_ + 0x42c) = 0;
  FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(s_Loading_named_meshes_00628cbc));
  FUN_00548570(bea_arg(param_1), bea_arg(&local_108), bea_arg(4));
  local_10c = 0;
  if (0 < local_108) {
    do {
      FUN_00548570(bea_arg(param_1), bea_arg(&local_104), bea_arg(1));
      FUN_00548570(bea_arg(param_1), bea_arg(local_100), bea_arg(local_104 & 0xff));
      iVar4 = 0;
      local_100[local_104 & 0xff] = 0;
      iVar3 = DAT_0089cdcc;
      if (0 < DAT_0089cdcc) {
        piVar5 = &DAT_0089c9cc;
        do {
          if ((*piVar5 != 0) &&
             (iVar1 = FUN_00568390(bea_arg(local_100), bea_arg(*piVar5 + 0x24)), iVar3 = DAT_0089cdcc, iVar1 == 0))
          goto LAB_00449eae;
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (BEA_LOOP_GUARD((iVar4 < iVar3)));
      }
      if (iVar3 != 0xff) {
        uVar2 = FUN_004aa6e0(local_100,1);
        (&DAT_0089c9cc)[DAT_0089cdcc] = uVar2;
        if ((&DAT_0089c9cc)[DAT_0089cdcc] != 0) {
          DAT_0089cdcc = DAT_0089cdcc + 1;
        }
      }
LAB_00449eae:
      local_10c = local_10c + 1;
    } while (BEA_LOOP_GUARD((local_10c < local_108)));
  }
  return FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(s_Loading_named_meshes_00628cbc), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00449dc0, ap_00449dc0));
