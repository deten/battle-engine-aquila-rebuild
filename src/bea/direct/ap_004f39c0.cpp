// auto-ported from 004f39c0_vslot35.c (CThing::vslot35, 137 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CThing;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_C__dev_ONSLAUGHT2_thing_cpp_006331c0 ((char*)0x006331c0)
#define s_Warning__Trying_to_do_mesh_colli_0063317c ((char*)0x0063317c)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004f39c0(CThing * this_, undefined4 *param_1)
{
  undefined4 *puVar1;
  
  if (param_1[2] != -1) {
    if (*(int *)(this_ + 0x38) == 0) {
      puVar1 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x38), bea_arg(0xb), bea_arg(s_C__dev_ONSLAUGHT2_thing_cpp_006331c0), bea_arg(0x136));
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1[1] = 0;
        puVar1[10] = 0;
        puVar1[9] = ((void*)0x005dbf78);
        *puVar1 = ((void*)0x005df6d8);
      }
      *(undefined4 **)(this_ + 0x38) = puVar1;
    }
    if ((*(int *)(this_ + 0x30) == 0) && (param_1[6] == 2)) {
      FUN_00441740(&DAT_0066f580,s_Warning__Trying_to_do_mesh_colli_0063317c);
      param_1[6] = 1;
    }
    *param_1 = this_;
    bea_vcall<uint32_t>(*(int **)(this_ + 0x38), 0xc, param_1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f39c0, ap_004f39c0));
