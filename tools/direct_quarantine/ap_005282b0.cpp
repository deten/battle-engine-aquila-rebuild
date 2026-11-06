// auto-ported from 005282b0_FUN_005282b0.c (FUN_005282b0, 427 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00896a48 GLOBAL_AT(undefined4*, 0x00896a48)
#define DAT_0089bec8 GLOBAL_AT(undefined4*, 0x0089bec8)
#define DAT_0089bec4 GLOBAL_AT(int, 0x0089bec4)
#define DAT_0089bec0 GLOBAL_AT(int, 0x0089bec0)
#define DAT_0089bebc GLOBAL_AT(int, 0x0089bebc)
#define DAT_0089beb8 GLOBAL_AT(int, 0x0089beb8)
#define DAT_0089beb4 GLOBAL_AT(int, 0x0089beb4)
#define DAT_0060c08c GLOBAL_AT(int, 0x0060c08c)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00662b2c GLOBAL_AT(int, 0x00662b2c)
#define DAT_0089bfd4 GLOBAL_AT(int, 0x0089bfd4)
#define DAT_0089bed4 GLOBAL_AT(undefined4, 0x0089bed4)
#define DAT_0089bed0 GLOBAL_AT(int, 0x0089bed0)
typedef uint32_t (BEA_THISCALL* FUN_005245a0_t)(uint32_t);
static const bea_guard<FUN_005245a0_t> FUN_005245a0 = {(FUN_005245a0_t)0x005245a0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
// @autoport-arity: call arity differs from the asm (5 pushes: asm 1 call(s), port 0)

static void BEA_CDECL ap_005282b0(void)
{
  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)

  undefined4 &local_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x6c);
  undefined4 &local_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x70);
  void *this_local;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x38);
  undefined2 &local_34 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x70 - 0x34);
  undefined4 (&local_30)[4] = *reinterpret_cast<undefined4 (*)[4]>(bea_frame_ + 0x70 - 0x30);
  undefined4 * &local_20 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x70 - 0x20);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x70 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x4);
  puVar2 = local_30;
  for (iVar1 = 9; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_20 = &local_44;
  local_44 = 0x20001;
  local_34 = 0;
  local_30[0] = 0x24;
  local_30[2] = 0x80000;
  local_30[1] = 0x188;
  if (DAT_00896a48 != (int *)0x0) {
    piVar3 = DAT_00896a48;
    bea_vcall<uint32_t>(DAT_00896a48, 0xc, DAT_00896a48,local_30,&DAT_0089bec8);
    DAT_0089bec4 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    DAT_0089bec0 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    DAT_0089bebc = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    DAT_0089beb8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    DAT_0089beb4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,((void*)0x00527f50),(LPVOID)0x0,0,
                                (LPDWORD)&local_6c);
    iVar1 = bea_vcall<uint32_t>(DAT_0089bec8, 0x0, DAT_0089bec8,&DAT_0060c08c,&local_70);
    if (-1 < iVar1) {
      bea_vcall<uint32_t>(piVar3, 0xc, piVar3,2,&local_70);
    }
    bea_vcall<uint32_t>(piVar3, 0x8, piVar3);
    this_local = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x22f0), bea_arg(0), bea_arg(&DAT_00662b2c), bea_arg(0));
    if (this_local == (void *)0x0) {
      DAT_0089bfd4 = 0;
    }
    else {
      DAT_0089bfd4 = FUN_005245a0(bea_arg(this_local));
    }
    puVar2 = &DAT_0089bed4;
    for (iVar1 = 0x40; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_0089bed0 = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005282b0, ap_005282b0));
