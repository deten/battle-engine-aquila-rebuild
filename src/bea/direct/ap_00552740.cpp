// auto-ported from 00552740_FUN_00552740.c (FUN_00552740, 184 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
#define DAT_00652230 GLOBAL_AT(int, 0x00652230)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static void BEA_THISCALL ap_00552740(void * this_)
{
  int iVar1;
  int iVar2;
  char cVar3;
  int *this_00;
  undefined4 *puVar4;
  
  if (DAT_0089d680 == '\0') {
    this_00 = (int *)((int)this_ + 0x10c);
    puVar4 = (undefined4 *)((int)this_ + 0x50c);
    for (iVar2 = *(int *)((int)this_ + 0x5bc); BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
      if (*this_00 == 0) {
        *puVar4 = this_00;
        puVar4 = puVar4 + 1;
      }
      else {
        *(undefined1 *)((int)this_00 + 6) = 1;
        cVar3 = *(char *)((int)this_00 + 5);
        if (cVar3 == '\0') {
          *(undefined1 *)(this_00 + 1) = 0x20;
        }
        else if (cVar3 == '\x01') {
          cVar3 = (char)this_00[1] + -2;
          *(char *)(this_00 + 1) = cVar3;
          if (cVar3 < '\x02') {
            FUN_00401000(bea_arg(this_00), bea_arg(0));
            *puVar4 = this_00;
            puVar4 = puVar4 + 1;
          }
        }
        else if (cVar3 == '\x02') {
          iVar1 = (int)(char)this_00[1] + DAT_00652230 * 2;
          if (iVar1 < 0x20) {
            *(char *)(this_00 + 1) = (char)iVar1;
          }
          else {
            *(undefined1 *)(this_00 + 1) = 0x20;
            *(undefined1 *)((int)this_00 + 5) = 0;
          }
        }
      }
      this_00 = this_00 + 8;
    }
    *(int *)((int)this_ + 0x58c) = (int)puVar4 + (-0x50c - (int)this_) >> 2;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00552740, ap_00552740));
