// auto-ported from 0042ee90_FUN_0042ee90.c (FUN_0042ee90, 305 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008553fc GLOBAL_AT(int, 0x008553fc)
#define s_Fenrir_00625848 ((char*)0x00625848)
#define s_Fenrir_Main_Gun_00624890 ((char*)0x00624890)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef uint32_t (BEA_THISCALL* FUN_0042efd0_t)(uint32_t);
static const bea_guard<FUN_0042efd0_t> FUN_0042efd0 = {(FUN_0042efd0_t)0x0042efd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static uint32_t BEA_CDECL ap_0042ee90(char *param_1)
{
  int iVar1;
  char cVar2;
  void *this_local;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puStack_8;
  undefined4 local_4;
  local_4 = 0xffffffff;
  this_local = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1ac), bea_arg(0xf), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x971));
  local_4 = 0;
  if (this_local == (void *)0x0) {
    this_local = (void *)0x0;
  }
  else {
    FUN_004e5840(bea_arg((void *)((int)this_local + 0x3c)));
    (*(uint8_t*)((char*)&local_4 + 0)) = 1;
    FUN_004e5840(bea_arg((void *)((int)this_local + 0x4c)));
    (*(uint8_t*)((char*)&local_4 + 0)) = 2;
    FUN_004e5840(bea_arg((void *)((int)this_local + 0x5c)));
    (*(uint8_t*)((char*)&local_4 + 0)) = 3;
    FUN_004e5840(bea_arg((void *)((int)this_local + 0x6c)));
    iVar3 = 0;
    local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),4);
    cVar2 = *param_1;
    while (BEA_LOOP_GUARD((cVar2 != '\0'))) {
      iVar1 = iVar3 + 1;
      iVar3 = iVar3 + 1;
      cVar2 = param_1[iVar1];
    }
    uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + 1), bea_arg(0xf), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x657));
    *(undefined4 *)((int)this_local + 0xb0) = uVar4;
    iVar3 = 0;
    cVar2 = *param_1;
    while (BEA_LOOP_GUARD((cVar2 != '\0'))) {
      iVar3 = iVar3 + 1;
      *(char *)(*(int *)((int)this_local + 0xb0) + -1 + iVar3) = cVar2;
      cVar2 = param_1[iVar3];
    }
    *(undefined1 *)(*(int *)((int)this_local + 0xb0) + iVar3) = 0;
    FUN_0042efd0(bea_arg(this_local));
    iVar3 = FUN_00568390(bea_arg(s_Fenrir_Main_Gun_00624890), bea_arg(param_1));
    if ((iVar3 == 0) || (iVar3 = FUN_00568390(bea_arg(s_Fenrir_00625848), bea_arg(param_1)), iVar3 == 0)) {
      *(undefined4 *)((int)this_local + 0x1a4) = 1;
    }
  }
  local_4 = 0xffffffff;
  return FUN_004e5b20(bea_arg(DAT_008553fc), bea_arg(this_local));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042ee90, ap_0042ee90));
