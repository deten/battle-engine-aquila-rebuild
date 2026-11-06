// auto-ported from 00558870_FUN_00558870.c (FUN_00558870, 116 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d9b0 GLOBAL_AT(int, 0x0083d9b0)
#define s_TextureDump_006528f8 ((char*)0x006528f8)
#define s_TextureDump__d_tga_006528e4 ((char*)0x006528e4)
typedef char* (BEA_CDECL* FUN_004f7c70_t)(uint32_t);
static const bea_guard<FUN_004f7c70_t> FUN_004f7c70 = {(FUN_004f7c70_t)0x004f7c70};
typedef uint32_t (BEA_THISCALL* FUN_005586e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005586e0_t> FUN_005586e0 = {(FUN_005586e0_t)0x005586e0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static BOOL BEA_CDECL ap_00558870(void)
{
  char cVar1;
  void *this_local;
  LPCSTR lpPathName;
  BOOL BVar2;
  int iVar3;
  int v0;
  char *pcVar4;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  this_local = DAT_0083d9b0;
  v0 = 0;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  lpPathName = (LPCSTR)FUN_004f7c70(bea_arg(s_TextureDump_006528f8));
  BVar2 = CreateDirectoryA(lpPathName,lpSecurityAttributes);
  do {
    if (this_local == (void *)0x0) {
      return BVar2;
    }
    iVar3 = -1;
    BVar2 = 0;
    pcVar4 = (char *)((int)this_local + 8);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    if ((iVar3 == -2) || (*(char *)((int)this_local + 8) == '*')) {
      FUN_0055de9b(local_100,s_TextureDump__d_tga_006528e4,v0);
      BVar2 = FUN_005586e0(bea_arg(this_local), bea_arg(local_100));
      v0 = v0 + 1;
    }
    this_local = *(void **)((int)this_local + 0xa0);
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00558870, ap_00558870));
