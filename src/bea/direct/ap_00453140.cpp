// hand-ported from 00453140_FUN_00453140.c (FUN_00453140, 526 bytes)
// @hand-fixed 2026-10-29 param_1 is an int (switch through the jump table at 0x453183 on `mov ebx,[esp+0x24]`, Ghidra showed float cases as denormals); param_2 is a float whose slot is reused for fVar1 = (1-p2)^2*3000 (fstp at 0x453223) and later for the angle (0x453291/0x4532ae), param_1's slot for fVar2 and the x position (0x453253, 0x45329e): separate memory floats here; float arguments passed as their bits (pushes at 0x45325b-0x45327a, 0x4532df-0x45330e, 0x453321-0x45333a)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_0089be58 GLOBAL_AT(int, 0x0089be58)
#define DAT_0089be64 GLOBAL_AT(int, 0x0089be64)
#define DAT_0089d950 GLOBAL_AT(int, 0x0089d950)
#define DAT_0089d840 GLOBAL_AT(uint32_t, 0x0089d840)
#define DAT_008a9570 GLOBAL_AT(float, 0x008a9570)
typedef uint32_t (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_CDECL* FUN_00524830_t)(uint32_t);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};
typedef int (BEA_THISCALL* FUN_0044dea0_t)(uint32_t);
static const bea_guard<FUN_0044dea0_t> FUN_0044dea0 = {(FUN_0044dea0_t)0x0044dea0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef uint32_t (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, int *);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef uint32_t (BEA_CDECL* FUN_004693d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004693d0_t> FUN_004693d0 = {(FUN_004693d0_t)0x004693d0};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                                              uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};
typedef uint32_t (BEA_CDECL* FUN_00469390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00469390_t> FUN_00469390 = {(FUN_00469390_t)0x00469390};

static inline uint32_t bits_of(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }

static void BEA_STDCALL ap_00453140(int param_1, float param_2)
{
  bool bVar3;
  uint32_t uVar4;
  uint32_t self;
  int iVar5;
  int local_10[2];            // [esp+8] / [esp+0xc]: 0x540680 writes both
  volatile float fVar1;       // param_2's slot after 0x453223
  volatile float fVar2;       // param_1's slot after 0x453253
  volatile float x;           // param_1's slot after 0x45329e
  volatile uint32_t ang;      // param_2's slot after 0x453291 / 0x4532ae
  uint32_t code;
  float10 d;
  int m;

  if (DAT_0089be58 != 0) {
    return;
  }
  if ((DAT_0089be64 != 0) && (DAT_0089d950 == 0xf)) {
    return;
  }
  bVar3 = false;
  uVar4 = FUN_004f7bf0(0x00629098);
  switch ((uint32_t)param_1) {
  case 0:
    uVar4 = FUN_00524830(0x2b);
    break;
  case 1:
    uVar4 = FUN_00524830(0x2c);
    bVar3 = true;
    break;
  case 2:
    uVar4 = FUN_00524830(0x2d);
    bVar3 = true;
    break;
  case 3:
  case 6:
    uVar4 = FUN_00524830(0x30);
    bVar3 = true;               // 0x4531dc: 1 <= p1 <= 3 or p1 == 6
    break;
  case 4:
    uVar4 = FUN_00524830(0x2e);
    break;
  case 5:
    uVar4 = FUN_00524830(0x2f);
    break;
  default:
    if ((0 < param_1) && ((param_1 <= 3) || (param_1 == 6))) {
      bVar3 = true;
    }
    break;
  }
  iVar5 = FUN_0044dea0(0x00675688);
  if (iVar5 != 0) {
    return;
  }
  d = (float10)1.0f - (float10)param_2;
  fVar1 = (float)(d * d * (float10)3000.0f);
  self = FUN_00515a70(0x0088a0a8, 1);
  FUN_00540680(self, uVar4, local_10);
  if (bVar3) {
    fVar2 = (float)((float10)6.0f - (float10)fVar1);
  }
  else {
    fVar2 = (float)(((float10)634.0f - (float10)local_10[0]) + (float10)fVar1);
  }
  FUN_004693d0(bits_of(fVar2), 0x43e38000,
               bits_of((float)((float10)local_10[0] + (float10)fVar2)),
               bits_of((float)((float10)local_10[1] + (float10)455.0f)));
  if (bVar3) {
    x = (float)((float10)fVar2 + (float10)16.0f);
    ang = 0x40490fdb;
    code = 0x2e;
  }
  else {
    x = (float)((float10)fVar1 + (float10)618.0f);
    ang = 0;
    code = 0x2c;
  }
  m = (int)(longlong)ROUND(DAT_008a9570);     // fistp qword, low dword
  if (m % 64 < 0x32) {
    FUN_005563d0(bits_of(x), 0x43e38000, 0x3dcccccd, DAT_0089d840, 0xffffffff, 0x3f800000, 0x3f800000, 4,
                 0, 0x3f800000, (uint32_t)ang);
  }
  FUN_00469390(bits_of((float)((float10)x - (float10)40.0f)), 0x43cf8000,
               bits_of((float)((float10)x + (float10)40.0f)), 0x43f78000, code);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00453140, ap_00453140));
