// auto-ported from 00524180_FUN_00524180.c (FUN_00524180, 1053 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char IAT;
#define s_Corrupt_or_missing_data_in_bitst_006401c0 ((char*)0x006401c0)
#define s_Done__006401b8 ((char*)0x006401b8)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef undefined4 (BEA_THISCALL* FUN_00523df0_t)(uint32_t);
static const bea_guard<FUN_00523df0_t> FUN_00523df0 = {(FUN_00523df0_t)0x00523df0};
typedef int (BEA_CDECL* FUN_0055e4a3_t)(uint32_t);
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};
typedef void * (BEA_CDECL* FUN_0055ed50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055ed50_t> FUN_0055ed50 = {(FUN_0055ed50_t)0x0055ed50};
typedef unsigned int (BEA_CDECL* FUN_0055f4d7_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055f4d7_t> FUN_0055f4d7 = {(FUN_0055f4d7_t)0x0055f4d7};
typedef uint32_t (BEA_CDECL* ogg_page_eos_t)(...);
#define ogg_page_eos (*(ogg_page_eos_t*)0x005d836c)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_stream_clear_t)(...);
#define ogg_stream_clear (*(ogg_stream_clear_t*)0x005d8378)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_stream_packetout_t)(...);
#define ogg_stream_packetout (*(ogg_stream_packetout_t*)0x005d8368)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_stream_pagein_t)(...);
#define ogg_stream_pagein (*(ogg_stream_pagein_t*)0x005d8360)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_sync_buffer_t)(...);
#define ogg_sync_buffer (*(ogg_sync_buffer_t*)0x005d8358)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_sync_clear_t)(...);
#define ogg_sync_clear (*(ogg_sync_clear_t*)0x005d8350)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_sync_init_t)(...);
#define ogg_sync_init (*(ogg_sync_init_t*)0x005d835c)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_sync_pageout_t)(...);
#define ogg_sync_pageout (*(ogg_sync_pageout_t*)0x005d8374)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_sync_wrote_t)(...);
#define ogg_sync_wrote (*(ogg_sync_wrote_t*)0x005d8354)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_block_clear_t)(...);
#define vorbis_block_clear (*(vorbis_block_clear_t*)0x005d839c)   /* VORBIS.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_comment_clear_t)(...);
#define vorbis_comment_clear (*(vorbis_comment_clear_t*)0x005d83a0)   /* VORBIS.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_dsp_clear_t)(...);
#define vorbis_dsp_clear (*(vorbis_dsp_clear_t*)0x005d83a4)   /* VORBIS.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_info_clear_t)(...);
#define vorbis_info_clear (*(vorbis_info_clear_t*)0x005d8390)   /* VORBIS.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_synthesis_t)(...);
#define vorbis_synthesis (*(vorbis_synthesis_t*)0x005d83b0)   /* VORBIS.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_synthesis_blockin_t)(...);
#define vorbis_synthesis_blockin (*(vorbis_synthesis_blockin_t*)0x005d83a8)   /* VORBIS.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_synthesis_pcmout_t)(...);
#define vorbis_synthesis_pcmout (*(vorbis_synthesis_pcmout_t*)0x005d83ac)   /* VORBIS.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_synthesis_read_t)(...);
#define vorbis_synthesis_read (*(vorbis_synthesis_read_t*)0x005d8388)   /* VORBIS.DLL import, via the IAT */

static int BEA_THISCALL ap_00524180(void * this_, undefined4 *param_1, uint param_2)
{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_c;
  int local_8;
  
  local_c = 0;
  if ((*(int *)((int)this_ + 0x22ec) != 0) && (*(int *)((int)this_ + 0x22ec) == 2)) goto LAB_00524397;
  ogg_sync_init((int)this_ + 0x2014);
  do {
    iVar2 = FUN_00523df0(bea_arg(this_));
    if (iVar2 == -1) {
      return -1;
    }
    if (iVar2 == 1) {
      ogg_sync_clear((int)this_ + 0x2014);
      CRenderThing__vslot3(s_Done__006401b8);
      *(undefined4 *)((int)this_ + 0x22ec) = 0;
      FUN_0055e4a3(bea_arg(*(undefined4 *)((int)this_ + 0x2008)));
      *(undefined4 *)((int)this_ + 0x2008) = 0;
      return local_c;
    }
    while (BEA_LOOP_GUARD((*(int *)((int)this_ + 0x22e0) == 0))) {
      while(BEA_LOOP_GUARD(( true ))) {
        if (*(int *)((int)this_ + 0x22e0) != 0) goto LAB_0052450f;
        iVar2 = ogg_sync_pageout((int)this_ + 0x2014,(int)this_ + 0x2198);
        *(int *)((int)this_ + 0x22e8) = iVar2;
        if (iVar2 == 0) break;
        if (iVar2 < 0) {
          CRenderThing__vslot3(s_Corrupt_or_missing_data_in_bitst_006401c0);
        }
        else {
          ogg_stream_pagein((int)this_ + 0x2030,(int)this_ + 0x2198);
          while(BEA_LOOP_GUARD(( true ))) {
            iVar2 = ogg_stream_packetout((int)this_ + 0x2030,(int)this_ + 0x21a8);
            *(int *)((int)this_ + 0x22e8) = iVar2;
            if (iVar2 == 0) break;
            if (-1 < iVar2) {
              iVar2 = vorbis_synthesis((int)this_ + 0x2268,(int)this_ + 0x21a8);
              if (iVar2 == 0) {
                vorbis_synthesis_blockin((int)this_ + 0x21f8,(int)this_ + 0x2268);
              }
              while (BEA_LOOP_GUARD((uVar3 = vorbis_synthesis_pcmout((int)this_ + 0x21f8,(int)this_ + 0x22dc),
                    0 < (int)uVar3))) {
                if ((int)*(uint *)((int)this_ + 0x2004) < (int)uVar3) {
                  uVar3 = *(uint *)((int)this_ + 0x2004);
                }
                uVar7 = *(uint *)((int)this_ + 0x21cc);
                uVar5 = uVar7 * uVar3 * 2;
                if (uVar5 < param_2 || uVar5 - param_2 == 0) {
LAB_005242ca:
                  *(undefined4 *)((int)this_ + 0x22e4) = 0;
                  if (0 < (int)uVar7) {
                    do {
                      puVar1 = (undefined2 *)((int)this_ + *(int *)((int)this_ + 0x22e4) * 2 + 4);
                      pfVar6 = *(float **)
                                (*(int *)((int)this_ + 0x22dc) + *(int *)((int)this_ + 0x22e4) * 4);
                      for (uVar7 = uVar3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
                        local_8 = (int)(longlong)ROUND(*pfVar6 * 32767.0f);
                        if (local_8 < 0x8000) {
                          if (local_8 < -0x8000) {
                            local_8 = -0x8000;
                          }
                        }
                        else {
                          local_8 = 0x7fff;
                        }
                        *puVar1 = (short)local_8;
                        pfVar6 = pfVar6 + 1;
                        puVar1 = puVar1 + *(int *)((int)this_ + 0x21cc);
                      }
                      iVar2 = *(int *)((int)this_ + 0x22e4) + 1;
                      *(int *)((int)this_ + 0x22e4) = iVar2;
                    } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0x21cc))));
                  }
                  vorbis_synthesis_read((int)this_ + 0x21f8,uVar3);
                  *(uint *)((int)this_ + 0x22d8) = *(int *)((int)this_ + 0x21cc) * uVar3 * 2;
                  *(undefined4 *)((int)this_ + 0x22ec) = 2;
                }
                else {
                  if (param_2 != 0) {
                    uVar3 = (param_2 >> 1) / uVar7;
                    goto LAB_005242ca;
                  }
                  *(undefined4 *)((int)this_ + 0x22d8) = 0;
                  *(undefined4 *)((int)this_ + 0x22ec) = 2;
                }
LAB_00524397:
                uVar3 = *(uint *)((int)this_ + 0x22d8);
                if (param_2 <= uVar3) {
                  puVar4 = (undefined4 *)((int)this_ + 4);
                  for (uVar3 = param_2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
                    *param_1 = *puVar4;
                    puVar4 = puVar4 + 1;
                    param_1 = param_1 + 1;
                  }
                  for (uVar3 = param_2 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
                    *(undefined1 *)param_1 = *(undefined1 *)puVar4;
                    puVar4 = (undefined4 *)((int)puVar4 + 1);
                    param_1 = (undefined4 *)((int)param_1 + 1);
                  }
                  iVar2 = *(int *)((int)this_ + 0x22d8) - param_2;
                  if (iVar2 != 0) {
                    FUN_0055ed50(bea_arg((undefined4 *)((int)this_ + 4)), bea_arg((int)this_ + param_2 * 2 + 4), bea_arg(iVar2));
                  }
                  *(uint *)((int)this_ + 0x22d8) = *(int *)((int)this_ + 0x22d8) - param_2;
                  return local_c + param_2;
                }
                if (uVar3 != 0) {
                  puVar8 = param_1;
                  puVar4 = this_;
                  for (uVar7 = uVar3 >> 2; BEA_LOOP_GUARD((puVar4 = puVar4 + 1, uVar7 != 0)); uVar7 = uVar7 - 1) {
                    *puVar8 = *puVar4;
                    puVar8 = puVar8 + 1;
                  }
                  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
                    *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
                    puVar4 = (undefined4 *)((int)puVar4 + 1);
                    puVar8 = (undefined4 *)((int)puVar8 + 1);
                  }
                }
                iVar2 = *(int *)((int)this_ + 0x22d8);
                param_2 = param_2 - iVar2;
                param_1 = (undefined4 *)((int)param_1 + iVar2);
                local_c = local_c + iVar2;
                *(undefined4 *)((int)this_ + 0x22d8) = 0;
              }
            }
          }
          iVar2 = ogg_page_eos((int)this_ + 0x2198);
          if (iVar2 != 0) {
            *(undefined4 *)((int)this_ + 0x22e0) = 1;
          }
        }
      }
      if (*(int *)((int)this_ + 0x22e0) != 0) break;
      puVar4 = (undefined4 *)ogg_sync_buffer((int)this_ + 0x2014,0x1000);
      if (*(int *)((int)this_ + 0x2008) == 0) {
        uVar3 = *(uint *)((int)this_ + 0x2010);
        if (0xfff < (int)uVar3) {
          uVar3 = 0x1000;
        }
        puVar8 = *(undefined4 **)((int)this_ + 0x200c);
        for (uVar7 = uVar3 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
          *puVar4 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar4 = puVar4 + 1;
        }
        for (uVar7 = uVar3 & 3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        *(uint *)((int)this_ + 0x2010) = *(int *)((int)this_ + 0x2010) - uVar3;
        *(uint *)((int)this_ + 0x200c) = *(int *)((int)this_ + 0x200c) + uVar3;
      }
      else {
        uVar3 = FUN_0055f4d7(bea_arg(puVar4), bea_arg(1), bea_arg(0x1000), bea_arg(*(int *)((int)this_ + 0x2008)));
      }
      ogg_sync_wrote((int)this_ + 0x2014,uVar3);
      if (uVar3 == 0) {
        *(undefined4 *)((int)this_ + 0x22e0) = 1;
      }
    }
LAB_0052450f:
    ogg_stream_clear((int)this_ + 0x2030);
    vorbis_block_clear((int)this_ + 0x2268);
    vorbis_dsp_clear((int)this_ + 0x21f8);
    vorbis_comment_clear((int)this_ + 0x21e8);
    vorbis_info_clear((int)this_ + 0x21c8);
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00524180, ap_00524180));
