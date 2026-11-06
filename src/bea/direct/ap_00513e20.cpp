// auto-ported from 00513e20_FUN_00513e20.c (FUN_00513e20, 109 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall, 1 stack arg (ret 4); the two indirect calls are COM (stdcall) calls on the D3D device at this+0x32ea0: slot 0x164 (SetFVF) with the vtable taken from the device read BEFORE 0x501ba0 (0x513e53) and the device re-read for the pushed this (0x513e5a), then slot 0x170 (SetVertexShader) with (device, [param_1+0x28]); both pop their own pushes; 0x501ba0 is thiscall on param_1 with no stack args; 0x4eba30 gets ECX = 0x83d248 and one pushed 0 (ret 4), so it is called as thiscall; its EAX is passed through
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_THISCALL* FUN_00501ba0_t)(void *);
static const bea_guard<FUN_00501ba0_t> FUN_00501ba0 = {(FUN_00501ba0_t)0x00501ba0};
typedef uint32_t (BEA_THISCALL* FUN_004eba30_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004eba30_t> FUN_004eba30 = {(FUN_004eba30_t)0x004eba30};
typedef uint32_t (BEA_STDCALL* Com2_t)(uint32_t, uint32_t);

static uint32_t BEA_THISCALL ap_00513e20(void * this_, void * param_1)
{
  char *s = (char *)this_;
  if ((param_1 != GLOBAL_AT(void *, 0x0088906c)) || (GLOBAL_AT(int, 0x00889068) != (int)0xfedcba98)) {
    GLOBAL_AT(void *, 0x0088906c) = param_1;
    GLOBAL_AT(int, 0x00889068) = (int)0xfedcba98;
    uint32_t *vt = *(uint32_t **)(uintptr_t)*(uint32_t *)(s + 0x32ea0);   // 0x513e53, before the call
    uint32_t a2 = FUN_00501ba0(param_1);
    const bea_guard<Com2_t> SetFVF = {(Com2_t)vt[0x164 / 4]};
    SetFVF(*(uint32_t *)(s + 0x32ea0), a2);
    uint32_t dev = *(uint32_t *)(s + 0x32ea0);
    uint32_t sh = *(uint32_t *)((char *)param_1 + 0x28);
    const bea_guard<Com2_t> SetVS = {(Com2_t)(*(uint32_t **)(uintptr_t)dev)[0x170 / 4]};
    SetVS(dev, sh);
  }
  return FUN_004eba30((uint32_t)0x0083d248, 0u);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513e20, ap_00513e20));
