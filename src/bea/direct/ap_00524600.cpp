// auto-ported from 00524600_FUN_00524600.c (FUN_00524600, 152 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char IAT;
typedef int (BEA_CDECL* FUN_0055e4a3_t)(uint32_t);
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};
typedef uint32_t (BEA_CDECL* ogg_stream_clear_t)(...);
#define ogg_stream_clear (*(ogg_stream_clear_t*)0x005d8378)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_sync_clear_t)(...);
#define ogg_sync_clear (*(ogg_sync_clear_t*)0x005d8350)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_block_clear_t)(...);
#define vorbis_block_clear (*(vorbis_block_clear_t*)0x005d839c)   /* VORBIS.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_comment_clear_t)(...);
#define vorbis_comment_clear (*(vorbis_comment_clear_t*)0x005d83a0)   /* VORBIS.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_dsp_clear_t)(...);
#define vorbis_dsp_clear (*(vorbis_dsp_clear_t*)0x005d83a4)   /* VORBIS.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_info_clear_t)(...);
#define vorbis_info_clear (*(vorbis_info_clear_t*)0x005d8390)   /* VORBIS.DLL import, via the IAT */

static void BEA_THISCALL ap_00524600(void * this_)
{
  *(undefined ***)this_ = ((void*)0x005e4a44);
  if (*(int *)((int)this_ + 0x2008) != 0) {
    ogg_stream_clear((int)this_ + 0x2030);
    *(undefined4 *)((int)this_ + 0x22ec) = 0;
    vorbis_block_clear((int)this_ + 0x2268);
    vorbis_dsp_clear((int)this_ + 0x21f8);
    vorbis_comment_clear((int)this_ + 0x21e8);
    vorbis_info_clear((int)this_ + 0x21c8);
    ogg_sync_clear((int)this_ + 0x2014);
    FUN_0055e4a3(bea_arg(*(undefined4 *)((int)this_ + 0x2008)));
    *(undefined4 *)((int)this_ + 0x2008) = 0;
    if (*(int *)((int)this_ + 0x200c) != 0) {
      *(undefined4 *)((int)this_ + 0x200c) = 0;
      *(undefined4 *)((int)this_ + 0x2010) = 0;
    }
  }
  *(undefined ***)this_ = ((void*)0x005dfc6c);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00524600, ap_00524600));
