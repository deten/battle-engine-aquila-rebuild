// auto-ported from 0041c330_FUN_0041c330.c (FUN_0041c330, 281 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 param_2 is an integer world id, compared as a dword (cmp [edx], esi at 0041c349/0041c385) and printed as such, not a float; its stack slot is then reused for the node's float at +0x3c (0041c3d4) and for the 2-byte string handed to 0x4f7bf0 (0041c42a/0041c42f); NaN takes the `== 1.0` branch like `test ah, 0x40` (0041c3e4); floor's result is stored with fistp qword (llrint); returns param_1 in EAX (0041c43b)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00624184 GLOBAL_AT(int, 0x00624184)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_WARNING__Could_not_find_career_n_006241b4 ((char*)0x006241b4)
#define s_Error__no_career_node_for_world___006242ec ((char*)0x006242ec)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int *, char *, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint8_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef float10 (BEA_CDECL* floor_t)(double);
// called through the plain pointer: bea_guard's bea_pass rounds a double argument to float
static const floor_t floor_0055dfe7 = (floor_t)0x0055dfe7;

static uint8_t * BEA_CDECL ap_0041c330(uint8_t *param_1, uint32_t param_2)
{
  uint32_t slot = param_2;   // the original's param_2 stack slot, reused below
  uint8_t ch;
  int i;
  uint8_t *node = 0;
  bool found = false;

  for (i = 0; i < DAT_00624184; i++) {
    if (*(uint32_t *)(0x00660634 + i * 0x40) == param_2) {
      node = (uint8_t *)(0x00660624 + i * 0x40);
      found = true;
      break;
    }
  }
  if (!found) {
    FUN_00441740(&DAT_0066f580, s_WARNING__Could_not_find_career_n_006241b4, param_2);
    node = 0;
  }
  if (*(volatile int *)(node + 4) != 1) {
    ch = 0x45;                                           // 0041c3fe
    goto LAB_0041c426;
  }
  for (i = 0; i < DAT_00624184; i++) {
    if (*(uint32_t *)(0x00660634 + i * 0x40) == param_2) {
      uint8_t *n2 = (uint8_t *)(0x00660624 + i * 0x40);
      if (n2 == 0) goto LAB_0041c3a4;
      slot = *(uint32_t *)(n2 + 0x3c);                   // 0041c3d1
      float x = bea_fcast<float>(slot);
      if (x == 1.0f || x != x) {                         // fcomp; test ah, 0x40 (C3: equal or unordered)
        ch = 0x53;
        goto LAB_0041c426;
      }
      if (!(x > 0.0f)) {                                 // test ah, 0x41
        ch = 0x45;
        goto LAB_0041c426;
      }
      float10 f = floor_0055dfe7((double)((float10)x * (float10)4.0f));
      long long q = __builtin_llrintl(f);                // fistp qword (0041c417)
      ch = (uint8_t)(0x44 - (uint8_t)q);
      goto LAB_0041c426;
    }
  }
  FUN_00441740(&DAT_0066f580, s_WARNING__Could_not_find_career_n_006241b4, param_2);
LAB_0041c3a4:
  FUN_00441740(&DAT_0066f580, s_Error__no_career_node_for_world___006242ec, param_2);
  ch = 0x45;
LAB_0041c426:
  {
    uint8_t str[4];
    __builtin_memcpy(str, &slot, 4);                     // the slot's upper two bytes are left as they were
    str[0] = ch;
    str[1] = 0;
    uint8_t *r = FUN_004f7bf0(bea_arg(str));
    *param_1 = *r;
  }
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041c330, ap_0041c330));
