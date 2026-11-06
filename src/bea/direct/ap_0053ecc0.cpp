// auto-ported from 0053ecc0_FUN_0053ecc0.c (FUN_0053ecc0, 840 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall, 1 stack arg (ret 4), returns 0; every callee the asm calls with ECX loaded is called as thiscall with that ECX and its pushes (0x5158c0/0x5158e0/0x515ab0/0x515a70 on 0x88a0a8, 0x513930/0x513820/0x513bc0 on 0x855bb0, 0x4b93f0 on [0x8a9d88], 0x48f620 on [0x8a9d94] (Ghidra lost its ECX and arg), 0x4d11d0 on [0x8a9d8c], 0x4714c0/0x470650/0x46f2c0 on 0x8a9a98, 0x40c640 on 0x663498 (bare ret; Ghidra's unaff_EDI arg does not exist)); `push ebp` at 0x53ecfb is a register save, 0x487bc0 takes none; 0x540640 gets (0, 40.0f, -1, 0x4f7bf0("Render queue active"), 0, 0, 1.0f) pushed around the two inner calls; 0x5015c0 takes no stack args (it reads none: Ghidra's in_stack_fffffff8/fffffffc are the stale locals); slot 0x1c tested as AL
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_THISCALL* T0_t)(uint32_t);
typedef uint32_t (BEA_THISCALL* T1_t)(uint32_t, uint32_t);
typedef uint32_t (BEA_THISCALL* T2_t)(uint32_t, uint32_t, uint32_t);
typedef uint32_t (BEA_THISCALL* T3_t)(uint32_t, uint32_t, uint32_t, uint32_t);
typedef uint32_t (BEA_THISCALL* T7_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
typedef uint32_t (BEA_CDECL* C0_t)(void);
typedef uint32_t (BEA_CDECL* C1_t)(uint32_t);
static const bea_guard<T0_t> FUN_005158c0 = {(T0_t)0x005158c0};
static const bea_guard<T1_t> FUN_00515ab0 = {(T1_t)0x00515ab0};
static const bea_guard<T0_t> FUN_00487bc0 = {(T0_t)0x00487bc0};
static const bea_guard<T1_t> FUN_0046f2c0 = {(T1_t)0x0046f2c0};
static const bea_guard<T1_t> FUN_00487d10 = {(T1_t)0x00487d10};
static const bea_guard<T3_t> FUN_00513930 = {(T3_t)0x00513930};
static const bea_guard<T3_t> FUN_00513820 = {(T3_t)0x00513820};
static const bea_guard<T2_t> FUN_00513bc0 = {(T2_t)0x00513bc0};
static const bea_guard<T2_t> FUN_00550d50 = {(T2_t)0x00550d50};
static const bea_guard<T1_t> FUN_004b93f0 = {(T1_t)0x004b93f0};
static const bea_guard<T1_t> FUN_0048f620 = {(T1_t)0x0048f620};
static const bea_guard<T0_t> FUN_004d11d0 = {(T0_t)0x004d11d0};
static const bea_guard<C1_t> FUN_00551480 = {(C1_t)0x00551480};
static const bea_guard<C1_t> FUN_004f7bf0 = {(C1_t)0x004f7bf0};
static const bea_guard<T1_t> FUN_00515a70 = {(T1_t)0x00515a70};
static const bea_guard<T7_t> FUN_00540640 = {(T7_t)0x00540640};
static const bea_guard<T0_t> FUN_00488090 = {(T0_t)0x00488090};
static const bea_guard<T0_t> FUN_00482050 = {(T0_t)0x00482050};
static const bea_guard<C0_t> FUN_005140e0 = {(C0_t)0x005140e0};
static const bea_guard<C0_t> FUN_00500d60 = {(C0_t)0x00500d60};
static const bea_guard<T0_t> FUN_00549290 = {(T0_t)0x00549290};
static const bea_guard<T0_t> FUN_00470650 = {(T0_t)0x00470650};
static const bea_guard<T0_t> FUN_004714c0 = {(T0_t)0x004714c0};
static const bea_guard<T0_t> FUN_0040c640 = {(T0_t)0x0040c640};
static const bea_guard<T0_t> FUN_00472f10 = {(T0_t)0x00472f10};
static const bea_guard<T0_t> FUN_005158e0 = {(T0_t)0x005158e0};
static const bea_guard<C0_t> FUN_00501540 = {(C0_t)0x00501540};
static const bea_guard<C0_t> FUN_005015c0 = {(C0_t)0x005015c0};

#define B_9c68ac GLOBAL_AT(uint8_t, 0x009c68ac)
#define B_9c690d GLOBAL_AT(uint8_t, 0x009c690d)
#define B_9c68ad GLOBAL_AT(uint8_t, 0x009c68ad)
#define B_9c6910 GLOBAL_AT(uint8_t, 0x009c6910)

static uint32_t BEA_THISCALL ap_0053ecc0(void * this_, int * param_1)
{
  char *s = (char *)this_;
  const uint32_t p1 = (uint32_t)(uintptr_t)param_1;
  FUN_005158c0(0x0088a0a8u);
  FUN_00515ab0(0x0088a0a8u, p1);
  *(int *)(s + 0x474) = *param_1;
  if (GLOBAL_AT(uint8_t, 0x0089d680) == 0) {
    FUN_00487bc0(0x008aa4e8u);
    FUN_00515ab0(0x0088a0a8u, p1);
    *(int *)(s + 0x474) = *param_1;
    int count = GLOBAL_AT(int, 0x0089c9ac);
    int found = 0;
    if (count > 0) {
      int *slot = (int *)(uintptr_t)0x0089ce08;
      int i = 0;
      do {
        if (*slot != 0) {
          uint32_t obj = FUN_0046f2c0(0x008a9a98u, (uint32_t)i);
          if ((uint8_t)bea_vcall<uint32_t>(obj, 0x1c) != 0) {
            found = 1;
          }
        }
        i = i + 1;
        slot = slot + 1;
      } while (i < count);
      if (found != 0) {
        FUN_00487d10(0x008aa4e8u, p1);
      }
    }
    B_9c68ac = 0;
    B_9c690d = 1;
    B_9c68ad = 0;
    B_9c6910 = 1;
    FUN_00513930(0x00855bb0u, 0u, 1u, 3u);
    FUN_00513930(0x00855bb0u, 0u, 2u, 3u);
    FUN_00513820(0x00855bb0u, 0u, 1u, 4u);
    FUN_00513820(0x00855bb0u, 0u, 3u, 0u);
    FUN_00513bc0(0x00855bb0u, 0x13u, 5u);
    FUN_00513bc0(0x00855bb0u, 0x14u, 6u);
    FUN_00550d50(0x009c65c0u, 0u, 0u);
    uint32_t o88 = GLOBAL_AT(uint32_t, 0x008a9d88);
    GLOBAL_AT(uint8_t, 0x00679b40) = 1;
    FUN_004b93f0(o88, p1);
    FUN_0048f620(GLOBAL_AT(uint32_t, 0x008a9d94), p1);
    FUN_004d11d0(GLOBAL_AT(uint32_t, 0x008a9d8c));
    GLOBAL_AT(uint8_t, 0x00679b40) = 0;
    B_9c68ac = 0;
    B_9c690d = 1;
    B_9c68ad = 0;
    B_9c6910 = 1;
    FUN_00513930(0x00855bb0u, 0u, 1u, 3u);
    FUN_00513930(0x00855bb0u, 0u, 2u, 3u);
    FUN_00551480(0u);
    FUN_00513930(0x00855bb0u, 0u, 6u, 2u);
    FUN_00513930(0x00855bb0u, 0u, 5u, 2u);
    FUN_00513bc0(0x00855bb0u, 0x17u, 4u);
    FUN_00550d50(0x009c65c0u, 0u, 0u);
  }
  if (GLOBAL_AT(uint8_t, 0x009c7490) != 0) {
    uint32_t txt = FUN_004f7bf0(0x006505fcu);              // "Render queue active"
    uint32_t q = FUN_00515a70(0x0088a0a8u, 2u);
    FUN_00540640(q, 0u, 0x42200000u, 0xffffffffu, txt, 0u, 0u, 0x3f800000u);
  }
  FUN_00513930(0x00855bb0u, 0u, 1u, 1u);
  FUN_00513930(0x00855bb0u, 0u, 2u, 1u);
  B_9c68ac = 1;
  B_9c690d = 1;
  B_9c68ad = 1;
  B_9c6910 = 1;
  FUN_00488090(0x008aa4e8u);
  int t = *(int *)(s + 0x4cc);
  if (t > 0) {
    *(int *)(s + 0x4cc) = t - 0xf;
  }
  t = *(int *)(s + 0x4d0);
  if (t != -1) {
    *(int *)(s + 0x4cc) = t;
    *(int *)(s + 0x4d0) = -1;
  }
  FUN_00482050(0x008aa4e8u);
  FUN_005140e0();
  FUN_00500d60();
  B_9c68ad = 1;
  B_9c6910 = 1;
  if ((*(uint8_t *)(s + 0x4b4) & 0x40) != 0) {
    FUN_00549290(0x009c3df0u);
  }
  FUN_00470650(0x008a9a98u);
  FUN_004714c0(0x008a9a98u);
  B_9c68ac = 0;
  B_9c690d = 1;
  FUN_0040c640(0x00663498u);
  uint8_t skip = GLOBAL_AT(uint8_t, 0x0089d680);
  B_9c68ac = 1;
  B_9c690d = 1;
  if (skip == 0) {
    FUN_00472f10(0x00679fa8u);
  }
  FUN_005158e0(0x0088a0a8u);
  *(int *)(s + 0xafc) = 0;
  FUN_00501540();
  if (GLOBAL_AT(uint8_t, 0x0089d688) != 0) {
    FUN_005015c0();
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053ecc0, ap_0053ecc0));
