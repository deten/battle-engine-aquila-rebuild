// auto-ported from 00523df0_FUN_00523df0.c (FUN_00523df0, 904 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char IAT;
#define DAT_00622dbc GLOBAL_AT(int, 0x00622dbc)
#define s_This_Ogg_bitstream_does_not_cont_006400f4 ((char*)0x006400f4)
#define s_Encoded_by___s_006400bc ((char*)0x006400bc)
#define s_Bitstream_is__d_channel___ldHz_006400d0 ((char*)0x006400d0)
#define s_Error_reading_initial_header_pac_0064012c ((char*)0x0064012c)
#define s_Corrupt_secondary_header__Exitin_00640094 ((char*)0x00640094)
#define s_Error_reading_first_page_of_Ogg_b_00640154 ((char*)0x00640154)
#define s_Input_does_not_appear_to_be_an_O_00640188 ((char*)0x00640188)
#define s_End_of_file_before_finding_all_V_00640064 ((char*)0x00640064)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef unsigned int (BEA_CDECL* FUN_0055f4d7_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055f4d7_t> FUN_0055f4d7 = {(FUN_0055f4d7_t)0x0055f4d7};
typedef uint32_t (BEA_CDECL* ogg_page_serialno_t)(...);
#define ogg_page_serialno (*(ogg_page_serialno_t*)0x005d8370)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_stream_init_t)(...);
#define ogg_stream_init (*(ogg_stream_init_t*)0x005d8364)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_stream_packetout_t)(...);
#define ogg_stream_packetout (*(ogg_stream_packetout_t*)0x005d8368)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_stream_pagein_t)(...);
#define ogg_stream_pagein (*(ogg_stream_pagein_t*)0x005d8360)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_sync_buffer_t)(...);
#define ogg_sync_buffer (*(ogg_sync_buffer_t*)0x005d8358)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_sync_pageout_t)(...);
#define ogg_sync_pageout (*(ogg_sync_pageout_t*)0x005d8374)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* ogg_sync_wrote_t)(...);
#define ogg_sync_wrote (*(ogg_sync_wrote_t*)0x005d8354)   /* OGG.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_block_init_t)(...);
#define vorbis_block_init (*(vorbis_block_init_t*)0x005d8380)   /* VORBIS.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_comment_init_t)(...);
#define vorbis_comment_init (*(vorbis_comment_init_t*)0x005d8394)   /* VORBIS.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_info_init_t)(...);
#define vorbis_info_init (*(vorbis_info_init_t*)0x005d8398)   /* VORBIS.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_synthesis_headerin_t)(...);
#define vorbis_synthesis_headerin (*(vorbis_synthesis_headerin_t*)0x005d838c)   /* VORBIS.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* vorbis_synthesis_init_t)(...);
#define vorbis_synthesis_init (*(vorbis_synthesis_init_t*)0x005d8384)   /* VORBIS.DLL import, via the IAT */

static undefined4 BEA_THISCALL ap_00523df0(void * this_)
{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  char *pcVar10;
  
  *(undefined4 *)((int)this_ + 0x22e0) = 0;
  puVar2 = (undefined4 *)ogg_sync_buffer((int)this_ + 0x2014,0x1000);
  if (*(int *)((int)this_ + 0x2008) == 0) {
    uVar3 = *(uint *)((int)this_ + 0x2010);
    if (0xfff < (int)uVar3) {
      uVar3 = 0x1000;
    }
    puVar8 = *(undefined4 **)((int)this_ + 0x200c);
    for (uVar7 = uVar3 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
      *puVar2 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar7 = uVar3 & 3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    *(uint *)((int)this_ + 0x2010) = *(int *)((int)this_ + 0x2010) - uVar3;
    *(uint *)((int)this_ + 0x200c) = *(int *)((int)this_ + 0x200c) + uVar3;
  }
  else {
    uVar3 = FUN_0055f4d7(bea_arg(puVar2), bea_arg(1), bea_arg(0x1000), bea_arg(*(int *)((int)this_ + 0x2008)));
  }
  ogg_sync_wrote((int)this_ + 0x2014,uVar3);
  iVar6 = (int)this_ + 0x2198;
  iVar4 = ogg_sync_pageout((int)this_ + 0x2014,iVar6);
  if (iVar4 != 1) {
    if (0xfff < (int)uVar3) {
      CRenderThing__vslot3(s_Input_does_not_appear_to_be_an_O_00640188);
      return 0xffffffff;
    }
    return 1;
  }
  iVar4 = (int)this_ + 0x2030;
  uVar5 = ogg_page_serialno(iVar6);
  ogg_stream_init(iVar4,uVar5);
  vorbis_info_init((int)this_ + 0x21c8);
  vorbis_comment_init((int)this_ + 0x21e8);
  iVar6 = ogg_stream_pagein(iVar4,iVar6);
  if (iVar6 < 0) {
    CRenderThing__vslot3(s_Error_reading_first_page_of_Ogg_b_00640154);
    return 0xffffffff;
  }
  iVar6 = ogg_stream_packetout(iVar4,(int)this_ + 0x21a8);
  if (iVar6 != 1) {
    CRenderThing__vslot3(s_Error_reading_initial_header_pac_0064012c);
    return 0xffffffff;
  }
  iVar6 = vorbis_synthesis_headerin((int)this_ + 0x21c8,(int)this_ + 0x21e8,(int)this_ + 0x21a8);
  if (iVar6 < 0) {
    CRenderThing__vslot3(s_This_Ogg_bitstream_does_not_cont_006400f4);
    return 0xffffffff;
  }
  *(undefined4 *)((int)this_ + 0x22e4) = 0;
  do {
    iVar6 = *(int *)((int)this_ + 0x22e4);
    while (BEA_LOOP_GUARD((iVar6 < 2))) {
      iVar6 = ogg_sync_pageout((int)this_ + 0x2014,(int)this_ + 0x2198);
      *(int *)((int)this_ + 0x22e8) = iVar6;
      if (iVar6 == 0) break;
      if (iVar6 == 1) {
        ogg_stream_pagein((int)this_ + 0x2030,(int)this_ + 0x2198);
        if (1 < *(int *)((int)this_ + 0x22e4)) break;
        do {
          iVar6 = ogg_stream_packetout((int)this_ + 0x2030,(int)this_ + 0x21a8);
          *(int *)((int)this_ + 0x22e8) = iVar6;
          if (iVar6 == 0) break;
          if (iVar6 < 0) {
            CRenderThing__vslot3(s_Corrupt_secondary_header__Exitin_00640094);
            return 0xffffffff;
          }
          vorbis_synthesis_headerin((int)this_ + 0x21c8,(int)this_ + 0x21e8,(int)this_ + 0x21a8);
          iVar6 = *(int *)((int)this_ + 0x22e4) + 1;
          *(int *)((int)this_ + 0x22e4) = iVar6;
        } while (BEA_LOOP_GUARD((iVar6 < 2)));
      }
      iVar6 = *(int *)((int)this_ + 0x22e4);
    }
    puVar2 = (undefined4 *)ogg_sync_buffer((int)this_ + 0x2014,0x1000);
    if (*(int *)((int)this_ + 0x2008) == 0) {
      uVar3 = *(uint *)((int)this_ + 0x2010);
      if (0xfff < (int)uVar3) {
        uVar3 = 0x1000;
      }
      puVar8 = *(undefined4 **)((int)this_ + 0x200c);
      for (uVar7 = uVar3 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
        *puVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar7 = uVar3 & 3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      *(uint *)((int)this_ + 0x2010) = *(int *)((int)this_ + 0x2010) - uVar3;
      *(uint *)((int)this_ + 0x200c) = *(int *)((int)this_ + 0x200c) + uVar3;
    }
    else {
      uVar3 = FUN_0055f4d7(bea_arg(puVar2), bea_arg(1), bea_arg(0x1000), bea_arg(*(int *)((int)this_ + 0x2008)));
    }
    ogg_sync_wrote((int)this_ + 0x2014,uVar3);
    if ((uVar3 == 0) && (*(int *)((int)this_ + 0x22e4) < 2)) {
      CRenderThing__vslot3(s_End_of_file_before_finding_all_V_00640064);
      return 0xffffffff;
    }
    if (1 < *(int *)((int)this_ + 0x22e4)) {
      piVar9 = *(int **)((int)this_ + 0x21e8);
      iVar6 = *piVar9;
      while (BEA_LOOP_GUARD((iVar6 != 0))) {
        CRenderThing__vslot3(&DAT_00622dbc);
        piVar1 = piVar9 + 1;
        piVar9 = piVar9 + 1;
        iVar6 = *piVar1;
      }
      CRenderThing__vslot3(s_Bitstream_is__d_channel___ldHz_006400d0);
      uVar5 = *(undefined4 *)((int)this_ + 0x21f4);
      pcVar10 = s_Encoded_by___s_006400bc;
      CRenderThing__vslot3(s_Encoded_by___s_006400bc);
      *(int *)((int)this_ + 0x2004) = (int)(0x1000 / (longlong)*(int *)((int)this_ + 0x21cc));
      vorbis_synthesis_init((int)this_ + 0x21f8,(int)this_ + 0x21c8,pcVar10,uVar5);
      vorbis_block_init((int)this_ + 0x21f8,(int)this_ + 0x2268);
      return 0;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00523df0, ap_00523df0));
