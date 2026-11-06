// auto-ported from 004d28c0_FUN_004d28c0.c (FUN_004d28c0, 246 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (6 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define s_C__dev_ONSLAUGHT2_monitor_h_0062551c ((char*)0x0062551c)
#define s_C__dev_ONSLAUGHT2_Player_cpp_00631690 ((char*)0x00631690)
typedef uint32_t (BEA_THISCALL* FUN_004705e0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004705e0_t> FUN_004705e0 = {(FUN_004705e0_t)0x004705e0};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004d28c0(void * this_)
{
  int iVar1;
  undefined3 uVar2;
  undefined4 *puVar3;
  void *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  if (*(int *)((int)this_ + 0x1c) != 0) {
    *(undefined4 *)((int)this_ + 0x24) = 1;
    puVar3 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_Player_cpp_00631690), bea_arg(0x3a));
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar1 = *(int *)((int)this_ + 0x1c);
      *puVar3 = ((void*)0x005d9260);
      *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
      uVar2 = ((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu);
      (*(uint8_t*)((char*)&local_4 + 0)) = 2;
      *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
      puVar3[1] = iVar1;
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 4) == 0) {
          this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x5e), bea_arg(s_C__dev_ONSLAUGHT2_monitor_h_0062551c), bea_arg(0x18));
          (*(uint8_t*)((char*)&local_4 + 0)) = 3;
          if (this_00 == (void *)0x0) {
            this_00 = (void *)0x0;
          }
          else {
            FUN_004e5840(bea_arg(this_00));
          }
          *(void **)(iVar1 + 4) = this_00;
          uVar2 = ((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu);
        }
        *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(uVar2) & 0xffffffu) << 8);
        (*(uint8_t*)((char*)&local_4 + 0)) = 2;
        FUN_004e5a80(bea_arg(*(void **)(iVar1 + 4)), bea_arg(puVar3 + 1));
      }
      *puVar3 = ((void*)0x005dbb88);
    }
    local_4 = 0xffffffff;
    FUN_004705e0(bea_arg(&DAT_008a9a98), bea_arg(*(int *)((int)this_ + 0x2c) + -1), bea_arg(puVar3), bea_arg(1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d28c0, ap_004d28c0));
