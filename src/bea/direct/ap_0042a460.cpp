// auto-ported from 0042a460_FUN_0042a460.c (FUN_0042a460, 144 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00622d9c GLOBAL_AT(int, 0x00622d9c)
#define s___s____s_00624ff8 ((char*)0x00624ff8)
#define s_Key_bindings___00625004 ((char*)0x00625004)
#define s___s____s_00624fec ((char*)0x00624fec)
typedef uint32_t (BEA_CDECL* FUN_0042b840_t)(int, undefined4, ...);
static const bea_guard<FUN_0042b840_t> FUN_0042b840 = {(FUN_0042b840_t)0x0042b840};

static undefined4 BEA_THISCALL ap_0042a460(void * this_)
{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *v0;
  char *v1;
  char *pcVar4;
  int local_4;
  
  FUN_0042b840(this_,s_Key_bindings___00625004);
  v0 = (char *)((int)this_ + 0xa3bc);
  v1 = (char *)((int)this_ + 0x23fc);
  local_4 = 0x100;
  do {
    iVar3 = -1;
    pcVar4 = v1 + -0x40;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    if (iVar3 != -2) {
      FUN_0042b840(this_,s___s____s_00624ff8,v0,v1 + -0x40);
    }
    iVar3 = -1;
    pcVar4 = v1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    if (iVar3 != -2) {
      FUN_0042b840(this_,s___s____s_00624fec,v0,v1);
    }
    v1 = v1 + 0x80;
    v0 = v0 + 0x10;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      uVar2 = FUN_0042b840(this_,&DAT_00622d9c);
      return uVar2;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042a460, ap_0042a460));
