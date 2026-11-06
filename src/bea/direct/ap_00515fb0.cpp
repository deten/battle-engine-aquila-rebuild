// auto-ported from 00515fb0_FUN_00515fb0.c (FUN_00515fb0, 1181 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0088a0f8 GLOBAL_AT(char, 0x0088a0f8)
#define DAT_0088a0f0 GLOBAL_AT(int, 0x0088a0f0)
#define _DAT_0088a0f4 GLOBAL_AT(int, 0x0088a0f4)
#define DAT_0088a518 GLOBAL_AT(int, 0x0088a518)
#define DAT_0088a51c GLOBAL_AT(int, 0x0088a51c)
#define DAT_0088a520 GLOBAL_AT(char, 0x0088a520)
#define _DAT_0088a940 GLOBAL_AT(int, 0x0088a940)
#define _DAT_0088a944 GLOBAL_AT(int, 0x0088a944)
#define DAT_0088a948 GLOBAL_AT(char, 0x0088a948)
#define _DAT_0088ad68 GLOBAL_AT(int, 0x0088ad68)
#define _DAT_0088ad6c GLOBAL_AT(int, 0x0088ad6c)
#define DAT_0088ad70 GLOBAL_AT(char, 0x0088ad70)
#define _DAT_0088b190 GLOBAL_AT(int, 0x0088b190)
#define DAT_0063e248 GLOBAL_AT(char, 0x0063e248)
#define _DAT_0088b194 GLOBAL_AT(int, 0x0088b194)
#define _DAT_0088b5b8 GLOBAL_AT(int, 0x0088b5b8)
#define _DAT_0088b5bc GLOBAL_AT(int, 0x0088b5bc)
#define DAT_0088b5c0 GLOBAL_AT(char, 0x0088b5c0)
#define DAT_00662b2c GLOBAL_AT(char, 0x00662b2c)
#define _DAT_0088b9e0 GLOBAL_AT(int, 0x0088b9e0)
#define _DAT_0088b9e4 GLOBAL_AT(int, 0x0088b9e4)
#define _DAT_0088be08 GLOBAL_AT(int, 0x0088be08)
#define _DAT_0088be0c GLOBAL_AT(int, 0x0088be0c)
#define _DAT_0088c230 GLOBAL_AT(int, 0x0088c230)
#define _DAT_0088c234 GLOBAL_AT(int, 0x0088c234)
#define DAT_0088c238 GLOBAL_AT(char, 0x0088c238)
#define _DAT_0088c658 GLOBAL_AT(int, 0x0088c658)
#define _DAT_0088c65c GLOBAL_AT(int, 0x0088c65c)
#define DAT_0088c660 GLOBAL_AT(char, 0x0088c660)
#define _DAT_0088ca80 GLOBAL_AT(int, 0x0088ca80)
#define _DAT_0088ca84 GLOBAL_AT(int, 0x0088ca84)
#define DAT_0088ca88 GLOBAL_AT(char, 0x0088ca88)
#define _DAT_0088cea8 GLOBAL_AT(int, 0x0088cea8)
#define _DAT_0088ceac GLOBAL_AT(int, 0x0088ceac)
#define DAT_0088ceb0 GLOBAL_AT(char, 0x0088ceb0)
#define _DAT_0088d2d0 GLOBAL_AT(int, 0x0088d2d0)
#define _DAT_0088d2d4 GLOBAL_AT(int, 0x0088d2d4)
#define DAT_0088d2d8 GLOBAL_AT(char, 0x0088d2d8)
#define _DAT_0088d6f8 GLOBAL_AT(int, 0x0088d6f8)
#define _DAT_0088d6fc GLOBAL_AT(int, 0x0088d6fc)
#define DAT_0088d700 GLOBAL_AT(char, 0x0088d700)
#define _DAT_0088db20 GLOBAL_AT(int, 0x0088db20)
#define _DAT_0088db24 GLOBAL_AT(int, 0x0088db24)
#define DAT_0088db28 GLOBAL_AT(char, 0x0088db28)
#define _DAT_0088df48 GLOBAL_AT(int, 0x0088df48)
#define _DAT_0088df4c GLOBAL_AT(int, 0x0088df4c)
#define DAT_0088df50 GLOBAL_AT(char, 0x0088df50)
#define _DAT_0088e370 GLOBAL_AT(int, 0x0088e370)
#define _DAT_0088e374 GLOBAL_AT(int, 0x0088e374)
#define DAT_0088e378 GLOBAL_AT(char, 0x0088e378)
#define _DAT_0088e798 GLOBAL_AT(int, 0x0088e798)
#define _DAT_0088e79c GLOBAL_AT(int, 0x0088e79c)
#define DAT_0088e7a0 GLOBAL_AT(char, 0x0088e7a0)
#define _DAT_0088ebc0 GLOBAL_AT(int, 0x0088ebc0)
#define _DAT_0088ebc4 GLOBAL_AT(int, 0x0088ebc4)
#define DAT_0088ebc8 GLOBAL_AT(char, 0x0088ebc8)
#define _DAT_0088efe8 GLOBAL_AT(int, 0x0088efe8)
#define _DAT_0088efec GLOBAL_AT(int, 0x0088efec)
#define DAT_0088eff0 GLOBAL_AT(char, 0x0088eff0)
#define _DAT_0088f410 GLOBAL_AT(int, 0x0088f410)
#define _DAT_0088f414 GLOBAL_AT(int, 0x0088f414)
#define DAT_0088f418 GLOBAL_AT(char, 0x0088f418)
#define _DAT_0088f838 GLOBAL_AT(int, 0x0088f838)
#define _DAT_0088f83c GLOBAL_AT(int, 0x0088f83c)
#define DAT_0088f840 GLOBAL_AT(char, 0x0088f840)
#define DAT_00896488 GLOBAL_AT(int, 0x00896488)
#define _DAT_0088fc64 GLOBAL_AT(int, 0x0088fc64)
#define _DAT_0088fc60 GLOBAL_AT(int, 0x0088fc60)
#define DAT_0088fc68 GLOBAL_AT(char, 0x0088fc68)
#define s_bloke_msh_0063e22c ((char*)0x0063e22c)
#define s_Enemymech_msh_0063e238 ((char*)0x0063e238)
#define s_cockpit2_msh_00623608 ((char*)0x00623608)
#define s_plane1_msh_0063e254 ((char*)0x0063e254)
#define s_EnemyT_1_msh_0063e21c ((char*)0x0063e21c)
#define s_shell_msh_0063e210 ((char*)0x0063e210)
#define s_tank1_msh_0063e278 ((char*)0x0063e278)
#define s_cannon1_msh_0063e26c ((char*)0x0063e26c)
#define s_default_msh_00632b30 ((char*)0x00632b30)
#define s_carrier_msh_0063e204 ((char*)0x0063e204)
#define s_radar1_msh_0063e260 ((char*)0x0063e260)

static void BEA_CDECL ap_00515fb0(void)
{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  pcVar4 = s_tank1_msh_0063e278;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088a0f8;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_default_msh_00632b30;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  DAT_0088a0f0 = 0;
  _DAT_0088a0f4 = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088a0f8;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_cannon1_msh_0063e26c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  DAT_0088a518 = 9;
  DAT_0088a51c = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088a520;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_radar1_msh_0063e260;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088a940 = 10;
  _DAT_0088a944 = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088a948;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_plane1_msh_0063e254;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088ad68 = 6;
  _DAT_0088ad6c = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088ad70;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  _DAT_0088b190 = 3;
  pcVar4 = &DAT_0063e248;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088b194 = 1;
  _DAT_0088b5b8 = 7;
  _DAT_0088b5bc = 2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088b5c0;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_00662b2c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088b9e0 = 5;
  _DAT_0088b9e4 = 0xffffffff;
  _DAT_0088be08 = 0x10;
  _DAT_0088be0c = 0xffffffff;
  _DAT_0088c230 = 0xb;
  _DAT_0088c234 = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088c238;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_00662b2c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088c658 = 0x11;
  _DAT_0088c65c = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088c660;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_Enemymech_msh_0063e238;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088ca80 = 0xc;
  _DAT_0088ca84 = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088ca88;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_bloke_msh_0063e22c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088cea8 = 0xe;
  _DAT_0088ceac = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088ceb0;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_EnemyT_1_msh_0063e21c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088d2d0 = 0x17;
  _DAT_0088d2d4 = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088d2d8;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_shell_msh_0063e210;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088d6f8 = 0x14;
  _DAT_0088d6fc = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088d700;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_shell_msh_0063e210;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088db20 = 0x15;
  _DAT_0088db24 = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088db28;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_cockpit2_msh_00623608;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088df48 = 0x2711;
  _DAT_0088df4c = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088df50;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_carrier_msh_0063e204;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088e370 = 0xd;
  _DAT_0088e374 = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088e378;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_default_msh_00632b30;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088e798 = 0x1a;
  _DAT_0088e79c = 5;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088e7a0;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_default_msh_00632b30;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088ebc0 = 0x2712;
  _DAT_0088ebc4 = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088ebc8;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_default_msh_00632b30;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088efe8 = 0x1d;
  _DAT_0088efec = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088eff0;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_default_msh_00632b30;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088f410 = 0x1f;
  _DAT_0088f414 = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088f418;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_default_msh_00632b30;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088f838 = 0x21;
  _DAT_0088f83c = 1;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088f840;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  DAT_00896488 = 0x17;
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_default_msh_00632b30;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  _DAT_0088fc64 = 1;
  _DAT_0088fc60 = 0x22;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0088fc68;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00515fb0, ap_00515fb0));
