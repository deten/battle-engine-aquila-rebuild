// auto-ported from 00429ef0_FUN_00429ef0.c (FUN_00429ef0, 1307 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00624fe4 GLOBAL_AT(char, 0x00624fe4)
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define DAT_00624fa0 GLOBAL_AT(char, 0x00624fa0)
#define DAT_00624f74 GLOBAL_AT(char, 0x00624f74)
#define DAT_00624f40 GLOBAL_AT(char, 0x00624f40)
#define DAT_00624eac GLOBAL_AT(int, 0x00624eac)
#define DAT_00624e80 GLOBAL_AT(int, 0x00624e80)
#define DAT_00624e18 GLOBAL_AT(int, 0x00624e18)
#define DAT_00624e10 GLOBAL_AT(int, 0x00624e10)
#define DAT_00624dfc GLOBAL_AT(int, 0x00624dfc)
#define s_Dump_memory_map_data_00624db4 ((char*)0x00624db4)
#define s_Switches_the_Battle_Engine_to_th_00624e44 ((char*)0x00624e44)
#define s_C__dev_ONSLAUGHT2_console_cpp_00624d0c ((char*)0x00624d0c)
#define s_Exits_the_game_00624e20 ((char*)0x00624e20)
#define s_Alpha_of_the_console_background___00624d84 ((char*)0x00624d84)
#define s_cg_consolealpha_00624d74 ((char*)0x00624d74)
#define s_Lists_the_current_key_bindings_00624eb4 ((char*)0x00624eb4)
#define s_MemStats_00624dcc ((char*)0x00624dcc)
#define s_Toggle_menu_00624e04 ((char*)0x00624e04)
#define s_Echos_text_to_the_console_00624ed4 ((char*)0x00624ed4)
#define s_Displays_a_list_of_console_comma_00624fb4 ((char*)0x00624fb4)
#define s_ShowCmds_00624fd8 ((char*)0x00624fd8)
#define s_Executes_a_console_script_from_d_00624e88 ((char*)0x00624e88)
#define s_Output_current_memory_stats_to_f_00624dd8 ((char*)0x00624dd8)
#define s_DumpMem_00624dac ((char*)0x00624dac)
#define s_Sets_the_value_of_a_console_vari_00624f18 ((char*)0x00624f18)
#define s_UseConfiguration_00624e30 ((char*)0x00624e30)
#define s_Displays_the_value_of_a_console_v_00624f48 ((char*)0x00624f48)
#define s_ShowVars_00624fa8 ((char*)0x00624fa8)
#define s_Displays_a_list_of_console_varia_00624f78 ((char*)0x00624f78)
#define s_Binds_a_command_to_a_key_00624ef0 ((char*)0x00624ef0)
#define s_ListBinds_00624f0c ((char*)0x00624f0c)
typedef int (BEA_THISCALL* FUN_0042a770_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042a770_t> FUN_0042a770 = {(FUN_0042a770_t)0x0042a770};
typedef undefined4 (BEA_THISCALL* FUN_0042af80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042af80_t> FUN_0042af80 = {(FUN_0042af80_t)0x0042af80};
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_00429ef0(void * this_)
{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  pcVar2 = (char *)FUN_0042a770(bea_arg(this_), bea_arg(&DAT_00624fe4));
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xac), bea_arg(0x4e), bea_arg(s_C__dev_ONSLAUGHT2_console_cpp_00624d0c), bea_arg(0x325));
    *(undefined4 *)(pcVar2 + 0xa8) = *(undefined4 *)((int)this_ + 0x2394);
    *(char **)((int)this_ + 0x2394) = pcVar2;
  }
  uVar3 = 0xffffffff;
  pcVar5 = &DAT_00624fe4;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_Displays_a_list_of_console_comma_00624fb4;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2 + 0x20;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(char **)(pcVar2 + 0xa0) = "VhLKb";
  pcVar2[0xa4] = '\0';
  pcVar2 = (char *)FUN_0042a770(bea_arg(this_), bea_arg(s_ShowCmds_00624fd8));
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xac), bea_arg(0x4e), bea_arg(s_C__dev_ONSLAUGHT2_console_cpp_00624d0c), bea_arg(0x325));
    *(undefined4 *)(pcVar2 + 0xa8) = *(undefined4 *)((int)this_ + 0x2394);
    *(char **)((int)this_ + 0x2394) = pcVar2;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_ShowCmds_00624fd8;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_Displays_a_list_of_console_comma_00624fb4;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2 + 0x20;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(char **)(pcVar2 + 0xa0) = "VhLKb";
  pcVar2[0xa4] = '\0';
  pcVar2 = (char *)FUN_0042a770(bea_arg(this_), bea_arg(s_ShowVars_00624fa8));
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xac), bea_arg(0x4e), bea_arg(s_C__dev_ONSLAUGHT2_console_cpp_00624d0c), bea_arg(0x325));
    *(undefined4 *)(pcVar2 + 0xa8) = *(undefined4 *)((int)this_ + 0x2394);
    *(char **)((int)this_ + 0x2394) = pcVar2;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_ShowVars_00624fa8;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_Displays_a_list_of_console_varia_00624f78;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2 + 0x20;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(undefined1 **)(pcVar2 + 0xa0) = ((void*)0x004296b0);
  pcVar2[0xa4] = '\0';
  pcVar2 = (char *)FUN_0042a770(bea_arg(this_), bea_arg(&DAT_00624fa0));
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xac), bea_arg(0x4e), bea_arg(s_C__dev_ONSLAUGHT2_console_cpp_00624d0c), bea_arg(0x325));
    *(undefined4 *)(pcVar2 + 0xa8) = *(undefined4 *)((int)this_ + 0x2394);
    *(char **)((int)this_ + 0x2394) = pcVar2;
  }
  uVar3 = 0xffffffff;
  pcVar5 = &DAT_00624fa0;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_Displays_the_value_of_a_console_v_00624f48;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2 + 0x20;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(undefined1 **)(pcVar2 + 0xa0) = ((void*)0x00429720);
  pcVar2[0xa4] = '\0';
  pcVar2 = (char *)FUN_0042a770(bea_arg(this_), bea_arg(&DAT_00624f74));
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xac), bea_arg(0x4e), bea_arg(s_C__dev_ONSLAUGHT2_console_cpp_00624d0c), bea_arg(0x325));
    *(undefined4 *)(pcVar2 + 0xa8) = *(undefined4 *)((int)this_ + 0x2394);
    *(char **)((int)this_ + 0x2394) = pcVar2;
  }
  uVar3 = 0xffffffff;
  pcVar5 = &DAT_00624f74;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_Sets_the_value_of_a_console_vari_00624f18;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2 + 0x20;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(undefined1 **)(pcVar2 + 0xa0) = ((void*)0x004297e0);
  pcVar2[0xa4] = '\0';
  pcVar2 = (char *)FUN_0042a770(bea_arg(this_), bea_arg(&DAT_00624f40));
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xac), bea_arg(0x4e), bea_arg(s_C__dev_ONSLAUGHT2_console_cpp_00624d0c), bea_arg(0x325));
    *(undefined4 *)(pcVar2 + 0xa8) = *(undefined4 *)((int)this_ + 0x2394);
    *(char **)((int)this_ + 0x2394) = pcVar2;
  }
  uVar3 = 0xffffffff;
  pcVar5 = &DAT_00624f40;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_Binds_a_command_to_a_key_00624ef0;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2 + 0x20;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(undefined1 **)(pcVar2 + 0xa0) = ((void*)0x00429850);
  pcVar2[0xa4] = '\0';
  pcVar2 = (char *)FUN_0042a770(bea_arg(this_), bea_arg(s_ListBinds_00624f0c));
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xac), bea_arg(0x4e), bea_arg(s_C__dev_ONSLAUGHT2_console_cpp_00624d0c), bea_arg(0x325));
    *(undefined4 *)(pcVar2 + 0xa8) = *(undefined4 *)((int)this_ + 0x2394);
    *(char **)((int)this_ + 0x2394) = pcVar2;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_ListBinds_00624f0c;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_Lists_the_current_key_bindings_00624eb4;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = pcVar2 + 0x20;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(undefined1 **)(pcVar2 + 0xa0) = ((void*)0x00429a40);
  pcVar2[0xa4] = '\0';
  FUN_0042af80(bea_arg(this_), bea_arg(&DAT_00624eac), bea_arg(s_Echos_text_to_the_console_00624ed4), bea_arg(((void*)0x00429a50)), bea_arg(0));
  FUN_0042af80(bea_arg(this_), bea_arg(&DAT_00624e80), bea_arg(s_Executes_a_console_script_from_d_00624e88), bea_arg(((void*)0x00429a80)), bea_arg(0));
  FUN_0042af80(bea_arg(this_), bea_arg(s_UseConfiguration_00624e30), bea_arg(s_Switches_the_Battle_Engine_to_th_00624e44), bea_arg(((void*)0x00429ad0)), bea_arg(0));
  FUN_0042af80(bea_arg(this_), bea_arg(&DAT_00624e18), bea_arg(s_Exits_the_game_00624e20), bea_arg(((void*)0x00429ab0)), bea_arg(0));
  FUN_0042af80(bea_arg(this_), bea_arg(&DAT_00624e10), bea_arg(s_Exits_the_game_00624e20), bea_arg(((void*)0x00429ab0)), bea_arg(0));
  FUN_0042af80(bea_arg(this_), bea_arg(&DAT_00624dfc), bea_arg(s_Toggle_menu_00624e04), bea_arg(((void*)0x00429b30)), bea_arg(1));
  FUN_0042af80(bea_arg(this_), bea_arg(s_MemStats_00624dcc), bea_arg(s_Output_current_memory_stats_to_f_00624dd8), bea_arg(((void*)0x00429b50)), bea_arg(0))
  ;
  FUN_0042af80(bea_arg(this_), bea_arg(s_DumpMem_00624dac), bea_arg(s_Dump_memory_map_data_00624db4), bea_arg(((void*)0x00429b90)), bea_arg(0));
  return FUN_0042b040(bea_arg(this_), bea_arg(s_cg_consolealpha_00624d74), bea_arg(s_Alpha_of_the_console_background___00624d84), bea_arg(0), bea_arg((int)this_ + 0x2390), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00429ef0, ap_00429ef0));
