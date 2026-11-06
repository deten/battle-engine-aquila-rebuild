// auto-ported from 004fc6e0_FUN_004fc6e0.c (FUN_004fc6e0, 1231 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00633b64 GLOBAL_AT(int, 0x00633b64)
#define DAT_00633b5c GLOBAL_AT(int, 0x00633b5c)
#define DAT_00633b54 GLOBAL_AT(int, 0x00633b54)
#define DAT_00633b4c GLOBAL_AT(int, 0x00633b4c)
#define DAT_00633b44 GLOBAL_AT(int, 0x00633b44)
#define DAT_00633b3c GLOBAL_AT(int, 0x00633b3c)
#define DAT_00633b34 GLOBAL_AT(int, 0x00633b34)
#define DAT_00633b2c GLOBAL_AT(int, 0x00633b2c)
#define DAT_00633b24 GLOBAL_AT(int, 0x00633b24)
#define DAT_00633afc GLOBAL_AT(int, 0x00633afc)
#define DAT_00633b04 GLOBAL_AT(int, 0x00633b04)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_Component_006248d4 ((char*)0x006248d4)
#define s_Engine_00622cec ((char*)0x00622cec)
#define s_WaypointB_00633c1c ((char*)0x00633c1c)
#define s_Activation_00633be0 ((char*)0x00633be0)
#define s_SpawnerC_00633c4c ((char*)0x00633c4c)
#define s_SpawnerA_00633c64 ((char*)0x00633c64)
#define s_Smoke_00633bd8 ((char*)0x00633bd8)
#define s_WaypointA_00633c28 ((char*)0x00633c28)
#define s_WaypointE_00633bf8 ((char*)0x00633bf8)
#define s_SpawnerE_00633c34 ((char*)0x00633c34)
#define s_SpawnerB_00633c58 ((char*)0x00633c58)
#define s_Trail_00622d14 ((char*)0x00622d14)
#define s_Charge_00633bd0 ((char*)0x00633bd0)
#define s_Thruster_00623080 ((char*)0x00623080)
#define s_SpawnerD_00633c40 ((char*)0x00633c40)
#define s_WaypointD_00633c04 ((char*)0x00633c04)
#define s_WaypointC_00633c10 ((char*)0x00633c10)
#define s_Serious_problem___unknown_emitte_00633ba8 ((char*)0x00633ba8)
#define s_Doorstop_00633bec ((char*)0x00633bec)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static void BEA_THISCALL ap_004fc6e0(int this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  switch(param_1) {
  case 1:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, &DAT_00633b64,param_2,param_3,param_4,param_5,param_6);
    return;
  case 2:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, &DAT_00633b5c,param_2,param_3,param_4,param_5,param_6);
    return;
  case 3:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, &DAT_00633b54,param_2,param_3,param_4,param_5,param_6);
    return;
  case 4:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, &DAT_00633b4c,param_2,param_3,param_4,param_5,param_6);
    return;
  case 5:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, &DAT_00633b44,param_2,param_3,param_4,param_5,param_6);
    return;
  case 6:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, &DAT_00633b3c,param_2,param_3,param_4,param_5,param_6);
    return;
  case 7:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, &DAT_00633b34,param_2,param_3,param_4,param_5,param_6);
    return;
  case 8:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, &DAT_00633b2c,param_2,param_3,param_4,param_5,param_6);
    return;
  case 9:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, &DAT_00633b24,param_2,param_3,param_4,param_5,param_6);
    return;
  case 10:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_SpawnerA_00633c64,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0xb:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_SpawnerB_00633c58,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0xc:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_SpawnerC_00633c4c,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0xd:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_SpawnerD_00633c40,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0xe:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_SpawnerE_00633c34,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0xf:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_WaypointA_00633c28,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0x10:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_WaypointB_00633c1c,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0x11:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_WaypointC_00633c10,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0x12:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_WaypointD_00633c04,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0x13:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_WaypointE_00633bf8,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0x14:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_Component_006248d4,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0x15:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, &DAT_00633afc,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0x16:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, &DAT_00633b04,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0x17:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_Engine_00622cec,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0x18:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_Trail_00622d14,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0x19:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_Smoke_00633bd8,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0x1a:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_Thruster_00623080,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0x1b:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_Doorstop_00633bec,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0x1c:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_Activation_00633be0,param_2,param_3,param_4,param_5,param_6);
    return;
  case 0x1d:
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, s_Charge_00633bd0,param_2,param_3,param_4,param_5,param_6);
    return;
  default:
    FUN_00441740(&DAT_0066f580,s_Serious_problem___unknown_emitte_00633ba8);
    return;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fc6e0, ap_004fc6e0));
