// auto-ported from 005185c0_FUN_005185c0.c (FUN_005185c0, 1136 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0083d990 GLOBAL_AT(int, 0x0083d990)
#define s_Localization_Coordination_0063f010 ((char*)0x0063f010)
#define s_Re_Publishing_Producer_0063eb88 ((char*)0x0063eb88)
#define s_Saxophone_0063ee88 ((char*)0x0063ee88)
#define s_Marketing__0063eb7c ((char*)0x0063eb7c)
#define s_Designed_and_Developed_by_Lost_T_0063ef80 ((char*)0x0063ef80)
#define s_Music_006280dc ((char*)0x006280dc)
#define s_Music_and_Sound_0063eea4 ((char*)0x0063eea4)
#define s_Additional_Testing_0063ea2c ((char*)0x0063ea2c)
#define s_Infogrames_US__0063eba0 ((char*)0x0063eba0)
#define s_QA_Manager__Sheffield__0063ed0c ((char*)0x0063ed0c)
#define s_Infogrames_Producer__CORE__0063ee48 ((char*)0x0063ee48)
#define s_Translation_0063ebf0 ((char*)0x0063ebf0)
#define s_Lead_Technical_Programming_0063efb8 ((char*)0x0063efb8)
#define s_Marketing_Manager_0063edd0 ((char*)0x0063edd0)
#define s_Localisation___Translators_0063ec60 ((char*)0x0063ec60)
#define s_Sound_Engineering_0063ea18 ((char*)0x0063ea18)
#define s_Test_Supervisor_0063ecd4 ((char*)0x0063ecd4)
#define s_Storyboard_Artist_0063eeb4 ((char*)0x0063eeb4)
#define s_Infogrames_QA__0063ed38 ((char*)0x0063ed38)
#define s_Lead_Tester_0063ecac ((char*)0x0063ecac)
#define s_European_Marketing_Director_0063ede4 ((char*)0x0063ede4)
#define s_Creative_Services_0063ead0 ((char*)0x0063ead0)
#define s_Voice_Talent_0063ee78 ((char*)0x0063ee78)
#define s_Manager_0063ed74 ((char*)0x0063ed74)
#define s_Vice_President_of_Marketing_0063eb38 ((char*)0x0063eb38)
#define s_Lead_Design_0063ef3c ((char*)0x0063ef3c)
#define s_Creative_Services_Manager_0063ea8c ((char*)0x0063ea8c)
#define s_Quality_Manager__Lyon__0063ecf4 ((char*)0x0063ecf4)
#define s_Design_0063ef34 ((char*)0x0063ef34)
#define s_PR_Specialist_0063ea50 ((char*)0x0063ea50)
#define s_Infogrames__0063ee64 ((char*)0x0063ee64)
#define s_Additional_Art_0063eed8 ((char*)0x0063eed8)
#define s_Product_Manager_0063edc0 ((char*)0x0063edc0)
#define s_PR_Manager_0063ea60 ((char*)0x0063ea60)
#define s_Certification___Planning_Support_0063ebb0 ((char*)0x0063ebb0)
#define s_Testers_0063ec8c ((char*)0x0063ec8c)
#define s_Gameplay_Analysts_0063ed48 ((char*)0x0063ed48)
#define s_Localisation_Support_Group_Manag_0063ec3c ((char*)0x0063ec3c)
#define s_Additional_Programming_0063eef8 ((char*)0x0063eef8)
#define s_Senior_Gameplay_Analyst_0063ed5c ((char*)0x0063ed5c)
#define s_Localisation_Coordination_0063ec20 ((char*)0x0063ec20)
#define s_Director_of_Marketing_0063eb54 ((char*)0x0063eb54)
#define s_VP_European_Marketing_0063ee00 ((char*)0x0063ee00)
#define s_Gameplay_Evaluation_Service__0063ed7c ((char*)0x0063ed7c)
#define s_Pre_mastering_Technician_0063ecb8 ((char*)0x0063ecb8)
#define s_Localisation_Technical_Consultan_0063ebfc ((char*)0x0063ebfc)
#define s_Localization_Technical_Consultan_0063efec ((char*)0x0063efec)
#define s_Core_Games_Head_of_Communication_0063ed9c ((char*)0x0063ed9c)
#define s_Localization_Testing_0063efd4 ((char*)0x0063efd4)
#define s_Programming_0063ef10 ((char*)0x0063ef10)
#define s_Production_Manager__CORE__0063ee2c ((char*)0x0063ee2c)
#define s_Infogrames_Europe__0063ee18 ((char*)0x0063ee18)
#define s_QA_Group_Manager_0063ed24 ((char*)0x0063ed24)
#define s_Graphic_Design_0063eec8 ((char*)0x0063eec8)
#define s_Sheffield_QA_0063ece4 ((char*)0x0063ece4)
#define s_Lead_Game_Programming_0063ef1c ((char*)0x0063ef1c)
#define s_Project_Manager_0063ef70 ((char*)0x0063ef70)
#define s_Brand_Manager_0063eb6c ((char*)0x0063eb6c)
#define s_Lead_Artist_0063eeec ((char*)0x0063eeec)
#define s_Technical_Director_0063ef48 ((char*)0x0063ef48)
#define s_Localization__0063f06c ((char*)0x0063f06c)
#define s_Localisation__0063ec7c ((char*)0x0063ec7c)
#define s_Localization___Translators_0063f050 ((char*)0x0063f050)
#define s_Assistant_Lead_Tester_0063ec94 ((char*)0x0063ec94)
#define s_Special_Thanks_0063ea40 ((char*)0x0063ea40)
#define s_Creative_Director_0063ef5c ((char*)0x0063ef5c)
#define s_Thanks_0063ee70 ((char*)0x0063ee70)
#define s_VP_Product_Development_0063eb04 ((char*)0x0063eb04)
#define s_Localization_Support_Group_Manag_0063f02c ((char*)0x0063f02c)
#define s_Studio_Sr__Vice_President_0063eb1c ((char*)0x0063eb1c)
#define s______________________0063ea00 ((char*)0x0063ea00)
#define s_Sound_Effects_0063ee94 ((char*)0x0063ee94)
#define s_QA_Supervisors_0063efa8 ((char*)0x0063efa8)
#define s_Strategic_Relations_Sr__Manager_0063ea6c ((char*)0x0063ea6c)
#define s_Director_of_Marketing_Communicat_0063eaa8 ((char*)0x0063eaa8)
#define s_Director_of_Creative_Services_0063eae4 ((char*)0x0063eae4)
#define s_Localisation_Testing_0063ebd8 ((char*)0x0063ebd8)
#define PTR_DAT_0063eee8 GLOBAL_AT(void*, 0x0063eee8)
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};

static undefined4 BEA_CDECL ap_005185c0(undefined4 param_1)
{
  undefined4 uVar1;
  
  if (DAT_0083d990 != 0) {
    switch(param_1) {
    case 0x2d:
      uVar1 = FUN_004f7bf0(bea_arg(s_Localization__0063f06c));
      return uVar1;
    case 0x2e:
      uVar1 = FUN_004f7bf0(bea_arg(s_Localization___Translators_0063f050));
      return uVar1;
    case 0x2f:
      uVar1 = FUN_004f7bf0(bea_arg(s_Localization_Support_Group_Manag_0063f02c));
      return uVar1;
    case 0x30:
      uVar1 = FUN_004f7bf0(bea_arg(s_Localization_Coordination_0063f010));
      return uVar1;
    case 0x31:
      uVar1 = FUN_004f7bf0(bea_arg(s_Localization_Technical_Consultan_0063efec));
      return uVar1;
    case 0x33:
      uVar1 = FUN_004f7bf0(bea_arg(s_Localization_Testing_0063efd4));
      return uVar1;
    }
  }
  switch(param_1) {
  case 0:
    uVar1 = FUN_004f7bf0(bea_arg(s_Designed_and_Developed_by_Lost_T_0063ef80));
    return uVar1;
  case 1:
    uVar1 = FUN_004f7bf0(bea_arg(s_Project_Manager_0063ef70));
    return uVar1;
  case 2:
    uVar1 = FUN_004f7bf0(bea_arg(s_Creative_Director_0063ef5c));
    return uVar1;
  case 3:
    uVar1 = FUN_004f7bf0(bea_arg(s_Technical_Director_0063ef48));
    return uVar1;
  case 4:
    uVar1 = FUN_004f7bf0(bea_arg(s_Lead_Design_0063ef3c));
    return uVar1;
  case 5:
    uVar1 = FUN_004f7bf0(bea_arg(s_Design_0063ef34));
    return uVar1;
  case 6:
    uVar1 = FUN_004f7bf0(bea_arg(s_Lead_Game_Programming_0063ef1c));
    return uVar1;
  case 7:
    uVar1 = FUN_004f7bf0(bea_arg(s_Programming_0063ef10));
    return uVar1;
  case 8:
    uVar1 = FUN_004f7bf0(bea_arg(s_Additional_Programming_0063eef8));
    return uVar1;
  case 9:
    uVar1 = FUN_004f7bf0(bea_arg(s_Lead_Artist_0063eeec));
    return uVar1;
  case 10:
    uVar1 = FUN_004f7bf0(bea_arg(&PTR_DAT_0063eee8));
    return uVar1;
  case 0xb:
    uVar1 = FUN_004f7bf0(bea_arg(s_Additional_Art_0063eed8));
    return uVar1;
  case 0xc:
    uVar1 = FUN_004f7bf0(bea_arg(s_Graphic_Design_0063eec8));
    return uVar1;
  case 0xd:
    uVar1 = FUN_004f7bf0(bea_arg(s_Storyboard_Artist_0063eeb4));
    return uVar1;
  case 0xe:
    uVar1 = FUN_004f7bf0(bea_arg(s_Music_and_Sound_0063eea4));
    return uVar1;
  case 0xf:
    uVar1 = FUN_004f7bf0(bea_arg(s_Music_006280dc));
    return uVar1;
  case 0x10:
    uVar1 = FUN_004f7bf0(bea_arg(s_Sound_Effects_0063ee94));
    return uVar1;
  case 0x11:
    uVar1 = FUN_004f7bf0(bea_arg(s_Saxophone_0063ee88));
    return uVar1;
  case 0x12:
    uVar1 = FUN_004f7bf0(bea_arg(s_Voice_Talent_0063ee78));
    return uVar1;
  case 0x13:
  case 0x44:
    uVar1 = FUN_004f7bf0(bea_arg(s_Special_Thanks_0063ea40));
    return uVar1;
  case 0x14:
    uVar1 = FUN_004f7bf0(bea_arg(s_Thanks_0063ee70));
    return uVar1;
  case 0x15:
    uVar1 = FUN_004f7bf0(bea_arg(s_Infogrames__0063ee64));
    return uVar1;
  case 0x16:
    uVar1 = FUN_004f7bf0(bea_arg(s_Infogrames_Producer__CORE__0063ee48));
    return uVar1;
  case 0x17:
    uVar1 = FUN_004f7bf0(bea_arg(s_Production_Manager__CORE__0063ee2c));
    return uVar1;
  case 0x18:
    uVar1 = FUN_004f7bf0(bea_arg(s_Infogrames_Europe__0063ee18));
    return uVar1;
  case 0x19:
    uVar1 = FUN_004f7bf0(bea_arg(s_VP_European_Marketing_0063ee00));
    return uVar1;
  case 0x1a:
    uVar1 = FUN_004f7bf0(bea_arg(s_European_Marketing_Director_0063ede4));
    return uVar1;
  case 0x1b:
    uVar1 = FUN_004f7bf0(bea_arg(s_Marketing_Manager_0063edd0));
    return uVar1;
  case 0x1c:
    uVar1 = FUN_004f7bf0(bea_arg(s_Product_Manager_0063edc0));
    return uVar1;
  case 0x1d:
    uVar1 = FUN_004f7bf0(bea_arg(s_Core_Games_Head_of_Communication_0063ed9c));
    return uVar1;
  case 0x1e:
    uVar1 = FUN_004f7bf0(bea_arg(s_Gameplay_Evaluation_Service__0063ed7c));
    return uVar1;
  case 0x1f:
    uVar1 = FUN_004f7bf0(bea_arg(s_Manager_0063ed74));
    return uVar1;
  case 0x20:
    uVar1 = FUN_004f7bf0(bea_arg(s_Senior_Gameplay_Analyst_0063ed5c));
    return uVar1;
  case 0x21:
    uVar1 = FUN_004f7bf0(bea_arg(s_Gameplay_Analysts_0063ed48));
    return uVar1;
  case 0x22:
  case 0x2c:
    uVar1 = FUN_004f7bf0(bea_arg(s_Testers_0063ec8c));
    return uVar1;
  case 0x23:
    uVar1 = FUN_004f7bf0(bea_arg(s_Infogrames_QA__0063ed38));
    return uVar1;
  case 0x24:
    uVar1 = FUN_004f7bf0(bea_arg(s_QA_Group_Manager_0063ed24));
    return uVar1;
  case 0x25:
    uVar1 = FUN_004f7bf0(bea_arg(s_QA_Manager__Sheffield__0063ed0c));
    return uVar1;
  case 0x26:
    uVar1 = FUN_004f7bf0(bea_arg(s_Quality_Manager__Lyon__0063ecf4));
    return uVar1;
  case 0x27:
    uVar1 = FUN_004f7bf0(bea_arg(s_Sheffield_QA_0063ece4));
    return uVar1;
  case 0x28:
    uVar1 = FUN_004f7bf0(bea_arg(s_Test_Supervisor_0063ecd4));
    return uVar1;
  case 0x29:
    uVar1 = FUN_004f7bf0(bea_arg(s_Pre_mastering_Technician_0063ecb8));
    return uVar1;
  case 0x2a:
    uVar1 = FUN_004f7bf0(bea_arg(s_Lead_Tester_0063ecac));
    return uVar1;
  case 0x2b:
    uVar1 = FUN_004f7bf0(bea_arg(s_Assistant_Lead_Tester_0063ec94));
    return uVar1;
  case 0x2d:
    uVar1 = FUN_004f7bf0(bea_arg(s_Localisation__0063ec7c));
    return uVar1;
  case 0x2e:
    uVar1 = FUN_004f7bf0(bea_arg(s_Localisation___Translators_0063ec60));
    return uVar1;
  case 0x2f:
    uVar1 = FUN_004f7bf0(bea_arg(s_Localisation_Support_Group_Manag_0063ec3c));
    return uVar1;
  case 0x30:
    uVar1 = FUN_004f7bf0(bea_arg(s_Localisation_Coordination_0063ec20));
    return uVar1;
  case 0x31:
    uVar1 = FUN_004f7bf0(bea_arg(s_Localisation_Technical_Consultan_0063ebfc));
    return uVar1;
  case 0x32:
    uVar1 = FUN_004f7bf0(bea_arg(s_Translation_0063ebf0));
    return uVar1;
  case 0x33:
    uVar1 = FUN_004f7bf0(bea_arg(s_Localisation_Testing_0063ebd8));
    return uVar1;
  case 0x34:
    uVar1 = FUN_004f7bf0(bea_arg(s_Certification___Planning_Support_0063ebb0));
    return uVar1;
  case 0x35:
    uVar1 = FUN_004f7bf0(bea_arg(s_Infogrames_US__0063eba0));
    return uVar1;
  case 0x36:
    uVar1 = FUN_004f7bf0(bea_arg(s_Re_Publishing_Producer_0063eb88));
    return uVar1;
  case 0x37:
    uVar1 = FUN_004f7bf0(bea_arg(s_Marketing__0063eb7c));
    return uVar1;
  case 0x38:
    uVar1 = FUN_004f7bf0(bea_arg(s_Brand_Manager_0063eb6c));
    return uVar1;
  case 0x39:
    uVar1 = FUN_004f7bf0(bea_arg(s_Director_of_Marketing_0063eb54));
    return uVar1;
  case 0x3a:
    uVar1 = FUN_004f7bf0(bea_arg(s_Vice_President_of_Marketing_0063eb38));
    return uVar1;
  case 0x3b:
    uVar1 = FUN_004f7bf0(bea_arg(s_Studio_Sr__Vice_President_0063eb1c));
    return uVar1;
  case 0x3c:
    uVar1 = FUN_004f7bf0(bea_arg(s_VP_Product_Development_0063eb04));
    return uVar1;
  case 0x3d:
    uVar1 = FUN_004f7bf0(bea_arg(s_Director_of_Creative_Services_0063eae4));
    return uVar1;
  case 0x3e:
    uVar1 = FUN_004f7bf0(bea_arg(s_Creative_Services_0063ead0));
    return uVar1;
  case 0x3f:
    uVar1 = FUN_004f7bf0(bea_arg(s_Director_of_Marketing_Communicat_0063eaa8));
    return uVar1;
  case 0x40:
    uVar1 = FUN_004f7bf0(bea_arg(s_Creative_Services_Manager_0063ea8c));
    return uVar1;
  case 0x41:
    uVar1 = FUN_004f7bf0(bea_arg(s_Strategic_Relations_Sr__Manager_0063ea6c));
    return uVar1;
  case 0x42:
    uVar1 = FUN_004f7bf0(bea_arg(s_PR_Manager_0063ea60));
    return uVar1;
  case 0x43:
    uVar1 = FUN_004f7bf0(bea_arg(s_PR_Specialist_0063ea50));
    return uVar1;
  case 0x45:
    uVar1 = FUN_004f7bf0(bea_arg(s_Additional_Testing_0063ea2c));
    return uVar1;
  case 0x46:
    uVar1 = FUN_004f7bf0(bea_arg(s_Sound_Engineering_0063ea18));
    return uVar1;
  case 0x47:
    uVar1 = FUN_004f7bf0(bea_arg(s_Lead_Technical_Programming_0063efb8));
    return uVar1;
  default:
    uVar1 = FUN_004f7bf0(bea_arg(s______________________0063ea00));
    return uVar1;
  case 100:
    uVar1 = FUN_004f7bf0(bea_arg(s_QA_Supervisors_0063efa8));
    return uVar1;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005185c0, ap_005185c0));
