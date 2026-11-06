// auto-ported from 00524830_FUN_00524830.c (FUN_00524830, 6248 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: the five string symbols with < or > in their names (0x640610, 0x640600, 0x6405d4, 0x6405c0, 0x6401f8) written as addresses; all 2080 (language 0-5,7,-1 x id 0-0x101,0x7fffffff,-1) results checked equal to an interpreter of the asm jump tables (0x524843, 0x5260ac.. 0x527420)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0083d97c GLOBAL_AT(int, 0x0083d97c)
#define DAT_00649a40 GLOBAL_AT(int, 0x00649a40)
#define DAT_00649940 GLOBAL_AT(int, 0x00649940)
#define DAT_0064990c GLOBAL_AT(int, 0x0064990c)
#define DAT_006498d0 GLOBAL_AT(int, 0x006498d0)
#define DAT_00649880 GLOBAL_AT(int, 0x00649880)
#define DAT_00649834 GLOBAL_AT(int, 0x00649834)
#define DAT_006495bc GLOBAL_AT(int, 0x006495bc)
#define DAT_006494fc GLOBAL_AT(int, 0x006494fc)
#define DAT_006494c8 GLOBAL_AT(int, 0x006494c8)
#define DAT_006494b4 GLOBAL_AT(int, 0x006494b4)
#define DAT_006493e8 GLOBAL_AT(int, 0x006493e8)
#define DAT_006491cc GLOBAL_AT(int, 0x006491cc)
#define DAT_006491bc GLOBAL_AT(int, 0x006491bc)
#define DAT_00648de0 GLOBAL_AT(int, 0x00648de0)
#define DAT_00648dd0 GLOBAL_AT(int, 0x00648dd0)
#define DAT_00648db8 GLOBAL_AT(int, 0x00648db8)
#define DAT_00648d48 GLOBAL_AT(int, 0x00648d48)
#define DAT_00648bc4 GLOBAL_AT(int, 0x00648bc4)
#define DAT_006484e4 GLOBAL_AT(int, 0x006484e4)
#define DAT_00648484 GLOBAL_AT(int, 0x00648484)
#define DAT_00648410 GLOBAL_AT(int, 0x00648410)
#define DAT_006483d8 GLOBAL_AT(int, 0x006483d8)
#define DAT_006482f0 GLOBAL_AT(int, 0x006482f0)
#define DAT_006482a0 GLOBAL_AT(int, 0x006482a0)
#define DAT_00648250 GLOBAL_AT(int, 0x00648250)
#define DAT_00648200 GLOBAL_AT(int, 0x00648200)
#define DAT_00647e5c GLOBAL_AT(int, 0x00647e5c)
#define DAT_00647af4 GLOBAL_AT(int, 0x00647af4)
#define DAT_00647a6c GLOBAL_AT(int, 0x00647a6c)
#define DAT_00647970 GLOBAL_AT(int, 0x00647970)
#define DAT_006478ec GLOBAL_AT(int, 0x006478ec)
#define DAT_006478ac GLOBAL_AT(int, 0x006478ac)
#define DAT_00647618 GLOBAL_AT(int, 0x00647618)
#define DAT_00647498 GLOBAL_AT(int, 0x00647498)
#define DAT_00647018 GLOBAL_AT(int, 0x00647018)
#define DAT_00646cdc GLOBAL_AT(int, 0x00646cdc)
#define DAT_00646c68 GLOBAL_AT(int, 0x00646c68)
#define DAT_00646a48 GLOBAL_AT(int, 0x00646a48)
#define DAT_00646974 GLOBAL_AT(int, 0x00646974)
#define DAT_00646850 GLOBAL_AT(int, 0x00646850)
#define DAT_00644bc4 GLOBAL_AT(int, 0x00644bc4)
#define DAT_00645094 GLOBAL_AT(int, 0x00645094)
#define DAT_00644d68 GLOBAL_AT(int, 0x00644d68)
#define DAT_00644d44 GLOBAL_AT(int, 0x00644d44)
#define DAT_00644cd8 GLOBAL_AT(int, 0x00644cd8)
#define DAT_00644ea4 GLOBAL_AT(int, 0x00644ea4)
#define DAT_00644954 GLOBAL_AT(int, 0x00644954)
#define DAT_0064492c GLOBAL_AT(int, 0x0064492c)
#define DAT_00644904 GLOBAL_AT(int, 0x00644904)
#define DAT_006445f0 GLOBAL_AT(int, 0x006445f0)
#define DAT_006445a0 GLOBAL_AT(int, 0x006445a0)
#define DAT_0064459c GLOBAL_AT(int, 0x0064459c)
#define DAT_00644598 GLOBAL_AT(int, 0x00644598)
#define DAT_00644594 GLOBAL_AT(int, 0x00644594)
#define DAT_0064457c GLOBAL_AT(int, 0x0064457c)
#define DAT_00644564 GLOBAL_AT(int, 0x00644564)
#define DAT_006444a4 GLOBAL_AT(int, 0x006444a4)
#define DAT_00643c9c GLOBAL_AT(int, 0x00643c9c)
#define DAT_006432fc GLOBAL_AT(int, 0x006432fc)
#define DAT_00643274 GLOBAL_AT(int, 0x00643274)
#define DAT_00643224 GLOBAL_AT(int, 0x00643224)
#define DAT_00642f90 GLOBAL_AT(int, 0x00642f90)
#define DAT_00642ee0 GLOBAL_AT(int, 0x00642ee0)
#define DAT_00642e24 GLOBAL_AT(int, 0x00642e24)
#define DAT_00642e08 GLOBAL_AT(int, 0x00642e08)
#define DAT_00642c40 GLOBAL_AT(int, 0x00642c40)
#define DAT_00642870 GLOBAL_AT(int, 0x00642870)
#define DAT_00641ee4 GLOBAL_AT(int, 0x00641ee4)
#define DAT_00677d78 GLOBAL_AT(int, 0x00677d78)
#define DAT_0064b0f0 GLOBAL_AT(int, 0x0064b0f0)
#define DAT_0064b004 GLOBAL_AT(int, 0x0064b004)
#define DAT_0064affc GLOBAL_AT(int, 0x0064affc)
#define DAT_0064aff4 GLOBAL_AT(int, 0x0064aff4)
#define DAT_0064afec GLOBAL_AT(int, 0x0064afec)
#define DAT_0064afe4 GLOBAL_AT(int, 0x0064afe4)
#define DAT_0064afdc GLOBAL_AT(int, 0x0064afdc)
#define DAT_0064afd4 GLOBAL_AT(int, 0x0064afd4)
#define DAT_0064afcc GLOBAL_AT(int, 0x0064afcc)
#define DAT_0064afc4 GLOBAL_AT(int, 0x0064afc4)
#define DAT_0064afbc GLOBAL_AT(int, 0x0064afbc)
#define DAT_0064afb4 GLOBAL_AT(int, 0x0064afb4)
#define DAT_0064afac GLOBAL_AT(int, 0x0064afac)
#define DAT_0064af30 GLOBAL_AT(int, 0x0064af30)
#define DAT_0064ae8c GLOBAL_AT(int, 0x0064ae8c)
#define u_Baja__11_Khz__8_bits__006433cc ((short*)0x006433cc)
#define u_RWINDOWS_00640488 ((short*)0x00640488)
#define u_Baja__Desplazamiento_Izq__Dcha___00644f9c ((short*)0x00644f9c)
#define u_DIVIDIR_0064444c ((short*)0x0064444c)
#define u_I_have_run_out_of_video_memory__0064a65c ((short*)0x0064a65c)
#define u_FINE_00641f0c ((short*)0x00641f0c)
#define u_Only_Where_Obvious__Recommended__006406d4 ((short*)0x006406d4)
#define u_Baja_00644eb4 ((short*)0x00644eb4)
#define u_Texture_creation_failure_type_3_0064a4e4 ((short*)0x0064a4e4)
#define u_Error_interno_1_00643678 ((short*)0x00643678)
#define u_SEPARATORE_00641d58 ((short*)0x00641d58)
#define u_ESPACIO_00644540 ((short*)0x00644540)
#define u_ALT_IZDA__00644550 ((short*)0x00644550)
#define u_Spieler_1_Joystick__Spieler_2_Jo_00645304 ((short*)0x00645304)
#define u_hat_back_0064b27c ((short*)0x0064b27c)
#define u_PLUS_00648ca8 ((short*)0x00648ca8)
#define u_TASTNUM_9_00641e30 ((short*)0x00641e30)
#define u_WASD___mouse__joystick_00649c38 ((short*)0x00649c38)
#define u_Error_1_memoria_insuficiente__00643758 ((short*)0x00643758)
#define u_LEFT_0064af38 ((short*)0x0064af38)
#define u_Disco_rigido_006427d0 ((short*)0x006427d0)
#define u_LEFT_CONTROL_0064b0c4 ((short*)0x0064b0c4)
#define u_chapeau_avant_00649068 ((short*)0x00649068)
#define u_Spieler_2_006470e4 ((short*)0x006470e4)
#define u_Right_0064b660 ((short*)0x0064b660)
#define u_Your_Direct3D_hardware_accelerat_0064a89c ((short*)0x0064a89c)
#define u_eje_1_adelante_0064484c ((short*)0x0064484c)
#define u_Livello_di_anti_aliasing_a_scher_0064108c ((short*)0x0064108c)
#define u_MAJ_DROIT_00648e50 ((short*)0x00648e50)
#define u_hat_left_0064b290 ((short*)0x0064b290)
#define u_OUT_OF_MEMORY_2_0064026c ((short*)0x0064026c)
#define u_WINDOWS_GAUCHE_00648f18 ((short*)0x00648f18)
#define u_Disco_duro_00644c94 ((short*)0x00644c94)
#define u_Normale__4_3__006409b0 ((short*)0x006409b0)
#define u_Links_0064700c ((short*)0x0064700c)
#define u_Apply_0064bbe0 ((short*)0x0064bbe0)
#define u_No_se_puede_iniciar_el_sistema_d_00644224 ((short*)0x00644224)
#define u_Alta__Scelta_consigliata__006429c0 ((short*)0x006429c0)
#define u_Hat_indietro_00642238 ((short*)0x00642238)
#define u_WINDOWS_IZDA__00644604 ((short*)0x00644604)
#define u_Nessuna_periferica_audio_disponi_00640f10 ((short*)0x00640f10)
#define u_GUILLEMET_00648e88 ((short*)0x00648e88)
#define u_Alejar_00644b18 ((short*)0x00644b18)
#define u_MENU_0064b158 ((short*)0x0064b158)
#define u_Archivo_no_encontrado__00643794 ((short*)0x00643794)
#define u_Bouton_3_du_joystick_00649220 ((short*)0x00649220)
#define u_3D_Sound_Hardware_Beschleunigung_00647508 ((short*)0x00647508)
#define u_ALT_DROIT_00648e14 ((short*)0x00648e14)
#define u_eje_1_izq__00644884 ((short*)0x00644884)
#define u_Moyenne__22_KHz__16_bits__00647d48 ((short*)0x00647d48)
#define u_No_se_puede_cargar_el_medio_soli_00643b3c ((short*)0x00643b3c)
#define u_Minimo_00640d14 ((short*)0x00640d14)
#define u_Alto_00644f2c ((short*)0x00644f2c)
#define u_axe_1_droite_006491a0 ((short*)0x006491a0)
#define u_SEPARATOR_0064add0 ((short*)0x0064add0)
#define u_Mittel__22_kHz__16_Bit__0064582c ((short*)0x0064582c)
#define u_TASTNUM_4_00641e04 ((short*)0x00641e04)
#define u_Could_not_load_required_media__0064a74c ((short*)0x0064a74c)
#define u_UMSCHALT_LINKS_0064699c ((short*)0x0064699c)
#define u_Hoch_006473a8 ((short*)0x006473a8)
#define u_Fallo_al_cambiar_modo__se_ha_pas_0064313c ((short*)0x0064313c)
#define u_DESTRA_00641ed4 ((short*)0x00641ed4)
#define u_Runter_00646fc4 ((short*)0x00646fc4)
#define u_SCROLL_0064af90 ((short*)0x0064af90)
#define u_Hat_avanti_00642220 ((short*)0x00642220)
#define u_Y_Achse_im_Lauf_Modus_umkehren_006470a4 ((short*)0x006470a4)
#define u_hat_izq__006447bc ((short*)0x006447bc)
#define u_None_0064a2b8 ((short*)0x0064a2b8)
#define u_Ninguno_00643600 ((short*)0x00643600)
#define u_Options_audio_00649b10 ((short*)0x00649b10)
#define u_Normal__4_3__0064786c ((short*)0x0064786c)
#define u_PGSU_00641f24 ((short*)0x00641f24)
#define u_INTRO_TECLADO_NUM__006442d0 ((short*)0x006442d0)
#define u_axis_2_left_0064b2f0 ((short*)0x0064b2f0)
#define u_Medium__22_Khz__16_bit__0064a0fc ((short*)0x0064a0fc)
#define u_MOLTIPLICAZIONE_00641e84 ((short*)0x00641e84)
#define u_No_se_ha_podido_reiniciar_el_sis_00643ae8 ((short*)0x00643ae8)
#define u_chapeau_gauche_006490a4 ((short*)0x006490a4)
#define u_0_TECLADO_NUM__006442b0 ((short*)0x006442b0)
#define u_SUPPR_00648d98 ((short*)0x00648d98)
#define u_axe_2_avant_006490e4 ((short*)0x006490e4)
#define u_Activar_textura_32_bits__00644d94 ((short*)0x00644d94)
#define u_INSERT_0064af80 ((short*)0x0064af80)
#define u_Medium_0064b914 ((short*)0x0064b914)
#define u_Souris_00649378 ((short*)0x00649378)
#define u_Aucun_00647f38 ((short*)0x00647f38)
#define u_OUT_OF_MEMORY_3_0064024c ((short*)0x0064024c)
#define u_OUT_OF_MEMORY_4_0064022c ((short*)0x0064022c)
#define u_9_TECLADO_NUM__006443c4 ((short*)0x006443c4)
#define u_Select_Weapon_0064b5ec ((short*)0x0064b5ec)
#define u_NUM_9_00646820 ((short*)0x00646820)
#define u_eje_1_dcha__0064489c ((short*)0x0064489c)
#define u_Sonido_3D__0064503c ((short*)0x0064503c)
#define u_Wollen_Sie_das_Spiel_wirklich_be_0064568c ((short*)0x0064568c)
#define u_axe_1_gauche_00649184 ((short*)0x00649184)
#define u_LEFT_WINDOWS_0064b120 ((short*)0x0064b120)
#define u_PENTER_006403d4 ((short*)0x006403d4)
#define u_Hard_Drive_0064b78c ((short*)0x0064b78c)
#define u_QZSD___souris_0064772c ((short*)0x0064772c)
#define u_LEERTASTE_00646960 ((short*)0x00646960)
#define u_Yes__Recommended__0064b7f4 ((short*)0x0064b7f4)
#define u_SOTTRAZIONE_00641e6c ((short*)0x00641e6c)
#define u_MULTIPL__00648d08 ((short*)0x00648d08)
#define u_Zoom___avant_00649464 ((short*)0x00649464)
#define u_A_destra_00642620 ((short*)0x00642620)
#define u_RIGHT_0064af24 ((short*)0x0064af24)
#define u_BACK_0064b0f8 ((short*)0x0064b0f8)
#define u_INDIETRO_00642064 ((short*)0x00642064)
#define u_COMPASS_TEXTURE_FAILED_00640354 ((short*)0x00640354)
#define u_Maximum_texture_size_too_small_0064a5e4 ((short*)0x0064a5e4)
#define u_Enabled_0064b404 ((short*)0x0064b404)
#define u_DRUCKEN_0064691c ((short*)0x0064691c)
#define u_TORNA_00642058 ((short*)0x00642058)
#define u_NUM_6_006467fc ((short*)0x006467fc)
#define u_High__Recommended__0064b8ec ((short*)0x0064b8ec)
#define u_Clavier_multijoueur___souris_006476f0 ((short*)0x006476f0)
#define u_8_PAV__NUM__00648ccc ((short*)0x00648ccc)
#define u_Dcha__00644b6c ((short*)0x00644b6c)
#define u_Tipo_di_errore_di_memoria_esauri_00641174 ((short*)0x00641174)
#define u_VERR__NUM__00648d30 ((short*)0x00648d30)
#define u_MULTIPLY_0064aee4 ((short*)0x0064aee4)
#define u_RIGHT_SHIFT_0064b05c ((short*)0x0064b05c)
#define u_Look__Up_0064b64c ((short*)0x0064b64c)
#define u_WASD___Maus__Joystick_006452d8 ((short*)0x006452d8)
#define u_Player_2_s_controller_has_been_r_0064062c ((short*)0x0064062c)
#define u_Player_2_0064b728 ((short*)0x0064b728)
#define u_Alta__44_KHz__16_bit__00640ec4 ((short*)0x00640ec4)
#define u_IZDA__00644498 ((short*)0x00644498)
#define u_hat_forward_0064b264 ((short*)0x0064b264)
#define u_asse_2_sinistra_006422c4 ((short*)0x006422c4)
#define u_MINUS_00646844 ((short*)0x00646844)
#define u_Linke_Maustaste_00646e80 ((short*)0x00646e80)
#define u_Others__Fire_weapon_0064b608 ((short*)0x0064b608)
#define u_TASTNUM_1_00641dc8 ((short*)0x00641dc8)
#define u_CAPS_LOCK_0064b0b0 ((short*)0x0064b0b0)
#define u_ENDE_006468b0 ((short*)0x006468b0)
#define u_Faibles_006498fc ((short*)0x006498fc)
#define u_chapeau_droite_006490c4 ((short*)0x006490c4)
#define u_hat_adelante_0064478c ((short*)0x0064478c)
#define u_RIGHT_CONTROL_0064b00c ((short*)0x0064b00c)
#define u_Player_1_press_FIRE_006404c4 ((short*)0x006404c4)
#define u_HOME_0064af74 ((short*)0x0064af74)
#define u_NUMPAD_2_0064ae28 ((short*)0x0064ae28)
#define u_axis_1_left_0064b35c ((short*)0x0064b35c)
#define u_Rechts_00646ffc ((short*)0x00646ffc)
#define u_Media__22_KHz__16_bit__00640e94 ((short*)0x00640e94)
#define u_Achse_2_vor_00646c50 ((short*)0x00646c50)
#define u_NUMPAD_6_0064ae50 ((short*)0x0064ae50)
#define u_PAGE_BAS_00648d7c ((short*)0x00648d7c)
#define u_STEUERUNG_RECHTS_0064692c ((short*)0x0064692c)
#define u_BLOQ_DESPL_006444e8 ((short*)0x006444e8)
#define u_Faible__11_KHz__8_bits__00647d18 ((short*)0x00647d18)
#define u_VERR__MAJ__00648eb4 ((short*)0x00648eb4)
#define u_INTRO_006445d0 ((short*)0x006445d0)
#define u_Null_00645a38 ((short*)0x00645a38)
#define u_STEUERUNG_LINKS_00646a18 ((short*)0x00646a18)
#define u_Divers___tir_00649438 ((short*)0x00649438)
#define u_axis_1_right_0064b374 ((short*)0x0064b374)
#define u_Media__22_Khz__16_bits__006433f8 ((short*)0x006433f8)
#define u_RIGHT_ALT_0064b028 ((short*)0x0064b028)
#define u_NUMPAD_3_0064ae14 ((short*)0x0064ae14)
#define u_Video_Options_0064bba8 ((short*)0x0064bba8)
#define u_axe_1_avant_00649150 ((short*)0x00649150)
#define u_Tasto_00642530 ((short*)0x00642530)
#define u_ALT_SINISTRO_00641f94 ((short*)0x00641f94)
#define u_Activer_les_textures_32_bits___00649710 ((short*)0x00649710)
#define u_No__Recommended__0064b7d0 ((short*)0x0064b7d0)
#define u_Media___HRTF_leggero___00642b3c ((short*)0x00642b3c)
#define u_Control_configuration_details_0064b750 ((short*)0x0064b750)
#define u_ARRIBA_00644488 ((short*)0x00644488)
#define u_Mouse_sensitivity__0064b578 ((short*)0x0064b578)
#define u_No_se_ha_encontrado_modo_de_pant_00642d04 ((short*)0x00642d04)
#define u_NUM_7_00646838 ((short*)0x00646838)
#define u_Hoch___Full_HRTF___00647470 ((short*)0x00647470)
#define u_Applica_00642cf4 ((short*)0x00642cf4)
#define u_CANC_00641f18 ((short*)0x00641f18)
#define u_INICIO_006444d0 ((short*)0x006444d0)
#define u_Down_00640550 ((short*)0x00640550)
#define u_DCHA__0064447c ((short*)0x0064447c)
#define u_NUMPAD_5_0064ae64 ((short*)0x0064ae64)
#define u_TASTNUM_3_00641da0 ((short*)0x00641da0)
#define u_TILD_0064b08c ((short*)0x0064b08c)
#define u_NUM_2_006467e4 ((short*)0x006467e4)
#define u_Sorry__player_2_has_some_control_0064a1e8 ((short*)0x0064a1e8)
#define u_Low__Recommended__00640718 ((short*)0x00640718)
#define u_FINESTRE_A_SINISTRA_00642084 ((short*)0x00642084)
#define u_DROITE_00648d50 ((short*)0x00648d50)
#define u_WASD___mouse_00649c1c ((short*)0x00649c1c)
#define u_Faible__pano__G_D__0064996c ((short*)0x0064996c)
#define u_3D_Sound_hardware_acceleration__0064bafc ((short*)0x0064bafc)
#define u_SEPARADOR_0064429c ((short*)0x0064429c)
#define u_Tipo_di_errore_di_memoria_esauri_006411c0 ((short*)0x006411c0)
#define u_Nessuna_periferica_Direct3D_di_a_006419f8 ((short*)0x006419f8)
#define u_Out_of_memory_error_type_3_0064a384 ((short*)0x0064a384)
#define u_Tipo_di_errore_di_creazione_text_00641364 ((short*)0x00641364)
#define u_ALT_GAUCHE_00648e38 ((short*)0x00648e38)
#define u_MOINS_00648cfc ((short*)0x00648cfc)
#define u_LEFT_SHIFT_0064b074 ((short*)0x0064b074)
#define u_ECHAP_00648f0c ((short*)0x00648f0c)
#define u_5_TECLADO_NUM__00644378 ((short*)0x00644378)
#define u_Memoria_esaurita__00641578 ((short*)0x00641578)
#define u_axe_2_droite_00649134 ((short*)0x00649134)
#define u_TECLA_00644a3c ((short*)0x00644a3c)
#define u_Texture_Resolution__0064b924 ((short*)0x0064b924)
#define u_PAUSA_006445f8 ((short*)0x006445f8)
#define u_Hat_links_00646c24 ((short*)0x00646c24)
#define u_Rechte_Maustaste_00646e34 ((short*)0x00646e34)
#define u_KOMMA_006467a8 ((short*)0x006467a8)
#define u_QZSD___souris__joystick_00647748 ((short*)0x00647748)
#define u_Could_not_reset_the_3D_system__0064a70c ((short*)0x0064a70c)
#define u_Left_Mouse_Button_0064b540 ((short*)0x0064b540)
#define u_1_TECLADO_NUM__00644338 ((short*)0x00644338)
#define u_Achse_1_rechts_00646d18 ((short*)0x00646d18)
#define u_OUT_OF_MEMORY_1_0064028c ((short*)0x0064028c)
#define u_Fallo_al_configurar_antialias_en_006431bc ((short*)0x006431bc)
#define u_RETOUR_00648efc ((short*)0x00648efc)
#define u_Hat_rechts_00646c38 ((short*)0x00646c38)
#define u_MAIUSC_SINISTRO_00641fcc ((short*)0x00641fcc)
#define u_NUM_4_00646814 ((short*)0x00646814)
#define u_LINKE_WINDOWSTASTE_00646a5c ((short*)0x00646a5c)
#define u_BILD_AUF_006468d0 ((short*)0x006468d0)
#define u_Media__Scelta_consigliata__00642988 ((short*)0x00642988)
#define u_Hacer_clic_para_empezar_00644648 ((short*)0x00644648)
#define u_Bassa__11_KHz__8_bit__00640e68 ((short*)0x00640e68)
#define u_4_PAV__NUM__00648c90 ((short*)0x00648c90)
#define u_SPACE_0064b03c ((short*)0x0064b03c)
#define u_Error_2_memoria_insuficiente__00643718 ((short*)0x00643718)
#define u_Bitte_warten_0064678c ((short*)0x0064678c)
#define u_No__Scelta_consigliata__00642840 ((short*)0x00642840)
#define u_NUMPAD9_00640444 ((short*)0x00640444)
#define u_Izq__00644b78 ((short*)0x00644b78)
#define u_High_0064b9a4 ((short*)0x0064b9a4)
#define u_DEUX_POINTS_00648e9c ((short*)0x00648e9c)
#define u_Rotella_del_mouse_su_006421c8 ((short*)0x006421c8)
#define u_MULTIPLICAR_00644434 ((short*)0x00644434)
#define u_TASTNUM_6_00641ddc ((short*)0x00641ddc)
#define u_Cliquez_pour_commencer_00648f58 ((short*)0x00648f58)
#define u_5_PAV__NUM__00648c78 ((short*)0x00648c78)
#define u_Ihr_Direct3D_Hardwarebeschleunig_00646238 ((short*)0x00646238)
#define u_6_PAV__NUM__00648c60 ((short*)0x00648c60)
#define u_Formato_schermo__006409cc ((short*)0x006409cc)
#define u_NUMPAD4_00640434 ((short*)0x00640434)
#define u_TEXTURE_CREATION_FAILURE_1_0064031c ((short*)0x0064031c)
#define u_Nivel_de_detalle_general__006432a0 ((short*)0x006432a0)
#define u_Hat_sinistra_00642254 ((short*)0x00642254)
#define u_Sound_Device_Number_0064bad4 ((short*)0x0064bad4)
#define u_NUM_EINGABE_006467c0 ((short*)0x006467c0)
#define u_Alta__Recomendada__00644e68 ((short*)0x00644e68)
#define u_HOCH_00646888 ((short*)0x00646888)
#define u_Achse_1_links_00646cfc ((short*)0x00646cfc)
#define u_eje_2_adelante_006447e4 ((short*)0x006447e4)
#define u_Schermo_largo__16_9__00640984 ((short*)0x00640984)
#define u_Opzioni_controller_00642c94 ((short*)0x00642c94)
#define u_Nicht_gefunden_00646d64 ((short*)0x00646d64)
#define u_asse_1_indietro_0064231c ((short*)0x0064231c)
#define u_BLOQ_NUM_0064445c ((short*)0x0064445c)
#define u_NUMPAD_ENTER_0064adf8 ((short*)0x0064adf8)
#define u_NUM_3_006467d8 ((short*)0x006467d8)
#define u_Compass_texture_creation_failed_0064a5a4 ((short*)0x0064a5a4)
#define u_Bassa_Scelta_consigliata__00642954 ((short*)0x00642954)
#define u_axis_2_back_0064b2d8 ((short*)0x0064b2d8)
#define u_No_se_han_encontrado_dispositivo_006440cc ((short*)0x006440cc)
#define u_LWINDOWS_00640474 ((short*)0x00640474)
#define u_axis_006404ec ((short*)0x006404ec)
#define u_PAGE_HAUT_00648da4 ((short*)0x00648da4)
#define u_RIGHT_WINDOWS_0064b13c ((short*)0x0064b13c)
#define u_32_Bit_Texturen_verwenden__0064722c ((short*)0x0064722c)
#define u_NUMLOCK_0064af08 ((short*)0x0064af08)
#define u_Regard___en_haut_00649490 ((short*)0x00649490)
#define u_Out_of_memory_error_type_2_0064a3bc ((short*)0x0064a3bc)
#define u_Moyenne_00649994 ((short*)0x00649994)
#define u_NUMPAD1_00640404 ((short*)0x00640404)
#define u_SUBTRACT_0064aed0 ((short*)0x0064aed0)
#define u_Opzioni_video_00642cbc ((short*)0x00642cbc)
#define u_ENTFERNEN_006468bc ((short*)0x006468bc)
#define u_CONTROL_DROIT_00648df8 ((short*)0x00648df8)
#define u_Not_present_0064b428 ((short*)0x0064b428)
#define u_Middle_Mouse_Button_0064b518 ((short*)0x0064b518)
#define u_ESPACE_00648e28 ((short*)0x00648e28)
#define u_Hoch__44_kHz__16_Bit__0064585c ((short*)0x0064585c)
#define u_Error_3_memoria_insuficiente__006436d8 ((short*)0x006436d8)
#define u_Anzeige_Optionen_006475bc ((short*)0x006475bc)
#define u_SUMAR_006443b8 ((short*)0x006443b8)
#define u_Jugador_1_00644c48 ((short*)0x00644c48)
#define u_STAMP_00641f48 ((short*)0x00641f48)
#define u_Enable_32_bit_textures__0064b840 ((short*)0x0064b840)
#define u_Generic_application_error__0064a624 ((short*)0x0064a624)
#define u_asse_1_destra_0064235c ((short*)0x0064235c)
#define u_Detalle_sombras__00644f78 ((short*)0x00644f78)
#define u_Extra_graphical_features__0064b88c ((short*)0x0064b88c)
#define u_NUMPAD_4_0064ae78 ((short*)0x0064ae78)
#define u_Achse_2_links_00646c88 ((short*)0x00646c88)
#define u_IMPR_PANT_00644500 ((short*)0x00644500)
#define u_Destra_00642684 ((short*)0x00642684)
#define u_SPAZIO_00641f84 ((short*)0x00641f84)
#define u_Media__Recomendada__00644e40 ((short*)0x00644e40)
#define u_eje_2_izq__0064481c ((short*)0x0064481c)
#define u_Y_Achse_im_Jet_Modus_umkehren_00647064 ((short*)0x00647064)
#define u_Error_4_memoria_insuficiente__00643698 ((short*)0x00643698)
#define u_axis_1_forward_0064b324 ((short*)0x0064b324)
#define u_Minima_00642a20 ((short*)0x00642a20)
#define u_High___Full_HRTF___0064ba5c ((short*)0x0064ba5c)
#define u_Nur_wenn_sichtbar_00647208 ((short*)0x00647208)
#define u_ALT_DCHA__0064452c ((short*)0x0064452c)
#define u_Taste_00646eac ((short*)0x00646eac)
#define u_WINDOWS_DROITE_00648f38 ((short*)0x00648f38)
#define u_MAIUSC_DESTRO_00641fb0 ((short*)0x00641fb0)
#define u_Aplicar_006451a4 ((short*)0x006451a4)
#define u_TASTNUM_5_00641df0 ((short*)0x00641df0)
#define u_WASD___Maus_006452c0 ((short*)0x006452c0)
#define u_TASTNUM_0_00641d70 ((short*)0x00641d70)
#define u_NUMPAD7_00640464 ((short*)0x00640464)
#define u_Opzioni_audio_00642cd8 ((short*)0x00642cd8)
#define u_NUM_1_006467f0 ((short*)0x006467f0)
#define u_asse_1_avanti_00642300 ((short*)0x00642300)
#define u_Are_you_sure_you_want_to_quit_th_00649f80 ((short*)0x00649f80)
#define u_MAXIMUM_TEXTURE_SIZE_TOO_SMALL_00640384 ((short*)0x00640384)
#define u_Moyens_00649824 ((short*)0x00649824)
#define u_DELETE_0064af58 ((short*)0x0064af58)
#define u_COLON_0064b0a4 ((short*)0x0064b0a4)
#define u_Normal__4_3__00649d0c ((short*)0x00649d0c)
#define u_Player_1_0064b73c ((short*)0x0064b73c)
#define u_Hoch__Empfohlen__0064730c ((short*)0x0064730c)
#define u_Alta_00644ecc ((short*)0x00644ecc)
#define u_VIRGOLETTE_00641fec ((short*)0x00641fec)
#define u_Full_Screen_Anti_Aliasing_konnte_00645614 ((short*)0x00645614)
#define u_Fatal_error__sorry_0064a44c ((short*)0x0064a44c)
#define u_CTRL_SINISTRO_0064203c ((short*)0x0064203c)
#define u_Abajo_00644b44 ((short*)0x00644b44)
#define u_Maus_00646ea0 ((short*)0x00646ea0)
#define u_Nur_wenn_sichtbar__Empfohlen__00647188 ((short*)0x00647188)
#define u_Touche_00649388 ((short*)0x00649388)
#define u_Otros__Disparar_arma_00644aec ((short*)0x00644aec)
#define u_HAUT_00648d60 ((short*)0x00648d60)
#define u_Out_of_memory_error_type_1_0064a3f4 ((short*)0x0064a3f4)
#define u_High__44_Khz__16_bit__0064a12c ((short*)0x0064a12c)
#define u_7_PAV__NUM__00648ce4 ((short*)0x00648ce4)
#define u_NUM_0_006467b4 ((short*)0x006467b4)
#define u_Medio_00644f38 ((short*)0x00644f38)
#define u_Special_function_0064b5a0 ((short*)0x0064b5a0)
#define u_Click_to_start_0064b164 ((short*)0x0064b164)
#define u_eje_2_dcha__00644834 ((short*)0x00644834)
#define u_ROLLEN_0064690c ((short*)0x0064690c)
#define u_Tipo_di_errore_di_memoria_esauri_00641128 ((short*)0x00641128)
#define u_NUM_8_0064682c ((short*)0x0064682c)
#define u_Keine_Soundkarte_vorhanden_006458a8 ((short*)0x006458a8)
#define u_Baja__Recomendada__00644e18 ((short*)0x00644e18)
#define u_3D_Sound_Hardware_acceleration__0064073c ((short*)0x0064073c)
#define u_NUMPAD_0_0064ade4 ((short*)0x0064ade4)
#define u_Nivel_antialias_pantalla_complet_00643610 ((short*)0x00643610)
#define u_Medium___Light_HRTF___0064ba30 ((short*)0x0064ba30)
#define u_hat_dcho__006447d0 ((short*)0x006447d0)
#define u_Select_Sound_Device__0064baa8 ((short*)0x0064baa8)
#define u_Mittel__Empfohlen__006472e4 ((short*)0x006472e4)
#define u_NUMPAD2_006403f4 ((short*)0x006403f4)
#define u_WINDOWS_DCHA_00644620 ((short*)0x00644620)
#define u_Error_loading_level___data_files_00649b84 ((short*)0x00649b84)
#define u_Niedrig__11_kHz__8_Bit__006457fc ((short*)0x006457fc)
#define u_Memoria_video_esaurita__00641548 ((short*)0x00641548)
#define u_GAUCHE_00648d6c ((short*)0x00648d6c)
#define u_Only_Where_Obvious_0064b818 ((short*)0x0064b818)
#define u_TEXTURE_CREATION_FAILURE_2_006402e4 ((short*)0x006402e4)
#define u_DOWN_0064af18 ((short*)0x0064af18)
#define u_Tipo_di_errore_di_creazione_text_00641400 ((short*)0x00641400)
#define u_Media_00644ec0 ((short*)0x00644ec0)
#define u_4_TECLADO_NUM__00644398 ((short*)0x00644398)
#define u_Mausrad_runter_00646bdc ((short*)0x00646bdc)
#define u_Zum_Starten_klicken_00646ab8 ((short*)0x00646ab8)
#define u_TASTNUM_8_00641e44 ((short*)0x00641e44)
#define u_NUMPAD_9_0064ae94 ((short*)0x0064ae94)
#define u_Moyen_00647bc0 ((short*)0x00647bc0)
#define u_0_PAV__NUM__00648bdc ((short*)0x00648bdc)
#define u_Out_of_memory_error_type_4_0064a34c ((short*)0x0064a34c)
#define u_Niedrig_006473b4 ((short*)0x006473b4)
#define u_Sound_Optionen_006475e0 ((short*)0x006475e0)
#define u_SINISTRA_00641eec ((short*)0x00641eec)
#define u_Air_Brake_0064b5c4 ((short*)0x0064b5c4)
#define u_EINGABE_00646a38 ((short*)0x00646a38)
#define u_Custom_00649fe0 ((short*)0x00649fe0)
#define u_3_PAV__NUM__00648c18 ((short*)0x00648c18)
#define u_RUNTER_00646868 ((short*)0x00646868)
#define u_Opzioni_salvate_correttamente__00640f5c ((short*)0x00640f5c)
#define u_PGDN_0064af44 ((short*)0x0064af44)
#define u_NUMPAD5_00640424 ((short*)0x00640424)
#define u_RETROCESO_006445dc ((short*)0x006445dc)
#define u_Texture_creation_failure_type_2_0064a524 ((short*)0x0064a524)
#define u_INSER_00648dc4 ((short*)0x00648dc4)
#define u_Hat_destra_00642270 ((short*)0x00642270)
#define u_RECHTS_00646878 ((short*)0x00646878)
#define u_axis_1_back_0064b344 ((short*)0x0064b344)
#define u_Bajo_00644f44 ((short*)0x00644f44)
#define u_Texture_creation_failure_type_1_0064a564 ((short*)0x0064a564)
#define u_axis_2_right_0064b308 ((short*)0x0064b308)
#define u_ESCAPE_0064b104 ((short*)0x0064b104)
#define u_7_TECLADO_NUM__00644404 ((short*)0x00644404)
#define u_PAUSE_0064b114 ((short*)0x0064b114)
#define u_NUMPAD6_00640414 ((short*)0x00640414)
#define u_CTRL_DCHA__00644514 ((short*)0x00644514)
#define u_ADDIZIONE__00641e18 ((short*)0x00641e18)
#define u_asse_1_sinistra_0064233c ((short*)0x0064233c)
#define u_Nessuno_0064107c ((short*)0x0064107c)
#define u_TASTNUM_INVIO_00641d84 ((short*)0x00641d84)
#define u_Full_Screen_Anti_Aliasing_Stufe__00645a44 ((short*)0x00645a44)
#define u_Hat_vor_00646bfc ((short*)0x00646bfc)
#define u_Synchro_vert____006498b0 ((short*)0x006498b0)
#define u_ESCI_00642078 ((short*)0x00642078)
#define u_Mittel___Light_HRTF___00647444 ((short*)0x00647444)
#define u_Modo_de_pantalla_cambiado__00642f58 ((short*)0x00642f58)
#define u_LEFT_ALT_0064b048 ((short*)0x0064b048)
#define u_Low__Left_Right_panning__0064b9fc ((short*)0x0064b9fc)
#define u_Mouse_autocenter__0064052c ((short*)0x0064052c)
#define u_NUMPAD3_006403e4 ((short*)0x006403e4)
#define u_Datei_nicht_gefunden__00645c00 ((short*)0x00645c00)
#define u_Your_Direct3D_hardware_accelerat_0064a970 ((short*)0x0064a970)
#define u_Alta__44_Khz__16_bits__00643428 ((short*)0x00643428)
#define u_CONTROL_GAUCHE_00648ecc ((short*)0x00648ecc)
#define u_Freno_de_aire_00644a94 ((short*)0x00644a94)
#define u_Niedrig__Empfohlen__006472bc ((short*)0x006472bc)
#define u_Right_Mouse_Button_0064b4f0 ((short*)0x0064b4f0)
#define u_button_006404f8 ((short*)0x006404f8)
#define u_ALT_GR_00646950 ((short*)0x00646950)
#define u_BLOCCO_MAIUSCOLE_00642018 ((short*)0x00642018)
#define u_Low__11_Khz__8_bit__0064a0d4 ((short*)0x0064a0d4)
#define u_Nein_0064754c ((short*)0x0064754c)
#define u_LINKS_00646894 ((short*)0x00646894)
#define u_QUOTE_0064b098 ((short*)0x0064b098)
#define u_Vista__Arriba_00644b50 ((short*)0x00644b50)
#define u_3_TECLADO_NUM__006442f8 ((short*)0x006442f8)
#define u_axis_2_forward_0064b2b8 ((short*)0x0064b2b8)
#define u_Livello_generale_dettagli__00640d44 ((short*)0x00640d44)
#define u_Player_1_joystick__player_2_joys_00649c68 ((short*)0x00649c68)
#define u_BILD_AB_006468a0 ((short*)0x006468a0)
#define u_Could_not_find_any_compatible_Di_0064ac58 ((short*)0x0064ac58)
#define u_Choix_d_arme_0064941c ((short*)0x0064941c)
#define u_CTRL_IZDA__006445b8 ((short*)0x006445b8)
#define u_Zoom__In_0064b638 ((short*)0x0064b638)
#define u_VSync__0064b978 ((short*)0x0064b978)
#define u_Calidad_del_sonido__00643458 ((short*)0x00643458)
#define u_DIVIDE_0064aef8 ((short*)0x0064aef8)
#define u_axe_2_gauche_00649118 ((short*)0x00649118)
#define u_TILDE_00648e7c ((short*)0x00648e7c)
#define u_2_TECLADO_NUM__00644318 ((short*)0x00644318)
#define u_Tipo_di_errore_di_creazione_text_006413b4 ((short*)0x006413b4)
#define u_GETEILT_00646858 ((short*)0x00646858)
#define u_3D_Sound_Quality__0064ba84 ((short*)0x0064ba84)
#define u_Sorry__mode_change_failed__falli_00649eb0 ((short*)0x00649eb0)
#define u_Spieler_1_006470f8 ((short*)0x006470f8)
#define u_Ja__Empfohlen__006471e8 ((short*)0x006471e8)
#define u_Joueur_1_006495a8 ((short*)0x006495a8)
#define u_Nein__Empfohlen__006471c4 ((short*)0x006471c4)
#define u_Mausrad_hoch_00646bc0 ((short*)0x00646bc0)
#define u_Zoom__Acercar_00644b28 ((short*)0x00644b28)
#define u_Bouton_1_du_joystick_00649280 ((short*)0x00649280)
#define u_TEXTURE_CREATION_FAILURE_3_006402ac ((short*)0x006402ac)
#define u_Joueur_1___joystick__joueur_2___j_00647778 ((short*)0x00647778)
#define u_1_PAV__NUM__00648c48 ((short*)0x00648c48)
#define u_asse_2_destra_006422e4 ((short*)0x006422e4)
#define u_POSITION1_006468e4 ((short*)0x006468e4)
#define u_No_se_han_encontrado_dispositivo_00643ed4 ((short*)0x00643ed4)
#define u_Video_adapter__0064a01c ((short*)0x0064a01c)
#define u_UMSCHALT_RECHTS_0064697c ((short*)0x0064697c)
#define u_Absent_006491e0 ((short*)0x006491e0)
#define u_En_bas_00649480 ((short*)0x00649480)
#define u_FESTSTELLTASTE_006469f8 ((short*)0x006469f8)
#define u_RETURN_0064b0e0 ((short*)0x0064b0e0)
#define u_TASTNUM_7_00641e58 ((short*)0x00641e58)
#define u_ABAJO_00644470 ((short*)0x00644470)
#define u_FINESTRE_A_DESTRA_006420ac ((short*)0x006420ac)
#define u_CTRL_DESTRO_00641f54 ((short*)0x00641f54)
#define u_Non_presente_006423a4 ((short*)0x006423a4)
#define u_Joueur_2_00649594 ((short*)0x00649594)
#define u_MAJ_GAUCHE_00648e64 ((short*)0x00648e64)
#define u_Tipo_di_errore_di_memoria_esauri_0064120c ((short*)0x0064120c)
#define u_PGUP_0064af68 ((short*)0x0064af68)
#define u_hat_right_0064b2a4 ((short*)0x0064b2a4)
#define u_NUM_5_00646808 ((short*)0x00646808)
#define u_PRTSC_0064afa0 ((short*)0x0064afa0)
#define u_A_sinistra_00642634 ((short*)0x00642634)
#define u_Medium__Recommended__0064b8c0 ((short*)0x0064b8c0)
#define u_Not_available_0064b870 ((short*)0x0064b870)
#define u_Non_disponibile_00642900 ((short*)0x00642900)
#define u_RECHTE_WINDOWSTASTE_00646a84 ((short*)0x00646a84)
#define u_asse_2_indietro_006422a4 ((short*)0x006422a4)
#define u_9_PAV__NUM__00648cb4 ((short*)0x00648cb4)
#define u_6_TECLADO_NUM__00644358 ((short*)0x00644358)
#define u_Bouton_4_du_joystick_006491f0 ((short*)0x006491f0)
#define u_Left_0064b66c ((short*)0x0064b66c)
#define u_Media___HRTF_ligero___00644fe0 ((short*)0x00644fe0)
#define u_Die_Soundkarte_konnte_nicht_init_00646728 ((short*)0x00646728)
#define u_8_TECLADO_NUM__006443e4 ((short*)0x006443e4)
#define u_Espere__por_favor_00644278 ((short*)0x00644278)
#define u_Mittel_00647330 ((short*)0x00647330)
#define u_Suggest_a_configuration_00640590 ((short*)0x00640590)
#define u_TASTNUM_2_00641db4 ((short*)0x00641db4)
#define u_Scambia_altoparlanti_destro_sini_00642c48 ((short*)0x00642c48)
#define u_Bassa_00642a30 ((short*)0x00642a30)
#define u_No__Recomendado__00644d20 ((short*)0x00644d20)
#define u_Mouse_0064b564 ((short*)0x0064b564)
#define u_Player_2_press_FIRE_0064049c ((short*)0x0064049c)
#define u_Jugador_2_00644c34 ((short*)0x00644c34)
#define u_Bouton_2_du_joystick_00649250 ((short*)0x00649250)
#define u_NUMPAD_8_0064aea8 ((short*)0x0064aea8)
#define u_BLOC_SCORR_00641f30 ((short*)0x00641f30)
#define u_NUMPAD_1_0064ae3c ((short*)0x0064ae3c)
#define u_Large__16_9__00647850 ((short*)0x00647850)
#define u_ALT_DESTRO_00641f6c ((short*)0x00641f6c)
#define u_Player_1_s_controller_has_been_r_0064067c ((short*)0x0064067c)
#define u_Lowest_00649fd0 ((short*)0x00649fd0)
#define u_Achse_2_rechts_00646ca4 ((short*)0x00646ca4)
#define u_NUMPAD8_00640454 ((short*)0x00640454)
#define u_No_se_ha_podido_sobrescribir_el_a_00644678 ((short*)0x00644678)
#define u_Minimal_006456dc ((short*)0x006456dc)
#define u_RESTAR_00644424 ((short*)0x00644424)
#define u_2_PAV__NUM__00648c30 ((short*)0x00648c30)
#define u_DOPPELPUNKT_006469e0 ((short*)0x006469e0)
#define u_Achse_1_vor_00646cc4 ((short*)0x00646cc4)
#define u_Bassa__Panoramica_destra_sinistr_00642af4 ((short*)0x00642af4)
#define u_BLOC_NUM_00641eb8 ((short*)0x00641eb8)
#define u_Sound_quality__0064a158 ((short*)0x0064a158)
#define u_DUE_PUNTI_00642004 ((short*)0x00642004)
#define u_Fichier_introuvable___00648114 ((short*)0x00648114)
#define u_asse_2_avanti_00642288 ((short*)0x00642288)
#define u_Basso_00642a98 ((short*)0x00642a98)
#define u_Alta___HRTF_completo___0064500c ((short*)0x0064500c)
#define u_Error_interno__00643658 ((short*)0x00643658)
#define u_Altro__Armi_006425d8 ((short*)0x006425d8)
#define u_Textura__00644e90 ((short*)0x00644e90)
#define u_SUPR_006444b4 ((short*)0x006444b4)
#define u_I_have_run_out_of_memory__0064a69c ((short*)0x0064a69c)
#define u_Sound_Options_0064bbc4 ((short*)0x0064bbc4)
#define u_NUMPAD_7_0064aebc ((short*)0x0064aebc)
#define u_NUMPAD0_006403c4 ((short*)0x006403c4)
#define u_Error_grave_006437c4 ((short*)0x006437c4)
#define u_Overall_Detail_level__00649ff0 ((short*)0x00649ff0)
#define PTR_DAT_0064960c GLOBAL_AT(void*, 0x0064960c)
#define PTR_DAT_0064179c GLOBAL_AT(void*, 0x0064179c)
#define PTR_DAT_00649a10 GLOBAL_AT(void*, 0x00649a10)
#define PTR_DAT_00646ee4 GLOBAL_AT(void*, 0x00646ee4)
#define PTR_DAT_00647264 GLOBAL_AT(void*, 0x00647264)
#define PTR_DAT_006497a8 GLOBAL_AT(void*, 0x006497a8)
#define PTR_DAT_00645184 GLOBAL_AT(void*, 0x00645184)
#define PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00642790 GLOBAL_AT(void*, 0x00642790)
#define PTR_DAT_00642760 GLOBAL_AT(void*, 0x00642760)
#define PTR_DAT_006497fc GLOBAL_AT(void*, 0x006497fc)
#define PTR_DAT_00642694 GLOBAL_AT(void*, 0x00642694)
#define PTR_DAT_00643514 GLOBAL_AT(void*, 0x00643514)
#define PTR_DAT_0064020c GLOBAL_AT(void*, 0x0064020c)
#define PTR_DAT_006420d0 GLOBAL_AT(void*, 0x006420d0)
#define PTR_DAT_00648ba8 GLOBAL_AT(void*, 0x00648ba8)
#define PTR_s_2_MissionScript_ScriptObjectCode_00650040_0x10_006477cc GLOBAL_AT(void*, 0x006477cc)
#define PTR_DAT_006453ec GLOBAL_AT(void*, 0x006453ec)
#define PTR_s_2_MissionScript_ScriptObjectCode_00650040_0x10_00640908 GLOBAL_AT(void*, 0x00640908)
#define PTR_DAT_00644724 GLOBAL_AT(void*, 0x00644724)
#define PTR_DAT_00645e64 GLOBAL_AT(void*, 0x00645e64)
#define PTR_DAT_0064816c GLOBAL_AT(void*, 0x0064816c)
#define PTR_DAT_0064127c GLOBAL_AT(void*, 0x0064127c)
#define PTR_DAT_006454ec GLOBAL_AT(void*, 0x006454ec)
#define PTR_LAB_0064af50 GLOBAL_AT(void*, 0x0064af50)
#define PTR_DAT_00642100 GLOBAL_AT(void*, 0x00642100)
#define PTR_DAT_0064b3c0 GLOBAL_AT(void*, 0x0064b3c0)
#define PTR_PTR_0064463c GLOBAL_AT(void*, 0x0064463c)
#define PTR_DAT_00649560 GLOBAL_AT(void*, 0x00649560)
#define PTR_DAT_00647db0 GLOBAL_AT(void*, 0x00647db0)
#define PTR_DAT_0064969c GLOBAL_AT(void*, 0x0064969c)
#define PTR_DAT_006406cc GLOBAL_AT(void*, 0x006406cc)
#define PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_0064253c GLOBAL_AT(void*, 0x0064253c)
#define PTR_DAT_00646fa0 GLOBAL_AT(void*, 0x00646fa0)
#define PTR_DAT_00648140 GLOBAL_AT(void*, 0x00648140)
#define PTR_DAT_00645570 GLOBAL_AT(void*, 0x00645570)
#define PTR_LAB_00643b8c GLOBAL_AT(void*, 0x00643b8c)
#define PTR_DAT_006499dc GLOBAL_AT(void*, 0x006499dc)
#define PTR_DAT_00649f1c GLOBAL_AT(void*, 0x00649f1c)
#define PTR_DAT_00647dd0 GLOBAL_AT(void*, 0x00647dd0)
#define PTR_DAT_006427ec GLOBAL_AT(void*, 0x006427ec)
#define PTR_DAT_00645ef4 GLOBAL_AT(void*, 0x00645ef4)
#define PTR_DAT_0064b9b0 GLOBAL_AT(void*, 0x0064b9b0)
#define PTR_DAT_0064976c GLOBAL_AT(void*, 0x0064976c)
#define PTR_DAT_00643d80 GLOBAL_AT(void*, 0x00643d80)
#define PTR_DAT_00647bcc GLOBAL_AT(void*, 0x00647bcc)
#define PTR_DAT_006426e0 GLOBAL_AT(void*, 0x006426e0)
#define PTR_DAT_00649454 GLOBAL_AT(void*, 0x00649454)
#define PTR_s_dev_ONSLAUGHT2_MissionScript_Scr_00650040_3_006487dc GLOBAL_AT(void*, 0x006487dc)
#define PTR_DAT_00645b1c GLOBAL_AT(void*, 0x00645b1c)
#define PTR_DAT_0064238c GLOBAL_AT(void*, 0x0064238c)
#define PTR_DAT_006409f0 GLOBAL_AT(void*, 0x006409f0)
#define PTR_DAT_0064904c GLOBAL_AT(void*, 0x0064904c)
#define PTR_DAT_0064b228 GLOBAL_AT(void*, 0x0064b228)
#define PTR_PTR_00647600 GLOBAL_AT(void*, 0x00647600)
#define PTR_DAT_00647c34 GLOBAL_AT(void*, 0x00647c34)
#define PTR_s_eshes__s_Part__d_Bone_slots_00630040_1_00647c50 GLOBAL_AT(void*, 0x00647c50)
#define PTR_DAT_0064b4d0 GLOBAL_AT(void*, 0x0064b4d0)
#define PTR_DAT_00648648 GLOBAL_AT(void*, 0x00648648)
#define PTR_DAT_00644dc8 GLOBAL_AT(void*, 0x00644dc8)
#define PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00647c00 GLOBAL_AT(void*, 0x00647c00)
#define PTR_DAT_006496c0 GLOBAL_AT(void*, 0x006496c0)
#define PTR_DAT_006473c4 GLOBAL_AT(void*, 0x006473c4)
#define PTR_DAT_0064396c GLOBAL_AT(void*, 0x0064396c)
#define PTR_s__ONSLAUGHT2_MissionScript_Script_00650040_6_00647140 GLOBAL_AT(void*, 0x00647140)
#define PTR_DAT_00645fcc GLOBAL_AT(void*, 0x00645fcc)
#define PTR_DAT_00649cb4 GLOBAL_AT(void*, 0x00649cb4)
#define PTR_DAT_00649b2c GLOBAL_AT(void*, 0x00649b2c)
#define PTR_DAT_006449e4 GLOBAL_AT(void*, 0x006449e4)
#define PTR_DAT_00644a70 GLOBAL_AT(void*, 0x00644a70)
#define PTR_DAT_00642d64 GLOBAL_AT(void*, 0x00642d64)
#define PTR_DAT_00641940 GLOBAL_AT(void*, 0x00641940)
#define PTR_DAT_006405e8 GLOBAL_AT(void*, 0x006405e8)
#define PTR_DAT_006439c4 GLOBAL_AT(void*, 0x006439c4)
#define PTR_DAT_00645748 GLOBAL_AT(void*, 0x00645748)
#define PTR_DAT_0064ad80 GLOBAL_AT(void*, 0x0064ad80)
#define PTR_DAT_006480c4 GLOBAL_AT(void*, 0x006480c4)
#define PTR_s_ssionScript_ScriptObjectCode_cpp_00650040_0x14_00645c68 GLOBAL_AT(void*, 0x00645c68)
#define PTR_DAT_0064159c GLOBAL_AT(void*, 0x0064159c)
#define PTR_s_2_MissionScript_ScriptObjectCode_00650040_0x10_00640d24 GLOBAL_AT(void*, 0x00640d24)
#define PTR_DAT_006407e0 GLOBAL_AT(void*, 0x006407e0)
#define PTR_DAT_00649e44 GLOBAL_AT(void*, 0x00649e44)
#define PTR_DAT_0064b244 GLOBAL_AT(void*, 0x0064b244)
#define PTR_DAT_00649b40 GLOBAL_AT(void*, 0x00649b40)
#define PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_00649658 GLOBAL_AT(void*, 0x00649658)
#define PTR_DAT_00649018 GLOBAL_AT(void*, 0x00649018)
#define PTR_DAT_00647e18 GLOBAL_AT(void*, 0x00647e18)
#define PTR_LAB_004e0040_1_006469bc GLOBAL_AT(void*, 0x006469bc)
#define PTR_DAT_00644c5c GLOBAL_AT(void*, 0x00644c5c)
#define PTR_DAT_006448e0 GLOBAL_AT(void*, 0x006448e0)
#define PTR_DAT_00647670 GLOBAL_AT(void*, 0x00647670)
#define PTR_s__dev_ONSLAUGHT2_MissionScript_Sc_00650040_2_0064702c GLOBAL_AT(void*, 0x0064702c)
#define PTR_s_MissionScript_ScriptObjectCode_c_00650040_0x12_00644ed8 GLOBAL_AT(void*, 0x00644ed8)
#define PTR_s_ssionScript_ScriptObjectCode_cpp_00650040_0x14_00645d8c GLOBAL_AT(void*, 0x00645d8c)
#define PTR_DAT_006424f8 GLOBAL_AT(void*, 0x006424f8)
#define PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00642aa4 GLOBAL_AT(void*, 0x00642aa4)
#define PTR_DAT_006423e8 GLOBAL_AT(void*, 0x006423e8)
#define PTR_s_ONSLAUGHT2_MissionScript_ScriptO_00650040_7_0064b9b8 GLOBAL_AT(void*, 0x0064b9b8)
#define PTR_DAT_0064b3a8 GLOBAL_AT(void*, 0x0064b3a8)
#define PTR_DAT_00647fd4 GLOBAL_AT(void*, 0x00647fd4)
#define PTR_DAT_0064bb3c GLOBAL_AT(void*, 0x0064bb3c)
#define PTR_DAT_006499a4 GLOBAL_AT(void*, 0x006499a4)
#define PTR_DAT_00647558 GLOBAL_AT(void*, 0x00647558)
#define PTR_DAT_00644ab0 GLOBAL_AT(void*, 0x00644ab0)
#define PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00644f50 GLOBAL_AT(void*, 0x00644f50)
#define PTR_DAT_00646eb8 GLOBAL_AT(void*, 0x00646eb8)
#define PTR_s_ionScript_ScriptObjectCode_cpp_00650040_0x16_006494dc GLOBAL_AT(void*, 0x006494dc)
#define PTR_DAT_006408b0 GLOBAL_AT(void*, 0x006408b0)
#define PTR_s_eshes__s_Part__d_Bone_slots_00630040_1_00642bfc GLOBAL_AT(void*, 0x00642bfc)
#define PTR_DAT_00646d84 GLOBAL_AT(void*, 0x00646d84)
#define PTR_DAT_00640508 GLOBAL_AT(void*, 0x00640508)
#define PTR_DAT_0064b440 GLOBAL_AT(void*, 0x0064b440)
#define PTR_DAT_00644a30 GLOBAL_AT(void*, 0x00644a30)
#define PTR_DAT_0064055c GLOBAL_AT(void*, 0x0064055c)
#define PTR_DAT_00646da8 GLOBAL_AT(void*, 0x00646da8)
#define PTR_DAT_00649a90 GLOBAL_AT(void*, 0x00649a90)
#define PTR_DAT_0064b488 GLOBAL_AT(void*, 0x0064b488)
#define PTR_DAT_00644b9c GLOBAL_AT(void*, 0x00644b9c)
#define PTR_DAT_00641bb0 GLOBAL_AT(void*, 0x00641bb0)
#define PTR_DAT_0064b3d8 GLOBAL_AT(void*, 0x0064b3d8)
#define PTR_DAT_006453ac GLOBAL_AT(void*, 0x006453ac)
#define PTR_s_ionScript_ScriptObjectCode_cpp_00650040_0x16_00640a28 GLOBAL_AT(void*, 0x00640a28)
#define PTR_LAB_004e0048_1_006444e0 GLOBAL_AT(void*, 0x006444e0)
#define PTR_DAT_006499b4 GLOBAL_AT(void*, 0x006499b4)
#define PTR_DAT_00646398 GLOBAL_AT(void*, 0x00646398)
#define PTR_DAT_006492d4 GLOBAL_AT(void*, 0x006492d4)
#define PTR_PTR_00646aac GLOBAL_AT(void*, 0x00646aac)
#define PTR_DAT_0064bb4c GLOBAL_AT(void*, 0x0064bb4c)
#define PTR_LAB_006438a0 GLOBAL_AT(void*, 0x006438a0)
#define PTR_DAT_0064497c GLOBAL_AT(void*, 0x0064497c)
#define PTR_LAB_006444c0 GLOBAL_AT(void*, 0x006444c0)
#define PTR_DAT_00643a80 GLOBAL_AT(void*, 0x00643a80)
#define PTR_DAT_00647f8c GLOBAL_AT(void*, 0x00647f8c)
#define PTR_DAT_00641890 GLOBAL_AT(void*, 0x00641890)
#define PTR_DAT_00641d44 GLOBAL_AT(void*, 0x00641d44)
#define PTR_DAT_0064b210 GLOBAL_AT(void*, 0x0064b210)
#define PTR_s_GHT2_MissionScript_ScriptObjectC_00650040_0xd_00645288 GLOBAL_AT(void*, 0x00645288)
#define PTR_DAT_00641c1c GLOBAL_AT(void*, 0x00641c1c)
#define PTR_DAT_00643a00 GLOBAL_AT(void*, 0x00643a00)
#define PTR_DAT_00647888 GLOBAL_AT(void*, 0x00647888)
#define PTR_DAT_00642778 GLOBAL_AT(void*, 0x00642778)
#define PTR_DAT_00649168 GLOBAL_AT(void*, 0x00649168)
#define PTR_DAT_0064b7a4 GLOBAL_AT(void*, 0x0064b7a4)
#define PTR_DAT_0064a08c GLOBAL_AT(void*, 0x0064a08c)
#define PTR_DAT_00646034 GLOBAL_AT(void*, 0x00646034)
#define PTR_DAT_00648abc GLOBAL_AT(void*, 0x00648abc)
#define PTR_DAT_006421a8 GLOBAL_AT(void*, 0x006421a8)
#define PTR_DAT_00646f38 GLOBAL_AT(void*, 0x00646f38)
#define PTR_DAT_0064b390 GLOBAL_AT(void*, 0x0064b390)
#define PTR_DAT_00642b6c GLOBAL_AT(void*, 0x00642b6c)
#define PTR_DAT_006425f0 GLOBAL_AT(void*, 0x006425f0)
#define PTR_s_ssionScript_ScriptObjectCode_cpp_00650040_0x14_00645d4c GLOBAL_AT(void*, 0x00645d4c)
#define PTR_DAT_00642a6c GLOBAL_AT(void*, 0x00642a6c)
#define PTR_DAT_00641500 GLOBAL_AT(void*, 0x00641500)
#define PTR_DAT_0064705c GLOBAL_AT(void*, 0x0064705c)
#define PTR_DAT_00649864 GLOBAL_AT(void*, 0x00649864)
#define PTR_DAT_006430a4 GLOBAL_AT(void*, 0x006430a4)
#define PTR_DAT_00640948 GLOBAL_AT(void*, 0x00640948)
#define PTR_DAT_0064843c GLOBAL_AT(void*, 0x0064843c)
#define PTR_DAT_00641648 GLOBAL_AT(void*, 0x00641648)
#define PTR_DAT_00643f5c GLOBAL_AT(void*, 0x00643f5c)
#define PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_00644a48 GLOBAL_AT(void*, 0x00644a48)
#define PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_006448c8 GLOBAL_AT(void*, 0x006448c8)
#define PTR_DAT_00648d1c GLOBAL_AT(void*, 0x00648d1c)
#define PTR_DAT_00645bb4 GLOBAL_AT(void*, 0x00645bb4)
#define PTR_DAT_00649084 GLOBAL_AT(void*, 0x00649084)
#define PTR_DAT_00645ea0 GLOBAL_AT(void*, 0x00645ea0)
#define PTR_DAT_0064b4ac GLOBAL_AT(void*, 0x0064b4ac)
#define PTR_s__mixermap_cpp_00640030_0x11_006432d4 GLOBAL_AT(void*, 0x006432d4)
#define PTR_DAT_0064b6b0 GLOBAL_AT(void*, 0x0064b6b0)
#define PTR_DAT_00649ce8 GLOBAL_AT(void*, 0x00649ce8)
#define PTR_s_AUGHT2_MissionScript_ScriptObjec_00650040_0xb_0064b570 GLOBAL_AT(void*, 0x0064b570)
#define PTR_DAT_006421f4 GLOBAL_AT(void*, 0x006421f4)
#define PTR_DAT_006449c0 GLOBAL_AT(void*, 0x006449c0)
#define PTR_DAT_0064336c GLOBAL_AT(void*, 0x0064336c)
#define PTR_DAT_006474e4 GLOBAL_AT(void*, 0x006474e4)
#define PTR_PTR_00641f00 GLOBAL_AT(void*, 0x00641f00)
#define PTR_DAT_00646df0 GLOBAL_AT(void*, 0x00646df0)
#define PTR_s_ssionScript_ScriptObjectCode_cpp_00650040_0x14_00647340 GLOBAL_AT(void*, 0x00647340)
#define PTR_DAT_00640da0 GLOBAL_AT(void*, 0x00640da0)
#define PTR_DAT_00645110 GLOBAL_AT(void*, 0x00645110)
#define PTR_DAT_00646610 GLOBAL_AT(void*, 0x00646610)
#define PTR_DAT_0064710c GLOBAL_AT(void*, 0x0064710c)
#define PTR_DAT_0064b630 GLOBAL_AT(void*, 0x0064b630)
#define PTR_DAT_00649d6c GLOBAL_AT(void*, 0x00649d6c)
#define PTR_DAT_0064bb80 GLOBAL_AT(void*, 0x0064bb80)
#define PTR_DAT_00642438 GLOBAL_AT(void*, 0x00642438)
#define PTR_DAT_00645164 GLOBAL_AT(void*, 0x00645164)
#define PTR_DAT_0064413c GLOBAL_AT(void*, 0x0064413c)
#define PTR_DAT_0064b6b8 GLOBAL_AT(void*, 0x0064b6b8)
#define PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_00642b90 GLOBAL_AT(void*, 0x00642b90)
#define PTR_DAT_00644cac GLOBAL_AT(void*, 0x00644cac)
#define PTR_DAT_0064888c GLOBAL_AT(void*, 0x0064888c)
#define PTR_DAT_00646f04 GLOBAL_AT(void*, 0x00646f04)
#define PTR_s_one_slots_00630040_0x13_00645c2c GLOBAL_AT(void*, 0x00645c2c)
#define PTR_DAT_00645aac GLOBAL_AT(void*, 0x00645aac)
#define PTR_DAT_00646dcc GLOBAL_AT(void*, 0x00646dcc)
#define PTR_DAT_00647d7c GLOBAL_AT(void*, 0x00647d7c)
#define PTR_DAT_006492ac GLOBAL_AT(void*, 0x006492ac)
#define PTR_DAT_006493c4 GLOBAL_AT(void*, 0x006493c4)
#define PTR_DAT_00649340 GLOBAL_AT(void*, 0x00649340)
#define PTR_DAT_006468f8 GLOBAL_AT(void*, 0x006468f8)
#define PTR_DAT_00640e0c GLOBAL_AT(void*, 0x00640e0c)
#define PTR_DAT_006426a8 GLOBAL_AT(void*, 0x006426a8)
#define PTR_DAT_0064acb8 GLOBAL_AT(void*, 0x0064acb8)
#define PTR_DAT_00644804 GLOBAL_AT(void*, 0x00644804)
#define PTR_LAB_00643858 GLOBAL_AT(void*, 0x00643858)
#define PTR_DAT_00645dcc GLOBAL_AT(void*, 0x00645dcc)
#define PTR_DAT_00647b68 GLOBAL_AT(void*, 0x00647b68)
#define PTR_s_2_MissionScript_ScriptObjectCode_00650040_0x10_00643284 GLOBAL_AT(void*, 0x00643284)
#define PTR_DAT_006451b4 GLOBAL_AT(void*, 0x006451b4)
#define PTR_s_ionScript_ScriptObjectCode_cpp_00650040_0x16_00640abc GLOBAL_AT(void*, 0x00640abc)
#define PTR_s_2_MissionScript_ScriptObjectCode_00650040_0x10_00642ea4 GLOBAL_AT(void*, 0x00642ea4)
#define PTR_DAT_00644c00 GLOBAL_AT(void*, 0x00644c00)
#define PTR_DAT_0064271c GLOBAL_AT(void*, 0x0064271c)
#define PTR_DAT_0064b6c0 GLOBAL_AT(void*, 0x0064b6c0)
#define PTR_s_MissionScript_ScriptObjectCode_c_00650040_0x12_00644b84 GLOBAL_AT(void*, 0x00644b84)
#define PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_00649398 GLOBAL_AT(void*, 0x00649398)
#define PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_006425b0 GLOBAL_AT(void*, 0x006425b0)
#define PTR_DAT_0064a308 GLOBAL_AT(void*, 0x0064a308)
#define PTR_DAT_00647808 GLOBAL_AT(void*, 0x00647808)
#define PTR_s_one_slots_00630040_0x13_0064b988 GLOBAL_AT(void*, 0x0064b988)
#define PTR_DAT_0064ab18 GLOBAL_AT(void*, 0x0064ab18)
#define PTR_DAT_00646f54 GLOBAL_AT(void*, 0x00646f54)
#define PTR_DAT_00645f68 GLOBAL_AT(void*, 0x00645f68)
#define PTR_s_one_slots_00630040_0x13_006473e0 GLOBAL_AT(void*, 0x006473e0)
#define PTR_DAT_006438e8 GLOBAL_AT(void*, 0x006438e8)
#define PTR_DAT_0064b94c GLOBAL_AT(void*, 0x0064b94c)
#define PTR_DAT_00642660 GLOBAL_AT(void*, 0x00642660)
#define PTR_DAT_00647cbc GLOBAL_AT(void*, 0x00647cbc)
#define PTR_DAT_0064a328 GLOBAL_AT(void*, 0x0064a328)
#define PTR_DAT_00641450 GLOBAL_AT(void*, 0x00641450)
#define PTR_DAT_00640c70 GLOBAL_AT(void*, 0x00640c70)
#define PTR_s__mixermap_cpp_00640030_0x11_00640d7c GLOBAL_AT(void*, 0x00640d7c)
#define PTR_DAT_0064b414 GLOBAL_AT(void*, 0x0064b414)
#define PTR_DAT_006457b4 GLOBAL_AT(void*, 0x006457b4)
#define PTR_DAT_0064b464 GLOBAL_AT(void*, 0x0064b464)
#define PTR_DAT_00649624 GLOBAL_AT(void*, 0x00649624)
#define PTR_DAT_006429f4 GLOBAL_AT(void*, 0x006429f4)
#define PTR_DAT_006447a8 GLOBAL_AT(void*, 0x006447a8)
#define PTR_DAT_00642f04 GLOBAL_AT(void*, 0x00642f04)
#define PTR_DAT_0064248c GLOBAL_AT(void*, 0x0064248c)
#define PTR_DAT_006410e4 GLOBAL_AT(void*, 0x006410e4)
#define PTR_DAT_006490fc GLOBAL_AT(void*, 0x006490fc)
#define PTR_DAT_00645ad0 GLOBAL_AT(void*, 0x00645ad0)
#define PTR_DAT_00641ecc GLOBAL_AT(void*, 0x00641ecc)
#define PTR_DAT_00643a48 GLOBAL_AT(void*, 0x00643a48)
#define PTR_DAT_00641a78 GLOBAL_AT(void*, 0x00641a78)
#define PTR_DAT_00649a88 GLOBAL_AT(void*, 0x00649a88)
#define PTR_DAT_0064572c GLOBAL_AT(void*, 0x0064572c)
#define PTR_s_Script_ScriptObjectCode_cpp_00650040_0x19_0064bb44 GLOBAL_AT(void*, 0x0064bb44)
#define PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_006496e4 GLOBAL_AT(void*, 0x006496e4)
#define PTR_DAT_00642e54 GLOBAL_AT(void*, 0x00642e54)
#define PTR_DAT_0064546c GLOBAL_AT(void*, 0x0064546c)
#define PTR_DAT_00649dd8 GLOBAL_AT(void*, 0x00649dd8)
#define PTR_DAT_00648398 GLOBAL_AT(void*, 0x00648398)
#define PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_00644ac8 GLOBAL_AT(void*, 0x00644ac8)
#define PTR_DAT_00640868 GLOBAL_AT(void*, 0x00640868)
#define PTR_DAT_006412cc GLOBAL_AT(void*, 0x006412cc)
#define PTR_DAT_00649308 GLOBAL_AT(void*, 0x00649308)
#define PTR_DAT_006453c4 GLOBAL_AT(void*, 0x006453c4)
#define PTR_DAT_0064a474 GLOBAL_AT(void*, 0x0064a474)
#define PTR_s_dev_ONSLAUGHT2_MissionScript_Scr_00650040_3_00648534 GLOBAL_AT(void*, 0x00648534)
#define PTR_s_ionScript_ScriptObjectCode_cpp_00650040_0x16_00646f88 GLOBAL_AT(void*, 0x00646f88)
#define PTR_DAT_0064259c GLOBAL_AT(void*, 0x0064259c)
#define PTR_DAT_00642410 GLOBAL_AT(void*, 0x00642410)
#define PTR_DAT_00642a3c GLOBAL_AT(void*, 0x00642a3c)
#define PTR_DAT_00645374 GLOBAL_AT(void*, 0x00645374)
#define PTR_DAT_0064264c GLOBAL_AT(void*, 0x0064264c)
#define PTR_DAT_00649a98 GLOBAL_AT(void*, 0x00649a98)
#define PTR_DAT_00641ea4 GLOBAL_AT(void*, 0x00641ea4)
#define PTR_DAT_00642564 GLOBAL_AT(void*, 0x00642564)
#define PTR_s_eshes__s_Part__d_Bone_slots_00630040_1_006448b4 GLOBAL_AT(void*, 0x006448b4)
#define PTR_DAT_00646f20 GLOBAL_AT(void*, 0x00646f20)
#define PTR_DAT_00646428 GLOBAL_AT(void*, 0x00646428)
#define PTR_DAT_00644bcc GLOBAL_AT(void*, 0x00644bcc)
#define PTR_DAT_00649ae0 GLOBAL_AT(void*, 0x00649ae0)
#define PTR_DAT_0064301c GLOBAL_AT(void*, 0x0064301c)
#define PTR_DAT_0064a78c GLOBAL_AT(void*, 0x0064a78c)
#define PTR_s_one_slots_00630040_0x13_00649d44 GLOBAL_AT(void*, 0x00649d44)
#define PTR_DAT_0064a6d0 GLOBAL_AT(void*, 0x0064a6d0)
#define PTR_DAT_006458e0 GLOBAL_AT(void*, 0x006458e0)
#define PTR_DAT_0064b6f4 GLOBAL_AT(void*, 0x0064b6f4)
#define PTR_DAT_00641104 GLOBAL_AT(void*, 0x00641104)
#define PTR_DAT_00641258 GLOBAL_AT(void*, 0x00641258)
#define PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00646d4c GLOBAL_AT(void*, 0x00646d4c)
#define PTR_DAT_0064392c GLOBAL_AT(void*, 0x0064392c)
#define PTR_DAT_006493fc GLOBAL_AT(void*, 0x006493fc)
#define PTR_DAT_00646e14 GLOBAL_AT(void*, 0x00646e14)
#define PTR_DAT_0064b184 GLOBAL_AT(void*, 0x0064b184)
#define PTR_LAB_00643e14 GLOBAL_AT(void*, 0x00643e14)
#define PTR_DAT_0064adb8 GLOBAL_AT(void*, 0x0064adb8)
#define PTR_DAT_00642f30 GLOBAL_AT(void*, 0x00642f30)
#define PTR_DAT_00640cf0 GLOBAL_AT(void*, 0x00640cf0)
#define PTR_DAT_00645f3c GLOBAL_AT(void*, 0x00645f3c)
#define PTR_DAT_006479f4 GLOBAL_AT(void*, 0x006479f4)
#define PTR_DAT_00642378 GLOBAL_AT(void*, 0x00642378)
#define PTR_DAT_00649030 GLOBAL_AT(void*, 0x00649030)
#define PTR_DAT_00646598 GLOBAL_AT(void*, 0x00646598)
#define PTR_s_dev_ONSLAUGHT2_MissionScript_Scr_00650040_3_00648910 GLOBAL_AT(void*, 0x00648910)
#define PTR_DAT_00644de4 GLOBAL_AT(void*, 0x00644de4)
#define PTR_DAT_00644768 GLOBAL_AT(void*, 0x00644768)
#define PTR_DAT_00643480 GLOBAL_AT(void*, 0x00643480)
#define PTR_DAT_00648074 GLOBAL_AT(void*, 0x00648074)
#define PTR_DAT_00642604 GLOBAL_AT(void*, 0x00642604)
#define PTR_DAT_0064a1ac GLOBAL_AT(void*, 0x0064a1ac)
#define PTR_DAT_00648a58 GLOBAL_AT(void*, 0x00648a58)
#define PTR_DAT_006423c0 GLOBAL_AT(void*, 0x006423c0)
#define PTR_DAT_00646154 GLOBAL_AT(void*, 0x00646154)
#define PTR_DAT_0064aaac GLOBAL_AT(void*, 0x0064aaac)
#define PTR_s__ONSLAUGHT2_MissionScript_Script_00650040_6_0064521c GLOBAL_AT(void*, 0x0064521c)
#define PTR_DAT_00647158 GLOBAL_AT(void*, 0x00647158)
#define PTR_s___dev_ONSLAUGHT2_MissionScript_S_00650040_1_00642588 GLOBAL_AT(void*, 0x00642588)
#define PTR_DAT_00648f88 GLOBAL_AT(void*, 0x00648f88)
#define PTR_DAT_0064a42c GLOBAL_AT(void*, 0x0064a42c)
#define PTR_DAT_00642ec0 GLOBAL_AT(void*, 0x00642ec0)
#define PTR_DAT_00645b68 GLOBAL_AT(void*, 0x00645b68)
#define PTR_s__dev_ONSLAUGHT2_MissionScript_Sc_00650040_2_00646ae0 GLOBAL_AT(void*, 0x00646ae0)
#define PTR_DAT_00640f9c GLOBAL_AT(void*, 0x00640f9c)
#define PTR_DAT_00647054 GLOBAL_AT(void*, 0x00647054)
#define PTR_DAT_00645354 GLOBAL_AT(void*, 0x00645354)
#define PTR_DAT_00642920 GLOBAL_AT(void*, 0x00642920)
#define PTR_DAT_00648744 GLOBAL_AT(void*, 0x00648744)
#define PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00647f44 GLOBAL_AT(void*, 0x00647f44)
#define PTR_DAT_00649af4 GLOBAL_AT(void*, 0x00649af4)
#define PTR_DAT_006474bc GLOBAL_AT(void*, 0x006474bc)
#define PTR_DAT_00646e58 GLOBAL_AT(void*, 0x00646e58)
#define PTR_s_2_MissionScript_ScriptObjectCode_00650040_0x10_00647be4 GLOBAL_AT(void*, 0x00647be4)
#define PTR_s_MissionScript_ScriptObjectCode_c_00650040_0x12_00644f00 GLOBAL_AT(void*, 0x00644f00)
#define PTR_DAT_00640ef0 GLOBAL_AT(void*, 0x00640ef0)
#define PTR_DAT_00647560 GLOBAL_AT(void*, 0x00647560)
#define PTR_s_ssionScript_ScriptObjectCode_cpp_00650040_0x14_00645d0c GLOBAL_AT(void*, 0x00645d0c)
#define PTR_DAT_00647594 GLOBAL_AT(void*, 0x00647594)
#define PTR_DAT_00649750 GLOBAL_AT(void*, 0x00649750)
#define PTR_DAT_00648d90 GLOBAL_AT(void*, 0x00648d90)
#define PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00640b50 GLOBAL_AT(void*, 0x00640b50)
#define PTR_DAT_00647390 GLOBAL_AT(void*, 0x00647390)
#define PTR_s_ONSLAUGHT2_MissionScript_ScriptO_00650040_7_00645704 GLOBAL_AT(void*, 0x00645704)
#define PTR_DAT_00644740 GLOBAL_AT(void*, 0x00644740)
#define PTR_s_one_slots_00630040_0x13_00649d28 GLOBAL_AT(void*, 0x00649d28)
#define PTR_DAT_00648348 GLOBAL_AT(void*, 0x00648348)
#define PTR_DAT_00640928 GLOBAL_AT(void*, 0x00640928)
#define PTR_DAT_0064b5d8 GLOBAL_AT(void*, 0x0064b5d8)
#define PTR_DAT_006415f8 GLOBAL_AT(void*, 0x006415f8)
#define PTR_DAT_006456ec GLOBAL_AT(void*, 0x006456ec)
#define PTR_s_eshes__s_Part__d_Bone_slots_00630040_1_0064a03c GLOBAL_AT(void*, 0x0064a03c)
#define PTR_DAT_006449a0 GLOBAL_AT(void*, 0x006449a0)
#define PTR_s_ssionScript_ScriptObjectCode_cpp_00650040_0x14_00642dcc GLOBAL_AT(void*, 0x00642dcc)
#define PTR_DAT_00647404 GLOBAL_AT(void*, 0x00647404)
#define PTR_DAT_00645a88 GLOBAL_AT(void*, 0x00645a88)
#define PTR_DAT_006477e8 GLOBAL_AT(void*, 0x006477e8)
#define PTR_DAT_00645e28 GLOBAL_AT(void*, 0x00645e28)
#define PTR_DAT_00647bb4 GLOBAL_AT(void*, 0x00647bb4)
#define PTR_DAT_00642bcc GLOBAL_AT(void*, 0x00642bcc)
#define PTR_DAT_00647364 GLOBAL_AT(void*, 0x00647364)
#define PTR_DAT_006497d4 GLOBAL_AT(void*, 0x006497d4)
#define PTR_DAT_006437dc GLOBAL_AT(void*, 0x006437dc)
#define PTR_DAT_0064a9f0 GLOBAL_AT(void*, 0x0064a9f0)
#define PTR_DAT_006428a0 GLOBAL_AT(void*, 0x006428a0)
#define PTR_DAT_00648b6c GLOBAL_AT(void*, 0x00648b6c)
#define PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00642ad0 GLOBAL_AT(void*, 0x00642ad0)
#define PTR_DAT_00641cf8 GLOBAL_AT(void*, 0x00641cf8)
#define PTR_DAT_00647284 GLOBAL_AT(void*, 0x00647284)
#define PTR_DAT_006462c8 GLOBAL_AT(void*, 0x006462c8)
#define PTR_DAT_006416a0 GLOBAL_AT(void*, 0x006416a0)
#define PTR_DAT_00645150 GLOBAL_AT(void*, 0x00645150)
#define PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_006434d8 GLOBAL_AT(void*, 0x006434d8)
#define PTR_DAT_0064b3f0 GLOBAL_AT(void*, 0x0064b3f0)
#define PTR_DAT_0064486c GLOBAL_AT(void*, 0x0064486c)
#define PTR_DAT_00646c0c GLOBAL_AT(void*, 0x00646c0c)
#define PTR_DAT_006498ec GLOBAL_AT(void*, 0x006498ec)
#define PTR_s_UGHT2_MissionScript_ScriptObject_00650040_0xc_00645930 GLOBAL_AT(void*, 0x00645930)
#define PTR_DAT_00640bdc GLOBAL_AT(void*, 0x00640bdc)
#define PTR_DAT_00649be0 GLOBAL_AT(void*, 0x00649be0)
#define PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_00645054 GLOBAL_AT(void*, 0x00645054)
#define PTR_DAT_0064b678 GLOBAL_AT(void*, 0x0064b678)
#define PTR_DAT_00642460 GLOBAL_AT(void*, 0x00642460)
#define PTR_DAT_0064a2c4 GLOBAL_AT(void*, 0x0064a2c4)
#define PTR_s_eshes__s_Part__d_Bone_slots_00630040_1_006450c8 GLOBAL_AT(void*, 0x006450c8)
#define PTR_DAT_00649534 GLOBAL_AT(void*, 0x00649534)
#define PTR_DAT_0064077c GLOBAL_AT(void*, 0x0064077c)
#define PTR_DAT_00645888 GLOBAL_AT(void*, 0x00645888)
#define PTR_DAT_0064b68c GLOBAL_AT(void*, 0x0064b68c)
#define PTR_DAT_00647fb0 GLOBAL_AT(void*, 0x00647fb0)
#define PTR_DAT_0064a178 GLOBAL_AT(void*, 0x0064a178)
#define PTR_DAT_00648024 GLOBAL_AT(void*, 0x00648024)
#define PTR_DAT_006428cc GLOBAL_AT(void*, 0x006428cc)
#define PTR_DAT_00644a0c GLOBAL_AT(void*, 0x00644a0c)
#define PTR_LAB_00648eec GLOBAL_AT(void*, 0x00648eec)
#define PTR_DAT_00646b98 GLOBAL_AT(void*, 0x00646b98)
#define PTR_LAB_00648bf4 GLOBAL_AT(void*, 0x00648bf4)
#define PTR_DAT_00646fd4 GLOBAL_AT(void*, 0x00646fd4)
#define PTR_DAT_00646d38 GLOBAL_AT(void*, 0x00646d38)
#define PTR_DAT_006424c0 GLOBAL_AT(void*, 0x006424c0)
#define PTR_DAT_006426bc GLOBAL_AT(void*, 0x006426bc)
#define PTR_DAT_006414ac GLOBAL_AT(void*, 0x006414ac)
#define PTR_DAT_0064b9dc GLOBAL_AT(void*, 0x0064b9dc)

static wchar_t * BEA_CDECL ap_00524830(undefined4 param_1)
{
  switch(DAT_0083d97c) {
  case 0:
    break;
  case 1:
    switch(param_1) {
    case 0:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649b2c);
    case 1:
      return (wchar_t *)(u_Options_audio_00649b10);
    case 2:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649af4);
    case 3:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649ae0);
    case 4:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649a98);
    case 5:
    case 0x35:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649a90);
    case 6:
    case 0x36:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649a88);
    case 7:
      return (wchar_t *)((wchar_t *)&DAT_00649a40);
    case 8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649a10);
    case 9:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006499dc);
    case 10:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006499b4);
    case 0xb:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006499a4);
    case 0xc:
      return (wchar_t *)(u_Moyenne_00649994);
    case 0xd:
      return (wchar_t *)(u_Faible__pano__G_D__0064996c);
    case 0xe:
      return (wchar_t *)((wchar_t *)&DAT_00649940);
    case 0xf:
      return (wchar_t *)((wchar_t *)&DAT_0064990c);
    case 0x10:
    case 0x1c:
    case 0x24:
      return (wchar_t *)(u_Faibles_006498fc);
    case 0x11:
    case 0x1b:
    case 0x23:
      return (wchar_t *)(u_Moyens_00649824);
    case 0x12:
    case 0x1a:
    case 0x22:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006498ec);
    case 0x13:
      return (wchar_t *)((wchar_t *)&DAT_006498d0);
    case 0x14:
      return (wchar_t *)(u_Synchro_vert____006498b0);
    case 0x15:
      return (wchar_t *)((wchar_t *)&DAT_00649880);
    case 0x16:
      return (wchar_t *)((wchar_t *)&DAT_00649834);
    case 0x17:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006497fc);
    case 0x18:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006497d4);
    case 0x19:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006497a8);
    case 0x1d:
      return (wchar_t *)(u_Activer_les_textures_32_bits___00649710);
    case 0x1e:
      return (wchar_t *)((wchar_t *)&PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_006496e4);
    case 0x1f:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006496c0);
    case 0x20:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064969c);
    case 0x21:
      return (wchar_t *)((wchar_t *)&PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_00649658);
    case 0x25:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649864);
    case 0x26:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649624);
    case 0x27:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x3a:
    case 0x3f:
    case 0x44:
    case 0x47:
    case 0x4d:
    case 0x4f:
    case 0x50:
    case 0x53:
    case 0x5c:
    case 0x62:
    case 0x74:
    case 0x75:
      goto switchD_00525f83_switchD;
    case 0x28:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064960c);
    case 0x33:
      return (wchar_t *)(u_Joueur_1_006495a8);
    case 0x34:
      return (wchar_t *)(u_Joueur_2_00649594);
    case 0x37:
      return (wchar_t *)((wchar_t *)&DAT_006495bc);
    case 0x38:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649560);
    case 0x39:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649534);
    case 0x3b:
      return (wchar_t *)((wchar_t *)&DAT_006494fc);
    case 0x3c:
      return (wchar_t *)((wchar_t *)&PTR_s_ionScript_ScriptObjectCode_cpp_00650040_0x16_006494dc);
    case 0x3d:
    case 0x42:
      return (wchar_t *)((wchar_t *)&DAT_006494c8);
    case 0x3e:
    case 0x43:
      return (wchar_t *)((wchar_t *)&DAT_006494b4);
    case 0x40:
      return (wchar_t *)(u_Regard___en_haut_00649490);
    case 0x41:
      return (wchar_t *)(u_En_bas_00649480);
    case 0x45:
      return (wchar_t *)(u_Zoom___avant_00649464);
    case 0x46:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649454);
    case 0x48:
      return (wchar_t *)(u_Divers___tir_00649438);
    case 0x49:
      return (wchar_t *)(u_Choix_d_arme_0064941c);
    case 0x4a:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006493fc);
    case 0x4b:
      return (wchar_t *)((wchar_t *)&DAT_006493e8);
    case 0x4c:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006493c4);
    case 0x4e:
      return (wchar_t *)((wchar_t *)&PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_00649398);
    case 0x51:
      return (wchar_t *)(u_Touche_00649388);
    case 0x52:
      return (wchar_t *)(u_Souris_00649378);
    case 0x54:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649340);
    case 0x55:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649308);
    case 0x56:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006492d4);
    case 0x57:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006492ac);
    case 0x58:
      return (wchar_t *)(u_Bouton_1_du_joystick_00649280);
    case 0x59:
      return (wchar_t *)(u_Bouton_2_du_joystick_00649250);
    case 0x5a:
      return (wchar_t *)(u_Bouton_3_du_joystick_00649220);
    case 0x5b:
      return (wchar_t *)(u_Bouton_4_du_joystick_006491f0);
    case 0x5d:
      goto switchD_00525f83_caseD_5d;
    case 0x5e:
      goto switchD_00525f83_caseD_5e;
    case 0x5f:
      goto switchD_00525f83_caseD_5f;
    case 0x60:
      goto switchD_00525f83_caseD_60;
    case 0x61:
      goto switchD_00525f83_caseD_61;
    case 99:
      return (wchar_t *)(u_Absent_006491e0);
    case 100:
      return (wchar_t *)((wchar_t *)&DAT_006491cc);
    case 0x65:
      return (wchar_t *)((wchar_t *)&DAT_006491bc);
    case 0x66:
      return (wchar_t *)(u_axe_1_droite_006491a0);
    case 0x67:
      return (wchar_t *)(u_axe_1_gauche_00649184);
    case 0x68:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649168);
    case 0x69:
      return (wchar_t *)(u_axe_1_avant_00649150);
    case 0x6a:
      return (wchar_t *)(u_axe_2_droite_00649134);
    case 0x6b:
      return (wchar_t *)(u_axe_2_gauche_00649118);
    case 0x6c:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006490fc);
    case 0x6d:
      return (wchar_t *)(u_axe_2_avant_006490e4);
    case 0x6e:
      return (wchar_t *)(u_chapeau_droite_006490c4);
    case 0x6f:
      return (wchar_t *)(u_chapeau_gauche_006490a4);
    case 0x70:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649084);
    case 0x71:
      return (wchar_t *)(u_chapeau_avant_00649068);
    case 0x72:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064904c);
    case 0x73:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649030);
    case 0x76:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00648f88);
    case 0x77:
      return (wchar_t *)(u_Cliquez_pour_commencer_00648f58);
    case 0x78:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649018);
    case 0x79:
      goto switchD_00525f83_caseD_79;
    case 0x7a:
      return (wchar_t *)(u_WINDOWS_DROITE_00648f38);
    case 0x7b:
      return (wchar_t *)(u_WINDOWS_GAUCHE_00648f18);
    case 0x7c:
      goto switchD_00525f83_caseD_7c;
    case 0x7d:
      return (wchar_t *)(u_ECHAP_00648f0c);
    case 0x7e:
      return (wchar_t *)(u_RETOUR_00648efc);
    case 0x7f:
      goto switchD_00525f83_caseD_7f;
    case 0x80:
      return (wchar_t *)((wchar_t *)&PTR_LAB_00648eec);
    case 0x81:
      return (wchar_t *)(u_CONTROL_GAUCHE_00648ecc);
    case 0x82:
      return (wchar_t *)(u_VERR__MAJ__00648eb4);
    case 0x83:
      return (wchar_t *)(u_DEUX_POINTS_00648e9c);
    case 0x84:
      return (wchar_t *)(u_GUILLEMET_00648e88);
    case 0x85:
switchD_00525b1b_caseD_85:
      return (wchar_t *)(u_TILDE_00648e7c);
    case 0x86:
      return (wchar_t *)(u_MAJ_GAUCHE_00648e64);
    case 0x87:
      return (wchar_t *)(u_MAJ_DROIT_00648e50);
    case 0x88:
      return (wchar_t *)(u_ALT_GAUCHE_00648e38);
    case 0x89:
      return (wchar_t *)(u_ESPACE_00648e28);
    case 0x8a:
      return (wchar_t *)(u_ALT_DROIT_00648e14);
    case 0x8b:
      return (wchar_t *)(u_CONTROL_DROIT_00648df8);
    case 0x8c:
      goto switchD_00525f83_caseD_8c;
    case 0x8d:
      goto switchD_00525f83_caseD_8d;
    case 0x8e:
      goto switchD_00525f83_caseD_8e;
    case 0x8f:
      goto switchD_00525f83_caseD_8f;
    case 0x90:
      goto switchD_00525f83_caseD_90;
    case 0x91:
      goto switchD_00525f83_caseD_91;
    case 0x92:
      goto switchD_00525f83_caseD_92;
    case 0x93:
      goto switchD_00525f83_caseD_93;
    case 0x94:
      goto switchD_00525f83_caseD_94;
    case 0x95:
      goto switchD_00525f83_caseD_95;
    case 0x96:
      goto switchD_00525f83_caseD_96;
    case 0x97:
      goto switchD_00525f83_caseD_97;
    case 0x98:
      return (wchar_t *)((wchar_t *)&DAT_00648de0);
    case 0x99:
      return (wchar_t *)((wchar_t *)&DAT_00648dd0);
    case 0x9a:
      return (wchar_t *)(u_INSER_00648dc4);
    case 0x9b:
      return (wchar_t *)((wchar_t *)&DAT_00648db8);
    case 0x9c:
      return (wchar_t *)(u_PAGE_HAUT_00648da4);
    case 0x9d:
      return (wchar_t *)(u_SUPPR_00648d98);
    case 0x9e:
switchD_00525677_caseD_9e:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00648d90);
    case 0x9f:
      return (wchar_t *)(u_PAGE_BAS_00648d7c);
    case 0xa0:
      return (wchar_t *)(u_GAUCHE_00648d6c);
    case 0xa1:
      return (wchar_t *)(u_HAUT_00648d60);
    case 0xa2:
      return (wchar_t *)(u_DROITE_00648d50);
    case 0xa3:
      return (wchar_t *)((wchar_t *)&DAT_00648d48);
    case 0xa4:
      return (wchar_t *)(u_VERR__NUM__00648d30);
    case 0xa5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00648d1c);
    case 0xa6:
      return (wchar_t *)(u_MULTIPL__00648d08);
    case 0xa7:
      return (wchar_t *)(u_MOINS_00648cfc);
    case 0xa8:
      return (wchar_t *)(u_7_PAV__NUM__00648ce4);
    case 0xa9:
      return (wchar_t *)(u_8_PAV__NUM__00648ccc);
    case 0xaa:
      return (wchar_t *)(u_9_PAV__NUM__00648cb4);
    case 0xab:
switchD_005251fd_caseD_ab:
      return (wchar_t *)(u_PLUS_00648ca8);
    case 0xac:
      return (wchar_t *)(u_4_PAV__NUM__00648c90);
    case 0xad:
      return (wchar_t *)(u_5_PAV__NUM__00648c78);
    case 0xae:
      return (wchar_t *)(u_6_PAV__NUM__00648c60);
    case 0xaf:
      return (wchar_t *)(u_1_PAV__NUM__00648c48);
    case 0xb0:
      return (wchar_t *)(u_2_PAV__NUM__00648c30);
    case 0xb1:
      return (wchar_t *)(u_3_PAV__NUM__00648c18);
    case 0xb2:
      return (wchar_t *)((wchar_t *)&PTR_LAB_00648bf4);
    case 0xb3:
      return (wchar_t *)(u_0_PAV__NUM__00648bdc);
    case 0xb4:
      return (wchar_t *)((wchar_t *)&DAT_00648bc4);
    case 0xb5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00648ba8);
    case 0xb6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00648b6c);
    case 0xb7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00648abc);
    case 0xb8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00648a58);
    case 0xb9:
      return (wchar_t *)((wchar_t *)&PTR_s_dev_ONSLAUGHT2_MissionScript_Scr_00650040_3_00648910);
    case 0xba:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064888c);
    case 0xbb:
      return (wchar_t *)((wchar_t *)&PTR_s_dev_ONSLAUGHT2_MissionScript_Scr_00650040_3_006487dc);
    case 0xbc:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00648744);
    case 0xbd:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00648648);
    case 0xbe:
      return (wchar_t *)((wchar_t *)&PTR_s_dev_ONSLAUGHT2_MissionScript_Scr_00650040_3_00648534);
    case 0xbf:
      return (wchar_t *)((wchar_t *)&DAT_006484e4);
    case 0xc0:
      return (wchar_t *)((wchar_t *)&DAT_00648484);
    case 0xc1:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064843c);
    case 0xc2:
      return (wchar_t *)((wchar_t *)&DAT_00648410);
    case 0xc3:
      return (wchar_t *)((wchar_t *)&DAT_006483d8);
    case 0xc4:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00648398);
    case 0xc5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00648348);
    case 0xc6:
      return (wchar_t *)((wchar_t *)&DAT_006482f0);
    case 199:
      return (wchar_t *)((wchar_t *)&DAT_006482a0);
    case 200:
      return (wchar_t *)((wchar_t *)&DAT_00648250);
    case 0xc9:
      return (wchar_t *)((wchar_t *)&DAT_00648200);
    case 0xca:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064816c);
    case 0xcb:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00648140);
    case 0xcc:
      return (wchar_t *)(u_Fichier_introuvable___00648114);
    case 0xcd:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006480c4);
    case 0xce:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00648074);
    case 0xcf:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00648024);
    case 0xd0:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647fd4);
    case 0xd1:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647fb0);
    case 0xd2:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647f8c);
    case 0xd3:
      return (wchar_t *)((wchar_t *)&PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00647f44);
    case 0xd4:
      return (wchar_t *)(u_Aucun_00647f38);
    case 0xd5:
      return (wchar_t *)((wchar_t *)&DAT_00647e5c);
    case 0xd6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647e18);
    case 0xd7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647dd0);
    case 0xd8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647db0);
    case 0xd9:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647d7c);
    case 0xda:
      return (wchar_t *)(u_Moyenne__22_KHz__16_bits__00647d48);
    case 0xdb:
      return (wchar_t *)(u_Faible__11_KHz__8_bits__00647d18);
    case 0xdc:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647cbc);
    case 0xdd:
      return (wchar_t *)((wchar_t *)&PTR_s_eshes__s_Part__d_Bone_slots_00630040_1_00647c50);
    case 0xde:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647c34);
    case 0xdf:
      return (wchar_t *)((wchar_t *)&PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00647c00);
    case 0xe0:
      return (wchar_t *)((wchar_t *)&PTR_s_2_MissionScript_ScriptObjectCode_00650040_0x10_00647be4);
    case 0xe1:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647bcc);
    case 0xe2:
      return (wchar_t *)(u_Moyen_00647bc0);
    case 0xe3:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647bb4);
    case 0xe4:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647b68);
    case 0xe5:
      return (wchar_t *)((wchar_t *)&DAT_00647af4);
    case 0xe6:
      return (wchar_t *)((wchar_t *)&DAT_00647a6c);
    case 0xe7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006479f4);
    case 0xe8:
      return (wchar_t *)((wchar_t *)&DAT_00647970);
    case 0xe9:
      return (wchar_t *)((wchar_t *)&DAT_006478ec);
    case 0xea:
      return (wchar_t *)((wchar_t *)&DAT_006478ac);
    case 0xeb:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647888);
    case 0xec:
      return (wchar_t *)(u_Normal__4_3__0064786c);
    case 0xed:
      return (wchar_t *)(u_Large__16_9__00647850);
    case 0xee:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647808);
    case 0xef:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006477e8);
    case 0xf0:
      return (wchar_t *)((wchar_t *)&PTR_s_2_MissionScript_ScriptObjectCode_00650040_0x10_006477cc);
    case 0xf1:
      return (wchar_t *)(u_Joueur_1___joystick__joueur_2___j_00647778);
    case 0xf2:
      return (wchar_t *)(u_QZSD___souris__joystick_00647748);
    case 0xf3:
      return (wchar_t *)(u_QZSD___souris_0064772c);
    case 0xf4:
      return (wchar_t *)(u_Clavier_multijoueur___souris_006476f0);
    case 0xf5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647670);
    case 0xf6:
      return (wchar_t *)((wchar_t *)&DAT_00647618);
    case 0xf7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064976c);
    case 0xf8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649750);
    default:
      goto switchD_00525f83_default;
    }
  case 2:
    switch(param_1) {
    case 0:
      return (wchar_t *)((wchar_t *)&PTR_PTR_00647600);
    case 1:
      return (wchar_t *)(u_Sound_Optionen_006475e0);
    case 2:
      return (wchar_t *)(u_Anzeige_Optionen_006475bc);
    case 3:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647594);
    case 4:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647560);
    case 5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647558);
    case 6:
      return (wchar_t *)(u_Nein_0064754c);
    case 7:
      return (wchar_t *)(u_3D_Sound_Hardware_Beschleunigung_00647508);
    case 8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006474e4);
    case 9:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006474bc);
    case 10:
      return (wchar_t *)((wchar_t *)&DAT_00647498);
    case 0xb:
      return (wchar_t *)(u_Hoch___Full_HRTF___00647470);
    case 0xc:
      return (wchar_t *)(u_Mittel___Light_HRTF___00647444);
    case 0xd:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647404);
    case 0xe:
      return (wchar_t *)((wchar_t *)&PTR_s_one_slots_00630040_0x13_006473e0);
    case 0xf:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006473c4);
    case 0x10:
    case 0x1c:
    case 0x24:
      return (wchar_t *)(u_Niedrig_006473b4);
    case 0x11:
    case 0x1b:
    case 0x23:
    case 0xe2:
      return (wchar_t *)(u_Mittel_00647330);
    case 0x12:
    case 0x1a:
    case 0x22:
    case 0xe3:
      return (wchar_t *)(u_Hoch_006473a8);
    case 0x13:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647390);
    case 0x14:
      goto switchD_00525f83_caseD_14;
    case 0x15:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647364);
    case 0x16:
      return (wchar_t *)((wchar_t *)&PTR_s_ssionScript_ScriptObjectCode_cpp_00650040_0x14_00647340);
    case 0x17:
      return (wchar_t *)(u_Hoch__Empfohlen__0064730c);
    case 0x18:
      return (wchar_t *)(u_Mittel__Empfohlen__006472e4);
    case 0x19:
      return (wchar_t *)(u_Niedrig__Empfohlen__006472bc);
    case 0x1d:
      return (wchar_t *)(u_32_Bit_Texturen_verwenden__0064722c);
    case 0x1e:
      return (wchar_t *)(u_Nur_wenn_sichtbar_00647208);
    case 0x1f:
      return (wchar_t *)(u_Ja__Empfohlen__006471e8);
    case 0x20:
      return (wchar_t *)(u_Nein__Empfohlen__006471c4);
    case 0x21:
      return (wchar_t *)(u_Nur_wenn_sichtbar__Empfohlen__00647188);
    case 0x25:
    case 0xe1:
      return (wchar_t *)(u_Minimal_006456dc);
    case 0x26:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647158);
    case 0x27:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x3a:
    case 0x3f:
    case 0x44:
    case 0x47:
    case 0x4d:
    case 0x4f:
    case 0x50:
    case 0x53:
    case 0x5c:
    case 0x62:
    case 0x74:
    case 0x75:
      goto switchD_00525f83_switchD;
    case 0x28:
      return (wchar_t *)((wchar_t *)&PTR_s__ONSLAUGHT2_MissionScript_Script_00650040_6_00647140);
    case 0x33:
      return (wchar_t *)(u_Spieler_1_006470f8);
    case 0x34:
      return (wchar_t *)(u_Spieler_2_006470e4);
    case 0x35:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064705c);
    case 0x36:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647054);
    case 0x37:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064710c);
    case 0x38:
      return (wchar_t *)(u_Y_Achse_im_Lauf_Modus_umkehren_006470a4);
    case 0x39:
      return (wchar_t *)(u_Y_Achse_im_Jet_Modus_umkehren_00647064);
    case 0x3b:
      return (wchar_t *)((wchar_t *)&PTR_s__dev_ONSLAUGHT2_MissionScript_Sc_00650040_2_0064702c);
    case 0x3c:
      return (wchar_t *)((wchar_t *)&DAT_00647018);
    case 0x3d:
    case 0x42:
      return (wchar_t *)(u_Links_0064700c);
    case 0x3e:
    case 0x43:
      return (wchar_t *)(u_Rechts_00646ffc);
    case 0x40:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646fd4);
    case 0x41:
      return (wchar_t *)(u_Runter_00646fc4);
    case 0x45:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646fa0);
    case 0x46:
      return (wchar_t *)((wchar_t *)&PTR_s_ionScript_ScriptObjectCode_cpp_00650040_0x16_00646f88);
    case 0x48:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646f54);
    case 0x49:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646f38);
    case 0x4a:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646f20);
    case 0x4b:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646f04);
    case 0x4c:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646ee4);
    case 0x4e:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646eb8);
    case 0x51:
      return (wchar_t *)(u_Taste_00646eac);
    case 0x52:
      return (wchar_t *)(u_Maus_00646ea0);
    case 0x54:
      return (wchar_t *)(u_Linke_Maustaste_00646e80);
    case 0x55:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646e58);
    case 0x56:
      return (wchar_t *)(u_Rechte_Maustaste_00646e34);
    case 0x57:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646e14);
    case 0x58:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646df0);
    case 0x59:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646dcc);
    case 0x5a:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646da8);
    case 0x5b:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646d84);
    case 0x5d:
      goto switchD_00525f83_caseD_5d;
    case 0x5e:
      goto switchD_00525f83_caseD_5e;
    case 0x5f:
      goto switchD_00525f83_caseD_5f;
    case 0x60:
      goto switchD_00525f83_caseD_60;
    case 0x61:
      goto switchD_00525f83_caseD_61;
    case 99:
      return (wchar_t *)(u_Nicht_gefunden_00646d64);
    case 100:
      return (wchar_t *)((wchar_t *)&PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00646d4c);
    case 0x65:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646d38);
    case 0x66:
      return (wchar_t *)(u_Achse_1_rechts_00646d18);
    case 0x67:
      return (wchar_t *)(u_Achse_1_links_00646cfc);
    case 0x68:
      return (wchar_t *)((wchar_t *)&DAT_00646cdc);
    case 0x69:
      return (wchar_t *)(u_Achse_1_vor_00646cc4);
    case 0x6a:
      return (wchar_t *)(u_Achse_2_rechts_00646ca4);
    case 0x6b:
      return (wchar_t *)(u_Achse_2_links_00646c88);
    case 0x6c:
      return (wchar_t *)((wchar_t *)&DAT_00646c68);
    case 0x6d:
      return (wchar_t *)(u_Achse_2_vor_00646c50);
    case 0x6e:
      return (wchar_t *)(u_Hat_rechts_00646c38);
    case 0x6f:
      return (wchar_t *)(u_Hat_links_00646c24);
    case 0x70:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646c0c);
    case 0x71:
      return (wchar_t *)(u_Hat_vor_00646bfc);
    case 0x72:
      return (wchar_t *)(u_Mausrad_runter_00646bdc);
    case 0x73:
      return (wchar_t *)(u_Mausrad_hoch_00646bc0);
    case 0x76:
      return (wchar_t *)((wchar_t *)&PTR_s__dev_ONSLAUGHT2_MissionScript_Sc_00650040_2_00646ae0);
    case 0x77:
      return (wchar_t *)(u_Zum_Starten_klicken_00646ab8);
    case 0x78:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646b98);
    case 0x79:
      return (wchar_t *)((wchar_t *)&PTR_PTR_00646aac);
    case 0x7a:
      return (wchar_t *)(u_RECHTE_WINDOWSTASTE_00646a84);
    case 0x7b:
      return (wchar_t *)(u_LINKE_WINDOWSTASTE_00646a5c);
    case 0x7c:
      goto switchD_00525f83_caseD_7c;
    case 0x7d:
      goto switchD_00525f83_caseD_7d;
    case 0x7e:
      return (wchar_t *)((wchar_t *)&DAT_00646a48);
    case 0x7f:
      goto switchD_00525f83_caseD_7f;
    case 0x80:
      return (wchar_t *)(u_EINGABE_00646a38);
    case 0x81:
      return (wchar_t *)(u_STEUERUNG_LINKS_00646a18);
    case 0x82:
      return (wchar_t *)(u_FESTSTELLTASTE_006469f8);
    case 0x83:
      return (wchar_t *)(u_DOPPELPUNKT_006469e0);
    case 0x84:
      return (wchar_t *)((wchar_t *)&PTR_LAB_004e0040_1_006469bc);
    case 0x85:
      goto switchD_00525b1b_caseD_85;
    case 0x86:
      return (wchar_t *)(u_UMSCHALT_LINKS_0064699c);
    case 0x87:
      return (wchar_t *)(u_UMSCHALT_RECHTS_0064697c);
    case 0x88:
      return (wchar_t *)((wchar_t *)&DAT_00646974);
    case 0x89:
      return (wchar_t *)(u_LEERTASTE_00646960);
    case 0x8a:
      return (wchar_t *)(u_ALT_GR_00646950);
    case 0x8b:
      return (wchar_t *)(u_STEUERUNG_RECHTS_0064692c);
    case 0x8c:
      goto switchD_00525f83_caseD_8c;
    case 0x8d:
      goto switchD_00525f83_caseD_8d;
    case 0x8e:
      goto switchD_00525f83_caseD_8e;
    case 0x8f:
      goto switchD_00525f83_caseD_8f;
    case 0x90:
      goto switchD_00525f83_caseD_90;
    case 0x91:
      goto switchD_00525f83_caseD_91;
    case 0x92:
      goto switchD_00525f83_caseD_92;
    case 0x93:
      goto switchD_00525f83_caseD_93;
    case 0x94:
      goto switchD_00525f83_caseD_94;
    case 0x95:
      goto switchD_00525f83_caseD_95;
    case 0x96:
      goto switchD_00525f83_caseD_96;
    case 0x97:
      goto switchD_00525f83_caseD_97;
    case 0x98:
      return (wchar_t *)(u_DRUCKEN_0064691c);
    case 0x99:
      return (wchar_t *)(u_ROLLEN_0064690c);
    case 0x9a:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006468f8);
    case 0x9b:
      return (wchar_t *)(u_POSITION1_006468e4);
    case 0x9c:
      return (wchar_t *)(u_BILD_AUF_006468d0);
    case 0x9d:
      return (wchar_t *)(u_ENTFERNEN_006468bc);
    case 0x9e:
      return (wchar_t *)(u_ENDE_006468b0);
    case 0x9f:
      return (wchar_t *)(u_BILD_AB_006468a0);
    case 0xa0:
      return (wchar_t *)(u_LINKS_00646894);
    case 0xa1:
      return (wchar_t *)(u_HOCH_00646888);
    case 0xa2:
      return (wchar_t *)(u_RECHTS_00646878);
    case 0xa3:
      return (wchar_t *)(u_RUNTER_00646868);
    case 0xa4:
      goto switchD_00525f83_caseD_a4;
    case 0xa5:
      return (wchar_t *)(u_GETEILT_00646858);
    case 0xa6:
      return (wchar_t *)((wchar_t *)&DAT_00646850);
    case 0xa7:
      return (wchar_t *)(u_MINUS_00646844);
    case 0xa8:
      return (wchar_t *)(u_NUM_7_00646838);
    case 0xa9:
      return (wchar_t *)(u_NUM_8_0064682c);
    case 0xaa:
      return (wchar_t *)(u_NUM_9_00646820);
    case 0xab:
      goto switchD_005251fd_caseD_ab;
    case 0xac:
      return (wchar_t *)(u_NUM_4_00646814);
    case 0xad:
      return (wchar_t *)(u_NUM_5_00646808);
    case 0xae:
      return (wchar_t *)(u_NUM_6_006467fc);
    case 0xaf:
      return (wchar_t *)(u_NUM_1_006467f0);
    case 0xb0:
      return (wchar_t *)(u_NUM_2_006467e4);
    case 0xb1:
      return (wchar_t *)(u_NUM_3_006467d8);
    case 0xb2:
      return (wchar_t *)(u_NUM_EINGABE_006467c0);
    case 0xb3:
      return (wchar_t *)(u_NUM_0_006467b4);
    case 0xb4:
      return (wchar_t *)(u_KOMMA_006467a8);
    case 0xb5:
      return (wchar_t *)(u_Bitte_warten_0064678c);
    case 0xb6:
      return (wchar_t *)(u_Die_Soundkarte_konnte_nicht_init_00646728);
    case 0xb7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646610);
    case 0xb8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646598);
    case 0xb9:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646428);
    case 0xba:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646398);
    case 0xbb:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006462c8);
    case 0xbc:
      return (wchar_t *)(u_Ihr_Direct3D_Hardwarebeschleunig_00646238);
    case 0xbd:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646154);
    case 0xbe:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00646034);
    case 0xbf:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645fcc);
    case 0xc0:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645f68);
    case 0xc1:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645f3c);
    case 0xc2:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645ef4);
    case 0xc3:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645ea0);
    case 0xc4:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645e64);
    case 0xc5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645e28);
    case 0xc6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645dcc);
    case 199:
      return (wchar_t *)((wchar_t *)&PTR_s_ssionScript_ScriptObjectCode_cpp_00650040_0x14_00645d8c);
    case 200:
      return (wchar_t *)((wchar_t *)&PTR_s_ssionScript_ScriptObjectCode_cpp_00650040_0x14_00645d4c);
    case 0xc9:
      return (wchar_t *)((wchar_t *)&PTR_s_ssionScript_ScriptObjectCode_cpp_00650040_0x14_00645d0c);
    case 0xca:
      return (wchar_t *)((wchar_t *)&PTR_s_ssionScript_ScriptObjectCode_cpp_00650040_0x14_00645c68);
    case 0xcb:
      return (wchar_t *)((wchar_t *)&PTR_s_one_slots_00630040_0x13_00645c2c);
    case 0xcc:
      return (wchar_t *)(u_Datei_nicht_gefunden__00645c00);
    case 0xcd:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645bb4);
    case 0xce:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645b68);
    case 0xcf:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645b1c);
    case 0xd0:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645ad0);
    case 0xd1:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645aac);
    case 0xd2:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645a88);
    case 0xd3:
      return (wchar_t *)(u_Full_Screen_Anti_Aliasing_Stufe__00645a44);
    case 0xd4:
      return (wchar_t *)(u_Null_00645a38);
    case 0xd5:
      return (wchar_t *)((wchar_t *)&PTR_s_UGHT2_MissionScript_ScriptObject_00650040_0xc_00645930);
    case 0xd6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006458e0);
    case 0xd7:
      return (wchar_t *)(u_Keine_Soundkarte_vorhanden_006458a8);
    case 0xd8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645888);
    case 0xd9:
      return (wchar_t *)(u_Hoch__44_kHz__16_Bit__0064585c);
    case 0xda:
      return (wchar_t *)(u_Mittel__22_kHz__16_Bit__0064582c);
    case 0xdb:
      return (wchar_t *)(u_Niedrig__11_kHz__8_Bit__006457fc);
    case 0xdc:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006457b4);
    case 0xdd:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645748);
    case 0xde:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064572c);
    case 0xdf:
      return (wchar_t *)((wchar_t *)&PTR_s_ONSLAUGHT2_MissionScript_ScriptO_00650040_7_00645704);
    case 0xe0:
    case 0xf0:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006456ec);
    case 0xe4:
      return (wchar_t *)(u_Wollen_Sie_das_Spiel_wirklich_be_0064568c);
    case 0xe5:
      return (wchar_t *)(u_Full_Screen_Anti_Aliasing_konnte_00645614);
    case 0xe6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645570);
    case 0xe7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006454ec);
    case 0xe8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064546c);
    case 0xe9:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006453ec);
    case 0xea:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006453c4);
    case 0xeb:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006453ac);
    case 0xec:
      goto switchD_00525f83_caseD_ec;
    case 0xed:
      goto switchD_00525f83_caseD_ed;
    case 0xee:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645374);
    case 0xef:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645354);
    case 0xf1:
      return (wchar_t *)(u_Spieler_1_Joystick__Spieler_2_Jo_00645304);
    case 0xf2:
      return (wchar_t *)(u_WASD___Maus__Joystick_006452d8);
    case 0xf3:
      return (wchar_t *)(u_WASD___Maus_006452c0);
    case 0xf4:
      return (wchar_t *)((wchar_t *)&PTR_s_GHT2_MissionScript_ScriptObjectC_00650040_0xd_00645288);
    case 0xf5:
      return (wchar_t *)((wchar_t *)&PTR_s__ONSLAUGHT2_MissionScript_Script_00650040_6_0064521c);
    case 0xf6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006451b4);
    case 0xf7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647284);
    case 0xf8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00647264);
    default:
      goto switchD_00525f83_default;
    }
  case 3:
    switch(param_1) {
    case 0:
      return (wchar_t *)(u_Aplicar_006451a4);
    case 1:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645184);
    case 2:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645164);
    case 3:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645150);
    case 4:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00645110);
    case 5:
    case 0x35:
      return (wchar_t *)((wchar_t *)&DAT_00644bc4);
    case 6:
    case 0x36:
      goto switchD_00525f83_caseD_6;
    case 7:
      return (wchar_t *)((wchar_t *)&PTR_s_eshes__s_Part__d_Bone_slots_00630040_1_006450c8);
    case 8:
      return (wchar_t *)((wchar_t *)&DAT_00645094);
    case 9:
      return (wchar_t *)((wchar_t *)&PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_00645054);
    case 10:
      return (wchar_t *)(u_Sonido_3D__0064503c);
    case 0xb:
switchD_00525b1b_caseD_b:
      return (wchar_t *)(u_Alta___HRTF_completo___0064500c);
    case 0xc:
      return (wchar_t *)(u_Media___HRTF_ligero___00644fe0);
    case 0xd:
      return (wchar_t *)(u_Baja__Desplazamiento_Izq__Dcha___00644f9c);
    case 0xe:
      return (wchar_t *)(u_Detalle_sombras__00644f78);
    case 0xf:
      return (wchar_t *)((wchar_t *)&PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00644f50);
    case 0x10:
      return (wchar_t *)(u_Bajo_00644f44);
    case 0x11:
    case 0xe2:
switchD_00525b1b_caseD_11:
      return (wchar_t *)(u_Medio_00644f38);
    case 0x12:
    case 0xe3:
switchD_00525b1b_caseD_12:
      return (wchar_t *)(u_Alto_00644f2c);
    case 0x13:
      return (wchar_t *)((wchar_t *)&PTR_s_MissionScript_ScriptObjectCode_c_00650040_0x12_00644f00);
    case 0x14:
      goto switchD_00525f83_caseD_14;
    case 0x15:
      return (wchar_t *)((wchar_t *)&PTR_s_MissionScript_ScriptObjectCode_c_00650040_0x12_00644ed8);
    case 0x16:
      return (wchar_t *)(u_Textura__00644e90);
    case 0x17:
      return (wchar_t *)(u_Alta__Recomendada__00644e68);
    case 0x18:
      return (wchar_t *)(u_Media__Recomendada__00644e40);
    case 0x19:
      return (wchar_t *)(u_Baja__Recomendada__00644e18);
    case 0x1a:
    case 0x22:
switchD_00525b1b_caseD_1a:
      return (wchar_t *)(u_Alta_00644ecc);
    case 0x1b:
    case 0x23:
switchD_00525b1b_caseD_1b:
      return (wchar_t *)(u_Media_00644ec0);
    case 0x1c:
    case 0x24:
      return (wchar_t *)(u_Baja_00644eb4);
    case 0x1d:
      return (wchar_t *)(u_Activar_textura_32_bits__00644d94);
    case 0x1e:
      return (wchar_t *)((wchar_t *)&DAT_00644d68);
    case 0x1f:
      return (wchar_t *)((wchar_t *)&DAT_00644d44);
    case 0x20:
      return (wchar_t *)(u_No__Recomendado__00644d20);
    case 0x21:
      return (wchar_t *)((wchar_t *)&DAT_00644cd8);
    case 0x25:
      return (wchar_t *)((wchar_t *)&DAT_00644ea4);
    case 0x26:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644cac);
    case 0x27:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x3a:
    case 0x3f:
    case 0x44:
    case 0x47:
    case 0x4d:
    case 0x4f:
    case 0x50:
    case 0x53:
    case 0x5c:
    case 0x62:
    case 0x74:
    case 0x75:
      goto switchD_00525f83_switchD;
    case 0x28:
      return (wchar_t *)(u_Disco_duro_00644c94);
    case 0x33:
      return (wchar_t *)(u_Jugador_1_00644c48);
    case 0x34:
      return (wchar_t *)(u_Jugador_2_00644c34);
    case 0x37:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644c5c);
    case 0x38:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644c00);
    case 0x39:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644bcc);
    case 0x3b:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644b9c);
    case 0x3c:
      return (wchar_t *)((wchar_t *)&PTR_s_MissionScript_ScriptObjectCode_c_00650040_0x12_00644b84);
    case 0x3d:
    case 0x42:
      return (wchar_t *)(u_Izq__00644b78);
    case 0x3e:
    case 0x43:
      return (wchar_t *)(u_Dcha__00644b6c);
    case 0x40:
      return (wchar_t *)(u_Vista__Arriba_00644b50);
    case 0x41:
      return (wchar_t *)(u_Abajo_00644b44);
    case 0x45:
      return (wchar_t *)(u_Zoom__Acercar_00644b28);
    case 0x46:
      return (wchar_t *)(u_Alejar_00644b18);
    case 0x48:
      return (wchar_t *)(u_Otros__Disparar_arma_00644aec);
    case 0x49:
      return (wchar_t *)((wchar_t *)&PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_00644ac8);
    case 0x4a:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644ab0);
    case 0x4b:
      return (wchar_t *)(u_Freno_de_aire_00644a94);
    case 0x4c:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644a70);
    case 0x4e:
      return (wchar_t *)((wchar_t *)&PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_00644a48);
    case 0x51:
      return (wchar_t *)(u_TECLA_00644a3c);
    case 0x52:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644a30);
    case 0x54:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644a0c);
    case 0x55:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006449e4);
    case 0x56:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006449c0);
    case 0x57:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006449a0);
    case 0x58:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064497c);
    case 0x59:
      return (wchar_t *)((wchar_t *)&DAT_00644954);
    case 0x5a:
      return (wchar_t *)((wchar_t *)&DAT_0064492c);
    case 0x5b:
      return (wchar_t *)((wchar_t *)&DAT_00644904);
    case 0x5d:
      goto switchD_00525f83_caseD_5d;
    case 0x5e:
      goto switchD_00525f83_caseD_5e;
    case 0x5f:
      goto switchD_00525f83_caseD_5f;
    case 0x60:
      goto switchD_00525f83_caseD_60;
    case 0x61:
      goto switchD_00525f83_caseD_61;
    case 99:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006448e0);
    case 100:
      return (wchar_t *)((wchar_t *)&PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_006448c8);
    case 0x65:
      return (wchar_t *)((wchar_t *)&PTR_s_eshes__s_Part__d_Bone_slots_00630040_1_006448b4);
    case 0x66:
      return (wchar_t *)(u_eje_1_dcha__0064489c);
    case 0x67:
      return (wchar_t *)(u_eje_1_izq__00644884);
    case 0x68:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064486c);
    case 0x69:
      return (wchar_t *)(u_eje_1_adelante_0064484c);
    case 0x6a:
      return (wchar_t *)(u_eje_2_dcha__00644834);
    case 0x6b:
      return (wchar_t *)(u_eje_2_izq__0064481c);
    case 0x6c:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644804);
    case 0x6d:
      return (wchar_t *)(u_eje_2_adelante_006447e4);
    case 0x6e:
      return (wchar_t *)(u_hat_dcho__006447d0);
    case 0x6f:
      return (wchar_t *)(u_hat_izq__006447bc);
    case 0x70:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006447a8);
    case 0x71:
      return (wchar_t *)(u_hat_adelante_0064478c);
    case 0x72:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644768);
    case 0x73:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644740);
    case 0x76:
      return (wchar_t *)(u_No_se_ha_podido_sobrescribir_el_a_00644678);
    case 0x77:
      return (wchar_t *)(u_Hacer_clic_para_empezar_00644648);
    case 0x78:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644724);
    case 0x79:
      return (wchar_t *)((wchar_t *)&PTR_PTR_0064463c);
    case 0x7a:
      return (wchar_t *)(u_WINDOWS_DCHA_00644620);
    case 0x7b:
      return (wchar_t *)(u_WINDOWS_IZDA__00644604);
    case 0x7c:
switchD_00525b1b_caseD_7c:
      return (wchar_t *)(u_PAUSA_006445f8);
    case 0x7d:
      return (wchar_t *)((wchar_t *)&DAT_006445f0);
    case 0x7e:
      return (wchar_t *)(u_RETROCESO_006445dc);
    case 0x7f:
      goto switchD_00525f83_caseD_7f;
    case 0x80:
      return (wchar_t *)(u_INTRO_006445d0);
    case 0x81:
      return (wchar_t *)(u_CTRL_IZDA__006445b8);
    case 0x82:
      return (wchar_t *)((wchar_t *)&DAT_006445a0);
    case 0x83:
      return (wchar_t *)((wchar_t *)&DAT_0064459c);
    case 0x84:
      return (wchar_t *)((wchar_t *)&DAT_00644598);
    case 0x85:
      return (wchar_t *)((wchar_t *)&DAT_00644594);
    case 0x86:
      return (wchar_t *)((wchar_t *)&DAT_0064457c);
    case 0x87:
      return (wchar_t *)((wchar_t *)&DAT_00644564);
    case 0x88:
      return (wchar_t *)(u_ALT_IZDA__00644550);
    case 0x89:
      return (wchar_t *)(u_ESPACIO_00644540);
    case 0x8a:
      return (wchar_t *)(u_ALT_DCHA__0064452c);
    case 0x8b:
      return (wchar_t *)(u_CTRL_DCHA__00644514);
    case 0x8c:
      goto switchD_00525f83_caseD_8c;
    case 0x8d:
      goto switchD_00525f83_caseD_8d;
    case 0x8e:
      goto switchD_00525f83_caseD_8e;
    case 0x8f:
      goto switchD_00525f83_caseD_8f;
    case 0x90:
      goto switchD_00525f83_caseD_90;
    case 0x91:
      goto switchD_00525f83_caseD_91;
    case 0x92:
      goto switchD_00525f83_caseD_92;
    case 0x93:
      goto switchD_00525f83_caseD_93;
    case 0x94:
      goto switchD_00525f83_caseD_94;
    case 0x95:
      goto switchD_00525f83_caseD_95;
    case 0x96:
      goto switchD_00525f83_caseD_96;
    case 0x97:
      goto switchD_00525f83_caseD_97;
    case 0x98:
      return (wchar_t *)(u_IMPR_PANT_00644500);
    case 0x99:
      return (wchar_t *)(u_BLOQ_DESPL_006444e8);
    case 0x9a:
switchD_00525b1b_caseD_9a:
      return (wchar_t *)((wchar_t *)&PTR_LAB_004e0048_1_006444e0);
    case 0x9b:
      return (wchar_t *)(u_INICIO_006444d0);
    case 0x9c:
      return (wchar_t *)((wchar_t *)&PTR_LAB_006444c0);
    case 0x9d:
      return (wchar_t *)(u_SUPR_006444b4);
    case 0x9e:
      goto switchD_00525677_caseD_9e;
    case 0x9f:
      return (wchar_t *)((wchar_t *)&DAT_006444a4);
    case 0xa0:
      return (wchar_t *)(u_IZDA__00644498);
    case 0xa1:
      return (wchar_t *)(u_ARRIBA_00644488);
    case 0xa2:
      return (wchar_t *)(u_DCHA__0064447c);
    case 0xa3:
      return (wchar_t *)(u_ABAJO_00644470);
    case 0xa4:
      return (wchar_t *)(u_BLOQ_NUM_0064445c);
    case 0xa5:
      return (wchar_t *)(u_DIVIDIR_0064444c);
    case 0xa6:
      return (wchar_t *)(u_MULTIPLICAR_00644434);
    case 0xa7:
      return (wchar_t *)(u_RESTAR_00644424);
    case 0xa8:
      return (wchar_t *)(u_7_TECLADO_NUM__00644404);
    case 0xa9:
      return (wchar_t *)(u_8_TECLADO_NUM__006443e4);
    case 0xaa:
      return (wchar_t *)(u_9_TECLADO_NUM__006443c4);
    case 0xab:
      return (wchar_t *)(u_SUMAR_006443b8);
    case 0xac:
      return (wchar_t *)(u_4_TECLADO_NUM__00644398);
    case 0xad:
      return (wchar_t *)(u_5_TECLADO_NUM__00644378);
    case 0xae:
      return (wchar_t *)(u_6_TECLADO_NUM__00644358);
    case 0xaf:
      return (wchar_t *)(u_1_TECLADO_NUM__00644338);
    case 0xb0:
      return (wchar_t *)(u_2_TECLADO_NUM__00644318);
    case 0xb1:
      return (wchar_t *)(u_3_TECLADO_NUM__006442f8);
    case 0xb2:
      return (wchar_t *)(u_INTRO_TECLADO_NUM__006442d0);
    case 0xb3:
      return (wchar_t *)(u_0_TECLADO_NUM__006442b0);
    case 0xb4:
      return (wchar_t *)(u_SEPARADOR_0064429c);
    case 0xb5:
      return (wchar_t *)(u_Espere__por_favor_00644278);
    case 0xb6:
      return (wchar_t *)(u_No_se_puede_iniciar_el_sistema_d_00644224);
    case 0xb7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064413c);
    case 0xb8:
      return (wchar_t *)(u_No_se_han_encontrado_dispositivo_006440cc);
    case 0xb9:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00643f5c);
    case 0xba:
      return (wchar_t *)(u_No_se_han_encontrado_dispositivo_00643ed4);
    case 0xbb:
      return (wchar_t *)((wchar_t *)&PTR_LAB_00643e14);
    case 0xbc:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00643d80);
    case 0xbd:
      return (wchar_t *)((wchar_t *)&DAT_00643c9c);
    case 0xbe:
      return (wchar_t *)((wchar_t *)&PTR_LAB_00643b8c);
    case 0xbf:
      return (wchar_t *)(u_No_se_puede_cargar_el_medio_soli_00643b3c);
    case 0xc0:
      return (wchar_t *)(u_No_se_ha_podido_reiniciar_el_sis_00643ae8);
    case 0xc1:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00643a80);
    case 0xc2:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00643a48);
    case 0xc3:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00643a00);
    case 0xc4:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006439c4);
    case 0xc5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064396c);
    case 0xc6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064392c);
    case 199:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006438e8);
    case 200:
      return (wchar_t *)((wchar_t *)&PTR_LAB_006438a0);
    case 0xc9:
      return (wchar_t *)((wchar_t *)&PTR_LAB_00643858);
    case 0xca:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006437dc);
    case 0xcb:
      return (wchar_t *)(u_Error_grave_006437c4);
    case 0xcc:
      return (wchar_t *)(u_Archivo_no_encontrado__00643794);
    case 0xcd:
      return (wchar_t *)(u_Error_1_memoria_insuficiente__00643758);
    case 0xce:
      return (wchar_t *)(u_Error_2_memoria_insuficiente__00643718);
    case 0xcf:
      return (wchar_t *)(u_Error_3_memoria_insuficiente__006436d8);
    case 0xd0:
      return (wchar_t *)(u_Error_4_memoria_insuficiente__00643698);
    case 0xd1:
      return (wchar_t *)(u_Error_interno_1_00643678);
    case 0xd2:
      return (wchar_t *)(u_Error_interno__00643658);
    case 0xd3:
      return (wchar_t *)(u_Nivel_antialias_pantalla_complet_00643610);
    case 0xd4:
      return (wchar_t *)(u_Ninguno_00643600);
    case 0xd5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00643514);
    case 0xd6:
      return (wchar_t *)((wchar_t *)&PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_006434d8);
    case 0xd7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00643480);
    case 0xd8:
      return (wchar_t *)(u_Calidad_del_sonido__00643458);
    case 0xd9:
      return (wchar_t *)(u_Alta__44_Khz__16_bits__00643428);
    case 0xda:
      return (wchar_t *)(u_Media__22_Khz__16_bits__006433f8);
    case 0xdb:
      return (wchar_t *)(u_Baja__11_Khz__8_bits__006433cc);
    case 0xdc:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064336c);
    case 0xdd:
      return (wchar_t *)((wchar_t *)&DAT_006432fc);
    case 0xde:
      return (wchar_t *)((wchar_t *)&PTR_s__mixermap_cpp_00640030_0x11_006432d4);
    case 0xdf:
      return (wchar_t *)(u_Nivel_de_detalle_general__006432a0);
    case 0xe0:
      return (wchar_t *)((wchar_t *)&PTR_s_2_MissionScript_ScriptObjectCode_00650040_0x10_00643284);
    case 0xe1:
      return (wchar_t *)((wchar_t *)&DAT_00643274);
    case 0xe4:
      return (wchar_t *)((wchar_t *)&DAT_00643224);
    case 0xe5:
      return (wchar_t *)(u_Fallo_al_configurar_antialias_en_006431bc);
    case 0xe6:
      return (wchar_t *)(u_Fallo_al_cambiar_modo__se_ha_pas_0064313c);
    case 0xe7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006430a4);
    case 0xe8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064301c);
    case 0xe9:
      return (wchar_t *)((wchar_t *)&DAT_00642f90);
    case 0xea:
      return (wchar_t *)(u_Modo_de_pantalla_cambiado__00642f58);
    case 0xeb:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642f30);
    case 0xec:
      goto switchD_00525f83_caseD_ec;
    case 0xed:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642f04);
    case 0xee:
      return (wchar_t *)((wchar_t *)&DAT_00642ee0);
    case 0xef:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642ec0);
    case 0xf0:
      return (wchar_t *)((wchar_t *)&PTR_s_2_MissionScript_ScriptObjectCode_00650040_0x10_00642ea4);
    case 0xf1:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642e54);
    case 0xf2:
      return (wchar_t *)((wchar_t *)&DAT_00642e24);
    case 0xf3:
      return (wchar_t *)((wchar_t *)&DAT_00642e08);
    case 0xf4:
      return (wchar_t *)((wchar_t *)&PTR_s_ssionScript_ScriptObjectCode_cpp_00650040_0x14_00642dcc);
    case 0xf5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642d64);
    case 0xf6:
      return (wchar_t *)(u_No_se_ha_encontrado_modo_de_pant_00642d04);
    case 0xf7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644de4);
    case 0xf8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00644dc8);
    default:
      goto switchD_00525f83_default;
    }
  case 4:
    switch(param_1) {
    case 0:
      return (wchar_t *)(u_Applica_00642cf4);
    case 1:
      return (wchar_t *)(u_Opzioni_audio_00642cd8);
    case 2:
      return (wchar_t *)(u_Opzioni_video_00642cbc);
    case 3:
      return (wchar_t *)(u_Opzioni_controller_00642c94);
    case 4:
      return (wchar_t *)(u_Scambia_altoparlanti_destro_sini_00642c48);
    case 5:
      return (wchar_t *)((wchar_t *)&DAT_00642c40);
    case 6:
      goto switchD_00525f83_caseD_6;
    case 7:
      return (wchar_t *)((wchar_t *)&PTR_s_eshes__s_Part__d_Bone_slots_00630040_1_00642bfc);
    case 8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642bcc);
    case 9:
      return (wchar_t *)((wchar_t *)&PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_00642b90);
    case 10:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642b6c);
    case 0xb:
      goto switchD_00525b1b_caseD_b;
    case 0xc:
      return (wchar_t *)(u_Media___HRTF_leggero___00642b3c);
    case 0xd:
      return (wchar_t *)(u_Bassa__Panoramica_destra_sinistr_00642af4);
    case 0xe:
      return (wchar_t *)((wchar_t *)&PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00642ad0);
    case 0xf:
      return (wchar_t *)((wchar_t *)&PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00642aa4);
    case 0x10:
      return (wchar_t *)(u_Basso_00642a98);
    case 0x11:
    case 0xe2:
      goto switchD_00525b1b_caseD_11;
    case 0x12:
    case 0xe3:
      goto switchD_00525b1b_caseD_12;
    case 0x13:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642a6c);
    case 0x14:
      goto switchD_00525f83_caseD_14;
    case 0x15:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642a3c);
    case 0x16:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006429f4);
    case 0x17:
      return (wchar_t *)(u_Alta__Scelta_consigliata__006429c0);
    case 0x18:
      return (wchar_t *)(u_Media__Scelta_consigliata__00642988);
    case 0x19:
      return (wchar_t *)(u_Bassa_Scelta_consigliata__00642954);
    case 0x1a:
    case 0x22:
      goto switchD_00525b1b_caseD_1a;
    case 0x1b:
    case 0x23:
      goto switchD_00525b1b_caseD_1b;
    case 0x1c:
    case 0x24:
      return (wchar_t *)(u_Bassa_00642a30);
    case 0x1d:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006428cc);
    case 0x1e:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006428a0);
    case 0x1f:
      return (wchar_t *)((wchar_t *)&DAT_00642870);
    case 0x20:
      return (wchar_t *)(u_No__Scelta_consigliata__00642840);
    case 0x21:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006427ec);
    case 0x25:
      return (wchar_t *)(u_Minima_00642a20);
    case 0x26:
      goto switchD_00525f83_caseD_26;
    case 0x27:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x3a:
    case 0x3f:
    case 0x44:
    case 0x47:
    case 0x4d:
    case 0x4f:
    case 0x50:
    case 0x53:
    case 0x5c:
    case 0x62:
    case 0x74:
    case 0x75:
      goto switchD_00525f83_switchD;
    case 0x28:
      return (wchar_t *)(u_Disco_rigido_006427d0);
    case 0x33:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642778);
    case 0x34:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642760);
    case 0x35:
      goto switchD_00525f83_caseD_35;
    case 0x36:
      goto switchD_00525f83_caseD_36;
    case 0x37:
      return (wchar_t *)((wchar_t *)&PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00642790);
    case 0x38:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064271c);
    case 0x39:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006426e0);
    case 0x3b:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006426bc);
    case 0x3c:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006426a8);
    case 0x3d:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642694);
    case 0x3e:
      return (wchar_t *)(u_Destra_00642684);
    case 0x40:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642660);
    case 0x41:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064264c);
    case 0x42:
      return (wchar_t *)(u_A_sinistra_00642634);
    case 0x43:
      return (wchar_t *)(u_A_destra_00642620);
    case 0x45:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642604);
    case 0x46:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006425f0);
    case 0x48:
      return (wchar_t *)(u_Altro__Armi_006425d8);
    case 0x49:
      return (wchar_t *)((wchar_t *)&PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_006425b0);
    case 0x4a:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064259c);
    case 0x4b:
      return (wchar_t *)((wchar_t *)&PTR_s___dev_ONSLAUGHT2_MissionScript_S_00650040_1_00642588);
    case 0x4c:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642564);
    case 0x4e:
      return (wchar_t *)((wchar_t *)&PTR_s_issionScript_ScriptObjectCode_cp_00650040_0x13_0064253c);
    case 0x51:
      return (wchar_t *)(u_Tasto_00642530);
    case 0x52:
      goto switchD_00525f83_caseD_52;
    case 0x54:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006424f8);
    case 0x55:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006424c0);
    case 0x56:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064248c);
    case 0x57:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642460);
    case 0x58:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642438);
    case 0x59:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642410);
    case 0x5a:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006423e8);
    case 0x5b:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006423c0);
    case 0x5d:
      goto switchD_00525f83_caseD_5d;
    case 0x5e:
      goto switchD_00525f83_caseD_5e;
    case 0x5f:
      goto switchD_00525f83_caseD_5f;
    case 0x60:
      goto switchD_00525f83_caseD_60;
    case 0x61:
      goto switchD_00525f83_caseD_61;
    case 99:
      return (wchar_t *)(u_Non_presente_006423a4);
    case 100:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064238c);
    case 0x65:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642378);
    case 0x66:
      return (wchar_t *)(u_asse_1_destra_0064235c);
    case 0x67:
      return (wchar_t *)(u_asse_1_sinistra_0064233c);
    case 0x68:
      return (wchar_t *)(u_asse_1_indietro_0064231c);
    case 0x69:
      return (wchar_t *)(u_asse_1_avanti_00642300);
    case 0x6a:
      return (wchar_t *)(u_asse_2_destra_006422e4);
    case 0x6b:
      return (wchar_t *)(u_asse_2_sinistra_006422c4);
    case 0x6c:
      return (wchar_t *)(u_asse_2_indietro_006422a4);
    case 0x6d:
      return (wchar_t *)(u_asse_2_avanti_00642288);
    case 0x6e:
      return (wchar_t *)(u_Hat_destra_00642270);
    case 0x6f:
      return (wchar_t *)(u_Hat_sinistra_00642254);
    case 0x70:
      return (wchar_t *)(u_Hat_indietro_00642238);
    case 0x71:
      return (wchar_t *)(u_Hat_avanti_00642220);
    case 0x72:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006421f4);
    case 0x73:
      return (wchar_t *)(u_Rotella_del_mouse_su_006421c8);
    case 0x76:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642100);
    case 0x77:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006420d0);
    case 0x78:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006421a8);
    case 0x79:
      goto switchD_00525f83_caseD_79;
    case 0x7a:
      return (wchar_t *)(u_FINESTRE_A_DESTRA_006420ac);
    case 0x7b:
      return (wchar_t *)(u_FINESTRE_A_SINISTRA_00642084);
    case 0x7c:
      goto switchD_00525b1b_caseD_7c;
    case 0x7d:
      return (wchar_t *)(u_ESCI_00642078);
    case 0x7e:
      return (wchar_t *)(u_INDIETRO_00642064);
    case 0x7f:
      goto switchD_00525f83_caseD_7f;
    case 0x80:
      return (wchar_t *)(u_TORNA_00642058);
    case 0x81:
      return (wchar_t *)(u_CTRL_SINISTRO_0064203c);
    case 0x82:
      return (wchar_t *)(u_BLOCCO_MAIUSCOLE_00642018);
    case 0x83:
      return (wchar_t *)(u_DUE_PUNTI_00642004);
    case 0x84:
      return (wchar_t *)(u_VIRGOLETTE_00641fec);
    case 0x85:
      goto switchD_00525b1b_caseD_85;
    case 0x86:
      return (wchar_t *)(u_MAIUSC_SINISTRO_00641fcc);
    case 0x87:
      return (wchar_t *)(u_MAIUSC_DESTRO_00641fb0);
    case 0x88:
      return (wchar_t *)(u_ALT_SINISTRO_00641f94);
    case 0x89:
      return (wchar_t *)(u_SPAZIO_00641f84);
    case 0x8a:
      return (wchar_t *)(u_ALT_DESTRO_00641f6c);
    case 0x8b:
      return (wchar_t *)(u_CTRL_DESTRO_00641f54);
    case 0x8c:
      goto switchD_00525f83_caseD_8c;
    case 0x8d:
      goto switchD_00525f83_caseD_8d;
    case 0x8e:
      goto switchD_00525f83_caseD_8e;
    case 0x8f:
      goto switchD_00525f83_caseD_8f;
    case 0x90:
      goto switchD_00525f83_caseD_90;
    case 0x91:
      goto switchD_00525f83_caseD_91;
    case 0x92:
      goto switchD_00525f83_caseD_92;
    case 0x93:
      goto switchD_00525f83_caseD_93;
    case 0x94:
      goto switchD_00525f83_caseD_94;
    case 0x95:
      goto switchD_00525f83_caseD_95;
    case 0x96:
      goto switchD_00525f83_caseD_96;
    case 0x97:
      goto switchD_00525f83_caseD_97;
    case 0x98:
      return (wchar_t *)(u_STAMP_00641f48);
    case 0x99:
      return (wchar_t *)(u_BLOC_SCORR_00641f30);
    case 0x9a:
      goto switchD_00525b1b_caseD_9a;
    case 0x9b:
      goto switchD_00525f83_caseD_9b;
    case 0x9c:
      return (wchar_t *)(u_PGSU_00641f24);
    case 0x9d:
      return (wchar_t *)(u_CANC_00641f18);
    case 0x9e:
      return (wchar_t *)(u_FINE_00641f0c);
    case 0x9f:
      return (wchar_t *)((wchar_t *)&PTR_PTR_00641f00);
    case 0xa0:
      return (wchar_t *)(u_SINISTRA_00641eec);
    case 0xa1:
      return (wchar_t *)((wchar_t *)&DAT_00641ee4);
    case 0xa2:
      return (wchar_t *)(u_DESTRA_00641ed4);
    case 0xa3:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00641ecc);
    case 0xa4:
      return (wchar_t *)(u_BLOC_NUM_00641eb8);
    case 0xa5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00641ea4);
    case 0xa6:
      return (wchar_t *)(u_MOLTIPLICAZIONE_00641e84);
    case 0xa7:
      return (wchar_t *)(u_SOTTRAZIONE_00641e6c);
    case 0xa8:
      return (wchar_t *)(u_TASTNUM_7_00641e58);
    case 0xa9:
      return (wchar_t *)(u_TASTNUM_8_00641e44);
    case 0xaa:
      return (wchar_t *)(u_TASTNUM_9_00641e30);
    case 0xab:
      return (wchar_t *)(u_ADDIZIONE__00641e18);
    case 0xac:
      return (wchar_t *)(u_TASTNUM_4_00641e04);
    case 0xad:
      return (wchar_t *)(u_TASTNUM_5_00641df0);
    case 0xae:
      return (wchar_t *)(u_TASTNUM_6_00641ddc);
    case 0xaf:
      return (wchar_t *)(u_TASTNUM_1_00641dc8);
    case 0xb0:
      return (wchar_t *)(u_TASTNUM_2_00641db4);
    case 0xb1:
      return (wchar_t *)(u_TASTNUM_3_00641da0);
    case 0xb2:
      return (wchar_t *)(u_TASTNUM_INVIO_00641d84);
    case 0xb3:
      return (wchar_t *)(u_TASTNUM_0_00641d70);
    case 0xb4:
      return (wchar_t *)(u_SEPARATORE_00641d58);
    case 0xb5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00641d44);
    case 0xb6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00641cf8);
    case 0xb7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00641c1c);
    case 0xb8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00641bb0);
    case 0xb9:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00641a78);
    case 0xba:
      return (wchar_t *)(u_Nessuna_periferica_Direct3D_di_a_006419f8);
    case 0xbb:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00641940);
    case 0xbc:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00641890);
    case 0xbd:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064179c);
    case 0xbe:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006416a0);
    case 0xbf:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00641648);
    case 0xc0:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006415f8);
    case 0xc1:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064159c);
    case 0xc2:
      return (wchar_t *)(u_Memoria_esaurita__00641578);
    case 0xc3:
      return (wchar_t *)(u_Memoria_video_esaurita__00641548);
    case 0xc4:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00641500);
    case 0xc5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006414ac);
    case 0xc6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00641450);
    case 199:
      return (wchar_t *)(u_Tipo_di_errore_di_creazione_text_00641400);
    case 200:
      return (wchar_t *)(u_Tipo_di_errore_di_creazione_text_006413b4);
    case 0xc9:
      return (wchar_t *)(u_Tipo_di_errore_di_creazione_text_00641364);
    case 0xca:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006412cc);
    case 0xcb:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064127c);
    case 0xcc:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00641258);
    case 0xcd:
      return (wchar_t *)(u_Tipo_di_errore_di_memoria_esauri_0064120c);
    case 0xce:
      return (wchar_t *)(u_Tipo_di_errore_di_memoria_esauri_006411c0);
    case 0xcf:
      return (wchar_t *)(u_Tipo_di_errore_di_memoria_esauri_00641174);
    case 0xd0:
      return (wchar_t *)(u_Tipo_di_errore_di_memoria_esauri_00641128);
    case 0xd1:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00641104);
    case 0xd2:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006410e4);
    case 0xd3:
      return (wchar_t *)(u_Livello_di_anti_aliasing_a_scher_0064108c);
    case 0xd4:
      return (wchar_t *)(u_Nessuno_0064107c);
    case 0xd5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00640f9c);
    case 0xd6:
      return (wchar_t *)(u_Opzioni_salvate_correttamente__00640f5c);
    case 0xd7:
      return (wchar_t *)(u_Nessuna_periferica_audio_disponi_00640f10);
    case 0xd8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00640ef0);
    case 0xd9:
      return (wchar_t *)(u_Alta__44_KHz__16_bit__00640ec4);
    case 0xda:
      return (wchar_t *)(u_Media__22_KHz__16_bit__00640e94);
    case 0xdb:
      return (wchar_t *)(u_Bassa__11_KHz__8_bit__00640e68);
    case 0xdc:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00640e0c);
    case 0xdd:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00640da0);
    case 0xde:
      return (wchar_t *)((wchar_t *)&PTR_s__mixermap_cpp_00640030_0x11_00640d7c);
    case 0xdf:
      return (wchar_t *)(u_Livello_generale_dettagli__00640d44);
    case 0xe0:
      return (wchar_t *)((wchar_t *)&PTR_s_2_MissionScript_ScriptObjectCode_00650040_0x10_00640d24);
    case 0xe1:
      return (wchar_t *)(u_Minimo_00640d14);
    case 0xe4:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00640cf0);
    case 0xe5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00640c70);
    case 0xe6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00640bdc);
    case 0xe7:
      return (wchar_t *)((wchar_t *)&PTR_s_ev_ONSLAUGHT2_MissionScript_Scri_00650040_4_00640b50);
    case 0xe8:
      return (wchar_t *)((wchar_t *)&PTR_s_ionScript_ScriptObjectCode_cpp_00650040_0x16_00640abc);
    case 0xe9:
      return (wchar_t *)((wchar_t *)&PTR_s_ionScript_ScriptObjectCode_cpp_00650040_0x16_00640a28);
    case 0xea:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006409f0);
    case 0xeb:
      return (wchar_t *)(u_Formato_schermo__006409cc);
    case 0xec:
      return (wchar_t *)(u_Normale__4_3__006409b0);
    case 0xed:
      return (wchar_t *)(u_Schermo_largo__16_9__00640984);
    case 0xee:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00640948);
    case 0xef:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00640928);
    case 0xf0:
      return (wchar_t *)((wchar_t *)&PTR_s_2_MissionScript_ScriptObjectCode_00650040_0x10_00640908);
    case 0xf1:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006408b0);
    case 0xf2:
      goto switchD_00525f83_caseD_f2;
    case 0xf3:
      goto switchD_00525f83_caseD_f3;
    case 0xf4:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00640868);
    case 0xf5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006407e0);
    case 0xf6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064077c);
    case 0xf7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00642920);
    case 0xf8:
      return (wchar_t *)(u_Non_disponibile_00642900);
    default:
      goto switchD_00525f83_default;
    }
  default:
switchD_00525f83_switchD:
    switch(param_1) {
    case 0:
      goto switchD_00525f83_caseD_0;
    case 1:
switchD_00525f83_caseD_1:
      return (wchar_t *)(u_Sound_Options_0064bbc4);
    case 2:
switchD_00525f83_caseD_2:
      return (wchar_t *)(u_Video_Options_0064bba8);
    case 3:
switchD_00525f83_caseD_3:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064bb80);
    case 4:
switchD_00525f83_caseD_4:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064bb4c);
    case 5:
switchD_00525f83_caseD_5:
      return (wchar_t *)((wchar_t *)&PTR_s_Script_ScriptObjectCode_cpp_00650040_0x19_0064bb44);
    case 6:
switchD_00525f83_caseD_6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064bb3c);
    case 7:
      return (wchar_t *)(u_3D_Sound_Hardware_acceleration__0064073c);
    case 8:
switchD_00525f83_caseD_8:
      return (wchar_t *)(u_Sound_Device_Number_0064bad4);
    case 9:
switchD_00525f83_caseD_9:
      return (wchar_t *)(u_Select_Sound_Device__0064baa8);
    case 10:
switchD_00525f83_caseD_a:
      return (wchar_t *)(u_3D_Sound_Quality__0064ba84);
    case 0xb:
switchD_00525f83_caseD_b:
      return (wchar_t *)(u_High___Full_HRTF___0064ba5c);
    case 0xc:
switchD_00525f83_caseD_c:
      return (wchar_t *)(u_Medium___Light_HRTF___0064ba30);
    case 0xd:
switchD_00525f83_caseD_d:
      return (wchar_t *)(u_Low__Left_Right_panning__0064b9fc);
    case 0xe:
switchD_00525f83_caseD_e:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b9dc);
    case 0xf:
switchD_00525f83_caseD_f:
      return (wchar_t *)((wchar_t *)&PTR_s_ONSLAUGHT2_MissionScript_ScriptO_00650040_7_0064b9b8);
    case 0x10:
    case 0x1c:
    case 0x24:
switchD_00525f83_caseD_10:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b9b0);
    case 0x11:
    case 0x1b:
    case 0x23:
    case 0xe2:
switchD_00525f83_caseD_11:
      return (wchar_t *)(u_Medium_0064b914);
    case 0x12:
    case 0x1a:
    case 0x22:
    case 0xe3:
switchD_00525f83_caseD_12:
      return (wchar_t *)(u_High_0064b9a4);
    case 0x13:
switchD_00525f83_caseD_13:
      return (wchar_t *)((wchar_t *)&PTR_s_one_slots_00630040_0x13_0064b988);
    case 0x14:
switchD_00525f83_caseD_14:
      return (wchar_t *)(u_VSync__0064b978);
    case 0x15:
switchD_00525f83_caseD_15:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b94c);
    case 0x16:
switchD_00525f83_caseD_16:
      return (wchar_t *)(u_Texture_Resolution__0064b924);
    case 0x17:
switchD_00525f83_caseD_17:
      return (wchar_t *)(u_High__Recommended__0064b8ec);
    case 0x18:
switchD_00525f83_caseD_18:
      return (wchar_t *)(u_Medium__Recommended__0064b8c0);
    case 0x19:
switchD_00525f83_caseD_19:
      return (wchar_t *)(u_Low__Recommended__00640718);
    case 0x1d:
switchD_00525f83_caseD_1d:
      return (wchar_t *)(u_Enable_32_bit_textures__0064b840);
    case 0x1e:
switchD_00525f83_caseD_1e:
      return (wchar_t *)(u_Only_Where_Obvious_0064b818);
    case 0x1f:
switchD_00525f83_caseD_1f:
      return (wchar_t *)(u_Yes__Recommended__0064b7f4);
    case 0x20:
switchD_00525f83_caseD_20:
      return (wchar_t *)(u_No__Recommended__0064b7d0);
    case 0x21:
switchD_00525f83_caseD_21:
      return (wchar_t *)(u_Only_Where_Obvious__Recommended__006406d4);
    case 0x25:
    case 0xe1:
switchD_00525f83_caseD_25:
      return (wchar_t *)(u_Lowest_00649fd0);
    case 0x26:
switchD_00525f83_caseD_26:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b7a4);
    case 0x27:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006406cc);
    case 0x28:
switchD_00525f83_caseD_28:
      return (wchar_t *)(u_Hard_Drive_0064b78c);
    case 0x29:
      return (wchar_t *)(u_Player_1_s_controller_has_been_r_0064067c);
    case 0x2a:
      return (wchar_t *)(u_Player_2_s_controller_has_been_r_0064062c);
    case 0x2b:
      return (wchar_t *)(((short*)0x640610));
    case 0x2c:
    case 0x2d:
      return (wchar_t *)(((short*)0x640600));
    case 0x2e:
      return (wchar_t *)((wchar_t *)&PTR_DAT_006405e8);
    case 0x2f:
      return (wchar_t *)(((short*)0x6405d4));
    case 0x30:
      return (wchar_t *)(((short*)0x6405c0));
    case 0x31:
      return (wchar_t *)(u_Suggest_a_configuration_00640590);
    case 0x32:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064055c);
    case 0x33:
switchD_00525f83_caseD_33:
      return (wchar_t *)(u_Player_1_0064b73c);
    case 0x34:
switchD_00525f83_caseD_34:
      return (wchar_t *)(u_Player_2_0064b728);
    case 0x35:
switchD_00525f83_caseD_35:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b6b8);
    case 0x36:
switchD_00525f83_caseD_36:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b6b0);
    case 0x37:
switchD_00525f83_caseD_37:
      return (wchar_t *)(u_Control_configuration_details_0064b750);
    case 0x38:
switchD_00525f83_caseD_38:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b6f4);
    case 0x39:
switchD_00525f83_caseD_39:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b6c0);
    case 0x3a:
    case 0x3f:
    case 0x44:
    case 0x47:
    case 0x4d:
    case 0x50:
      return (wchar_t *)(&DAT_00677d78);
    case 0x3b:
switchD_00525f83_caseD_3b:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b68c);
    case 0x3c:
switchD_00525f83_caseD_3c:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b678);
    case 0x3d:
    case 0x42:
switchD_00525f83_caseD_3d:
      return (wchar_t *)(u_Left_0064b66c);
    case 0x3e:
    case 0x43:
switchD_00525f83_caseD_3e:
      return (wchar_t *)(u_Right_0064b660);
    case 0x40:
switchD_00525f83_caseD_40:
      return (wchar_t *)(u_Look__Up_0064b64c);
    case 0x41:
switchD_00525f83_caseD_41:
      return (wchar_t *)(u_Down_00640550);
    case 0x45:
switchD_00525f83_caseD_45:
      return (wchar_t *)(u_Zoom__In_0064b638);
    case 0x46:
switchD_00525f83_caseD_46:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b630);
    case 0x48:
switchD_00525f83_caseD_48:
      return (wchar_t *)(u_Others__Fire_weapon_0064b608);
    case 0x49:
switchD_00525f83_caseD_49:
      return (wchar_t *)(u_Select_Weapon_0064b5ec);
    case 0x4a:
switchD_00525f83_caseD_4a:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b5d8);
    case 0x4b:
switchD_00525f83_caseD_4b:
      return (wchar_t *)(u_Air_Brake_0064b5c4);
    case 0x4c:
switchD_00525f83_caseD_4c:
      return (wchar_t *)(u_Special_function_0064b5a0);
    case 0x4e:
switchD_00525f83_caseD_4e:
      return (wchar_t *)(u_Mouse_sensitivity__0064b578);
    case 0x4f:
      return (wchar_t *)(u_Mouse_autocenter__0064052c);
    case 0x51:
switchD_00525f83_caseD_51:
      return (wchar_t *)((wchar_t *)&PTR_s_AUGHT2_MissionScript_ScriptObjec_00650040_0xb_0064b570);
    case 0x52:
switchD_00525f83_caseD_52:
      return (wchar_t *)(u_Mouse_0064b564);
    case 0x53:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00640508);
    case 0x54:
switchD_00525f83_caseD_54:
      return (wchar_t *)(u_Left_Mouse_Button_0064b540);
    case 0x55:
switchD_00525f83_caseD_55:
      return (wchar_t *)(u_Middle_Mouse_Button_0064b518);
    case 0x56:
switchD_00525f83_caseD_56:
      return (wchar_t *)(u_Right_Mouse_Button_0064b4f0);
    case 0x57:
switchD_00525f83_caseD_57:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b4d0);
    case 0x58:
switchD_00525f83_caseD_58:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b4ac);
    case 0x59:
switchD_00525f83_caseD_59:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b488);
    case 0x5a:
switchD_00525f83_caseD_5a:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b464);
    case 0x5b:
switchD_00525f83_caseD_5b:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b440);
    case 0x5c:
      return (wchar_t *)(u_button_006404f8);
    case 0x5d:
switchD_00525f83_caseD_5d:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b3f0);
    case 0x5e:
switchD_00525f83_caseD_5e:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b3d8);
    case 0x5f:
switchD_00525f83_caseD_5f:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b3c0);
    case 0x60:
switchD_00525f83_caseD_60:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b3a8);
    case 0x61:
switchD_00525f83_caseD_61:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b390);
    case 0x62:
      return (wchar_t *)(u_axis_006404ec);
    case 99:
switchD_00525f83_caseD_63:
      return (wchar_t *)(u_Not_present_0064b428);
    case 100:
switchD_00525f83_caseD_64:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b414);
    case 0x65:
switchD_00525f83_caseD_65:
      return (wchar_t *)(u_Enabled_0064b404);
    case 0x66:
switchD_00525f83_caseD_66:
      return (wchar_t *)(u_axis_1_right_0064b374);
    case 0x67:
switchD_00525f83_caseD_67:
      return (wchar_t *)(u_axis_1_left_0064b35c);
    case 0x68:
switchD_00525f83_caseD_68:
      return (wchar_t *)(u_axis_1_back_0064b344);
    case 0x69:
switchD_00525f83_caseD_69:
      return (wchar_t *)(u_axis_1_forward_0064b324);
    case 0x6a:
switchD_00525f83_caseD_6a:
      return (wchar_t *)(u_axis_2_right_0064b308);
    case 0x6b:
switchD_00525f83_caseD_6b:
      return (wchar_t *)(u_axis_2_left_0064b2f0);
    case 0x6c:
switchD_00525f83_caseD_6c:
      return (wchar_t *)(u_axis_2_back_0064b2d8);
    case 0x6d:
switchD_00525f83_caseD_6d:
      return (wchar_t *)(u_axis_2_forward_0064b2b8);
    case 0x6e:
switchD_00525f83_caseD_6e:
      return (wchar_t *)(u_hat_right_0064b2a4);
    case 0x6f:
switchD_00525f83_caseD_6f:
      return (wchar_t *)(u_hat_left_0064b290);
    case 0x70:
switchD_00525f83_caseD_70:
      return (wchar_t *)(u_hat_back_0064b27c);
    case 0x71:
switchD_00525f83_caseD_71:
      return (wchar_t *)(u_hat_forward_0064b264);
    case 0x72:
switchD_00525f83_caseD_72:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b244);
    case 0x73:
switchD_00525f83_caseD_73:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b228);
    case 0x74:
      return (wchar_t *)(u_Player_1_press_FIRE_006404c4);
    case 0x75:
      return (wchar_t *)(u_Player_2_press_FIRE_0064049c);
    case 0x76:
switchD_00525f83_caseD_76:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b184);
    case 0x77:
switchD_00525f83_caseD_77:
      return (wchar_t *)(u_Click_to_start_0064b164);
    case 0x78:
switchD_00525f83_caseD_78:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064b210);
    case 0x79:
switchD_00525f83_caseD_79:
      return (wchar_t *)(u_MENU_0064b158);
    case 0x7a:
      return (wchar_t *)(u_RWINDOWS_00640488);
    case 0x7b:
      return (wchar_t *)(u_LWINDOWS_00640474);
    case 0x7c:
switchD_00525f83_caseD_7c:
      return (wchar_t *)(u_PAUSE_0064b114);
    case 0x7d:
switchD_00525f83_caseD_7d:
      return (wchar_t *)(u_ESCAPE_0064b104);
    case 0x7e:
switchD_00525f83_caseD_7e:
      return (wchar_t *)(u_BACK_0064b0f8);
    case 0x7f:
switchD_00525f83_caseD_7f:
      return (wchar_t *)((wchar_t *)&DAT_0064b0f0);
    case 0x80:
switchD_00525f83_caseD_80:
      return (wchar_t *)(u_RETURN_0064b0e0);
    case 0x81:
switchD_00525f83_caseD_81:
      return (wchar_t *)(u_LEFT_CONTROL_0064b0c4);
    case 0x82:
switchD_00525f83_caseD_82:
      return (wchar_t *)(u_CAPS_LOCK_0064b0b0);
    case 0x83:
switchD_00525f83_caseD_83:
      return (wchar_t *)(u_COLON_0064b0a4);
    case 0x84:
switchD_00525f83_caseD_84:
      return (wchar_t *)(u_QUOTE_0064b098);
    case 0x85:
switchD_00525f83_caseD_85:
      return (wchar_t *)(u_TILD_0064b08c);
    case 0x86:
switchD_00525f83_caseD_86:
      return (wchar_t *)(u_LEFT_SHIFT_0064b074);
    case 0x87:
switchD_00525f83_caseD_87:
      return (wchar_t *)(u_RIGHT_SHIFT_0064b05c);
    case 0x88:
switchD_00525f83_caseD_88:
      return (wchar_t *)(u_LEFT_ALT_0064b048);
    case 0x89:
switchD_00525f83_caseD_89:
      return (wchar_t *)(u_SPACE_0064b03c);
    case 0x8a:
switchD_00525f83_caseD_8a:
      return (wchar_t *)(u_RIGHT_ALT_0064b028);
    case 0x8b:
switchD_00525f83_caseD_8b:
      return (wchar_t *)(u_RIGHT_CONTROL_0064b00c);
    case 0x8c:
switchD_00525f83_caseD_8c:
      return (wchar_t *)((wchar_t *)&DAT_0064b004);
    case 0x8d:
switchD_00525f83_caseD_8d:
      return (wchar_t *)((wchar_t *)&DAT_0064affc);
    case 0x8e:
switchD_00525f83_caseD_8e:
      return (wchar_t *)((wchar_t *)&DAT_0064aff4);
    case 0x8f:
switchD_00525f83_caseD_8f:
      return (wchar_t *)((wchar_t *)&DAT_0064afec);
    case 0x90:
switchD_00525f83_caseD_90:
      return (wchar_t *)((wchar_t *)&DAT_0064afe4);
    case 0x91:
switchD_00525f83_caseD_91:
      return (wchar_t *)((wchar_t *)&DAT_0064afdc);
    case 0x92:
switchD_00525f83_caseD_92:
      return (wchar_t *)((wchar_t *)&DAT_0064afd4);
    case 0x93:
switchD_00525f83_caseD_93:
      return (wchar_t *)((wchar_t *)&DAT_0064afcc);
    case 0x94:
switchD_00525f83_caseD_94:
      return (wchar_t *)((wchar_t *)&DAT_0064afc4);
    case 0x95:
switchD_00525f83_caseD_95:
      return (wchar_t *)((wchar_t *)&DAT_0064afbc);
    case 0x96:
switchD_00525f83_caseD_96:
      return (wchar_t *)((wchar_t *)&DAT_0064afb4);
    case 0x97:
switchD_00525f83_caseD_97:
      return (wchar_t *)((wchar_t *)&DAT_0064afac);
    case 0x98:
switchD_00525f83_caseD_98:
      return (wchar_t *)(u_PRTSC_0064afa0);
    case 0x99:
switchD_00525f83_caseD_99:
      return (wchar_t *)(u_SCROLL_0064af90);
    case 0x9a:
switchD_00525f83_caseD_9a:
      return (wchar_t *)(u_INSERT_0064af80);
    case 0x9b:
switchD_00525f83_caseD_9b:
      return (wchar_t *)(u_HOME_0064af74);
    case 0x9c:
switchD_00525f83_caseD_9c:
      return (wchar_t *)(u_PGUP_0064af68);
    case 0x9d:
switchD_00525f83_caseD_9d:
      return (wchar_t *)(u_DELETE_0064af58);
    case 0x9e:
switchD_00525f83_caseD_9e:
      return (wchar_t *)((wchar_t *)&PTR_LAB_0064af50);
    case 0x9f:
switchD_00525f83_caseD_9f:
      return (wchar_t *)(u_PGDN_0064af44);
    case 0xa0:
switchD_00525f83_caseD_a0:
      return (wchar_t *)(u_LEFT_0064af38);
    case 0xa1:
switchD_00525f83_caseD_a1:
      return (wchar_t *)((wchar_t *)&DAT_0064af30);
    case 0xa2:
switchD_00525f83_caseD_a2:
      return (wchar_t *)(u_RIGHT_0064af24);
    case 0xa3:
switchD_00525f83_caseD_a3:
      return (wchar_t *)(u_DOWN_0064af18);
    case 0xa4:
switchD_00525f83_caseD_a4:
      return (wchar_t *)(u_NUMLOCK_0064af08);
    case 0xa5:
switchD_00525f83_caseD_a5:
      return (wchar_t *)(u_DIVIDE_0064aef8);
    case 0xa6:
switchD_00525f83_caseD_a6:
      return (wchar_t *)(u_MULTIPLY_0064aee4);
    case 0xa7:
switchD_00525f83_caseD_a7:
      return (wchar_t *)(u_SUBTRACT_0064aed0);
    case 0xa8:
      return (wchar_t *)(u_NUMPAD7_00640464);
    case 0xa9:
      return (wchar_t *)(u_NUMPAD8_00640454);
    case 0xaa:
      return (wchar_t *)(u_NUMPAD9_00640444);
    case 0xab:
switchD_00525f83_caseD_ab:
      return (wchar_t *)((wchar_t *)&DAT_0064ae8c);
    case 0xac:
      return (wchar_t *)(u_NUMPAD4_00640434);
    case 0xad:
      return (wchar_t *)(u_NUMPAD5_00640424);
    case 0xae:
      return (wchar_t *)(u_NUMPAD6_00640414);
    case 0xaf:
      return (wchar_t *)(u_NUMPAD1_00640404);
    case 0xb0:
      return (wchar_t *)(u_NUMPAD2_006403f4);
    case 0xb1:
      return (wchar_t *)(u_NUMPAD3_006403e4);
    case 0xb2:
      return (wchar_t *)(u_PENTER_006403d4);
    case 0xb3:
      return (wchar_t *)(u_NUMPAD0_006403c4);
    case 0xb4:
switchD_00525f83_caseD_b4:
      return (wchar_t *)(u_SEPARATOR_0064add0);
    case 0xb5:
switchD_00525f83_caseD_b5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064adb8);
    case 0xb6:
switchD_00525f83_caseD_b6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064ad80);
    case 0xb7:
switchD_00525f83_caseD_b7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064acb8);
    case 0xb8:
switchD_00525f83_caseD_b8:
      return (wchar_t *)(u_Could_not_find_any_compatible_Di_0064ac58);
    case 0xb9:
switchD_00525f83_caseD_b9:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064ab18);
    case 0xba:
switchD_00525f83_caseD_ba:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064aaac);
    case 0xbb:
switchD_00525f83_caseD_bb:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064a9f0);
    case 0xbc:
switchD_00525f83_caseD_bc:
      return (wchar_t *)(u_Your_Direct3D_hardware_accelerat_0064a970);
    case 0xbd:
switchD_00525f83_caseD_bd:
      return (wchar_t *)(u_Your_Direct3D_hardware_accelerat_0064a89c);
    case 0xbe:
switchD_00525f83_caseD_be:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064a78c);
    case 0xbf:
switchD_00525f83_caseD_bf:
      return (wchar_t *)(u_Could_not_load_required_media__0064a74c);
    case 0xc0:
switchD_00525f83_caseD_c0:
      return (wchar_t *)(u_Could_not_reset_the_3D_system__0064a70c);
    case 0xc1:
switchD_00525f83_caseD_c1:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064a6d0);
    case 0xc2:
switchD_00525f83_caseD_c2:
      return (wchar_t *)(u_I_have_run_out_of_memory__0064a69c);
    case 0xc3:
switchD_00525f83_caseD_c3:
      return (wchar_t *)(u_I_have_run_out_of_video_memory__0064a65c);
    case 0xc4:
switchD_00525f83_caseD_c4:
      return (wchar_t *)(u_Generic_application_error__0064a624);
    case 0xc5:
      return (wchar_t *)(u_MAXIMUM_TEXTURE_SIZE_TOO_SMALL_00640384);
    case 0xc6:
      return (wchar_t *)(u_COMPASS_TEXTURE_FAILED_00640354);
    case 199:
      return (wchar_t *)(u_TEXTURE_CREATION_FAILURE_1_0064031c);
    case 200:
      return (wchar_t *)(u_TEXTURE_CREATION_FAILURE_2_006402e4);
    case 0xc9:
      return (wchar_t *)(u_TEXTURE_CREATION_FAILURE_3_006402ac);
    case 0xca:
switchD_00525f83_caseD_ca:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064a474);
    case 0xcb:
switchD_00525f83_caseD_cb:
      return (wchar_t *)(u_Fatal_error__sorry_0064a44c);
    case 0xcc:
switchD_00525f83_caseD_cc:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064a42c);
    case 0xcd:
      return (wchar_t *)(u_OUT_OF_MEMORY_1_0064028c);
    case 0xce:
      return (wchar_t *)(u_OUT_OF_MEMORY_2_0064026c);
    case 0xcf:
      return (wchar_t *)(u_OUT_OF_MEMORY_3_0064024c);
    case 0xd0:
      return (wchar_t *)(u_OUT_OF_MEMORY_4_0064022c);
    case 0xd1:
switchD_00525f83_caseD_d1:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064a328);
    case 0xd2:
switchD_00525f83_caseD_d2:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064a308);
    case 0xd3:
switchD_00525f83_caseD_d3:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064a2c4);
    case 0xd4:
switchD_00525f83_caseD_d4:
      return (wchar_t *)(u_None_0064a2b8);
    case 0xd5:
switchD_00525f83_caseD_d5:
      return (wchar_t *)(u_Sorry__player_2_has_some_control_0064a1e8);
    case 0xd6:
switchD_00525f83_caseD_d6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064a1ac);
    case 0xd7:
switchD_00525f83_caseD_d7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064a178);
    case 0xd8:
switchD_00525f83_caseD_d8:
      return (wchar_t *)(u_Sound_quality__0064a158);
    case 0xd9:
switchD_00525f83_caseD_d9:
      return (wchar_t *)(u_High__44_Khz__16_bit__0064a12c);
    case 0xda:
switchD_00525f83_caseD_da:
      return (wchar_t *)(u_Medium__22_Khz__16_bit__0064a0fc);
    case 0xdb:
switchD_00525f83_caseD_db:
      return (wchar_t *)(u_Low__11_Khz__8_bit__0064a0d4);
    case 0xdc:
switchD_00525f83_caseD_dc:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064a08c);
    case 0xdd:
switchD_00525f83_caseD_dd:
      return (wchar_t *)((wchar_t *)&PTR_s_eshes__s_Part__d_Bone_slots_00630040_1_0064a03c);
    case 0xde:
switchD_00525f83_caseD_de:
      return (wchar_t *)(u_Video_adapter__0064a01c);
    case 0xdf:
switchD_00525f83_caseD_df:
      return (wchar_t *)(u_Overall_Detail_level__00649ff0);
    case 0xe0:
    case 0xf0:
switchD_00525f83_caseD_e0:
      return (wchar_t *)(u_Custom_00649fe0);
    case 0xe4:
switchD_00525f83_caseD_e4:
      return (wchar_t *)(u_Are_you_sure_you_want_to_quit_th_00649f80);
    case 0xe5:
switchD_00525f83_caseD_e5:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649f1c);
    case 0xe6:
switchD_00525f83_caseD_e6:
      return (wchar_t *)(u_Sorry__mode_change_failed__falli_00649eb0);
    case 0xe7:
switchD_00525f83_caseD_e7:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649e44);
    case 0xe8:
switchD_00525f83_caseD_e8:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649dd8);
    case 0xe9:
switchD_00525f83_caseD_e9:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649d6c);
    case 0xea:
switchD_00525f83_caseD_ea:
      return (wchar_t *)((wchar_t *)&PTR_s_one_slots_00630040_0x13_00649d44);
    case 0xeb:
switchD_00525f83_caseD_eb:
      return (wchar_t *)((wchar_t *)&PTR_s_one_slots_00630040_0x13_00649d28);
    case 0xec:
switchD_00525f83_caseD_ec:
      return (wchar_t *)(u_Normal__4_3__00649d0c);
    case 0xed:
switchD_00525f83_caseD_ed:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649ce8);
    case 0xee:
switchD_00525f83_caseD_ee:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649cb4);
    case 0xef:
switchD_00525f83_caseD_ef:
      return (wchar_t *)((wchar_t *)&PTR_DAT_0064020c);
    case 0xf1:
switchD_00525f83_caseD_f1:
      return (wchar_t *)(u_Player_1_joystick__player_2_joys_00649c68);
    case 0xf2:
switchD_00525f83_caseD_f2:
      return (wchar_t *)(u_WASD___mouse__joystick_00649c38);
    case 0xf3:
switchD_00525f83_caseD_f3:
      return (wchar_t *)(u_WASD___mouse_00649c1c);
    case 0xf4:
switchD_00525f83_caseD_f4:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649be0);
    case 0xf5:
switchD_00525f83_caseD_f5:
      return (wchar_t *)(u_Error_loading_level___data_files_00649b84);
    case 0xf6:
switchD_00525f83_caseD_f6:
      return (wchar_t *)((wchar_t *)&PTR_DAT_00649b40);
    case 0xf7:
switchD_00525f83_caseD_f7:
      return (wchar_t *)(u_Extra_graphical_features__0064b88c);
    case 0xf8:
switchD_00525f83_caseD_f8:
      return (wchar_t *)(u_Not_available_0064b870);
    default:
switchD_00525f83_default:
      return (wchar_t *)(((short*)0x6401f8));
    }
  }
  switch(param_1) {
  case 0:
switchD_00525f83_caseD_0:
    return (wchar_t *)(u_Apply_0064bbe0);
  case 1:
    goto switchD_00525f83_caseD_1;
  case 2:
    goto switchD_00525f83_caseD_2;
  case 3:
    goto switchD_00525f83_caseD_3;
  case 4:
    goto switchD_00525f83_caseD_4;
  case 5:
    goto switchD_00525f83_caseD_5;
  case 6:
    goto switchD_00525f83_caseD_6;
  case 7:
    return (wchar_t *)(u_3D_Sound_hardware_acceleration__0064bafc);
  case 8:
    goto switchD_00525f83_caseD_8;
  case 9:
    goto switchD_00525f83_caseD_9;
  case 10:
    goto switchD_00525f83_caseD_a;
  case 0xb:
    goto switchD_00525f83_caseD_b;
  case 0xc:
    goto switchD_00525f83_caseD_c;
  case 0xd:
    goto switchD_00525f83_caseD_d;
  case 0xe:
    goto switchD_00525f83_caseD_e;
  case 0xf:
    goto switchD_00525f83_caseD_f;
  case 0x10:
  case 0x1c:
  case 0x24:
    goto switchD_00525f83_caseD_10;
  case 0x11:
  case 0x1b:
  case 0x23:
  case 0xe2:
    goto switchD_00525f83_caseD_11;
  case 0x12:
  case 0x1a:
  case 0x22:
  case 0xe3:
    goto switchD_00525f83_caseD_12;
  case 0x13:
    goto switchD_00525f83_caseD_13;
  case 0x14:
    goto switchD_00525f83_caseD_14;
  case 0x15:
    goto switchD_00525f83_caseD_15;
  case 0x16:
    goto switchD_00525f83_caseD_16;
  case 0x17:
    goto switchD_00525f83_caseD_17;
  case 0x18:
    goto switchD_00525f83_caseD_18;
  case 0x19:
    goto switchD_00525f83_caseD_19;
  case 0x1d:
    goto switchD_00525f83_caseD_1d;
  case 0x1e:
    goto switchD_00525f83_caseD_1e;
  case 0x1f:
    goto switchD_00525f83_caseD_1f;
  case 0x20:
    goto switchD_00525f83_caseD_20;
  case 0x21:
    goto switchD_00525f83_caseD_21;
  case 0x25:
  case 0xe1:
    goto switchD_00525f83_caseD_25;
  case 0x26:
    goto switchD_00525f83_caseD_26;
  case 0x27:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x3a:
  case 0x3f:
  case 0x44:
  case 0x47:
  case 0x4d:
  case 0x4f:
  case 0x50:
  case 0x53:
  case 0x5c:
  case 0x62:
  case 0x74:
  case 0x75:
    goto switchD_00525f83_switchD;
  case 0x28:
    goto switchD_00525f83_caseD_28;
  case 0x33:
    goto switchD_00525f83_caseD_33;
  case 0x34:
    goto switchD_00525f83_caseD_34;
  case 0x35:
    goto switchD_00525f83_caseD_35;
  case 0x36:
    goto switchD_00525f83_caseD_36;
  case 0x37:
    goto switchD_00525f83_caseD_37;
  case 0x38:
    goto switchD_00525f83_caseD_38;
  case 0x39:
    goto switchD_00525f83_caseD_39;
  case 0x3b:
    goto switchD_00525f83_caseD_3b;
  case 0x3c:
    goto switchD_00525f83_caseD_3c;
  case 0x3d:
  case 0x42:
    goto switchD_00525f83_caseD_3d;
  case 0x3e:
  case 0x43:
    goto switchD_00525f83_caseD_3e;
  case 0x40:
    goto switchD_00525f83_caseD_40;
  case 0x41:
    goto switchD_00525f83_caseD_41;
  case 0x45:
    goto switchD_00525f83_caseD_45;
  case 0x46:
    goto switchD_00525f83_caseD_46;
  case 0x48:
    goto switchD_00525f83_caseD_48;
  case 0x49:
    goto switchD_00525f83_caseD_49;
  case 0x4a:
    goto switchD_00525f83_caseD_4a;
  case 0x4b:
    goto switchD_00525f83_caseD_4b;
  case 0x4c:
    goto switchD_00525f83_caseD_4c;
  case 0x4e:
    goto switchD_00525f83_caseD_4e;
  case 0x51:
    goto switchD_00525f83_caseD_51;
  case 0x52:
    goto switchD_00525f83_caseD_52;
  case 0x54:
    goto switchD_00525f83_caseD_54;
  case 0x55:
    goto switchD_00525f83_caseD_55;
  case 0x56:
    goto switchD_00525f83_caseD_56;
  case 0x57:
    goto switchD_00525f83_caseD_57;
  case 0x58:
    goto switchD_00525f83_caseD_58;
  case 0x59:
    goto switchD_00525f83_caseD_59;
  case 0x5a:
    goto switchD_00525f83_caseD_5a;
  case 0x5b:
    goto switchD_00525f83_caseD_5b;
  case 0x5d:
    goto switchD_00525f83_caseD_5d;
  case 0x5e:
    goto switchD_00525f83_caseD_5e;
  case 0x5f:
    goto switchD_00525f83_caseD_5f;
  case 0x60:
    goto switchD_00525f83_caseD_60;
  case 0x61:
    goto switchD_00525f83_caseD_61;
  case 99:
    goto switchD_00525f83_caseD_63;
  case 100:
    goto switchD_00525f83_caseD_64;
  case 0x65:
    goto switchD_00525f83_caseD_65;
  case 0x66:
    goto switchD_00525f83_caseD_66;
  case 0x67:
    goto switchD_00525f83_caseD_67;
  case 0x68:
    goto switchD_00525f83_caseD_68;
  case 0x69:
    goto switchD_00525f83_caseD_69;
  case 0x6a:
    goto switchD_00525f83_caseD_6a;
  case 0x6b:
    goto switchD_00525f83_caseD_6b;
  case 0x6c:
    goto switchD_00525f83_caseD_6c;
  case 0x6d:
    goto switchD_00525f83_caseD_6d;
  case 0x6e:
    goto switchD_00525f83_caseD_6e;
  case 0x6f:
    goto switchD_00525f83_caseD_6f;
  case 0x70:
    goto switchD_00525f83_caseD_70;
  case 0x71:
    goto switchD_00525f83_caseD_71;
  case 0x72:
    goto switchD_00525f83_caseD_72;
  case 0x73:
    goto switchD_00525f83_caseD_73;
  case 0x76:
    goto switchD_00525f83_caseD_76;
  case 0x77:
    goto switchD_00525f83_caseD_77;
  case 0x78:
    goto switchD_00525f83_caseD_78;
  case 0x79:
    goto switchD_00525f83_caseD_79;
  case 0x7a:
    return (wchar_t *)(u_RIGHT_WINDOWS_0064b13c);
  case 0x7b:
    return (wchar_t *)(u_LEFT_WINDOWS_0064b120);
  case 0x7c:
    goto switchD_00525f83_caseD_7c;
  case 0x7d:
    goto switchD_00525f83_caseD_7d;
  case 0x7e:
    goto switchD_00525f83_caseD_7e;
  case 0x7f:
    goto switchD_00525f83_caseD_7f;
  case 0x80:
    goto switchD_00525f83_caseD_80;
  case 0x81:
    goto switchD_00525f83_caseD_81;
  case 0x82:
    goto switchD_00525f83_caseD_82;
  case 0x83:
    goto switchD_00525f83_caseD_83;
  case 0x84:
    goto switchD_00525f83_caseD_84;
  case 0x85:
    goto switchD_00525f83_caseD_85;
  case 0x86:
    goto switchD_00525f83_caseD_86;
  case 0x87:
    goto switchD_00525f83_caseD_87;
  case 0x88:
    goto switchD_00525f83_caseD_88;
  case 0x89:
    goto switchD_00525f83_caseD_89;
  case 0x8a:
    goto switchD_00525f83_caseD_8a;
  case 0x8b:
    goto switchD_00525f83_caseD_8b;
  case 0x8c:
    goto switchD_00525f83_caseD_8c;
  case 0x8d:
    goto switchD_00525f83_caseD_8d;
  case 0x8e:
    goto switchD_00525f83_caseD_8e;
  case 0x8f:
    goto switchD_00525f83_caseD_8f;
  case 0x90:
    goto switchD_00525f83_caseD_90;
  case 0x91:
    goto switchD_00525f83_caseD_91;
  case 0x92:
    goto switchD_00525f83_caseD_92;
  case 0x93:
    goto switchD_00525f83_caseD_93;
  case 0x94:
    goto switchD_00525f83_caseD_94;
  case 0x95:
    goto switchD_00525f83_caseD_95;
  case 0x96:
    goto switchD_00525f83_caseD_96;
  case 0x97:
    goto switchD_00525f83_caseD_97;
  case 0x98:
    goto switchD_00525f83_caseD_98;
  case 0x99:
    goto switchD_00525f83_caseD_99;
  case 0x9a:
    goto switchD_00525f83_caseD_9a;
  case 0x9b:
    goto switchD_00525f83_caseD_9b;
  case 0x9c:
    goto switchD_00525f83_caseD_9c;
  case 0x9d:
    goto switchD_00525f83_caseD_9d;
  case 0x9e:
    goto switchD_00525f83_caseD_9e;
  case 0x9f:
    goto switchD_00525f83_caseD_9f;
  case 0xa0:
    goto switchD_00525f83_caseD_a0;
  case 0xa1:
    goto switchD_00525f83_caseD_a1;
  case 0xa2:
    goto switchD_00525f83_caseD_a2;
  case 0xa3:
    goto switchD_00525f83_caseD_a3;
  case 0xa4:
    goto switchD_00525f83_caseD_a4;
  case 0xa5:
    goto switchD_00525f83_caseD_a5;
  case 0xa6:
    goto switchD_00525f83_caseD_a6;
  case 0xa7:
    goto switchD_00525f83_caseD_a7;
  case 0xa8:
    return (wchar_t *)(u_NUMPAD_7_0064aebc);
  case 0xa9:
    return (wchar_t *)(u_NUMPAD_8_0064aea8);
  case 0xaa:
    return (wchar_t *)(u_NUMPAD_9_0064ae94);
  case 0xab:
    goto switchD_00525f83_caseD_ab;
  case 0xac:
    return (wchar_t *)(u_NUMPAD_4_0064ae78);
  case 0xad:
    return (wchar_t *)(u_NUMPAD_5_0064ae64);
  case 0xae:
    return (wchar_t *)(u_NUMPAD_6_0064ae50);
  case 0xaf:
    return (wchar_t *)(u_NUMPAD_1_0064ae3c);
  case 0xb0:
    return (wchar_t *)(u_NUMPAD_2_0064ae28);
  case 0xb1:
    return (wchar_t *)(u_NUMPAD_3_0064ae14);
  case 0xb2:
    return (wchar_t *)(u_NUMPAD_ENTER_0064adf8);
  case 0xb3:
    return (wchar_t *)(u_NUMPAD_0_0064ade4);
  case 0xb4:
    goto switchD_00525f83_caseD_b4;
  case 0xb5:
    goto switchD_00525f83_caseD_b5;
  case 0xb6:
    goto switchD_00525f83_caseD_b6;
  case 0xb7:
    goto switchD_00525f83_caseD_b7;
  case 0xb8:
    goto switchD_00525f83_caseD_b8;
  case 0xb9:
    goto switchD_00525f83_caseD_b9;
  case 0xba:
    goto switchD_00525f83_caseD_ba;
  case 0xbb:
    goto switchD_00525f83_caseD_bb;
  case 0xbc:
    goto switchD_00525f83_caseD_bc;
  case 0xbd:
    goto switchD_00525f83_caseD_bd;
  case 0xbe:
    goto switchD_00525f83_caseD_be;
  case 0xbf:
    goto switchD_00525f83_caseD_bf;
  case 0xc0:
    goto switchD_00525f83_caseD_c0;
  case 0xc1:
    goto switchD_00525f83_caseD_c1;
  case 0xc2:
    goto switchD_00525f83_caseD_c2;
  case 0xc3:
    goto switchD_00525f83_caseD_c3;
  case 0xc4:
    goto switchD_00525f83_caseD_c4;
  case 0xc5:
    return (wchar_t *)(u_Maximum_texture_size_too_small_0064a5e4);
  case 0xc6:
    return (wchar_t *)(u_Compass_texture_creation_failed_0064a5a4);
  case 199:
    return (wchar_t *)(u_Texture_creation_failure_type_1_0064a564);
  case 200:
    return (wchar_t *)(u_Texture_creation_failure_type_2_0064a524);
  case 0xc9:
    return (wchar_t *)(u_Texture_creation_failure_type_3_0064a4e4);
  case 0xca:
    goto switchD_00525f83_caseD_ca;
  case 0xcb:
    goto switchD_00525f83_caseD_cb;
  case 0xcc:
    goto switchD_00525f83_caseD_cc;
  case 0xcd:
    return (wchar_t *)(u_Out_of_memory_error_type_1_0064a3f4);
  case 0xce:
    return (wchar_t *)(u_Out_of_memory_error_type_2_0064a3bc);
  case 0xcf:
    return (wchar_t *)(u_Out_of_memory_error_type_3_0064a384);
  case 0xd0:
    return (wchar_t *)(u_Out_of_memory_error_type_4_0064a34c);
  case 0xd1:
    goto switchD_00525f83_caseD_d1;
  case 0xd2:
    goto switchD_00525f83_caseD_d2;
  case 0xd3:
    goto switchD_00525f83_caseD_d3;
  case 0xd4:
    goto switchD_00525f83_caseD_d4;
  case 0xd5:
    goto switchD_00525f83_caseD_d5;
  case 0xd6:
    goto switchD_00525f83_caseD_d6;
  case 0xd7:
    goto switchD_00525f83_caseD_d7;
  case 0xd8:
    goto switchD_00525f83_caseD_d8;
  case 0xd9:
    goto switchD_00525f83_caseD_d9;
  case 0xda:
    goto switchD_00525f83_caseD_da;
  case 0xdb:
    goto switchD_00525f83_caseD_db;
  case 0xdc:
    goto switchD_00525f83_caseD_dc;
  case 0xdd:
    goto switchD_00525f83_caseD_dd;
  case 0xde:
    goto switchD_00525f83_caseD_de;
  case 0xdf:
    goto switchD_00525f83_caseD_df;
  case 0xe0:
  case 0xf0:
    goto switchD_00525f83_caseD_e0;
  case 0xe4:
    goto switchD_00525f83_caseD_e4;
  case 0xe5:
    goto switchD_00525f83_caseD_e5;
  case 0xe6:
    goto switchD_00525f83_caseD_e6;
  case 0xe7:
    goto switchD_00525f83_caseD_e7;
  case 0xe8:
    goto switchD_00525f83_caseD_e8;
  case 0xe9:
    goto switchD_00525f83_caseD_e9;
  case 0xea:
    goto switchD_00525f83_caseD_ea;
  case 0xeb:
    goto switchD_00525f83_caseD_eb;
  case 0xec:
    goto switchD_00525f83_caseD_ec;
  case 0xed:
    goto switchD_00525f83_caseD_ed;
  case 0xee:
    goto switchD_00525f83_caseD_ee;
  case 0xef:
    goto switchD_00525f83_caseD_ef;
  case 0xf1:
    goto switchD_00525f83_caseD_f1;
  case 0xf2:
    goto switchD_00525f83_caseD_f2;
  case 0xf3:
    goto switchD_00525f83_caseD_f3;
  case 0xf4:
    goto switchD_00525f83_caseD_f4;
  case 0xf5:
    goto switchD_00525f83_caseD_f5;
  case 0xf6:
    goto switchD_00525f83_caseD_f6;
  case 0xf7:
    goto switchD_00525f83_caseD_f7;
  case 0xf8:
    goto switchD_00525f83_caseD_f8;
  default:
    goto switchD_00525f83_default;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00524830, ap_00524830));
