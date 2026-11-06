// auto-ported from 004f2190_FUN_004f2190.c (FUN_004f2190, 64 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_french_00632d7c ((char*)0x00632d7c)
#define s_italian_00632d8c ((char*)0x00632d8c)
#define s_spanish_00632d84 ((char*)0x00632d84)
#define s_german_00632d94 ((char*)0x00632d94)
#define s_english_00632d74 ((char*)0x00632d74)
#define s_ERROR__unkown_language__d_00632d9c ((char*)0x00632d9c)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static char * BEA_THISCALL ap_004f2190(void * this_)
{
  switch(*(int *)((int)this_ + 0x1c)) {
  case 0:
    break;
  case 1:
    return (char *)(s_french_00632d7c);
  case 2:
    return (char *)(s_german_00632d94);
  case 3:
    return (char *)(s_spanish_00632d84);
  case 4:
    return (char *)(s_italian_00632d8c);
  default:
    FUN_00441740(&DAT_0066f580,s_ERROR__unkown_language__d_00632d9c,*(int *)((int)this_ + 0x1c));
  }
  return (char *)(s_english_00632d74);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f2190, ap_004f2190));
