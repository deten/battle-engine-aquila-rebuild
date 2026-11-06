// auto-ported from 0046b1e0_FUN_0046b1e0.c (FUN_0046b1e0, 1434 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00624e10 GLOBAL_AT(int, 0x00624e10)
#define DAT_0062b7d0 GLOBAL_AT(int, 0x0062b7d0)
#define DAT_0062b7cc GLOBAL_AT(int, 0x0062b7cc)
#define DAT_0062b13c GLOBAL_AT(int, 0x0062b13c)
#define DAT_00624d48 GLOBAL_AT(int, 0x00624d48)
#define s__no_saved_games_here__0062b548 ((char*)0x0062b548)
#define s_Please_select_a_location_to_save_0062b350 ((char*)0x0062b350)
#define s_Complete_Level_2_11_0062b044 ((char*)0x0062b044)
#define s_DELETE_SAVED_GAME_0062b98c ((char*)0x0062b98c)
#define s_SELECT_CONFIGURATION_0062b920 ((char*)0x0062b920)
#define s_Could_not_delete_that_saved_game_0062b694 ((char*)0x0062b694)
#define s_This_will_abandon_the_current_ga_0062b8c0 ((char*)0x0062b8c0)
#define s_Complete_Level_1_00_0062b080 ((char*)0x0062b080)
#define s_To_Unlock___0062b0a0 ((char*)0x0062b0a0)
#define s_SAVE_GAME_0062b958 ((char*)0x0062b958)
#define s___to_go_back____don_t_save_0062b16c ((char*)0x0062b16c)
#define s_GOODIES_0062b9ac ((char*)0x0062b9ac)
#define s_Complete_Level_2_12_0062b030 ((char*)0x0062b030)
#define s_Options_0062b9f0 ((char*)0x0062b9f0)
#define s_The_memory_unit_was_removed__Ple_0062b384 ((char*)0x0062b384)
#define s_An_error_occured_during_saving__0062b6c8 ((char*)0x0062b6c8)
#define s_Multiplayer_0062ba00 ((char*)0x0062ba00)
#define s_Complete_Level_2_21_0062b01c ((char*)0x0062b01c)
#define s_Incomplete_0062af8c ((char*)0x0062af8c)
#define s_Available_Blocks__0062b248 ((char*)0x0062b248)
#define s_New_Game_0062ba34 ((char*)0x0062ba34)
#define s_Mission_Stats_0062aff8 ((char*)0x0062aff8)
#define s_Now_saving_progress___please_do_n_0062b764 ((char*)0x0062b764)
#define s_Caps_Lock_0062b160 ((char*)0x0062b160)
#define s_Continue_Game_0062ba24 ((char*)0x0062ba24)
#define s_does_not_have_enough_free_space_t_0062b4ac ((char*)0x0062b4ac)
#define s_Press_START_0062aeec ((char*)0x0062aeec)
#define s_This_device_does_not_contain_any_0062b30c ((char*)0x0062b30c)
#define s_Ground_0062b90c ((char*)0x0062b90c)
#define s_SELECT_LEVEL_0062b9c8 ((char*)0x0062b9c8)
#define s_DELETE_A_GAME_0062b638 ((char*)0x0062b638)
#define s_Please_select_load_location_0062b7b0 ((char*)0x0062b7b0)
#define s_The_memory_unit_containing_your_s_0062b434 ((char*)0x0062b434)
#define s_CHOOSE_GAME_NAME_0062b964 ((char*)0x0062b964)
#define s_SAVE_NEW_GAME_0062b948 ((char*)0x0062b948)
#define s_Now_saving_progress___please_do_n_0062b72c ((char*)0x0062b72c)
#define s_There_are_too_many_savegames_the_0062ae90 ((char*)0x0062ae90)
#define s___to_continue_0062b1a0 ((char*)0x0062b1a0)
#define s_Mission_Status_0062afe8 ((char*)0x0062afe8)
#define s_Controller_disconnected__Please_r_0062af28 ((char*)0x0062af28)
#define s_Aborted_0062afd0 ((char*)0x0062afd0)
#define s_Please_select_save_location_0062b794 ((char*)0x0062b794)
#define s___to_go_back_0062b1b0 ((char*)0x0062b1b0)
#define s_Victory_0062afe0 ((char*)0x0062afe0)
#define s_Are_you_sure__If_you_select__yes_0062b7d8 ((char*)0x0062b7d8)
#define s_An_error_occured_during_loading__0062b504 ((char*)0x0062b504)
#define s___to_move____to_select_0062b188 ((char*)0x0062b188)
#define s_MULTIPLAYER_0062b914 ((char*)0x0062b914)
#define s_The_memory_unit_was_removed__You_0062b3f4 ((char*)0x0062b3f4)
#define s_SELECT_DEVICE_0062b938 ((char*)0x0062b938)
#define s_Shift_0062544c ((char*)0x0062544c)
#define s_Player_2_press_START_0062aef8 ((char*)0x0062aef8)
#define s_Your_progress_has_been_loaded__0062b528 ((char*)0x0062b528)
#define s_Stats_for_Level_0062b008 ((char*)0x0062b008)
#define s_Symbols_0062b14c ((char*)0x0062b14c)
#define s_Complete_0062af98 ((char*)0x0062af98)
#define s_Backspace_00625460 ((char*)0x00625460)
#define s___to_start_level_0062b1c0 ((char*)0x0062b1c0)
#define s_SELECT_LOAD_GAME_0062b978 ((char*)0x0062b978)
#define s_Grade__n_a_0062af78 ((char*)0x0062af78)
#define s_A_new_save_game_has_been_created_0062b6e8 ((char*)0x0062b6e8)
#define s_Primary_Objectives_0062afbc ((char*)0x0062afbc)
#define s_Load_Game_0062ba18 ((char*)0x0062ba18)
#define s_This_will_abandon_the_current_ga_0062b864 ((char*)0x0062b864)
#define s_Language_0062b9e4 ((char*)0x0062b9e4)
#define s_The_memory_unit_was_removed__The_0062b3b8 ((char*)0x0062b3b8)
#define s_Defeat_0062afd8 ((char*)0x0062afd8)
#define s_Complete_Level_2_00_0062b058 ((char*)0x0062b058)
#define s_Space_00625434 ((char*)0x00625434)
#define s_The_Xbox_itself_does_not_have_en_0062b560 ((char*)0x0062b560)
#define s_Alphabet_0062b154 ((char*)0x0062b154)
#define s_Player_1_press_START_0062af10 ((char*)0x0062af10)
#define s_Unlocked__0062b094 ((char*)0x0062b094)
#define s_Goodies_0062b9f8 ((char*)0x0062b9f8)
#define s_Xbox_Hard_Disk_0062b11c ((char*)0x0062b11c)
#define s_Secondary_Objectives_0062afa4 ((char*)0x0062afa4)
#define s_A_game_with_this_name_already_ex_0062b648 ((char*)0x0062b648)
#define s_Please_insert_a_memory_card_0062b25c ((char*)0x0062b25c)
#define s_Complete_Level_1_10_0062b06c ((char*)0x0062b06c)
#define s_This_saved_game_is_from_a_differ_0062b278 ((char*)0x0062b278)
#define s_Accents_0062b144 ((char*)0x0062b144)
#define s_Aquila_career_0062b6b8 ((char*)0x0062b6b8)
#define s_Are_you_sure_you_want_to_delete_t_0062b604 ((char*)0x0062b604)
#define s_DEBRIEFING_0062b9d8 ((char*)0x0062b9d8)
#define s_Total_Blocks__0062b12c ((char*)0x0062b12c)
#define s_Save_Game_0062ba0c ((char*)0x0062ba0c)
#define s_The_saved_game_on_this_device_is_0062b2c8 ((char*)0x0062b2c8)
#define s_MISSION_BRIEFING_0062b9b4 ((char*)0x0062b9b4)
#define s_The_memory_unit_being_used_for_s_0062b1d4 ((char*)0x0062b1d4)
#define s_LOAD_GAME_0062b9a0 ((char*)0x0062b9a0)
#define s_There_isn_t_enough_space_to_save_0062b0b0 ((char*)0x0062b0b0)
#define s_Your_progress_has_been_saved__0062b70c ((char*)0x0062b70c)
#define s_Unknown_Text_0062aafc ((char*)0x0062aafc)
#define s_Grade__0062af84 ((char*)0x0062af84)
#define PTR_DAT_0062b7d4 GLOBAL_AT(void*, 0x0062b7d4)
#define PTR_DAT_0062b908 GLOBAL_AT(void*, 0x0062b908)
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};

static void BEA_CDECL ap_0046b1e0(undefined4 param_1)
{
  switch(param_1) {
  case 0:
    FUN_004f7bf0(bea_arg(s_New_Game_0062ba34));
    return;
  case 1:
    FUN_004f7bf0(bea_arg(s_Continue_Game_0062ba24));
    return;
  case 2:
    FUN_004f7bf0(bea_arg(s_Load_Game_0062ba18));
    return;
  case 3:
    FUN_004f7bf0(bea_arg(s_Save_Game_0062ba0c));
    return;
  case 4:
    FUN_004f7bf0(bea_arg(s_Multiplayer_0062ba00));
    return;
  case 5:
    FUN_004f7bf0(bea_arg(s_Goodies_0062b9f8));
    return;
  case 6:
    FUN_004f7bf0(bea_arg(s_Options_0062b9f0));
    return;
  case 7:
    FUN_004f7bf0(bea_arg(s_Language_0062b9e4));
    return;
  case 8:
    FUN_004f7bf0(bea_arg(&DAT_00624e10));
    return;
  case 9:
    FUN_004f7bf0(bea_arg(s_DEBRIEFING_0062b9d8));
    return;
  case 10:
    FUN_004f7bf0(bea_arg(s_SELECT_LEVEL_0062b9c8));
    return;
  case 0xb:
    FUN_004f7bf0(bea_arg(s_MISSION_BRIEFING_0062b9b4));
    return;
  case 0xc:
    FUN_004f7bf0(bea_arg(s_GOODIES_0062b9ac));
    return;
  case 0xd:
    FUN_004f7bf0(bea_arg(s_LOAD_GAME_0062b9a0));
    return;
  case 0xe:
    FUN_004f7bf0(bea_arg(s_DELETE_SAVED_GAME_0062b98c));
    return;
  case 0xf:
    FUN_004f7bf0(bea_arg(s_SELECT_LOAD_GAME_0062b978));
    return;
  case 0x10:
    FUN_004f7bf0(bea_arg(s_CHOOSE_GAME_NAME_0062b964));
    return;
  case 0x11:
    FUN_004f7bf0(bea_arg(s_SAVE_GAME_0062b958));
    return;
  case 0x12:
    FUN_004f7bf0(bea_arg(s_SAVE_NEW_GAME_0062b948));
    return;
  case 0x13:
    FUN_004f7bf0(bea_arg(s_SELECT_DEVICE_0062b938));
    return;
  case 0x14:
    FUN_004f7bf0(bea_arg(s_SELECT_CONFIGURATION_0062b920));
    return;
  case 0x15:
    FUN_004f7bf0(bea_arg(s_MULTIPLAYER_0062b914));
    return;
  case 0x16:
    FUN_004f7bf0(bea_arg(s_Ground_0062b90c));
    return;
  case 0x17:
    FUN_004f7bf0(bea_arg(&PTR_DAT_0062b908));
    return;
  case 0x18:
    FUN_004f7bf0(bea_arg(s_This_will_abandon_the_current_ga_0062b8c0));
    return;
  case 0x19:
    FUN_004f7bf0(bea_arg(s_This_will_abandon_the_current_ga_0062b864));
    return;
  case 0x1a:
    FUN_004f7bf0(bea_arg(s_Are_you_sure__If_you_select__yes_0062b7d8));
    return;
  case 0x1b:
    FUN_004f7bf0(bea_arg(&PTR_DAT_0062b7d4));
    return;
  case 0x1c:
    FUN_004f7bf0(bea_arg(&DAT_0062b7d0));
    return;
  case 0x1d:
    FUN_004f7bf0(bea_arg(&DAT_0062b7cc));
    return;
  case 0x1e:
    FUN_004f7bf0(bea_arg(s_Please_select_save_location_0062b794));
    return;
  case 0x1f:
    FUN_004f7bf0(bea_arg(s_Please_select_load_location_0062b7b0));
    return;
  case 0x20:
    FUN_004f7bf0(bea_arg(s_Aquila_career_0062b6b8));
    return;
  case 0x21:
    FUN_004f7bf0(bea_arg(s_Could_not_delete_that_saved_game_0062b694));
    return;
  case 0x22:
    FUN_004f7bf0(bea_arg(s_Now_saving_progress___please_do_n_0062b764));
    return;
  case 0x23:
    FUN_004f7bf0(bea_arg(s_Now_saving_progress___please_do_n_0062b72c));
    return;
  case 0x24:
    FUN_004f7bf0(bea_arg(s_Your_progress_has_been_saved__0062b70c));
    return;
  case 0x25:
    FUN_004f7bf0(bea_arg(s_A_new_save_game_has_been_created_0062b6e8));
    return;
  case 0x26:
    FUN_004f7bf0(bea_arg(s_An_error_occured_during_saving__0062b6c8));
    return;
  case 0x27:
    FUN_004f7bf0(bea_arg(s_A_game_with_this_name_already_ex_0062b648));
    return;
  case 0x28:
    FUN_004f7bf0(bea_arg(s_DELETE_A_GAME_0062b638));
    return;
  case 0x29:
    FUN_004f7bf0(bea_arg(s_The_memory_unit_being_used_for_s_0062b1d4));
    return;
  case 0x2a:
    FUN_004f7bf0(bea_arg(s_Are_you_sure_you_want_to_delete_t_0062b604));
    return;
  default:
    FUN_004f7bf0(bea_arg(s_Unknown_Text_0062aafc));
    return;
  case 0x2c:
    FUN_004f7bf0(bea_arg(s_There_are_too_many_savegames_the_0062ae90));
    return;
  case 0x36:
    FUN_004f7bf0(bea_arg(s_The_Xbox_itself_does_not_have_en_0062b560));
    return;
  case 0x37:
    FUN_004f7bf0(bea_arg(s__no_saved_games_here__0062b548));
    return;
  case 0x38:
    FUN_004f7bf0(bea_arg(s_Your_progress_has_been_loaded__0062b528));
    return;
  case 0x39:
    FUN_004f7bf0(bea_arg(s_An_error_occured_during_loading__0062b504));
    return;
  case 0x3a:
    FUN_004f7bf0(bea_arg(s_does_not_have_enough_free_space_t_0062b4ac));
    return;
  case 0x3b:
    FUN_004f7bf0(bea_arg(s_The_memory_unit_containing_your_s_0062b434));
    return;
  case 0x3c:
    FUN_004f7bf0(bea_arg(s_The_memory_unit_was_removed__You_0062b3f4));
    return;
  case 0x3d:
    FUN_004f7bf0(bea_arg(s_The_memory_unit_was_removed__The_0062b3b8));
    return;
  case 0x3e:
    FUN_004f7bf0(bea_arg(s_The_memory_unit_was_removed__Ple_0062b384));
    return;
  case 0x3f:
    FUN_004f7bf0(bea_arg(s_Please_select_a_location_to_save_0062b350));
    return;
  case 0x40:
    FUN_004f7bf0(bea_arg(s_This_device_does_not_contain_any_0062b30c));
    return;
  case 0x41:
    FUN_004f7bf0(bea_arg(s_The_saved_game_on_this_device_is_0062b2c8));
    return;
  case 0x42:
    FUN_004f7bf0(bea_arg(s_This_saved_game_is_from_a_differ_0062b278));
    return;
  case 0x45:
    FUN_004f7bf0(bea_arg(s___to_start_level_0062b1c0));
    return;
  case 0x46:
    FUN_004f7bf0(bea_arg(s___to_go_back_0062b1b0));
    return;
  case 0x47:
    FUN_004f7bf0(bea_arg(s___to_continue_0062b1a0));
    return;
  case 0x48:
    FUN_004f7bf0(bea_arg(s___to_move____to_select_0062b188));
    return;
  case 0x49:
    FUN_004f7bf0(bea_arg(s___to_go_back____don_t_save_0062b16c));
    return;
  case 0x4b:
    FUN_004f7bf0(bea_arg(s_Space_00625434));
    return;
  case 0x4c:
    FUN_004f7bf0(bea_arg(s_Backspace_00625460));
    return;
  case 0x4d:
    FUN_004f7bf0(bea_arg(s_Shift_0062544c));
    return;
  case 0x4e:
    FUN_004f7bf0(bea_arg(s_Caps_Lock_0062b160));
    return;
  case 0x4f:
    FUN_004f7bf0(bea_arg(s_Alphabet_0062b154));
    return;
  case 0x50:
    FUN_004f7bf0(bea_arg(s_Symbols_0062b14c));
    return;
  case 0x51:
    FUN_004f7bf0(bea_arg(s_Accents_0062b144));
    return;
  case 0x52:
    FUN_004f7bf0(bea_arg(&DAT_0062b13c));
    return;
  case 0x53:
    FUN_004f7bf0(bea_arg(s_Available_Blocks__0062b248));
    return;
  case 0x54:
    FUN_004f7bf0(bea_arg(s_Total_Blocks__0062b12c));
    return;
  case 0x55:
    FUN_004f7bf0(bea_arg(s_Xbox_Hard_Disk_0062b11c));
    return;
  case 0x56:
    FUN_004f7bf0(bea_arg(s_There_isn_t_enough_space_to_save_0062b0b0));
    return;
  case 0x58:
    FUN_004f7bf0(bea_arg(s_Please_insert_a_memory_card_0062b25c));
    return;
  case 0x59:
    FUN_004f7bf0(bea_arg(s_To_Unlock___0062b0a0));
    return;
  case 0x5a:
    FUN_004f7bf0(bea_arg(s_Unlocked__0062b094));
    return;
  case 0x5b:
    FUN_004f7bf0(bea_arg(&DAT_00624d48));
    return;
  case 0x5c:
    FUN_004f7bf0(bea_arg(s_Complete_Level_1_00_0062b080));
    return;
  case 0x5d:
    FUN_004f7bf0(bea_arg(s_Complete_Level_1_10_0062b06c));
    return;
  case 0x5e:
    FUN_004f7bf0(bea_arg(s_Complete_Level_2_00_0062b058));
    return;
  case 0x5f:
    FUN_004f7bf0(bea_arg(s_Complete_Level_2_11_0062b044));
    return;
  case 0x60:
    FUN_004f7bf0(bea_arg(s_Complete_Level_2_12_0062b030));
    return;
  case 0x61:
    FUN_004f7bf0(bea_arg(s_Complete_Level_2_21_0062b01c));
    return;
  case 0x62:
    FUN_004f7bf0(bea_arg(s_Stats_for_Level_0062b008));
    return;
  case 99:
    FUN_004f7bf0(bea_arg(s_Mission_Stats_0062aff8));
    return;
  case 100:
    FUN_004f7bf0(bea_arg(s_Mission_Status_0062afe8));
    return;
  case 0x65:
    FUN_004f7bf0(bea_arg(s_Victory_0062afe0));
    return;
  case 0x66:
    FUN_004f7bf0(bea_arg(s_Defeat_0062afd8));
    return;
  case 0x67:
    FUN_004f7bf0(bea_arg(s_Aborted_0062afd0));
    return;
  case 0x68:
    FUN_004f7bf0(bea_arg(s_Primary_Objectives_0062afbc));
    return;
  case 0x69:
    FUN_004f7bf0(bea_arg(s_Secondary_Objectives_0062afa4));
    return;
  case 0x6a:
    FUN_004f7bf0(bea_arg(s_Complete_0062af98));
    return;
  case 0x6b:
    FUN_004f7bf0(bea_arg(s_Incomplete_0062af8c));
    return;
  case 0x6c:
    FUN_004f7bf0(bea_arg(s_Grade__0062af84));
    return;
  case 0x6d:
    FUN_004f7bf0(bea_arg(s_Grade__n_a_0062af78));
    return;
  case 0x6e:
    FUN_004f7bf0(bea_arg(s_Controller_disconnected__Please_r_0062af28));
    return;
  case 0x6f:
  case 0x72:
    FUN_004f7bf0(bea_arg(s_Press_START_0062aeec));
    return;
  case 0x70:
    FUN_004f7bf0(bea_arg(s_Player_1_press_START_0062af10));
    return;
  case 0x71:
    FUN_004f7bf0(bea_arg(s_Player_2_press_START_0062aef8));
    return;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046b1e0, ap_0046b1e0));
