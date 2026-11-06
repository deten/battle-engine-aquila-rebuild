// auto-ported from 004f52b0_FUN_004f52b0.c (FUN_004f52b0, 770 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00633844 GLOBAL_AT(int, 0x00633844)
#define DAT_0063382c GLOBAL_AT(int, 0x0063382c)
#define DAT_006335fc GLOBAL_AT(int, 0x006335fc)
#define DAT_006335f4 GLOBAL_AT(int, 0x006335f4)
#define DAT_006334d8 GLOBAL_AT(int, 0x006334d8)
#define DAT_006334b8 GLOBAL_AT(int, 0x006334b8)
#define DAT_00633450 GLOBAL_AT(int, 0x00633450)
#define DAT_00630e00 GLOBAL_AT(int, 0x00630e00)
#define s_Hollow_006335c4 ((char*)0x006335c4)
#define s_Radius_00633924 ((char*)0x00633924)
#define s_Cylinder_Length_00633358 ((char*)0x00633358)
#define s_Particle_Descriptor_2_0063370c ((char*)0x0063370c)
#define s_RandomSZ_006335a0 ((char*)0x006335a0)
#define s_Pitch_Function_00633498 ((char*)0x00633498)
#define s_Param_D_00633468 ((char*)0x00633468)
#define s_Outward_Velocity_00633754 ((char*)0x00633754)
#define s_Life_Pct_00633864 ((char*)0x00633864)
#define s_Transition_Green_0063364c ((char*)0x0063364c)
#define s_Transition_Blue_0063363c ((char*)0x0063363c)
#define s_Yaw_Length_006334e0 ((char*)0x006334e0)
#define s_RandomSX_006335b8 ((char*)0x006335b8)
#define s_Mover_0063104c ((char*)0x0063104c)
#define s_Bounce_00633904 ((char*)0x00633904)
#define s_Axis_Aligned_006338b4 ((char*)0x006338b4)
#define s_Start_Red_006336a8 ((char*)0x006336a8)
#define s_Random_Start_Frame_00633850 ((char*)0x00633850)
#define s_Length_00633848 ((char*)0x00633848)
#define s_Initial_Velocity_Y_006337f0 ((char*)0x006337f0)
#define s_Value_Type_00633444 ((char*)0x00633444)
#define s_Death_006333e4 ((char*)0x006333e4)
#define s_Particle_Descriptor_Name_00633970 ((char*)0x00633970)
#define s_Colour_Range_006338a4 ((char*)0x006338a4)
#define s_Probability_1_006336d4 ((char*)0x006336d4)
#define s_Start_Green_0063369c ((char*)0x0063369c)
#define s_Interpolated_Emission_0063377c ((char*)0x0063377c)
#define s_Num_Points_00633580 ((char*)0x00633580)
#define s_Scroll_V_006333bc ((char*)0x006333bc)
#define s_Cylinder_Radius_0063337c ((char*)0x0063337c)
#define s_End_Red_00633688 ((char*)0x00633688)
#define s_Start_Width_0063358c ((char*)0x0063358c)
#define s_Sphere_RadiusTime_00633310 ((char*)0x00633310)
#define s_Num_Particles_006335cc ((char*)0x006335cc)
#define s_Transmit_Life_006337b8 ((char*)0x006337b8)
#define s_Manual_Wiggle_Enabled_006334fc ((char*)0x006334fc)
#define s_Sphere_Latitude_Start_006332f8 ((char*)0x006332f8)
#define s_Particle_Descriptor_0_0063373c ((char*)0x0063373c)
#define s_Fade_Point_00633538 ((char*)0x00633538)
#define s_Cylinder_NumPtsAxial_006333a4 ((char*)0x006333a4)
#define s_RandomSY_006335ac ((char*)0x006335ac)
#define s_Tile_V_006333d4 ((char*)0x006333d4)
#define s_Particle_Descriptor_1_00633724 ((char*)0x00633724)
#define s_Probability_3_006336b4 ((char*)0x006336b4)
#define s_Impact_Spawnee_00633400 ((char*)0x00633400)
#define s_Particle_Descriptor_00633818 ((char*)0x00633818)
#define s_Modifier_00630ff8 ((char*)0x00630ff8)
#define s_Param_A_00633480 ((char*)0x00633480)
#define s_Emit_Per_Turn_00633834 ((char*)0x00633834)
#define s_Sphere_NumPtsRad_00633324 ((char*)0x00633324)
#define s_Particle_Descriptor_3_006336f4 ((char*)0x006336f4)
#define s_Sphere_Longitude_Start_006332cc ((char*)0x006332cc)
#define s_Disperse_Rate_00633560 ((char*)0x00633560)
#define s_Taper_Start_00633554 ((char*)0x00633554)
#define s_Sphere_Longitude_End_006332b4 ((char*)0x006332b4)
#define s_Velocity_Damp_00633870 ((char*)0x00633870)
#define s_Velocity_Randomness_006337c8 ((char*)0x006337c8)
#define s_Gameturn_Scale_00633434 ((char*)0x00633434)
#define s_Fade_Col_006338f8 ((char*)0x006338f8)
#define s_Colour_Range2_00633348 ((char*)0x00633348)
#define s_Roll_Function_00633488 ((char*)0x00633488)
#define s_Pass_Num_Particles_00633768 ((char*)0x00633768)
#define s_End_Green_0063367c ((char*)0x0063367c)
#define s_Gravity_0063390c ((char*)0x0063390c)
#define s_Shape_0063103c ((char*)0x0063103c)
#define s_Wiggle_Factor_00633570 ((char*)0x00633570)
#define s_Use_Transition_00633624 ((char*)0x00633624)
#define s_Hemisphere_006335dc ((char*)0x006335dc)
#define s_Initial_Velocity_X_00633804 ((char*)0x00633804)
#define s_Ring_Axis_006335e8 ((char*)0x006335e8)
#define s_SegmentLength_00633514 ((char*)0x00633514)
#define s_Auto_Centre_006333f4 ((char*)0x006333f4)
#define s_Start_Blue_00633690 ((char*)0x00633690)
#define s_End_Blue_00633670 ((char*)0x00633670)
#define s_End_Frame_0063388c ((char*)0x0063388c)
#define s_Texture_Size_006338c4 ((char*)0x006338c4)
#define s_Pitch_006334c0 ((char*)0x006334c0)
#define s_File_Version_006339c4 ((char*)0x006339c4)
#define s_Anim_Type_00633898 ((char*)0x00633898)
#define s_Width_With_Life_00633544 ((char*)0x00633544)
#define s_Scroll_U_006333c8 ((char*)0x006333c8)
#define s_Probability_0_006336e4 ((char*)0x006336e4)
#define s_Probability_2_006336c4 ((char*)0x006336c4)
#define s_Use_End_00633634 ((char*)0x00633634)
#define s____Unknown_Token____006332a0 ((char*)0x006332a0)
#define s_Texture_006338f0 ((char*)0x006338f0)
#define s_ParticleSystemEd_File__C_2000_Lo_006339d4 ((char*)0x006339d4)
#define s_Param_C_00633470 ((char*)0x00633470)
#define s_Num_Particle_Descriptors_006339a8 ((char*)0x006339a8)
#define s_Cylinder_Radius2_00633368 ((char*)0x00633368)
#define s_Particle_Descriptor_Type_0063398c ((char*)0x0063398c)
#define s_Final_Radius_00633914 ((char*)0x00633914)
#define s_Sphere_Latitude_End_006332e4 ((char*)0x006332e4)
#define s_Initial_Velocity_Z_006337dc ((char*)0x006337dc)
#define s_Offset_Gameturn_00633424 ((char*)0x00633424)
#define s_Transition_Red_00633660 ((char*)0x00633660)
#define s_Cylinder_NumPtsRadial_0063338c ((char*)0x0063338c)
#define s_Param_B_00633478 ((char*)0x00633478)
#define s_Anim_Speed_00633880 ((char*)0x00633880)
#define s_Sphere_NumPtsAx_00633338 ((char*)0x00633338)
#define s_Transmit_Velocity_00633794 ((char*)0x00633794)
#define s_Initial_006333ec ((char*)0x006333ec)
#define s_Width_00633598 ((char*)0x00633598)
#define s_Param_Function_00633458 ((char*)0x00633458)
#define s_Wiggle_Length_006334ec ((char*)0x006334ec)
#define s_Texture_Number_006338d4 ((char*)0x006338d4)
#define s_Num_Entries_00633604 ((char*)0x00633604)
#define s__________________________________0063392c ((char*)0x0063392c)
#define s_GravityPC_006334cc ((char*)0x006334cc)
#define s_Transmit_FoR_006337a8 ((char*)0x006337a8)
#define s_Angular_Momentum_00633410 ((char*)0x00633410)
#define s_Blend_Mode_006338e4 ((char*)0x006338e4)
#define s_Transition_Point_00633610 ((char*)0x00633610)
#define s_Use_Segment_Length_00633524 ((char*)0x00633524)
#define s_Yaw_Function_006334a8 ((char*)0x006334a8)
#define s_Tile_U_006333dc ((char*)0x006333dc)
#define PTR_DAT_006334c8 GLOBAL_AT(void*, 0x006334c8)

static char * BEA_CDECL ap_004f52b0(undefined4 param_1)
{
  switch(param_1) {
  case 0:
    return (char *)(s_ParticleSystemEd_File__C_2000_Lo_006339d4);
  case 1:
    return (char *)(s_File_Version_006339c4);
  case 2:
    return (char *)(s_Num_Particle_Descriptors_006339a8);
  case 3:
    return (char *)(s_Particle_Descriptor_Type_0063398c);
  case 4:
    return (char *)(s_Particle_Descriptor_Name_00633970);
  case 5:
    return (char *)(s__________________________________0063392c);
  case 6:
    return (char *)(s_Radius_00633924);
  case 7:
    return (char *)(s_Final_Radius_00633914);
  case 8:
    return (char *)(s_Gravity_0063390c);
  case 9:
    return (char *)(s_Bounce_00633904);
  case 10:
    return (char *)(s_Fade_Col_006338f8);
  case 0xb:
    return (char *)(s_Texture_006338f0);
  case 0xc:
    return (char *)(s_Modifier_00630ff8);
  case 0xd:
    return (char *)(s_Blend_Mode_006338e4);
  case 0xe:
    return (char *)(s_Texture_Number_006338d4);
  case 0xf:
    return (char *)(s_Axis_Aligned_006338b4);
  case 0x10:
    return (char *)(s_Colour_Range_006338a4);
  case 0x11:
    return (char *)(s_Anim_Type_00633898);
  case 0x12:
    return (char *)(s_End_Frame_0063388c);
  case 0x13:
    return (char *)(s_Anim_Speed_00633880);
  case 0x14:
    return (char *)(s_Texture_Size_006338c4);
  case 0x15:
    return (char *)(s_Velocity_Damp_00633870);
  case 0x16:
    return (char *)(s_Life_Pct_00633864);
  case 0x17:
    return (char *)(s_Random_Start_Frame_00633850);
  case 0x18:
    return (char *)(s_Length_00633848);
  case 0x19:
    return (char *)(&DAT_00633844);
  case 0x1a:
    return (char *)(s_Emit_Per_Turn_00633834);
  case 0x1b:
    return (char *)(&DAT_0063382c);
  case 0x1c:
    return (char *)(s_Particle_Descriptor_00633818);
  case 0x1d:
    return (char *)(s_Initial_Velocity_X_00633804);
  case 0x1e:
    return (char *)(s_Initial_Velocity_Y_006337f0);
  case 0x1f:
    return (char *)(s_Initial_Velocity_Z_006337dc);
  case 0x20:
    return (char *)(s_Velocity_Randomness_006337c8);
  case 0x21:
    return (char *)(s_Transmit_Life_006337b8);
  case 0x22:
    return (char *)(s_Transmit_FoR_006337a8);
  case 0x23:
    return (char *)(s_Transmit_Velocity_00633794);
  case 0x24:
    return (char *)(s_Interpolated_Emission_0063377c);
  case 0x25:
    return (char *)(s_Shape_0063103c);
  case 0x26:
    return (char *)(s_Pass_Num_Particles_00633768);
  case 0x27:
    return (char *)(s_Outward_Velocity_00633754);
  case 0x28:
    return (char *)(s_Mover_0063104c);
  case 0x29:
    return (char *)(s_Particle_Descriptor_0_0063373c);
  case 0x2a:
    return (char *)(s_Particle_Descriptor_1_00633724);
  case 0x2b:
    return (char *)(s_Particle_Descriptor_2_0063370c);
  case 0x2c:
    return (char *)(s_Particle_Descriptor_3_006336f4);
  case 0x2d:
    return (char *)(s_Probability_0_006336e4);
  case 0x2e:
    return (char *)(s_Probability_1_006336d4);
  case 0x2f:
    return (char *)(s_Probability_2_006336c4);
  case 0x30:
    return (char *)(s_Probability_3_006336b4);
  case 0x31:
    return (char *)(s_Start_Red_006336a8);
  case 0x32:
    return (char *)(s_Start_Green_0063369c);
  case 0x33:
    return (char *)(s_Start_Blue_00633690);
  case 0x34:
    return (char *)(s_End_Red_00633688);
  case 0x35:
    return (char *)(s_End_Green_0063367c);
  case 0x36:
    return (char *)(s_End_Blue_00633670);
  case 0x37:
    return (char *)(s_Transition_Red_00633660);
  case 0x38:
    return (char *)(s_Transition_Green_0063364c);
  case 0x39:
    return (char *)(s_Transition_Blue_0063363c);
  case 0x3a:
    return (char *)(s_Use_End_00633634);
  case 0x3b:
    return (char *)(s_Use_Transition_00633624);
  case 0x3c:
    return (char *)(s_Transition_Point_00633610);
  case 0x3d:
    return (char *)(s_Num_Entries_00633604);
  case 0x3e:
    return (char *)(&DAT_006335fc);
  case 0x3f:
    return (char *)(&DAT_006335f4);
  case 0x40:
    return (char *)(s_Ring_Axis_006335e8);
  case 0x41:
    return (char *)(s_Hemisphere_006335dc);
  case 0x42:
    return (char *)(s_Num_Particles_006335cc);
  case 0x43:
    return (char *)(s_Hollow_006335c4);
  case 0x44:
    return (char *)(s_RandomSX_006335b8);
  case 0x45:
    return (char *)(s_RandomSY_006335ac);
  case 0x46:
    return (char *)(s_RandomSZ_006335a0);
  case 0x47:
    return (char *)(s_Width_00633598);
  case 0x48:
    return (char *)(s_Num_Points_00633580);
  case 0x49:
    return (char *)(s_Start_Width_0063358c);
  case 0x4a:
    return (char *)(s_Wiggle_Factor_00633570);
  case 0x4b:
    return (char *)(s_Disperse_Rate_00633560);
  case 0x4c:
    return (char *)(s_Taper_Start_00633554);
  case 0x4d:
    return (char *)(s_Width_With_Life_00633544);
  case 0x4e:
    return (char *)(s_Fade_Point_00633538);
  case 0x4f:
    return (char *)(s_Use_Segment_Length_00633524);
  case 0x50:
    return (char *)(s_SegmentLength_00633514);
  case 0x51:
    return (char *)(s_Manual_Wiggle_Enabled_006334fc);
  case 0x52:
    return (char *)(s_Wiggle_Length_006334ec);
  case 0x53:
    return (char *)(s_Yaw_Length_006334e0);
  case 0x54:
    return (char *)(&DAT_006334d8);
  case 0x55:
    return (char *)(s_GravityPC_006334cc);
  case 0x56:
    return (char *)((char *)&PTR_DAT_006334c8);
  case 0x57:
    return (char *)(s_Pitch_006334c0);
  case 0x58:
    return (char *)(&DAT_006334b8);
  case 0x59:
    return (char *)(s_Yaw_Function_006334a8);
  case 0x5a:
    return (char *)(s_Pitch_Function_00633498);
  case 0x5b:
    return (char *)(s_Roll_Function_00633488);
  case 0x5c:
    return (char *)(s_Param_A_00633480);
  case 0x5d:
    return (char *)(s_Param_B_00633478);
  case 0x5e:
    return (char *)(s_Param_C_00633470);
  case 0x5f:
    return (char *)(s_Param_D_00633468);
  case 0x60:
    return (char *)(s_Param_Function_00633458);
  case 0x61:
    return (char *)(&DAT_00633450);
  case 0x62:
    return (char *)(s_Value_Type_00633444);
  case 99:
    return (char *)(s_Gameturn_Scale_00633434);
  case 100:
    return (char *)(s_Offset_Gameturn_00633424);
  case 0x65:
    return (char *)(&DAT_00630e00);
  case 0x66:
    return (char *)(s_Angular_Momentum_00633410);
  case 0x67:
    return (char *)(s_Impact_Spawnee_00633400);
  case 0x68:
    return (char *)(s_Auto_Centre_006333f4);
  case 0x69:
    return (char *)(s_Initial_006333ec);
  case 0x6a:
    return (char *)(s_Death_006333e4);
  case 0x6b:
    return (char *)(s_Tile_U_006333dc);
  case 0x6c:
    return (char *)(s_Tile_V_006333d4);
  case 0x6d:
    return (char *)(s_Scroll_U_006333c8);
  case 0x6e:
    return (char *)(s_Scroll_V_006333bc);
  case 0x6f:
    return (char *)(s_Cylinder_NumPtsAxial_006333a4);
  case 0x70:
    return (char *)(s_Cylinder_NumPtsRadial_0063338c);
  case 0x71:
    return (char *)(s_Cylinder_Radius_0063337c);
  case 0x72:
    return (char *)(s_Cylinder_Radius2_00633368);
  case 0x73:
    return (char *)(s_Cylinder_Length_00633358);
  case 0x74:
    return (char *)(s_Colour_Range2_00633348);
  case 0x75:
    return (char *)(s_Sphere_NumPtsAx_00633338);
  case 0x76:
    return (char *)(s_Sphere_NumPtsRad_00633324);
  case 0x77:
    return (char *)(s_Sphere_RadiusTime_00633310);
  case 0x78:
    return (char *)(s_Sphere_Latitude_Start_006332f8);
  case 0x79:
    return (char *)(s_Sphere_Latitude_End_006332e4);
  case 0x7a:
    return (char *)(s_Sphere_Longitude_Start_006332cc);
  case 0x7b:
    return (char *)(s_Sphere_Longitude_End_006332b4);
  default:
    return (char *)(s____Unknown_Token____006332a0);
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f52b0, ap_004f52b0));
