// auto-ported from 0052ff30_FUN_0052ff30.c (FUN_0052ff30, 13429 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define _DAT_0064ce94 GLOBAL_AT(int, 0x0064ce94)
#define _DAT_0064ced0 GLOBAL_AT(int, 0x0064ced0)
#define _DAT_0064ced8 GLOBAL_AT(int, 0x0064ced8)
#define _DAT_0064ce54 GLOBAL_AT(int, 0x0064ce54)
#define _DAT_0064cf10 GLOBAL_AT(int, 0x0064cf10)
#define _DAT_0064ce50 GLOBAL_AT(int, 0x0064ce50)
#define _DAT_0064ce5c GLOBAL_AT(int, 0x0064ce5c)
#define _DAT_0064ce90 GLOBAL_AT(int, 0x0064ce90)
#define _DAT_0064ce9c GLOBAL_AT(int, 0x0064ce9c)
#define _DAT_0064ced4 GLOBAL_AT(int, 0x0064ced4)
#define _DAT_0064cf14 GLOBAL_AT(int, 0x0064cf14)
#define _DAT_0064cf18 GLOBAL_AT(int, 0x0064cf18)
#define _DAT_0064ce58 GLOBAL_AT(int, 0x0064ce58)
#define _DAT_0064ce60 GLOBAL_AT(int, 0x0064ce60)
#define _DAT_0064ce64 GLOBAL_AT(int, 0x0064ce64)
#define _DAT_0064ce68 GLOBAL_AT(int, 0x0064ce68)
#define _DAT_0064ce6c GLOBAL_AT(int, 0x0064ce6c)
#define _DAT_0064ce70 GLOBAL_AT(int, 0x0064ce70)
#define _DAT_0064ce74 GLOBAL_AT(int, 0x0064ce74)
#define _DAT_0064ce78 GLOBAL_AT(int, 0x0064ce78)
#define _DAT_0064ce7c GLOBAL_AT(int, 0x0064ce7c)
#define _DAT_0064ce80 GLOBAL_AT(int, 0x0064ce80)
#define _DAT_0064ce84 GLOBAL_AT(int, 0x0064ce84)
#define _DAT_0064ce88 GLOBAL_AT(int, 0x0064ce88)
#define _DAT_0064ce98 GLOBAL_AT(int, 0x0064ce98)
#define _DAT_0064cea0 GLOBAL_AT(int, 0x0064cea0)
#define _DAT_0064cea4 GLOBAL_AT(int, 0x0064cea4)
#define _DAT_0064cea8 GLOBAL_AT(int, 0x0064cea8)
#define _DAT_0064ceac GLOBAL_AT(int, 0x0064ceac)
#define _DAT_0064ceb0 GLOBAL_AT(int, 0x0064ceb0)
#define _DAT_0064ceb4 GLOBAL_AT(int, 0x0064ceb4)
#define _DAT_0064ceb8 GLOBAL_AT(int, 0x0064ceb8)
#define _DAT_0064cebc GLOBAL_AT(int, 0x0064cebc)
#define _DAT_0064cec0 GLOBAL_AT(int, 0x0064cec0)
#define _DAT_0064cec4 GLOBAL_AT(int, 0x0064cec4)
#define _DAT_0064cec8 GLOBAL_AT(int, 0x0064cec8)
#define _DAT_0064cedc GLOBAL_AT(int, 0x0064cedc)
#define _DAT_0064cee0 GLOBAL_AT(int, 0x0064cee0)
#define _DAT_0064cee4 GLOBAL_AT(int, 0x0064cee4)
#define _DAT_0064cee8 GLOBAL_AT(int, 0x0064cee8)
#define _DAT_0064ceec GLOBAL_AT(int, 0x0064ceec)
#define _DAT_0064cef0 GLOBAL_AT(int, 0x0064cef0)
#define _DAT_0064cef4 GLOBAL_AT(int, 0x0064cef4)
#define _DAT_0064cef8 GLOBAL_AT(int, 0x0064cef8)
#define _DAT_0064cefc GLOBAL_AT(int, 0x0064cefc)
#define _DAT_0064cf00 GLOBAL_AT(int, 0x0064cf00)
#define _DAT_0064cf04 GLOBAL_AT(int, 0x0064cf04)
#define _DAT_0064cf08 GLOBAL_AT(int, 0x0064cf08)
#define _DAT_0064cf1c GLOBAL_AT(int, 0x0064cf1c)
#define _DAT_0064cf20 GLOBAL_AT(int, 0x0064cf20)
#define _DAT_0064cf24 GLOBAL_AT(int, 0x0064cf24)
#define _DAT_0064cf28 GLOBAL_AT(int, 0x0064cf28)
#define _DAT_0064cf2c GLOBAL_AT(int, 0x0064cf2c)
#define _DAT_0064cf30 GLOBAL_AT(int, 0x0064cf30)
#define _DAT_0064cf34 GLOBAL_AT(int, 0x0064cf34)
#define _DAT_0064cf38 GLOBAL_AT(int, 0x0064cf38)
#define _DAT_0064cf3c GLOBAL_AT(int, 0x0064cf3c)
#define _DAT_0064cf40 GLOBAL_AT(int, 0x0064cf40)
#define _DAT_0064cf44 GLOBAL_AT(int, 0x0064cf44)
#define _DAT_0064cf48 GLOBAL_AT(int, 0x0064cf48)
#define _DAT_0064cf50 GLOBAL_AT(int, 0x0064cf50)
#define _DAT_0064cf5c GLOBAL_AT(int, 0x0064cf5c)
#define _DAT_0064cf54 GLOBAL_AT(int, 0x0064cf54)
#define _DAT_0064cf58 GLOBAL_AT(int, 0x0064cf58)
#define _DAT_0064cf60 GLOBAL_AT(int, 0x0064cf60)
#define _DAT_0064cf90 GLOBAL_AT(int, 0x0064cf90)
#define _DAT_0064cf94 GLOBAL_AT(int, 0x0064cf94)
#define _DAT_0064cf98 GLOBAL_AT(int, 0x0064cf98)
#define _DAT_0064cf64 GLOBAL_AT(int, 0x0064cf64)
#define _DAT_0064cfd0 GLOBAL_AT(int, 0x0064cfd0)
#define _DAT_0064cfd4 GLOBAL_AT(int, 0x0064cfd4)
#define _DAT_0064cfd8 GLOBAL_AT(int, 0x0064cfd8)
#define _DAT_0064cf68 GLOBAL_AT(int, 0x0064cf68)
#define _DAT_0064d010 GLOBAL_AT(int, 0x0064d010)
#define _DAT_0064d014 GLOBAL_AT(int, 0x0064d014)
#define _DAT_0064d018 GLOBAL_AT(int, 0x0064d018)
#define _DAT_0064cf6c GLOBAL_AT(int, 0x0064cf6c)
#define _DAT_0064d050 GLOBAL_AT(int, 0x0064d050)
#define _DAT_0064cf70 GLOBAL_AT(int, 0x0064cf70)
#define _DAT_0064cf74 GLOBAL_AT(int, 0x0064cf74)
#define _DAT_0064cf78 GLOBAL_AT(int, 0x0064cf78)
#define _DAT_0064cf7c GLOBAL_AT(int, 0x0064cf7c)
#define _DAT_0064cf80 GLOBAL_AT(int, 0x0064cf80)
#define _DAT_0064cf84 GLOBAL_AT(int, 0x0064cf84)
#define _DAT_0064cf88 GLOBAL_AT(int, 0x0064cf88)
#define _DAT_0064cf9c GLOBAL_AT(int, 0x0064cf9c)
#define _DAT_0064cfa0 GLOBAL_AT(int, 0x0064cfa0)
#define DAT_0064f9e0 GLOBAL_AT(int, 0x0064f9e0)
#define _DAT_0064cfa4 GLOBAL_AT(int, 0x0064cfa4)
#define _DAT_0064cfa8 GLOBAL_AT(int, 0x0064cfa8)
#define _DAT_0064cfac GLOBAL_AT(int, 0x0064cfac)
#define _DAT_0064cfb0 GLOBAL_AT(int, 0x0064cfb0)
#define _DAT_0064cfb4 GLOBAL_AT(int, 0x0064cfb4)
#define _DAT_0064cfb8 GLOBAL_AT(int, 0x0064cfb8)
#define _DAT_0064cfbc GLOBAL_AT(int, 0x0064cfbc)
#define _DAT_0064cfc0 GLOBAL_AT(int, 0x0064cfc0)
#define _DAT_0064cfc4 GLOBAL_AT(int, 0x0064cfc4)
#define _DAT_0064cfc8 GLOBAL_AT(int, 0x0064cfc8)
#define _DAT_0064cfdc GLOBAL_AT(int, 0x0064cfdc)
#define _DAT_0064cfe0 GLOBAL_AT(int, 0x0064cfe0)
#define _DAT_0064cfe4 GLOBAL_AT(int, 0x0064cfe4)
#define _DAT_0064cfe8 GLOBAL_AT(int, 0x0064cfe8)
#define _DAT_0064cfec GLOBAL_AT(int, 0x0064cfec)
#define _DAT_0064cff0 GLOBAL_AT(int, 0x0064cff0)
#define _DAT_0064cff4 GLOBAL_AT(int, 0x0064cff4)
#define _DAT_0064cff8 GLOBAL_AT(int, 0x0064cff8)
#define _DAT_0064cffc GLOBAL_AT(int, 0x0064cffc)
#define _DAT_0064d000 GLOBAL_AT(int, 0x0064d000)
#define _DAT_0064d004 GLOBAL_AT(int, 0x0064d004)
#define _DAT_0064d008 GLOBAL_AT(int, 0x0064d008)
#define _DAT_0064d01c GLOBAL_AT(int, 0x0064d01c)
#define _DAT_0064d020 GLOBAL_AT(int, 0x0064d020)
#define _DAT_0064d024 GLOBAL_AT(int, 0x0064d024)
#define _DAT_0064d028 GLOBAL_AT(int, 0x0064d028)
#define _DAT_0064d02c GLOBAL_AT(int, 0x0064d02c)
#define _DAT_0064d030 GLOBAL_AT(int, 0x0064d030)
#define _DAT_0064d034 GLOBAL_AT(int, 0x0064d034)
#define _DAT_0064d038 GLOBAL_AT(int, 0x0064d038)
#define _DAT_0064d03c GLOBAL_AT(int, 0x0064d03c)
#define _DAT_0064d040 GLOBAL_AT(int, 0x0064d040)
#define _DAT_0064d044 GLOBAL_AT(int, 0x0064d044)
#define _DAT_0064d048 GLOBAL_AT(int, 0x0064d048)
#define _DAT_0064d054 GLOBAL_AT(int, 0x0064d054)
#define _DAT_0064d058 GLOBAL_AT(int, 0x0064d058)
#define _DAT_0064d05c GLOBAL_AT(int, 0x0064d05c)
#define _DAT_0064d060 GLOBAL_AT(int, 0x0064d060)
#define _DAT_0064d064 GLOBAL_AT(int, 0x0064d064)
#define _DAT_0064d068 GLOBAL_AT(int, 0x0064d068)
#define _DAT_0064d06c GLOBAL_AT(int, 0x0064d06c)
#define _DAT_0064d070 GLOBAL_AT(int, 0x0064d070)
#define _DAT_0064d074 GLOBAL_AT(int, 0x0064d074)
#define _DAT_0064d078 GLOBAL_AT(int, 0x0064d078)
#define _DAT_0064d07c GLOBAL_AT(int, 0x0064d07c)
#define _DAT_0064d080 GLOBAL_AT(int, 0x0064d080)
#define _DAT_0064d090 GLOBAL_AT(int, 0x0064d090)
#define _DAT_0064d094 GLOBAL_AT(int, 0x0064d094)
#define _DAT_0064d098 GLOBAL_AT(int, 0x0064d098)
#define _DAT_0064d150 GLOBAL_AT(int, 0x0064d150)
#define _DAT_0064d0d0 GLOBAL_AT(int, 0x0064d0d0)
#define _DAT_0064d0d4 GLOBAL_AT(int, 0x0064d0d4)
#define _DAT_0064d0d8 GLOBAL_AT(int, 0x0064d0d8)
#define _DAT_0064d110 GLOBAL_AT(int, 0x0064d110)
#define _DAT_0064d154 GLOBAL_AT(int, 0x0064d154)
#define _DAT_0064d158 GLOBAL_AT(int, 0x0064d158)
#define _DAT_0064d15c GLOBAL_AT(int, 0x0064d15c)
#define _DAT_0064d114 GLOBAL_AT(int, 0x0064d114)
#define _DAT_0064d118 GLOBAL_AT(int, 0x0064d118)
#define _DAT_0064d190 GLOBAL_AT(int, 0x0064d190)
#define _DAT_0064d084 GLOBAL_AT(int, 0x0064d084)
#define _DAT_0064d088 GLOBAL_AT(int, 0x0064d088)
#define _DAT_0064d09c GLOBAL_AT(int, 0x0064d09c)
#define _DAT_0064d0a0 GLOBAL_AT(int, 0x0064d0a0)
#define _DAT_0064d0a4 GLOBAL_AT(int, 0x0064d0a4)
#define _DAT_0064d0a8 GLOBAL_AT(int, 0x0064d0a8)
#define _DAT_0064d0ac GLOBAL_AT(int, 0x0064d0ac)
#define _DAT_0064d0b0 GLOBAL_AT(int, 0x0064d0b0)
#define _DAT_0064d0b4 GLOBAL_AT(int, 0x0064d0b4)
#define _DAT_0064d0b8 GLOBAL_AT(int, 0x0064d0b8)
#define _DAT_0064d0bc GLOBAL_AT(int, 0x0064d0bc)
#define _DAT_0064d0c0 GLOBAL_AT(int, 0x0064d0c0)
#define _DAT_0064d0c4 GLOBAL_AT(int, 0x0064d0c4)
#define _DAT_0064d0c8 GLOBAL_AT(int, 0x0064d0c8)
#define _DAT_0064d0dc GLOBAL_AT(int, 0x0064d0dc)
#define _DAT_0064d0e0 GLOBAL_AT(int, 0x0064d0e0)
#define _DAT_0064d0e4 GLOBAL_AT(int, 0x0064d0e4)
#define _DAT_0064d0e8 GLOBAL_AT(int, 0x0064d0e8)
#define _DAT_0064d0ec GLOBAL_AT(int, 0x0064d0ec)
#define _DAT_0064d0f0 GLOBAL_AT(int, 0x0064d0f0)
#define _DAT_0064d0f4 GLOBAL_AT(int, 0x0064d0f4)
#define _DAT_0064d0f8 GLOBAL_AT(int, 0x0064d0f8)
#define _DAT_0064d0fc GLOBAL_AT(int, 0x0064d0fc)
#define _DAT_0064d100 GLOBAL_AT(int, 0x0064d100)
#define _DAT_0064d104 GLOBAL_AT(int, 0x0064d104)
#define _DAT_0064d108 GLOBAL_AT(int, 0x0064d108)
#define _DAT_0064d11c GLOBAL_AT(int, 0x0064d11c)
#define _DAT_0064d120 GLOBAL_AT(int, 0x0064d120)
#define _DAT_0064d124 GLOBAL_AT(int, 0x0064d124)
#define _DAT_0064d128 GLOBAL_AT(int, 0x0064d128)
#define _DAT_0064d12c GLOBAL_AT(int, 0x0064d12c)
#define _DAT_0064d130 GLOBAL_AT(int, 0x0064d130)
#define _DAT_0064d134 GLOBAL_AT(int, 0x0064d134)
#define _DAT_0064d138 GLOBAL_AT(int, 0x0064d138)
#define _DAT_0064d13c GLOBAL_AT(int, 0x0064d13c)
#define _DAT_0064d140 GLOBAL_AT(int, 0x0064d140)
#define _DAT_0064d144 GLOBAL_AT(int, 0x0064d144)
#define _DAT_0064d148 GLOBAL_AT(int, 0x0064d148)
#define _DAT_0064d160 GLOBAL_AT(int, 0x0064d160)
#define _DAT_0064d164 GLOBAL_AT(int, 0x0064d164)
#define _DAT_0064d168 GLOBAL_AT(int, 0x0064d168)
#define _DAT_0064d16c GLOBAL_AT(int, 0x0064d16c)
#define _DAT_0064d170 GLOBAL_AT(int, 0x0064d170)
#define _DAT_0064d174 GLOBAL_AT(int, 0x0064d174)
#define _DAT_0064d178 GLOBAL_AT(int, 0x0064d178)
#define _DAT_0064d17c GLOBAL_AT(int, 0x0064d17c)
#define _DAT_0064d180 GLOBAL_AT(int, 0x0064d180)
#define _DAT_0064d184 GLOBAL_AT(int, 0x0064d184)
#define _DAT_0064d188 GLOBAL_AT(int, 0x0064d188)
#define _DAT_0064d194 GLOBAL_AT(int, 0x0064d194)
#define _DAT_0064d198 GLOBAL_AT(int, 0x0064d198)
#define _DAT_0064d19c GLOBAL_AT(int, 0x0064d19c)
#define _DAT_0064d1a0 GLOBAL_AT(int, 0x0064d1a0)
#define _DAT_0064d1a4 GLOBAL_AT(int, 0x0064d1a4)
#define _DAT_0064d1a8 GLOBAL_AT(int, 0x0064d1a8)
#define _DAT_0064d1ac GLOBAL_AT(int, 0x0064d1ac)
#define _DAT_0064d1b0 GLOBAL_AT(int, 0x0064d1b0)
#define _DAT_0064d1d0 GLOBAL_AT(int, 0x0064d1d0)
#define _DAT_0064d1d4 GLOBAL_AT(int, 0x0064d1d4)
#define _DAT_0064d1d8 GLOBAL_AT(int, 0x0064d1d8)
#define _DAT_0064d1dc GLOBAL_AT(int, 0x0064d1dc)
#define _DAT_0064d210 GLOBAL_AT(int, 0x0064d210)
#define _DAT_0064d214 GLOBAL_AT(int, 0x0064d214)
#define _DAT_0064d218 GLOBAL_AT(int, 0x0064d218)
#define _DAT_0064d21c GLOBAL_AT(int, 0x0064d21c)
#define _DAT_0064d250 GLOBAL_AT(int, 0x0064d250)
#define _DAT_0064d254 GLOBAL_AT(int, 0x0064d254)
#define _DAT_0064d258 GLOBAL_AT(int, 0x0064d258)
#define _DAT_0064d25c GLOBAL_AT(int, 0x0064d25c)
#define _DAT_0064d290 GLOBAL_AT(int, 0x0064d290)
#define _DAT_0064d294 GLOBAL_AT(int, 0x0064d294)
#define _DAT_0064d298 GLOBAL_AT(int, 0x0064d298)
#define _DAT_0064d29c GLOBAL_AT(int, 0x0064d29c)
#define _DAT_0064d2d0 GLOBAL_AT(int, 0x0064d2d0)
#define _DAT_0064d1b4 GLOBAL_AT(int, 0x0064d1b4)
#define _DAT_0064d1b8 GLOBAL_AT(int, 0x0064d1b8)
#define _DAT_0064d1bc GLOBAL_AT(int, 0x0064d1bc)
#define _DAT_0064d1c0 GLOBAL_AT(int, 0x0064d1c0)
#define _DAT_0064d1c4 GLOBAL_AT(int, 0x0064d1c4)
#define _DAT_0064d1c8 GLOBAL_AT(int, 0x0064d1c8)
#define _DAT_0064d1e0 GLOBAL_AT(int, 0x0064d1e0)
#define _DAT_0064d1e4 GLOBAL_AT(int, 0x0064d1e4)
#define _DAT_0064d1e8 GLOBAL_AT(int, 0x0064d1e8)
#define _DAT_0064d1ec GLOBAL_AT(int, 0x0064d1ec)
#define _DAT_0064d1f0 GLOBAL_AT(int, 0x0064d1f0)
#define _DAT_0064d1f4 GLOBAL_AT(int, 0x0064d1f4)
#define _DAT_0064d1f8 GLOBAL_AT(int, 0x0064d1f8)
#define _DAT_0064d1fc GLOBAL_AT(int, 0x0064d1fc)
#define _DAT_0064d200 GLOBAL_AT(int, 0x0064d200)
#define _DAT_0064d204 GLOBAL_AT(int, 0x0064d204)
#define _DAT_0064d208 GLOBAL_AT(int, 0x0064d208)
#define _DAT_0064d220 GLOBAL_AT(int, 0x0064d220)
#define _DAT_0064d224 GLOBAL_AT(int, 0x0064d224)
#define _DAT_0064d228 GLOBAL_AT(int, 0x0064d228)
#define _DAT_0064d22c GLOBAL_AT(int, 0x0064d22c)
#define _DAT_0064d230 GLOBAL_AT(int, 0x0064d230)
#define _DAT_0064d234 GLOBAL_AT(int, 0x0064d234)
#define _DAT_0064d238 GLOBAL_AT(int, 0x0064d238)
#define _DAT_0064d23c GLOBAL_AT(int, 0x0064d23c)
#define _DAT_0064d240 GLOBAL_AT(int, 0x0064d240)
#define _DAT_0064d244 GLOBAL_AT(int, 0x0064d244)
#define _DAT_0064d248 GLOBAL_AT(int, 0x0064d248)
#define _DAT_0064d260 GLOBAL_AT(int, 0x0064d260)
#define _DAT_0064d264 GLOBAL_AT(int, 0x0064d264)
#define _DAT_0064d268 GLOBAL_AT(int, 0x0064d268)
#define _DAT_0064d26c GLOBAL_AT(int, 0x0064d26c)
#define _DAT_0064d270 GLOBAL_AT(int, 0x0064d270)
#define _DAT_0064d274 GLOBAL_AT(int, 0x0064d274)
#define _DAT_0064d278 GLOBAL_AT(int, 0x0064d278)
#define _DAT_0064d27c GLOBAL_AT(int, 0x0064d27c)
#define _DAT_0064d280 GLOBAL_AT(int, 0x0064d280)
#define _DAT_0064d284 GLOBAL_AT(int, 0x0064d284)
#define _DAT_0064d288 GLOBAL_AT(int, 0x0064d288)
#define _DAT_0064d2a0 GLOBAL_AT(int, 0x0064d2a0)
#define _DAT_0064d2a4 GLOBAL_AT(int, 0x0064d2a4)
#define _DAT_0064d2a8 GLOBAL_AT(int, 0x0064d2a8)
#define _DAT_0064d2ac GLOBAL_AT(int, 0x0064d2ac)
#define _DAT_0064d2b0 GLOBAL_AT(int, 0x0064d2b0)
#define _DAT_0064d2b4 GLOBAL_AT(int, 0x0064d2b4)
#define _DAT_0064d2b8 GLOBAL_AT(int, 0x0064d2b8)
#define _DAT_0064d2bc GLOBAL_AT(int, 0x0064d2bc)
#define _DAT_0064d2c0 GLOBAL_AT(int, 0x0064d2c0)
#define _DAT_0064d2c4 GLOBAL_AT(int, 0x0064d2c4)
#define _DAT_0064d2c8 GLOBAL_AT(int, 0x0064d2c8)
#define _DAT_0064d2d4 GLOBAL_AT(int, 0x0064d2d4)
#define _DAT_0064d2d8 GLOBAL_AT(int, 0x0064d2d8)
#define _DAT_0064d2dc GLOBAL_AT(int, 0x0064d2dc)
#define _DAT_0064d32c GLOBAL_AT(int, 0x0064d32c)
#define _DAT_0064d388 GLOBAL_AT(int, 0x0064d388)
#define _DAT_0064d310 GLOBAL_AT(int, 0x0064d310)
#define _DAT_0064d390 GLOBAL_AT(int, 0x0064d390)
#define _DAT_0064d314 GLOBAL_AT(int, 0x0064d314)
#define _DAT_0064d318 GLOBAL_AT(int, 0x0064d318)
#define _DAT_0064d31c GLOBAL_AT(int, 0x0064d31c)
#define _DAT_0064d394 GLOBAL_AT(int, 0x0064d394)
#define _DAT_0064d398 GLOBAL_AT(int, 0x0064d398)
#define _DAT_0064d350 GLOBAL_AT(int, 0x0064d350)
#define _DAT_0064d3d0 GLOBAL_AT(int, 0x0064d3d0)
#define _DAT_0064d2e0 GLOBAL_AT(int, 0x0064d2e0)
#define _DAT_0064d3d4 GLOBAL_AT(int, 0x0064d3d4)
#define _DAT_0064d3d8 GLOBAL_AT(int, 0x0064d3d8)
#define _DAT_0064d2e4 GLOBAL_AT(int, 0x0064d2e4)
#define _DAT_0064d2e8 GLOBAL_AT(int, 0x0064d2e8)
#define _DAT_0064d2ec GLOBAL_AT(int, 0x0064d2ec)
#define _DAT_0064d2f0 GLOBAL_AT(int, 0x0064d2f0)
#define _DAT_0064d2f4 GLOBAL_AT(int, 0x0064d2f4)
#define _DAT_0064d2f8 GLOBAL_AT(int, 0x0064d2f8)
#define _DAT_0064d2fc GLOBAL_AT(int, 0x0064d2fc)
#define _DAT_0064d300 GLOBAL_AT(int, 0x0064d300)
#define _DAT_0064d304 GLOBAL_AT(int, 0x0064d304)
#define _DAT_0064d308 GLOBAL_AT(int, 0x0064d308)
#define _DAT_0064d320 GLOBAL_AT(int, 0x0064d320)
#define _DAT_0064d324 GLOBAL_AT(int, 0x0064d324)
#define _DAT_0064d328 GLOBAL_AT(int, 0x0064d328)
#define _DAT_0064d330 GLOBAL_AT(int, 0x0064d330)
#define _DAT_0064d334 GLOBAL_AT(int, 0x0064d334)
#define _DAT_0064d338 GLOBAL_AT(int, 0x0064d338)
#define _DAT_0064d33c GLOBAL_AT(int, 0x0064d33c)
#define _DAT_0064d340 GLOBAL_AT(int, 0x0064d340)
#define _DAT_0064d344 GLOBAL_AT(int, 0x0064d344)
#define _DAT_0064d348 GLOBAL_AT(int, 0x0064d348)
#define _DAT_0064d354 GLOBAL_AT(int, 0x0064d354)
#define _DAT_0064d358 GLOBAL_AT(int, 0x0064d358)
#define _DAT_0064d35c GLOBAL_AT(int, 0x0064d35c)
#define _DAT_0064d360 GLOBAL_AT(int, 0x0064d360)
#define _DAT_0064d364 GLOBAL_AT(int, 0x0064d364)
#define _DAT_0064d368 GLOBAL_AT(int, 0x0064d368)
#define _DAT_0064d36c GLOBAL_AT(int, 0x0064d36c)
#define _DAT_0064d370 GLOBAL_AT(int, 0x0064d370)
#define _DAT_0064d374 GLOBAL_AT(int, 0x0064d374)
#define _DAT_0064d378 GLOBAL_AT(int, 0x0064d378)
#define _DAT_0064d37c GLOBAL_AT(int, 0x0064d37c)
#define _DAT_0064d380 GLOBAL_AT(int, 0x0064d380)
#define _DAT_0064d384 GLOBAL_AT(int, 0x0064d384)
#define _DAT_0064d39c GLOBAL_AT(int, 0x0064d39c)
#define _DAT_0064d3a0 GLOBAL_AT(int, 0x0064d3a0)
#define _DAT_0064d3a4 GLOBAL_AT(int, 0x0064d3a4)
#define _DAT_0064d3a8 GLOBAL_AT(int, 0x0064d3a8)
#define _DAT_0064d3ac GLOBAL_AT(int, 0x0064d3ac)
#define _DAT_0064d3b0 GLOBAL_AT(int, 0x0064d3b0)
#define _DAT_0064d3b4 GLOBAL_AT(int, 0x0064d3b4)
#define _DAT_0064d3b8 GLOBAL_AT(int, 0x0064d3b8)
#define _DAT_0064d3bc GLOBAL_AT(int, 0x0064d3bc)
#define _DAT_0064d3c0 GLOBAL_AT(int, 0x0064d3c0)
#define _DAT_0064d3c4 GLOBAL_AT(int, 0x0064d3c4)
#define _DAT_0064d3c8 GLOBAL_AT(int, 0x0064d3c8)
#define _DAT_0064d3dc GLOBAL_AT(int, 0x0064d3dc)
#define _DAT_0064d3e0 GLOBAL_AT(int, 0x0064d3e0)
#define _DAT_0064d3e4 GLOBAL_AT(int, 0x0064d3e4)
#define _DAT_0064d3e8 GLOBAL_AT(int, 0x0064d3e8)
#define _DAT_0064d3ec GLOBAL_AT(int, 0x0064d3ec)
#define _DAT_0064d3f0 GLOBAL_AT(int, 0x0064d3f0)
#define _DAT_0064d3f4 GLOBAL_AT(int, 0x0064d3f4)
#define _DAT_0064d3f8 GLOBAL_AT(int, 0x0064d3f8)
#define _DAT_0064d3fc GLOBAL_AT(int, 0x0064d3fc)
#define _DAT_0064d400 GLOBAL_AT(int, 0x0064d400)
#define _DAT_0064d404 GLOBAL_AT(int, 0x0064d404)
#define _DAT_0064d408 GLOBAL_AT(int, 0x0064d408)
#define _DAT_0064d410 GLOBAL_AT(int, 0x0064d410)
#define _DAT_0064d41c GLOBAL_AT(int, 0x0064d41c)
#define _DAT_0064d414 GLOBAL_AT(int, 0x0064d414)
#define _DAT_0064d418 GLOBAL_AT(int, 0x0064d418)
#define _DAT_0064d420 GLOBAL_AT(int, 0x0064d420)
#define _DAT_0064d450 GLOBAL_AT(int, 0x0064d450)
#define _DAT_0064d454 GLOBAL_AT(int, 0x0064d454)
#define _DAT_0064d458 GLOBAL_AT(int, 0x0064d458)
#define _DAT_0064d424 GLOBAL_AT(int, 0x0064d424)
#define _DAT_0064d490 GLOBAL_AT(int, 0x0064d490)
#define _DAT_0064d494 GLOBAL_AT(int, 0x0064d494)
#define _DAT_0064d498 GLOBAL_AT(int, 0x0064d498)
#define _DAT_0064d428 GLOBAL_AT(int, 0x0064d428)
#define _DAT_0064d4d0 GLOBAL_AT(int, 0x0064d4d0)
#define _DAT_0064d4d4 GLOBAL_AT(int, 0x0064d4d4)
#define _DAT_0064d4d8 GLOBAL_AT(int, 0x0064d4d8)
#define _DAT_0064d42c GLOBAL_AT(int, 0x0064d42c)
#define _DAT_0064d510 GLOBAL_AT(int, 0x0064d510)
#define _DAT_0064d430 GLOBAL_AT(int, 0x0064d430)
#define _DAT_0064d434 GLOBAL_AT(int, 0x0064d434)
#define _DAT_0064d438 GLOBAL_AT(int, 0x0064d438)
#define _DAT_0064d43c GLOBAL_AT(int, 0x0064d43c)
#define _DAT_0064d440 GLOBAL_AT(int, 0x0064d440)
#define _DAT_0064d444 GLOBAL_AT(int, 0x0064d444)
#define _DAT_0064d448 GLOBAL_AT(int, 0x0064d448)
#define _DAT_0064d45c GLOBAL_AT(int, 0x0064d45c)
#define _DAT_0064d460 GLOBAL_AT(int, 0x0064d460)
#define _DAT_0064d464 GLOBAL_AT(int, 0x0064d464)
#define _DAT_0064d468 GLOBAL_AT(int, 0x0064d468)
#define _DAT_0064d46c GLOBAL_AT(int, 0x0064d46c)
#define _DAT_0064d470 GLOBAL_AT(int, 0x0064d470)
#define _DAT_0064d474 GLOBAL_AT(int, 0x0064d474)
#define _DAT_0064d478 GLOBAL_AT(int, 0x0064d478)
#define _DAT_0064d47c GLOBAL_AT(int, 0x0064d47c)
#define _DAT_0064d480 GLOBAL_AT(int, 0x0064d480)
#define _DAT_0064d484 GLOBAL_AT(int, 0x0064d484)
#define _DAT_0064d488 GLOBAL_AT(int, 0x0064d488)
#define _DAT_0064d49c GLOBAL_AT(int, 0x0064d49c)
#define _DAT_0064d4a0 GLOBAL_AT(int, 0x0064d4a0)
#define _DAT_0064d4a4 GLOBAL_AT(int, 0x0064d4a4)
#define _DAT_0064d4a8 GLOBAL_AT(int, 0x0064d4a8)
#define _DAT_0064d4ac GLOBAL_AT(int, 0x0064d4ac)
#define _DAT_0064d4b0 GLOBAL_AT(int, 0x0064d4b0)
#define _DAT_0064d4b4 GLOBAL_AT(int, 0x0064d4b4)
#define _DAT_0064d4b8 GLOBAL_AT(int, 0x0064d4b8)
#define _DAT_0064d4bc GLOBAL_AT(int, 0x0064d4bc)
#define _DAT_0064d4c0 GLOBAL_AT(int, 0x0064d4c0)
#define _DAT_0064d4c4 GLOBAL_AT(int, 0x0064d4c4)
#define _DAT_0064d4c8 GLOBAL_AT(int, 0x0064d4c8)
#define _DAT_0064d4dc GLOBAL_AT(int, 0x0064d4dc)
#define _DAT_0064d4e0 GLOBAL_AT(int, 0x0064d4e0)
#define _DAT_0064d4e4 GLOBAL_AT(int, 0x0064d4e4)
#define _DAT_0064d4e8 GLOBAL_AT(int, 0x0064d4e8)
#define _DAT_0064d4ec GLOBAL_AT(int, 0x0064d4ec)
#define _DAT_0064d4f0 GLOBAL_AT(int, 0x0064d4f0)
#define _DAT_0064d4f4 GLOBAL_AT(int, 0x0064d4f4)
#define _DAT_0064d4f8 GLOBAL_AT(int, 0x0064d4f8)
#define _DAT_0064d4fc GLOBAL_AT(int, 0x0064d4fc)
#define _DAT_0064d500 GLOBAL_AT(int, 0x0064d500)
#define _DAT_0064d504 GLOBAL_AT(int, 0x0064d504)
#define _DAT_0064d508 GLOBAL_AT(int, 0x0064d508)
#define _DAT_0064d514 GLOBAL_AT(int, 0x0064d514)
#define _DAT_0064d518 GLOBAL_AT(int, 0x0064d518)
#define _DAT_0064d51c GLOBAL_AT(int, 0x0064d51c)
#define _DAT_0064d520 GLOBAL_AT(int, 0x0064d520)
#define _DAT_0064d524 GLOBAL_AT(int, 0x0064d524)
#define _DAT_0064d528 GLOBAL_AT(int, 0x0064d528)
#define _DAT_0064d52c GLOBAL_AT(int, 0x0064d52c)
#define _DAT_0064d530 GLOBAL_AT(int, 0x0064d530)
#define _DAT_0064d534 GLOBAL_AT(int, 0x0064d534)
#define _DAT_0064d538 GLOBAL_AT(int, 0x0064d538)
#define _DAT_0064d53c GLOBAL_AT(int, 0x0064d53c)
#define _DAT_0064d540 GLOBAL_AT(int, 0x0064d540)
#define _DAT_0064d544 GLOBAL_AT(int, 0x0064d544)
#define _DAT_0064d550 GLOBAL_AT(int, 0x0064d550)
#define _DAT_0064d554 GLOBAL_AT(int, 0x0064d554)
#define _DAT_0064d558 GLOBAL_AT(int, 0x0064d558)
#define _DAT_0064d548 GLOBAL_AT(int, 0x0064d548)
#define _DAT_0064d590 GLOBAL_AT(int, 0x0064d590)
#define _DAT_0064d594 GLOBAL_AT(int, 0x0064d594)
#define _DAT_0064d598 GLOBAL_AT(int, 0x0064d598)
#define _DAT_0064d55c GLOBAL_AT(int, 0x0064d55c)
#define _DAT_0064d5d0 GLOBAL_AT(int, 0x0064d5d0)
#define _DAT_0064d5d4 GLOBAL_AT(int, 0x0064d5d4)
#define _DAT_0064d5d8 GLOBAL_AT(int, 0x0064d5d8)
#define _DAT_0064d560 GLOBAL_AT(int, 0x0064d560)
#define _DAT_0064d610 GLOBAL_AT(int, 0x0064d610)
#define _DAT_0064d614 GLOBAL_AT(int, 0x0064d614)
#define _DAT_0064d618 GLOBAL_AT(int, 0x0064d618)
#define _DAT_0064d564 GLOBAL_AT(int, 0x0064d564)
#define _DAT_0064d650 GLOBAL_AT(int, 0x0064d650)
#define _DAT_0064d568 GLOBAL_AT(int, 0x0064d568)
#define _DAT_0064d56c GLOBAL_AT(int, 0x0064d56c)
#define _DAT_0064d570 GLOBAL_AT(int, 0x0064d570)
#define _DAT_0064d574 GLOBAL_AT(int, 0x0064d574)
#define _DAT_0064d578 GLOBAL_AT(int, 0x0064d578)
#define _DAT_0064d57c GLOBAL_AT(int, 0x0064d57c)
#define _DAT_0064d580 GLOBAL_AT(int, 0x0064d580)
#define _DAT_0064d584 GLOBAL_AT(int, 0x0064d584)
#define _DAT_0064d588 GLOBAL_AT(int, 0x0064d588)
#define _DAT_0064d59c GLOBAL_AT(int, 0x0064d59c)
#define _DAT_0064d5a0 GLOBAL_AT(int, 0x0064d5a0)
#define _DAT_0064d5a4 GLOBAL_AT(int, 0x0064d5a4)
#define _DAT_0064d5a8 GLOBAL_AT(int, 0x0064d5a8)
#define _DAT_0064d5ac GLOBAL_AT(int, 0x0064d5ac)
#define _DAT_0064d5b0 GLOBAL_AT(int, 0x0064d5b0)
#define _DAT_0064d5b4 GLOBAL_AT(int, 0x0064d5b4)
#define _DAT_0064d5b8 GLOBAL_AT(int, 0x0064d5b8)
#define _DAT_0064d5bc GLOBAL_AT(int, 0x0064d5bc)
#define _DAT_0064d5c0 GLOBAL_AT(int, 0x0064d5c0)
#define _DAT_0064d5c4 GLOBAL_AT(int, 0x0064d5c4)
#define _DAT_0064d5c8 GLOBAL_AT(int, 0x0064d5c8)
#define _DAT_0064d5dc GLOBAL_AT(int, 0x0064d5dc)
#define _DAT_0064d5e0 GLOBAL_AT(int, 0x0064d5e0)
#define _DAT_0064d5e4 GLOBAL_AT(int, 0x0064d5e4)
#define _DAT_0064d5e8 GLOBAL_AT(int, 0x0064d5e8)
#define _DAT_0064d5ec GLOBAL_AT(int, 0x0064d5ec)
#define _DAT_0064d5f0 GLOBAL_AT(int, 0x0064d5f0)
#define _DAT_0064d5f4 GLOBAL_AT(int, 0x0064d5f4)
#define _DAT_0064d5f8 GLOBAL_AT(int, 0x0064d5f8)
#define _DAT_0064d5fc GLOBAL_AT(int, 0x0064d5fc)
#define _DAT_0064d600 GLOBAL_AT(int, 0x0064d600)
#define _DAT_0064d604 GLOBAL_AT(int, 0x0064d604)
#define _DAT_0064d608 GLOBAL_AT(int, 0x0064d608)
#define _DAT_0064d61c GLOBAL_AT(int, 0x0064d61c)
#define _DAT_0064d620 GLOBAL_AT(int, 0x0064d620)
#define _DAT_0064d624 GLOBAL_AT(int, 0x0064d624)
#define _DAT_0064d628 GLOBAL_AT(int, 0x0064d628)
#define _DAT_0064d62c GLOBAL_AT(int, 0x0064d62c)
#define _DAT_0064d630 GLOBAL_AT(int, 0x0064d630)
#define _DAT_0064d634 GLOBAL_AT(int, 0x0064d634)
#define _DAT_0064d638 GLOBAL_AT(int, 0x0064d638)
#define _DAT_0064d63c GLOBAL_AT(int, 0x0064d63c)
#define _DAT_0064d640 GLOBAL_AT(int, 0x0064d640)
#define _DAT_0064d644 GLOBAL_AT(int, 0x0064d644)
#define _DAT_0064d648 GLOBAL_AT(int, 0x0064d648)
#define _DAT_0064d654 GLOBAL_AT(int, 0x0064d654)
#define _DAT_0064d658 GLOBAL_AT(int, 0x0064d658)
#define _DAT_0064d65c GLOBAL_AT(int, 0x0064d65c)
#define _DAT_0064d660 GLOBAL_AT(int, 0x0064d660)
#define _DAT_0064d664 GLOBAL_AT(int, 0x0064d664)
#define _DAT_0064d668 GLOBAL_AT(int, 0x0064d668)
#define _DAT_0064d66c GLOBAL_AT(int, 0x0064d66c)
#define _DAT_0064d670 GLOBAL_AT(int, 0x0064d670)
#define _DAT_0064d674 GLOBAL_AT(int, 0x0064d674)
#define _DAT_0064d690 GLOBAL_AT(int, 0x0064d690)
#define _DAT_0064d694 GLOBAL_AT(int, 0x0064d694)
#define _DAT_0064d698 GLOBAL_AT(int, 0x0064d698)
#define _DAT_0064d678 GLOBAL_AT(int, 0x0064d678)
#define _DAT_0064d6d0 GLOBAL_AT(int, 0x0064d6d0)
#define _DAT_0064d6d4 GLOBAL_AT(int, 0x0064d6d4)
#define _DAT_0064d6d8 GLOBAL_AT(int, 0x0064d6d8)
#define _DAT_0064d67c GLOBAL_AT(int, 0x0064d67c)
#define _DAT_0064d710 GLOBAL_AT(int, 0x0064d710)
#define _DAT_0064d714 GLOBAL_AT(int, 0x0064d714)
#define _DAT_0064d718 GLOBAL_AT(int, 0x0064d718)
#define _DAT_0064d680 GLOBAL_AT(int, 0x0064d680)
#define _DAT_0064d750 GLOBAL_AT(int, 0x0064d750)
#define _DAT_0064d754 GLOBAL_AT(int, 0x0064d754)
#define _DAT_0064d758 GLOBAL_AT(int, 0x0064d758)
#define _DAT_0064d684 GLOBAL_AT(int, 0x0064d684)
#define _DAT_0064d790 GLOBAL_AT(int, 0x0064d790)
#define _DAT_0064d688 GLOBAL_AT(int, 0x0064d688)
#define _DAT_0064d69c GLOBAL_AT(int, 0x0064d69c)
#define _DAT_0064d6a0 GLOBAL_AT(int, 0x0064d6a0)
#define _DAT_0064d6a4 GLOBAL_AT(int, 0x0064d6a4)
#define _DAT_0064d6a8 GLOBAL_AT(int, 0x0064d6a8)
#define _DAT_0064d6ac GLOBAL_AT(int, 0x0064d6ac)
#define _DAT_0064d6b0 GLOBAL_AT(int, 0x0064d6b0)
#define _DAT_0064d6b4 GLOBAL_AT(int, 0x0064d6b4)
#define _DAT_0064d6b8 GLOBAL_AT(int, 0x0064d6b8)
#define _DAT_0064d6bc GLOBAL_AT(int, 0x0064d6bc)
#define _DAT_0064d6c0 GLOBAL_AT(int, 0x0064d6c0)
#define _DAT_0064d6c4 GLOBAL_AT(int, 0x0064d6c4)
#define _DAT_0064d6c8 GLOBAL_AT(int, 0x0064d6c8)
#define _DAT_0064d6dc GLOBAL_AT(int, 0x0064d6dc)
#define _DAT_0064d6e0 GLOBAL_AT(int, 0x0064d6e0)
#define _DAT_0064d6e4 GLOBAL_AT(int, 0x0064d6e4)
#define _DAT_0064d6e8 GLOBAL_AT(int, 0x0064d6e8)
#define _DAT_0064d6ec GLOBAL_AT(int, 0x0064d6ec)
#define _DAT_0064d6f0 GLOBAL_AT(int, 0x0064d6f0)
#define _DAT_0064d6f4 GLOBAL_AT(int, 0x0064d6f4)
#define _DAT_0064d6f8 GLOBAL_AT(int, 0x0064d6f8)
#define _DAT_0064d6fc GLOBAL_AT(int, 0x0064d6fc)
#define _DAT_0064d700 GLOBAL_AT(int, 0x0064d700)
#define _DAT_0064d704 GLOBAL_AT(int, 0x0064d704)
#define _DAT_0064d708 GLOBAL_AT(int, 0x0064d708)
#define _DAT_0064d71c GLOBAL_AT(int, 0x0064d71c)
#define _DAT_0064d720 GLOBAL_AT(int, 0x0064d720)
#define _DAT_0064d724 GLOBAL_AT(int, 0x0064d724)
#define _DAT_0064d728 GLOBAL_AT(int, 0x0064d728)
#define _DAT_0064d72c GLOBAL_AT(int, 0x0064d72c)
#define _DAT_0064d730 GLOBAL_AT(int, 0x0064d730)
#define _DAT_0064d734 GLOBAL_AT(int, 0x0064d734)
#define _DAT_0064d738 GLOBAL_AT(int, 0x0064d738)
#define _DAT_0064d73c GLOBAL_AT(int, 0x0064d73c)
#define _DAT_0064d740 GLOBAL_AT(int, 0x0064d740)
#define _DAT_0064d744 GLOBAL_AT(int, 0x0064d744)
#define _DAT_0064d748 GLOBAL_AT(int, 0x0064d748)
#define _DAT_0064d75c GLOBAL_AT(int, 0x0064d75c)
#define _DAT_0064d760 GLOBAL_AT(int, 0x0064d760)
#define _DAT_0064d764 GLOBAL_AT(int, 0x0064d764)
#define _DAT_0064d768 GLOBAL_AT(int, 0x0064d768)
#define _DAT_0064d76c GLOBAL_AT(int, 0x0064d76c)
#define _DAT_0064d770 GLOBAL_AT(int, 0x0064d770)
#define _DAT_0064d774 GLOBAL_AT(int, 0x0064d774)
#define _DAT_0064d778 GLOBAL_AT(int, 0x0064d778)
#define _DAT_0064d77c GLOBAL_AT(int, 0x0064d77c)
#define _DAT_0064d780 GLOBAL_AT(int, 0x0064d780)
#define _DAT_0064d784 GLOBAL_AT(int, 0x0064d784)
#define _DAT_0064d788 GLOBAL_AT(int, 0x0064d788)
#define _DAT_0064d794 GLOBAL_AT(int, 0x0064d794)
#define _DAT_0064d798 GLOBAL_AT(int, 0x0064d798)
#define _DAT_0064d79c GLOBAL_AT(int, 0x0064d79c)
#define _DAT_0064d7a0 GLOBAL_AT(int, 0x0064d7a0)
#define _DAT_0064d7a4 GLOBAL_AT(int, 0x0064d7a4)
#define _DAT_0064d7d0 GLOBAL_AT(int, 0x0064d7d0)
#define _DAT_0064d7d4 GLOBAL_AT(int, 0x0064d7d4)
#define _DAT_0064d7d8 GLOBAL_AT(int, 0x0064d7d8)
#define _DAT_0064d7a8 GLOBAL_AT(int, 0x0064d7a8)
#define _DAT_0064d810 GLOBAL_AT(int, 0x0064d810)
#define _DAT_0064d814 GLOBAL_AT(int, 0x0064d814)
#define _DAT_0064d818 GLOBAL_AT(int, 0x0064d818)
#define _DAT_0064d7ac GLOBAL_AT(int, 0x0064d7ac)
#define _DAT_0064d850 GLOBAL_AT(int, 0x0064d850)
#define _DAT_0064d854 GLOBAL_AT(int, 0x0064d854)
#define _DAT_0064d858 GLOBAL_AT(int, 0x0064d858)
#define _DAT_0064d7b0 GLOBAL_AT(int, 0x0064d7b0)
#define _DAT_0064d890 GLOBAL_AT(int, 0x0064d890)
#define _DAT_0064d894 GLOBAL_AT(int, 0x0064d894)
#define _DAT_0064d898 GLOBAL_AT(int, 0x0064d898)
#define _DAT_0064d7b4 GLOBAL_AT(int, 0x0064d7b4)
#define _DAT_0064d8d0 GLOBAL_AT(int, 0x0064d8d0)
#define _DAT_0064d7b8 GLOBAL_AT(int, 0x0064d7b8)
#define _DAT_0064d7bc GLOBAL_AT(int, 0x0064d7bc)
#define _DAT_0064d7c0 GLOBAL_AT(int, 0x0064d7c0)
#define _DAT_0064d7c4 GLOBAL_AT(int, 0x0064d7c4)
#define _DAT_0064d7c8 GLOBAL_AT(int, 0x0064d7c8)
#define _DAT_0064d7dc GLOBAL_AT(int, 0x0064d7dc)
#define _DAT_0064d7e0 GLOBAL_AT(int, 0x0064d7e0)
#define _DAT_0064d7e4 GLOBAL_AT(int, 0x0064d7e4)
#define _DAT_0064d7e8 GLOBAL_AT(int, 0x0064d7e8)
#define _DAT_0064d7ec GLOBAL_AT(int, 0x0064d7ec)
#define _DAT_0064d7f0 GLOBAL_AT(int, 0x0064d7f0)
#define _DAT_0064d7f4 GLOBAL_AT(int, 0x0064d7f4)
#define _DAT_0064d7f8 GLOBAL_AT(int, 0x0064d7f8)
#define _DAT_0064d7fc GLOBAL_AT(int, 0x0064d7fc)
#define _DAT_0064d800 GLOBAL_AT(int, 0x0064d800)
#define _DAT_0064d804 GLOBAL_AT(int, 0x0064d804)
#define _DAT_0064d808 GLOBAL_AT(int, 0x0064d808)
#define _DAT_0064d81c GLOBAL_AT(int, 0x0064d81c)
#define _DAT_0064d820 GLOBAL_AT(int, 0x0064d820)
#define _DAT_0064d824 GLOBAL_AT(int, 0x0064d824)
#define _DAT_0064d828 GLOBAL_AT(int, 0x0064d828)
#define _DAT_0064d82c GLOBAL_AT(int, 0x0064d82c)
#define _DAT_0064d830 GLOBAL_AT(int, 0x0064d830)
#define _DAT_0064d834 GLOBAL_AT(int, 0x0064d834)
#define _DAT_0064d838 GLOBAL_AT(int, 0x0064d838)
#define _DAT_0064d83c GLOBAL_AT(int, 0x0064d83c)
#define _DAT_0064d840 GLOBAL_AT(int, 0x0064d840)
#define _DAT_0064d844 GLOBAL_AT(int, 0x0064d844)
#define _DAT_0064d848 GLOBAL_AT(int, 0x0064d848)
#define _DAT_0064d85c GLOBAL_AT(int, 0x0064d85c)
#define _DAT_0064d860 GLOBAL_AT(int, 0x0064d860)
#define _DAT_0064d864 GLOBAL_AT(int, 0x0064d864)
#define _DAT_0064d868 GLOBAL_AT(int, 0x0064d868)
#define _DAT_0064d86c GLOBAL_AT(int, 0x0064d86c)
#define _DAT_0064d870 GLOBAL_AT(int, 0x0064d870)
#define _DAT_0064d874 GLOBAL_AT(int, 0x0064d874)
#define _DAT_0064d878 GLOBAL_AT(int, 0x0064d878)
#define _DAT_0064d87c GLOBAL_AT(int, 0x0064d87c)
#define _DAT_0064d880 GLOBAL_AT(int, 0x0064d880)
#define _DAT_0064d884 GLOBAL_AT(int, 0x0064d884)
#define _DAT_0064d888 GLOBAL_AT(int, 0x0064d888)
#define _DAT_0064d89c GLOBAL_AT(int, 0x0064d89c)
#define _DAT_0064d8a0 GLOBAL_AT(int, 0x0064d8a0)
#define _DAT_0064d8a4 GLOBAL_AT(int, 0x0064d8a4)
#define _DAT_0064d8a8 GLOBAL_AT(int, 0x0064d8a8)
#define _DAT_0064d8ac GLOBAL_AT(int, 0x0064d8ac)
#define _DAT_0064d8b0 GLOBAL_AT(int, 0x0064d8b0)
#define _DAT_0064d8b4 GLOBAL_AT(int, 0x0064d8b4)
#define _DAT_0064d8b8 GLOBAL_AT(int, 0x0064d8b8)
#define _DAT_0064d8bc GLOBAL_AT(int, 0x0064d8bc)
#define _DAT_0064d8c0 GLOBAL_AT(int, 0x0064d8c0)
#define _DAT_0064d8c4 GLOBAL_AT(int, 0x0064d8c4)
#define _DAT_0064d8c8 GLOBAL_AT(int, 0x0064d8c8)
#define _DAT_0064d8d4 GLOBAL_AT(int, 0x0064d8d4)
#define _DAT_0064d8d8 GLOBAL_AT(int, 0x0064d8d8)
#define _DAT_0064d8dc GLOBAL_AT(int, 0x0064d8dc)
#define _DAT_0064d910 GLOBAL_AT(int, 0x0064d910)
#define _DAT_0064d914 GLOBAL_AT(int, 0x0064d914)
#define _DAT_0064d918 GLOBAL_AT(int, 0x0064d918)
#define _DAT_0064d8e0 GLOBAL_AT(int, 0x0064d8e0)
#define _DAT_0064d950 GLOBAL_AT(int, 0x0064d950)
#define _DAT_0064d954 GLOBAL_AT(int, 0x0064d954)
#define _DAT_0064d958 GLOBAL_AT(int, 0x0064d958)
#define _DAT_0064d8e4 GLOBAL_AT(int, 0x0064d8e4)
#define _DAT_0064d990 GLOBAL_AT(int, 0x0064d990)
#define _DAT_0064d994 GLOBAL_AT(int, 0x0064d994)
#define _DAT_0064d998 GLOBAL_AT(int, 0x0064d998)
#define _DAT_0064d8e8 GLOBAL_AT(int, 0x0064d8e8)
#define _DAT_0064d9d0 GLOBAL_AT(int, 0x0064d9d0)
#define _DAT_0064d8ec GLOBAL_AT(int, 0x0064d8ec)
#define _DAT_0064d8f0 GLOBAL_AT(int, 0x0064d8f0)
#define _DAT_0064d8f4 GLOBAL_AT(int, 0x0064d8f4)
#define _DAT_0064d8f8 GLOBAL_AT(int, 0x0064d8f8)
#define _DAT_0064d8fc GLOBAL_AT(int, 0x0064d8fc)
#define _DAT_0064d900 GLOBAL_AT(int, 0x0064d900)
#define _DAT_0064d904 GLOBAL_AT(int, 0x0064d904)
#define _DAT_0064d908 GLOBAL_AT(int, 0x0064d908)
#define _DAT_0064d91c GLOBAL_AT(int, 0x0064d91c)
#define _DAT_0064d920 GLOBAL_AT(int, 0x0064d920)
#define _DAT_0064d924 GLOBAL_AT(int, 0x0064d924)
#define _DAT_0064d928 GLOBAL_AT(int, 0x0064d928)
#define _DAT_0064d92c GLOBAL_AT(int, 0x0064d92c)
#define _DAT_0064d930 GLOBAL_AT(int, 0x0064d930)
#define _DAT_0064d934 GLOBAL_AT(int, 0x0064d934)
#define _DAT_0064d938 GLOBAL_AT(int, 0x0064d938)
#define _DAT_0064d93c GLOBAL_AT(int, 0x0064d93c)
#define _DAT_0064d940 GLOBAL_AT(int, 0x0064d940)
#define _DAT_0064d944 GLOBAL_AT(int, 0x0064d944)
#define _DAT_0064d948 GLOBAL_AT(int, 0x0064d948)
#define _DAT_0064d95c GLOBAL_AT(int, 0x0064d95c)
#define _DAT_0064d960 GLOBAL_AT(int, 0x0064d960)
#define _DAT_0064d964 GLOBAL_AT(int, 0x0064d964)
#define _DAT_0064d968 GLOBAL_AT(int, 0x0064d968)
#define _DAT_0064d96c GLOBAL_AT(int, 0x0064d96c)
#define _DAT_0064d970 GLOBAL_AT(int, 0x0064d970)
#define _DAT_0064d974 GLOBAL_AT(int, 0x0064d974)
#define _DAT_0064d978 GLOBAL_AT(int, 0x0064d978)
#define _DAT_0064d97c GLOBAL_AT(int, 0x0064d97c)
#define _DAT_0064d980 GLOBAL_AT(int, 0x0064d980)
#define _DAT_0064d984 GLOBAL_AT(int, 0x0064d984)
#define _DAT_0064d988 GLOBAL_AT(int, 0x0064d988)
#define _DAT_0064d99c GLOBAL_AT(int, 0x0064d99c)
#define _DAT_0064d9a0 GLOBAL_AT(int, 0x0064d9a0)
#define _DAT_0064d9a4 GLOBAL_AT(int, 0x0064d9a4)
#define _DAT_0064d9a8 GLOBAL_AT(int, 0x0064d9a8)
#define _DAT_0064d9ac GLOBAL_AT(int, 0x0064d9ac)
#define _DAT_0064d9b0 GLOBAL_AT(int, 0x0064d9b0)
#define _DAT_0064d9b4 GLOBAL_AT(int, 0x0064d9b4)
#define _DAT_0064d9b8 GLOBAL_AT(int, 0x0064d9b8)
#define _DAT_0064d9bc GLOBAL_AT(int, 0x0064d9bc)
#define _DAT_0064d9c0 GLOBAL_AT(int, 0x0064d9c0)
#define _DAT_0064d9c4 GLOBAL_AT(int, 0x0064d9c4)
#define _DAT_0064d9c8 GLOBAL_AT(int, 0x0064d9c8)
#define _DAT_0064d9d4 GLOBAL_AT(int, 0x0064d9d4)
#define _DAT_0064d9d8 GLOBAL_AT(int, 0x0064d9d8)
#define _DAT_0064d9dc GLOBAL_AT(int, 0x0064d9dc)
#define _DAT_0064d9e0 GLOBAL_AT(int, 0x0064d9e0)
#define _DAT_0064d9e4 GLOBAL_AT(int, 0x0064d9e4)
#define _DAT_0064d9e8 GLOBAL_AT(int, 0x0064d9e8)
#define _DAT_0064d9ec GLOBAL_AT(int, 0x0064d9ec)
#define _DAT_0064d9f0 GLOBAL_AT(int, 0x0064d9f0)
#define _DAT_0064d9f4 GLOBAL_AT(int, 0x0064d9f4)
#define _DAT_0064d9f8 GLOBAL_AT(int, 0x0064d9f8)
#define _DAT_0064d9fc GLOBAL_AT(int, 0x0064d9fc)
#define _DAT_0064da00 GLOBAL_AT(int, 0x0064da00)
#define _DAT_0064da04 GLOBAL_AT(int, 0x0064da04)
#define _DAT_0064da90 GLOBAL_AT(int, 0x0064da90)
#define _DAT_0064da10 GLOBAL_AT(int, 0x0064da10)
#define _DAT_0064da94 GLOBAL_AT(int, 0x0064da94)
#define _DAT_0064da98 GLOBAL_AT(int, 0x0064da98)
#define _DAT_0064da9c GLOBAL_AT(int, 0x0064da9c)
#define _DAT_0064da14 GLOBAL_AT(int, 0x0064da14)
#define _DAT_0064da18 GLOBAL_AT(int, 0x0064da18)
#define _DAT_0064dad0 GLOBAL_AT(int, 0x0064dad0)
#define _DAT_0064da50 GLOBAL_AT(int, 0x0064da50)
#define _DAT_0064dad4 GLOBAL_AT(int, 0x0064dad4)
#define _DAT_0064dad8 GLOBAL_AT(int, 0x0064dad8)
#define _DAT_0064dadc GLOBAL_AT(int, 0x0064dadc)
#define _DAT_0064da54 GLOBAL_AT(int, 0x0064da54)
#define _DAT_0064da58 GLOBAL_AT(int, 0x0064da58)
#define _DAT_0064db10 GLOBAL_AT(int, 0x0064db10)
#define _DAT_0064da08 GLOBAL_AT(int, 0x0064da08)
#define _DAT_0064da1c GLOBAL_AT(int, 0x0064da1c)
#define _DAT_0064da20 GLOBAL_AT(int, 0x0064da20)
#define _DAT_0064da24 GLOBAL_AT(int, 0x0064da24)
#define _DAT_0064da28 GLOBAL_AT(int, 0x0064da28)
#define _DAT_0064da2c GLOBAL_AT(int, 0x0064da2c)
#define _DAT_0064da30 GLOBAL_AT(int, 0x0064da30)
#define _DAT_0064da34 GLOBAL_AT(int, 0x0064da34)
#define _DAT_0064da38 GLOBAL_AT(int, 0x0064da38)
#define _DAT_0064da3c GLOBAL_AT(int, 0x0064da3c)
#define _DAT_0064da40 GLOBAL_AT(int, 0x0064da40)
#define _DAT_0064da44 GLOBAL_AT(int, 0x0064da44)
#define _DAT_0064da48 GLOBAL_AT(int, 0x0064da48)
#define _DAT_0064da5c GLOBAL_AT(int, 0x0064da5c)
#define _DAT_0064da60 GLOBAL_AT(int, 0x0064da60)
#define _DAT_0064da64 GLOBAL_AT(int, 0x0064da64)
#define _DAT_0064da68 GLOBAL_AT(int, 0x0064da68)
#define _DAT_0064da6c GLOBAL_AT(int, 0x0064da6c)
#define _DAT_0064da70 GLOBAL_AT(int, 0x0064da70)
#define _DAT_0064da74 GLOBAL_AT(int, 0x0064da74)
#define _DAT_0064da78 GLOBAL_AT(int, 0x0064da78)
#define _DAT_0064da7c GLOBAL_AT(int, 0x0064da7c)
#define _DAT_0064da80 GLOBAL_AT(int, 0x0064da80)
#define _DAT_0064da84 GLOBAL_AT(int, 0x0064da84)
#define _DAT_0064da88 GLOBAL_AT(int, 0x0064da88)
#define _DAT_0064daa0 GLOBAL_AT(int, 0x0064daa0)
#define _DAT_0064daa4 GLOBAL_AT(int, 0x0064daa4)
#define _DAT_0064daa8 GLOBAL_AT(int, 0x0064daa8)
#define _DAT_0064daac GLOBAL_AT(int, 0x0064daac)
#define _DAT_0064dab0 GLOBAL_AT(int, 0x0064dab0)
#define _DAT_0064dab4 GLOBAL_AT(int, 0x0064dab4)
#define _DAT_0064dab8 GLOBAL_AT(int, 0x0064dab8)
#define _DAT_0064dabc GLOBAL_AT(int, 0x0064dabc)
#define _DAT_0064dac0 GLOBAL_AT(int, 0x0064dac0)
#define _DAT_0064dac4 GLOBAL_AT(int, 0x0064dac4)
#define _DAT_0064dac8 GLOBAL_AT(int, 0x0064dac8)
#define _DAT_0064dae0 GLOBAL_AT(int, 0x0064dae0)
#define _DAT_0064dae4 GLOBAL_AT(int, 0x0064dae4)
#define _DAT_0064dae8 GLOBAL_AT(int, 0x0064dae8)
#define _DAT_0064daec GLOBAL_AT(int, 0x0064daec)
#define _DAT_0064daf0 GLOBAL_AT(int, 0x0064daf0)
#define _DAT_0064daf4 GLOBAL_AT(int, 0x0064daf4)
#define _DAT_0064daf8 GLOBAL_AT(int, 0x0064daf8)
#define _DAT_0064dafc GLOBAL_AT(int, 0x0064dafc)
#define _DAT_0064db00 GLOBAL_AT(int, 0x0064db00)
#define _DAT_0064db04 GLOBAL_AT(int, 0x0064db04)
#define _DAT_0064db08 GLOBAL_AT(int, 0x0064db08)
#define _DAT_0064db14 GLOBAL_AT(int, 0x0064db14)
#define _DAT_0064db18 GLOBAL_AT(int, 0x0064db18)
#define _DAT_0064db1c GLOBAL_AT(int, 0x0064db1c)
#define _DAT_0064db20 GLOBAL_AT(int, 0x0064db20)
#define _DAT_0064db24 GLOBAL_AT(int, 0x0064db24)
#define _DAT_0064db28 GLOBAL_AT(int, 0x0064db28)
#define _DAT_0064db2c GLOBAL_AT(int, 0x0064db2c)
#define _DAT_0064db30 GLOBAL_AT(int, 0x0064db30)
#define _DAT_0064db34 GLOBAL_AT(int, 0x0064db34)
#define _DAT_0064db50 GLOBAL_AT(int, 0x0064db50)
#define _DAT_0064db54 GLOBAL_AT(int, 0x0064db54)
#define _DAT_0064db58 GLOBAL_AT(int, 0x0064db58)
#define _DAT_0064db5c GLOBAL_AT(int, 0x0064db5c)
#define _DAT_0064db90 GLOBAL_AT(int, 0x0064db90)
#define _DAT_0064db94 GLOBAL_AT(int, 0x0064db94)
#define _DAT_0064db98 GLOBAL_AT(int, 0x0064db98)
#define _DAT_0064db9c GLOBAL_AT(int, 0x0064db9c)
#define _DAT_0064dbd0 GLOBAL_AT(int, 0x0064dbd0)
#define _DAT_0064dbd4 GLOBAL_AT(int, 0x0064dbd4)
#define _DAT_0064dbd8 GLOBAL_AT(int, 0x0064dbd8)
#define _DAT_0064dbdc GLOBAL_AT(int, 0x0064dbdc)
#define _DAT_0064dc10 GLOBAL_AT(int, 0x0064dc10)
#define _DAT_0064dc14 GLOBAL_AT(int, 0x0064dc14)
#define _DAT_0064dc18 GLOBAL_AT(int, 0x0064dc18)
#define _DAT_0064dc1c GLOBAL_AT(int, 0x0064dc1c)
#define _DAT_0064dc50 GLOBAL_AT(int, 0x0064dc50)
#define _DAT_0064db38 GLOBAL_AT(int, 0x0064db38)
#define _DAT_0064db3c GLOBAL_AT(int, 0x0064db3c)
#define _DAT_0064db40 GLOBAL_AT(int, 0x0064db40)
#define _DAT_0064db44 GLOBAL_AT(int, 0x0064db44)
#define _DAT_0064db48 GLOBAL_AT(int, 0x0064db48)
#define _DAT_0064db60 GLOBAL_AT(int, 0x0064db60)
#define _DAT_0064db64 GLOBAL_AT(int, 0x0064db64)
#define _DAT_0064db68 GLOBAL_AT(int, 0x0064db68)
#define _DAT_0064db6c GLOBAL_AT(int, 0x0064db6c)
#define _DAT_0064db70 GLOBAL_AT(int, 0x0064db70)
#define _DAT_0064db74 GLOBAL_AT(int, 0x0064db74)
#define _DAT_0064db78 GLOBAL_AT(int, 0x0064db78)
#define _DAT_0064db7c GLOBAL_AT(int, 0x0064db7c)
#define _DAT_0064db80 GLOBAL_AT(int, 0x0064db80)
#define _DAT_0064db84 GLOBAL_AT(int, 0x0064db84)
#define _DAT_0064db88 GLOBAL_AT(int, 0x0064db88)
#define _DAT_0064dba0 GLOBAL_AT(int, 0x0064dba0)
#define _DAT_0064dba4 GLOBAL_AT(int, 0x0064dba4)
#define _DAT_0064dba8 GLOBAL_AT(int, 0x0064dba8)
#define _DAT_0064dbac GLOBAL_AT(int, 0x0064dbac)
#define _DAT_0064dbb0 GLOBAL_AT(int, 0x0064dbb0)
#define _DAT_0064dbb4 GLOBAL_AT(int, 0x0064dbb4)
#define _DAT_0064dbb8 GLOBAL_AT(int, 0x0064dbb8)
#define _DAT_0064dbbc GLOBAL_AT(int, 0x0064dbbc)
#define _DAT_0064dbc0 GLOBAL_AT(int, 0x0064dbc0)
#define _DAT_0064dbc4 GLOBAL_AT(int, 0x0064dbc4)
#define _DAT_0064dbc8 GLOBAL_AT(int, 0x0064dbc8)
#define _DAT_0064dbe0 GLOBAL_AT(int, 0x0064dbe0)
#define _DAT_0064dbe4 GLOBAL_AT(int, 0x0064dbe4)
#define _DAT_0064dbe8 GLOBAL_AT(int, 0x0064dbe8)
#define _DAT_0064dbec GLOBAL_AT(int, 0x0064dbec)
#define _DAT_0064dbf0 GLOBAL_AT(int, 0x0064dbf0)
#define _DAT_0064dbf4 GLOBAL_AT(int, 0x0064dbf4)
#define _DAT_0064dbf8 GLOBAL_AT(int, 0x0064dbf8)
#define _DAT_0064dbfc GLOBAL_AT(int, 0x0064dbfc)
#define _DAT_0064dc00 GLOBAL_AT(int, 0x0064dc00)
#define _DAT_0064dc04 GLOBAL_AT(int, 0x0064dc04)
#define _DAT_0064dc08 GLOBAL_AT(int, 0x0064dc08)
#define _DAT_0064dc20 GLOBAL_AT(int, 0x0064dc20)
#define _DAT_0064dc24 GLOBAL_AT(int, 0x0064dc24)
#define _DAT_0064dc28 GLOBAL_AT(int, 0x0064dc28)
#define _DAT_0064dc2c GLOBAL_AT(int, 0x0064dc2c)
#define _DAT_0064dc30 GLOBAL_AT(int, 0x0064dc30)
#define _DAT_0064dc34 GLOBAL_AT(int, 0x0064dc34)
#define _DAT_0064dc38 GLOBAL_AT(int, 0x0064dc38)
#define _DAT_0064dc3c GLOBAL_AT(int, 0x0064dc3c)
#define _DAT_0064dc40 GLOBAL_AT(int, 0x0064dc40)
#define _DAT_0064dc44 GLOBAL_AT(int, 0x0064dc44)
#define _DAT_0064dc48 GLOBAL_AT(int, 0x0064dc48)
#define _DAT_0064dc54 GLOBAL_AT(int, 0x0064dc54)
#define _DAT_0064dc58 GLOBAL_AT(int, 0x0064dc58)
#define _DAT_0064dc5c GLOBAL_AT(int, 0x0064dc5c)
#define _DAT_0064dc60 GLOBAL_AT(int, 0x0064dc60)
#define DAT_0064f724 GLOBAL_AT(int, 0x0064f724)
#define _DAT_0064dc64 GLOBAL_AT(int, 0x0064dc64)
#define _DAT_0064dc90 GLOBAL_AT(int, 0x0064dc90)
#define _DAT_0064dc94 GLOBAL_AT(int, 0x0064dc94)
#define _DAT_0064dc98 GLOBAL_AT(int, 0x0064dc98)
#define _DAT_0064dc9c GLOBAL_AT(int, 0x0064dc9c)
#define _DAT_0064dcd0 GLOBAL_AT(int, 0x0064dcd0)
#define _DAT_0064dcd4 GLOBAL_AT(int, 0x0064dcd4)
#define _DAT_0064dcd8 GLOBAL_AT(int, 0x0064dcd8)
#define _DAT_0064dcdc GLOBAL_AT(int, 0x0064dcdc)
#define _DAT_0064dd10 GLOBAL_AT(int, 0x0064dd10)
#define _DAT_0064dd14 GLOBAL_AT(int, 0x0064dd14)
#define _DAT_0064dd18 GLOBAL_AT(int, 0x0064dd18)
#define _DAT_0064dd1c GLOBAL_AT(int, 0x0064dd1c)
#define _DAT_0064dd50 GLOBAL_AT(int, 0x0064dd50)
#define _DAT_0064dd54 GLOBAL_AT(int, 0x0064dd54)
#define _DAT_0064dd58 GLOBAL_AT(int, 0x0064dd58)
#define _DAT_0064dd5c GLOBAL_AT(int, 0x0064dd5c)
#define _DAT_0064dd90 GLOBAL_AT(int, 0x0064dd90)
#define DAT_00534dc0 GLOBAL_AT(int, 0x00534dc0)
#define _DAT_0064dc68 GLOBAL_AT(int, 0x0064dc68)
#define _DAT_0064dc6c GLOBAL_AT(int, 0x0064dc6c)
#define _DAT_0064dc70 GLOBAL_AT(int, 0x0064dc70)
#define _DAT_0064dc74 GLOBAL_AT(int, 0x0064dc74)
#define _DAT_0064dc78 GLOBAL_AT(int, 0x0064dc78)
#define _DAT_0064dc7c GLOBAL_AT(int, 0x0064dc7c)
#define _DAT_0064dc80 GLOBAL_AT(int, 0x0064dc80)
#define _DAT_0064dc84 GLOBAL_AT(int, 0x0064dc84)
#define _DAT_0064dc88 GLOBAL_AT(int, 0x0064dc88)
#define _DAT_0064dca0 GLOBAL_AT(int, 0x0064dca0)
#define DAT_0064f71c GLOBAL_AT(int, 0x0064f71c)
#define _DAT_0064dca4 GLOBAL_AT(int, 0x0064dca4)
#define _DAT_0064dca8 GLOBAL_AT(int, 0x0064dca8)
#define _DAT_0064dcac GLOBAL_AT(int, 0x0064dcac)
#define _DAT_0064dcb0 GLOBAL_AT(int, 0x0064dcb0)
#define _DAT_0064dcb4 GLOBAL_AT(int, 0x0064dcb4)
#define _DAT_0064dcb8 GLOBAL_AT(int, 0x0064dcb8)
#define _DAT_0064dcbc GLOBAL_AT(int, 0x0064dcbc)
#define _DAT_0064dcc0 GLOBAL_AT(int, 0x0064dcc0)
#define _DAT_0064dcc4 GLOBAL_AT(int, 0x0064dcc4)
#define _DAT_0064dcc8 GLOBAL_AT(int, 0x0064dcc8)
#define _DAT_0064dce0 GLOBAL_AT(int, 0x0064dce0)
#define DAT_0064f714 GLOBAL_AT(int, 0x0064f714)
#define _DAT_0064dce4 GLOBAL_AT(int, 0x0064dce4)
#define _DAT_0064dce8 GLOBAL_AT(int, 0x0064dce8)
#define _DAT_0064dcec GLOBAL_AT(int, 0x0064dcec)
#define _DAT_0064dcf0 GLOBAL_AT(int, 0x0064dcf0)
#define _DAT_0064dcf4 GLOBAL_AT(int, 0x0064dcf4)
#define _DAT_0064dcf8 GLOBAL_AT(int, 0x0064dcf8)
#define _DAT_0064dcfc GLOBAL_AT(int, 0x0064dcfc)
#define _DAT_0064dd00 GLOBAL_AT(int, 0x0064dd00)
#define _DAT_0064dd04 GLOBAL_AT(int, 0x0064dd04)
#define _DAT_0064dd08 GLOBAL_AT(int, 0x0064dd08)
#define _DAT_0064dd20 GLOBAL_AT(int, 0x0064dd20)
#define DAT_0064f70c GLOBAL_AT(int, 0x0064f70c)
#define _DAT_0064dd24 GLOBAL_AT(int, 0x0064dd24)
#define _DAT_0064dd28 GLOBAL_AT(int, 0x0064dd28)
#define _DAT_0064dd2c GLOBAL_AT(int, 0x0064dd2c)
#define _DAT_0064dd30 GLOBAL_AT(int, 0x0064dd30)
#define _DAT_0064dd34 GLOBAL_AT(int, 0x0064dd34)
#define _DAT_0064dd38 GLOBAL_AT(int, 0x0064dd38)
#define _DAT_0064dd3c GLOBAL_AT(int, 0x0064dd3c)
#define _DAT_0064dd40 GLOBAL_AT(int, 0x0064dd40)
#define _DAT_0064dd44 GLOBAL_AT(int, 0x0064dd44)
#define _DAT_0064dd48 GLOBAL_AT(int, 0x0064dd48)
#define _DAT_0064dd60 GLOBAL_AT(int, 0x0064dd60)
#define DAT_0064f704 GLOBAL_AT(int, 0x0064f704)
#define _DAT_0064dd64 GLOBAL_AT(int, 0x0064dd64)
#define _DAT_0064dd68 GLOBAL_AT(int, 0x0064dd68)
#define _DAT_0064dd6c GLOBAL_AT(int, 0x0064dd6c)
#define _DAT_0064dd70 GLOBAL_AT(int, 0x0064dd70)
#define _DAT_0064dd74 GLOBAL_AT(int, 0x0064dd74)
#define _DAT_0064dd78 GLOBAL_AT(int, 0x0064dd78)
#define _DAT_0064dd7c GLOBAL_AT(int, 0x0064dd7c)
#define _DAT_0064dd80 GLOBAL_AT(int, 0x0064dd80)
#define _DAT_0064dd84 GLOBAL_AT(int, 0x0064dd84)
#define _DAT_0064dd88 GLOBAL_AT(int, 0x0064dd88)
#define _DAT_0064dd94 GLOBAL_AT(int, 0x0064dd94)
#define _DAT_0064dd98 GLOBAL_AT(int, 0x0064dd98)
#define _DAT_0064dd9c GLOBAL_AT(int, 0x0064dd9c)
#define _DAT_0064ddd0 GLOBAL_AT(int, 0x0064ddd0)
#define _DAT_0064ddd4 GLOBAL_AT(int, 0x0064ddd4)
#define _DAT_0064ddd8 GLOBAL_AT(int, 0x0064ddd8)
#define _DAT_0064dddc GLOBAL_AT(int, 0x0064dddc)
#define _DAT_0064de10 GLOBAL_AT(int, 0x0064de10)
#define _DAT_0064de14 GLOBAL_AT(int, 0x0064de14)
#define _DAT_0064de18 GLOBAL_AT(int, 0x0064de18)
#define _DAT_0064de1c GLOBAL_AT(int, 0x0064de1c)
#define _DAT_0064de50 GLOBAL_AT(int, 0x0064de50)
#define _DAT_0064de54 GLOBAL_AT(int, 0x0064de54)
#define _DAT_0064de58 GLOBAL_AT(int, 0x0064de58)
#define _DAT_0064de5c GLOBAL_AT(int, 0x0064de5c)
#define _DAT_0064de90 GLOBAL_AT(int, 0x0064de90)
#define _DAT_0064dda0 GLOBAL_AT(int, 0x0064dda0)
#define DAT_0064f6fc GLOBAL_AT(int, 0x0064f6fc)
#define _DAT_0064dda4 GLOBAL_AT(int, 0x0064dda4)
#define _DAT_0064dda8 GLOBAL_AT(int, 0x0064dda8)
#define _DAT_0064ddac GLOBAL_AT(int, 0x0064ddac)
#define _DAT_0064ddb0 GLOBAL_AT(int, 0x0064ddb0)
#define _DAT_0064ddb4 GLOBAL_AT(int, 0x0064ddb4)
#define _DAT_0064ddb8 GLOBAL_AT(int, 0x0064ddb8)
#define _DAT_0064ddbc GLOBAL_AT(int, 0x0064ddbc)
#define _DAT_0064ddc0 GLOBAL_AT(int, 0x0064ddc0)
#define _DAT_0064ddc4 GLOBAL_AT(int, 0x0064ddc4)
#define _DAT_0064ddc8 GLOBAL_AT(int, 0x0064ddc8)
#define _DAT_0064dde0 GLOBAL_AT(int, 0x0064dde0)
#define _DAT_0064dde4 GLOBAL_AT(int, 0x0064dde4)
#define _DAT_0064dde8 GLOBAL_AT(int, 0x0064dde8)
#define _DAT_0064ddec GLOBAL_AT(int, 0x0064ddec)
#define _DAT_0064ddf0 GLOBAL_AT(int, 0x0064ddf0)
#define _DAT_0064ddf4 GLOBAL_AT(int, 0x0064ddf4)
#define _DAT_0064ddf8 GLOBAL_AT(int, 0x0064ddf8)
#define _DAT_0064ddfc GLOBAL_AT(int, 0x0064ddfc)
#define _DAT_0064de00 GLOBAL_AT(int, 0x0064de00)
#define _DAT_0064de04 GLOBAL_AT(int, 0x0064de04)
#define _DAT_0064de08 GLOBAL_AT(int, 0x0064de08)
#define _DAT_0064de20 GLOBAL_AT(int, 0x0064de20)
#define _DAT_0064de24 GLOBAL_AT(int, 0x0064de24)
#define _DAT_0064de28 GLOBAL_AT(int, 0x0064de28)
#define _DAT_0064de2c GLOBAL_AT(int, 0x0064de2c)
#define _DAT_0064de30 GLOBAL_AT(int, 0x0064de30)
#define _DAT_0064de34 GLOBAL_AT(int, 0x0064de34)
#define _DAT_0064de38 GLOBAL_AT(int, 0x0064de38)
#define _DAT_0064de3c GLOBAL_AT(int, 0x0064de3c)
#define _DAT_0064de40 GLOBAL_AT(int, 0x0064de40)
#define _DAT_0064de44 GLOBAL_AT(int, 0x0064de44)
#define _DAT_0064de48 GLOBAL_AT(int, 0x0064de48)
#define _DAT_0064de60 GLOBAL_AT(int, 0x0064de60)
#define _DAT_0064de64 GLOBAL_AT(int, 0x0064de64)
#define _DAT_0064de68 GLOBAL_AT(int, 0x0064de68)
#define _DAT_0064de6c GLOBAL_AT(int, 0x0064de6c)
#define _DAT_0064de70 GLOBAL_AT(int, 0x0064de70)
#define _DAT_0064de74 GLOBAL_AT(int, 0x0064de74)
#define _DAT_0064de78 GLOBAL_AT(int, 0x0064de78)
#define _DAT_0064de7c GLOBAL_AT(int, 0x0064de7c)
#define _DAT_0064de80 GLOBAL_AT(int, 0x0064de80)
#define _DAT_0064de84 GLOBAL_AT(int, 0x0064de84)
#define _DAT_0064de88 GLOBAL_AT(int, 0x0064de88)
#define _DAT_0064de94 GLOBAL_AT(int, 0x0064de94)
#define _DAT_0064de98 GLOBAL_AT(int, 0x0064de98)
#define _DAT_0064de9c GLOBAL_AT(int, 0x0064de9c)
#define _DAT_0064dea0 GLOBAL_AT(int, 0x0064dea0)
#define _DAT_0064dea4 GLOBAL_AT(int, 0x0064dea4)
#define _DAT_0064dea8 GLOBAL_AT(int, 0x0064dea8)
#define _DAT_0064deac GLOBAL_AT(int, 0x0064deac)
#define _DAT_0064deb0 GLOBAL_AT(int, 0x0064deb0)
#define _DAT_0064deb4 GLOBAL_AT(int, 0x0064deb4)
#define _DAT_0064deb8 GLOBAL_AT(int, 0x0064deb8)
#define _DAT_0064debc GLOBAL_AT(int, 0x0064debc)
#define _DAT_0064dec0 GLOBAL_AT(int, 0x0064dec0)
#define _DAT_0064dec4 GLOBAL_AT(int, 0x0064dec4)
#define _DAT_0064dec8 GLOBAL_AT(int, 0x0064dec8)
#define _DAT_0064ded0 GLOBAL_AT(int, 0x0064ded0)
#define _DAT_0064ded4 GLOBAL_AT(int, 0x0064ded4)
#define _DAT_0064ded8 GLOBAL_AT(int, 0x0064ded8)
#define _DAT_0064dedc GLOBAL_AT(int, 0x0064dedc)
#define _DAT_0064df10 GLOBAL_AT(int, 0x0064df10)
#define _DAT_0064df14 GLOBAL_AT(int, 0x0064df14)
#define _DAT_0064df18 GLOBAL_AT(int, 0x0064df18)
#define _DAT_0064df1c GLOBAL_AT(int, 0x0064df1c)
#define _DAT_0064df50 GLOBAL_AT(int, 0x0064df50)
#define _DAT_0064df54 GLOBAL_AT(int, 0x0064df54)
#define _DAT_0064df58 GLOBAL_AT(int, 0x0064df58)
#define _DAT_0064df5c GLOBAL_AT(int, 0x0064df5c)
#define _DAT_0064df90 GLOBAL_AT(int, 0x0064df90)
#define _DAT_0064df94 GLOBAL_AT(int, 0x0064df94)
#define _DAT_0064df98 GLOBAL_AT(int, 0x0064df98)
#define _DAT_0064df9c GLOBAL_AT(int, 0x0064df9c)
#define _DAT_0064dfd0 GLOBAL_AT(int, 0x0064dfd0)
#define _DAT_0064dee0 GLOBAL_AT(int, 0x0064dee0)
#define _DAT_0064dee4 GLOBAL_AT(int, 0x0064dee4)
#define _DAT_0064dee8 GLOBAL_AT(int, 0x0064dee8)
#define _DAT_0064deec GLOBAL_AT(int, 0x0064deec)
#define _DAT_0064def0 GLOBAL_AT(int, 0x0064def0)
#define _DAT_0064def4 GLOBAL_AT(int, 0x0064def4)
#define _DAT_0064def8 GLOBAL_AT(int, 0x0064def8)
#define _DAT_0064defc GLOBAL_AT(int, 0x0064defc)
#define _DAT_0064df00 GLOBAL_AT(int, 0x0064df00)
#define _DAT_0064df04 GLOBAL_AT(int, 0x0064df04)
#define _DAT_0064df08 GLOBAL_AT(int, 0x0064df08)
#define _DAT_0064df20 GLOBAL_AT(int, 0x0064df20)
#define _DAT_0064df24 GLOBAL_AT(int, 0x0064df24)
#define _DAT_0064df28 GLOBAL_AT(int, 0x0064df28)
#define _DAT_0064df2c GLOBAL_AT(int, 0x0064df2c)
#define _DAT_0064df30 GLOBAL_AT(int, 0x0064df30)
#define _DAT_0064df34 GLOBAL_AT(int, 0x0064df34)
#define _DAT_0064df38 GLOBAL_AT(int, 0x0064df38)
#define _DAT_0064df3c GLOBAL_AT(int, 0x0064df3c)
#define _DAT_0064df40 GLOBAL_AT(int, 0x0064df40)
#define _DAT_0064df44 GLOBAL_AT(int, 0x0064df44)
#define _DAT_0064df48 GLOBAL_AT(int, 0x0064df48)
#define _DAT_0064df60 GLOBAL_AT(int, 0x0064df60)
#define _DAT_0064df64 GLOBAL_AT(int, 0x0064df64)
#define _DAT_0064df68 GLOBAL_AT(int, 0x0064df68)
#define _DAT_0064df6c GLOBAL_AT(int, 0x0064df6c)
#define _DAT_0064df70 GLOBAL_AT(int, 0x0064df70)
#define _DAT_0064df74 GLOBAL_AT(int, 0x0064df74)
#define _DAT_0064df78 GLOBAL_AT(int, 0x0064df78)
#define _DAT_0064df7c GLOBAL_AT(int, 0x0064df7c)
#define _DAT_0064df80 GLOBAL_AT(int, 0x0064df80)
#define _DAT_0064df84 GLOBAL_AT(int, 0x0064df84)
#define _DAT_0064df88 GLOBAL_AT(int, 0x0064df88)
#define _DAT_0064dfa0 GLOBAL_AT(int, 0x0064dfa0)
#define _DAT_0064dfa4 GLOBAL_AT(int, 0x0064dfa4)
#define _DAT_0064dfa8 GLOBAL_AT(int, 0x0064dfa8)
#define _DAT_0064dfac GLOBAL_AT(int, 0x0064dfac)
#define _DAT_0064dfb0 GLOBAL_AT(int, 0x0064dfb0)
#define _DAT_0064dfb4 GLOBAL_AT(int, 0x0064dfb4)
#define _DAT_0064dfb8 GLOBAL_AT(int, 0x0064dfb8)
#define _DAT_0064dfbc GLOBAL_AT(int, 0x0064dfbc)
#define _DAT_0064dfc0 GLOBAL_AT(int, 0x0064dfc0)
#define _DAT_0064dfc4 GLOBAL_AT(int, 0x0064dfc4)
#define _DAT_0064dfc8 GLOBAL_AT(int, 0x0064dfc8)
#define _DAT_0064dfd4 GLOBAL_AT(int, 0x0064dfd4)
#define _DAT_0064dfd8 GLOBAL_AT(int, 0x0064dfd8)
#define _DAT_0064dfdc GLOBAL_AT(int, 0x0064dfdc)
#define _DAT_0064dfe0 GLOBAL_AT(int, 0x0064dfe0)
#define _DAT_0064dfe4 GLOBAL_AT(int, 0x0064dfe4)
#define _DAT_0064dfe8 GLOBAL_AT(int, 0x0064dfe8)
#define _DAT_0064dfec GLOBAL_AT(int, 0x0064dfec)
#define _DAT_0064dff0 GLOBAL_AT(int, 0x0064dff0)
#define _DAT_0064dff4 GLOBAL_AT(int, 0x0064dff4)
#define _DAT_0064dff8 GLOBAL_AT(int, 0x0064dff8)
#define _DAT_0064e010 GLOBAL_AT(int, 0x0064e010)
#define _DAT_0064e014 GLOBAL_AT(int, 0x0064e014)
#define _DAT_0064e018 GLOBAL_AT(int, 0x0064e018)
#define _DAT_0064e01c GLOBAL_AT(int, 0x0064e01c)
#define _DAT_0064e050 GLOBAL_AT(int, 0x0064e050)
#define _DAT_0064e054 GLOBAL_AT(int, 0x0064e054)
#define _DAT_0064e058 GLOBAL_AT(int, 0x0064e058)
#define _DAT_0064e05c GLOBAL_AT(int, 0x0064e05c)
#define _DAT_0064e090 GLOBAL_AT(int, 0x0064e090)
#define _DAT_0064e094 GLOBAL_AT(int, 0x0064e094)
#define _DAT_0064e098 GLOBAL_AT(int, 0x0064e098)
#define _DAT_0064e09c GLOBAL_AT(int, 0x0064e09c)
#define _DAT_0064e0d0 GLOBAL_AT(int, 0x0064e0d0)
#define _DAT_0064e0d4 GLOBAL_AT(int, 0x0064e0d4)
#define _DAT_0064e0d8 GLOBAL_AT(int, 0x0064e0d8)
#define _DAT_0064e0dc GLOBAL_AT(int, 0x0064e0dc)
#define _DAT_0064e110 GLOBAL_AT(int, 0x0064e110)
#define _DAT_0064dffc GLOBAL_AT(int, 0x0064dffc)
#define _DAT_0064e000 GLOBAL_AT(int, 0x0064e000)
#define _DAT_0064e004 GLOBAL_AT(int, 0x0064e004)
#define _DAT_0064e008 GLOBAL_AT(int, 0x0064e008)
#define _DAT_0064e020 GLOBAL_AT(int, 0x0064e020)
#define DAT_0064f684 GLOBAL_AT(int, 0x0064f684)
#define _DAT_0064e024 GLOBAL_AT(int, 0x0064e024)
#define _DAT_0064e028 GLOBAL_AT(int, 0x0064e028)
#define _DAT_0064e02c GLOBAL_AT(int, 0x0064e02c)
#define _DAT_0064e030 GLOBAL_AT(int, 0x0064e030)
#define _DAT_0064e034 GLOBAL_AT(int, 0x0064e034)
#define _DAT_0064e038 GLOBAL_AT(int, 0x0064e038)
#define _DAT_0064e03c GLOBAL_AT(int, 0x0064e03c)
#define _DAT_0064e040 GLOBAL_AT(int, 0x0064e040)
#define _DAT_0064e044 GLOBAL_AT(int, 0x0064e044)
#define _DAT_0064e048 GLOBAL_AT(int, 0x0064e048)
#define _DAT_0064e060 GLOBAL_AT(int, 0x0064e060)
#define _DAT_0064e064 GLOBAL_AT(int, 0x0064e064)
#define _DAT_0064e068 GLOBAL_AT(int, 0x0064e068)
#define _DAT_0064e06c GLOBAL_AT(int, 0x0064e06c)
#define _DAT_0064e070 GLOBAL_AT(int, 0x0064e070)
#define _DAT_0064e074 GLOBAL_AT(int, 0x0064e074)
#define _DAT_0064e078 GLOBAL_AT(int, 0x0064e078)
#define _DAT_0064e07c GLOBAL_AT(int, 0x0064e07c)
#define _DAT_0064e080 GLOBAL_AT(int, 0x0064e080)
#define _DAT_0064e084 GLOBAL_AT(int, 0x0064e084)
#define _DAT_0064e088 GLOBAL_AT(int, 0x0064e088)
#define _DAT_0064e0a0 GLOBAL_AT(int, 0x0064e0a0)
#define DAT_0064f66c GLOBAL_AT(int, 0x0064f66c)
#define _DAT_0064e0a4 GLOBAL_AT(int, 0x0064e0a4)
#define _DAT_0064e0a8 GLOBAL_AT(int, 0x0064e0a8)
#define _DAT_0064e0ac GLOBAL_AT(int, 0x0064e0ac)
#define _DAT_0064e0b0 GLOBAL_AT(int, 0x0064e0b0)
#define _DAT_0064e0b4 GLOBAL_AT(int, 0x0064e0b4)
#define _DAT_0064e0b8 GLOBAL_AT(int, 0x0064e0b8)
#define _DAT_0064e0bc GLOBAL_AT(int, 0x0064e0bc)
#define _DAT_0064e0c0 GLOBAL_AT(int, 0x0064e0c0)
#define _DAT_0064e0c4 GLOBAL_AT(int, 0x0064e0c4)
#define _DAT_0064e0c8 GLOBAL_AT(int, 0x0064e0c8)
#define _DAT_0064e0e0 GLOBAL_AT(int, 0x0064e0e0)
#define _DAT_0064e0e4 GLOBAL_AT(int, 0x0064e0e4)
#define _DAT_0064e0e8 GLOBAL_AT(int, 0x0064e0e8)
#define _DAT_0064e0ec GLOBAL_AT(int, 0x0064e0ec)
#define _DAT_0064e0f0 GLOBAL_AT(int, 0x0064e0f0)
#define _DAT_0064e0f4 GLOBAL_AT(int, 0x0064e0f4)
#define _DAT_0064e0f8 GLOBAL_AT(int, 0x0064e0f8)
#define _DAT_0064e0fc GLOBAL_AT(int, 0x0064e0fc)
#define _DAT_0064e100 GLOBAL_AT(int, 0x0064e100)
#define _DAT_0064e104 GLOBAL_AT(int, 0x0064e104)
#define _DAT_0064e108 GLOBAL_AT(int, 0x0064e108)
#define _DAT_0064e114 GLOBAL_AT(int, 0x0064e114)
#define _DAT_0064e118 GLOBAL_AT(int, 0x0064e118)
#define _DAT_0064e11c GLOBAL_AT(int, 0x0064e11c)
#define _DAT_0064e120 GLOBAL_AT(int, 0x0064e120)
#define _DAT_0064e124 GLOBAL_AT(int, 0x0064e124)
#define _DAT_0064e128 GLOBAL_AT(int, 0x0064e128)
#define _DAT_0064e150 GLOBAL_AT(int, 0x0064e150)
#define _DAT_0064e154 GLOBAL_AT(int, 0x0064e154)
#define _DAT_0064e158 GLOBAL_AT(int, 0x0064e158)
#define _DAT_0064e15c GLOBAL_AT(int, 0x0064e15c)
#define _DAT_0064e190 GLOBAL_AT(int, 0x0064e190)
#define _DAT_0064e194 GLOBAL_AT(int, 0x0064e194)
#define _DAT_0064e198 GLOBAL_AT(int, 0x0064e198)
#define _DAT_0064e19c GLOBAL_AT(int, 0x0064e19c)
#define _DAT_0064e1d0 GLOBAL_AT(int, 0x0064e1d0)
#define _DAT_0064e1d4 GLOBAL_AT(int, 0x0064e1d4)
#define _DAT_0064e1d8 GLOBAL_AT(int, 0x0064e1d8)
#define _DAT_0064e1dc GLOBAL_AT(int, 0x0064e1dc)
#define _DAT_0064e210 GLOBAL_AT(int, 0x0064e210)
#define _DAT_0064e214 GLOBAL_AT(int, 0x0064e214)
#define _DAT_0064e218 GLOBAL_AT(int, 0x0064e218)
#define _DAT_0064e21c GLOBAL_AT(int, 0x0064e21c)
#define _DAT_0064e250 GLOBAL_AT(int, 0x0064e250)
#define _DAT_0064e12c GLOBAL_AT(int, 0x0064e12c)
#define _DAT_0064e130 GLOBAL_AT(int, 0x0064e130)
#define _DAT_0064e134 GLOBAL_AT(int, 0x0064e134)
#define _DAT_0064e138 GLOBAL_AT(int, 0x0064e138)
#define _DAT_0064e13c GLOBAL_AT(int, 0x0064e13c)
#define _DAT_0064e140 GLOBAL_AT(int, 0x0064e140)
#define _DAT_0064e144 GLOBAL_AT(int, 0x0064e144)
#define _DAT_0064e148 GLOBAL_AT(int, 0x0064e148)
#define _DAT_0064e160 GLOBAL_AT(int, 0x0064e160)
#define _DAT_0064e164 GLOBAL_AT(int, 0x0064e164)
#define _DAT_0064e168 GLOBAL_AT(int, 0x0064e168)
#define _DAT_0064e16c GLOBAL_AT(int, 0x0064e16c)
#define _DAT_0064e170 GLOBAL_AT(int, 0x0064e170)
#define _DAT_0064e174 GLOBAL_AT(int, 0x0064e174)
#define _DAT_0064e178 GLOBAL_AT(int, 0x0064e178)
#define _DAT_0064e17c GLOBAL_AT(int, 0x0064e17c)
#define _DAT_0064e180 GLOBAL_AT(int, 0x0064e180)
#define _DAT_0064e184 GLOBAL_AT(int, 0x0064e184)
#define _DAT_0064e188 GLOBAL_AT(int, 0x0064e188)
#define _DAT_0064e1a0 GLOBAL_AT(int, 0x0064e1a0)
#define _DAT_0064e1a4 GLOBAL_AT(int, 0x0064e1a4)
#define _DAT_0064e1a8 GLOBAL_AT(int, 0x0064e1a8)
#define _DAT_0064e1ac GLOBAL_AT(int, 0x0064e1ac)
#define _DAT_0064e1b0 GLOBAL_AT(int, 0x0064e1b0)
#define _DAT_0064e1b4 GLOBAL_AT(int, 0x0064e1b4)
#define _DAT_0064e1b8 GLOBAL_AT(int, 0x0064e1b8)
#define _DAT_0064e1bc GLOBAL_AT(int, 0x0064e1bc)
#define _DAT_0064e1c0 GLOBAL_AT(int, 0x0064e1c0)
#define _DAT_0064e1c4 GLOBAL_AT(int, 0x0064e1c4)
#define _DAT_0064e1c8 GLOBAL_AT(int, 0x0064e1c8)
#define _DAT_0064e1e0 GLOBAL_AT(int, 0x0064e1e0)
#define _DAT_0064e1e4 GLOBAL_AT(int, 0x0064e1e4)
#define _DAT_0064e1e8 GLOBAL_AT(int, 0x0064e1e8)
#define _DAT_0064e1ec GLOBAL_AT(int, 0x0064e1ec)
#define _DAT_0064e1f0 GLOBAL_AT(int, 0x0064e1f0)
#define _DAT_0064e1f4 GLOBAL_AT(int, 0x0064e1f4)
#define _DAT_0064e1f8 GLOBAL_AT(int, 0x0064e1f8)
#define _DAT_0064e1fc GLOBAL_AT(int, 0x0064e1fc)
#define _DAT_0064e200 GLOBAL_AT(int, 0x0064e200)
#define _DAT_0064e204 GLOBAL_AT(int, 0x0064e204)
#define _DAT_0064e208 GLOBAL_AT(int, 0x0064e208)
#define _DAT_0064e220 GLOBAL_AT(int, 0x0064e220)
#define _DAT_0064e224 GLOBAL_AT(int, 0x0064e224)
#define _DAT_0064e228 GLOBAL_AT(int, 0x0064e228)
#define _DAT_0064e22c GLOBAL_AT(int, 0x0064e22c)
#define _DAT_0064e230 GLOBAL_AT(int, 0x0064e230)
#define _DAT_0064e234 GLOBAL_AT(int, 0x0064e234)
#define _DAT_0064e238 GLOBAL_AT(int, 0x0064e238)
#define _DAT_0064e23c GLOBAL_AT(int, 0x0064e23c)
#define _DAT_0064e240 GLOBAL_AT(int, 0x0064e240)
#define _DAT_0064e244 GLOBAL_AT(int, 0x0064e244)
#define _DAT_0064e248 GLOBAL_AT(int, 0x0064e248)
#define _DAT_0064e254 GLOBAL_AT(int, 0x0064e254)
#define _DAT_0064e258 GLOBAL_AT(int, 0x0064e258)
#define _DAT_0064e25c GLOBAL_AT(int, 0x0064e25c)
#define _DAT_0064e260 GLOBAL_AT(int, 0x0064e260)
#define _DAT_0064e290 GLOBAL_AT(int, 0x0064e290)
#define _DAT_0064e294 GLOBAL_AT(int, 0x0064e294)
#define _DAT_0064e298 GLOBAL_AT(int, 0x0064e298)
#define _DAT_0064e29c GLOBAL_AT(int, 0x0064e29c)
#define _DAT_0064e2d0 GLOBAL_AT(int, 0x0064e2d0)
#define _DAT_0064e2d4 GLOBAL_AT(int, 0x0064e2d4)
#define _DAT_0064e2d8 GLOBAL_AT(int, 0x0064e2d8)
#define _DAT_0064e2dc GLOBAL_AT(int, 0x0064e2dc)
#define _DAT_0064e310 GLOBAL_AT(int, 0x0064e310)
#define _DAT_0064e314 GLOBAL_AT(int, 0x0064e314)
#define _DAT_0064e318 GLOBAL_AT(int, 0x0064e318)
#define _DAT_0064e31c GLOBAL_AT(int, 0x0064e31c)
#define _DAT_0064e350 GLOBAL_AT(int, 0x0064e350)
#define _DAT_0064e264 GLOBAL_AT(int, 0x0064e264)
#define _DAT_0064e268 GLOBAL_AT(int, 0x0064e268)
#define _DAT_0064e26c GLOBAL_AT(int, 0x0064e26c)
#define _DAT_0064e270 GLOBAL_AT(int, 0x0064e270)
#define _DAT_0064e274 GLOBAL_AT(int, 0x0064e274)
#define _DAT_0064e278 GLOBAL_AT(int, 0x0064e278)
#define _DAT_0064e27c GLOBAL_AT(int, 0x0064e27c)
#define _DAT_0064e280 GLOBAL_AT(int, 0x0064e280)
#define _DAT_0064e284 GLOBAL_AT(int, 0x0064e284)
#define _DAT_0064e288 GLOBAL_AT(int, 0x0064e288)
#define _DAT_0064e2a0 GLOBAL_AT(int, 0x0064e2a0)
#define _DAT_0064e2a4 GLOBAL_AT(int, 0x0064e2a4)
#define _DAT_0064e2a8 GLOBAL_AT(int, 0x0064e2a8)
#define _DAT_0064e2ac GLOBAL_AT(int, 0x0064e2ac)
#define _DAT_0064e2b0 GLOBAL_AT(int, 0x0064e2b0)
#define _DAT_0064e2b4 GLOBAL_AT(int, 0x0064e2b4)
#define _DAT_0064e2b8 GLOBAL_AT(int, 0x0064e2b8)
#define _DAT_0064e2bc GLOBAL_AT(int, 0x0064e2bc)
#define _DAT_0064e2c0 GLOBAL_AT(int, 0x0064e2c0)
#define _DAT_0064e2c4 GLOBAL_AT(int, 0x0064e2c4)
#define _DAT_0064e2c8 GLOBAL_AT(int, 0x0064e2c8)
#define _DAT_0064e2e0 GLOBAL_AT(int, 0x0064e2e0)
#define _DAT_0064e2e4 GLOBAL_AT(int, 0x0064e2e4)
#define _DAT_0064e2e8 GLOBAL_AT(int, 0x0064e2e8)
#define _DAT_0064e2ec GLOBAL_AT(int, 0x0064e2ec)
#define _DAT_0064e2f0 GLOBAL_AT(int, 0x0064e2f0)
#define _DAT_0064e2f4 GLOBAL_AT(int, 0x0064e2f4)
#define _DAT_0064e2f8 GLOBAL_AT(int, 0x0064e2f8)
#define _DAT_0064e2fc GLOBAL_AT(int, 0x0064e2fc)
#define _DAT_0064e300 GLOBAL_AT(int, 0x0064e300)
#define _DAT_0064e304 GLOBAL_AT(int, 0x0064e304)
#define _DAT_0064e308 GLOBAL_AT(int, 0x0064e308)
#define _DAT_0064e320 GLOBAL_AT(int, 0x0064e320)
#define _DAT_0064e324 GLOBAL_AT(int, 0x0064e324)
#define _DAT_0064e328 GLOBAL_AT(int, 0x0064e328)
#define _DAT_0064e32c GLOBAL_AT(int, 0x0064e32c)
#define _DAT_0064e330 GLOBAL_AT(int, 0x0064e330)
#define _DAT_0064e334 GLOBAL_AT(int, 0x0064e334)
#define _DAT_0064e338 GLOBAL_AT(int, 0x0064e338)
#define _DAT_0064e33c GLOBAL_AT(int, 0x0064e33c)
#define _DAT_0064e340 GLOBAL_AT(int, 0x0064e340)
#define _DAT_0064e344 GLOBAL_AT(int, 0x0064e344)
#define _DAT_0064e348 GLOBAL_AT(int, 0x0064e348)
#define _DAT_0064e354 GLOBAL_AT(int, 0x0064e354)
#define _DAT_0064e358 GLOBAL_AT(int, 0x0064e358)
#define _DAT_0064e35c GLOBAL_AT(int, 0x0064e35c)
#define _DAT_0064e360 GLOBAL_AT(int, 0x0064e360)
#define _DAT_0064e364 GLOBAL_AT(int, 0x0064e364)
#define _DAT_0064e368 GLOBAL_AT(int, 0x0064e368)
#define _DAT_0064e36c GLOBAL_AT(int, 0x0064e36c)
#define _DAT_0064e370 GLOBAL_AT(int, 0x0064e370)
#define _DAT_0064e374 GLOBAL_AT(int, 0x0064e374)
#define _DAT_0064e378 GLOBAL_AT(int, 0x0064e378)
#define _DAT_0064e37c GLOBAL_AT(int, 0x0064e37c)
#define _DAT_0064e380 GLOBAL_AT(int, 0x0064e380)
#define _DAT_0064e384 GLOBAL_AT(int, 0x0064e384)
#define _DAT_0064e388 GLOBAL_AT(int, 0x0064e388)
#define _DAT_0064e3a0 GLOBAL_AT(int, 0x0064e3a0)
#define _DAT_0064e390 GLOBAL_AT(int, 0x0064e390)
#define _DAT_0064e394 GLOBAL_AT(int, 0x0064e394)
#define _DAT_0064e398 GLOBAL_AT(int, 0x0064e398)
#define _DAT_0064e39c GLOBAL_AT(int, 0x0064e39c)
#define _DAT_0064e3d0 GLOBAL_AT(int, 0x0064e3d0)
#define _DAT_0064e3d4 GLOBAL_AT(int, 0x0064e3d4)
#define _DAT_0064e3d8 GLOBAL_AT(int, 0x0064e3d8)
#define _DAT_0064e3dc GLOBAL_AT(int, 0x0064e3dc)
#define _DAT_0064e410 GLOBAL_AT(int, 0x0064e410)
#define _DAT_0064e414 GLOBAL_AT(int, 0x0064e414)
#define _DAT_0064e418 GLOBAL_AT(int, 0x0064e418)
#define _DAT_0064e41c GLOBAL_AT(int, 0x0064e41c)
#define _DAT_0064e450 GLOBAL_AT(int, 0x0064e450)
#define _DAT_0064e454 GLOBAL_AT(int, 0x0064e454)
#define _DAT_0064e458 GLOBAL_AT(int, 0x0064e458)
#define _DAT_0064e45c GLOBAL_AT(int, 0x0064e45c)
#define _DAT_0064e490 GLOBAL_AT(int, 0x0064e490)
#define _DAT_0064e3a4 GLOBAL_AT(int, 0x0064e3a4)
#define _DAT_0064e3a8 GLOBAL_AT(int, 0x0064e3a8)
#define _DAT_0064e3ac GLOBAL_AT(int, 0x0064e3ac)
#define _DAT_0064e3b0 GLOBAL_AT(int, 0x0064e3b0)
#define _DAT_0064e3b4 GLOBAL_AT(int, 0x0064e3b4)
#define _DAT_0064e3b8 GLOBAL_AT(int, 0x0064e3b8)
#define _DAT_0064e3bc GLOBAL_AT(int, 0x0064e3bc)
#define _DAT_0064e3c0 GLOBAL_AT(int, 0x0064e3c0)
#define _DAT_0064e3c4 GLOBAL_AT(int, 0x0064e3c4)
#define _DAT_0064e3c8 GLOBAL_AT(int, 0x0064e3c8)
#define _DAT_0064e3e0 GLOBAL_AT(int, 0x0064e3e0)
#define _DAT_0064e3e4 GLOBAL_AT(int, 0x0064e3e4)
#define _DAT_0064e3e8 GLOBAL_AT(int, 0x0064e3e8)
#define _DAT_0064e3ec GLOBAL_AT(int, 0x0064e3ec)
#define _DAT_0064e3f0 GLOBAL_AT(int, 0x0064e3f0)
#define _DAT_0064e3f4 GLOBAL_AT(int, 0x0064e3f4)
#define _DAT_0064e3f8 GLOBAL_AT(int, 0x0064e3f8)
#define _DAT_0064e3fc GLOBAL_AT(int, 0x0064e3fc)
#define _DAT_0064e400 GLOBAL_AT(int, 0x0064e400)
#define _DAT_0064e404 GLOBAL_AT(int, 0x0064e404)
#define _DAT_0064e408 GLOBAL_AT(int, 0x0064e408)
#define _DAT_0064e420 GLOBAL_AT(int, 0x0064e420)
#define _DAT_0064e424 GLOBAL_AT(int, 0x0064e424)
#define _DAT_0064e428 GLOBAL_AT(int, 0x0064e428)
#define _DAT_0064e42c GLOBAL_AT(int, 0x0064e42c)
#define _DAT_0064e430 GLOBAL_AT(int, 0x0064e430)
#define _DAT_0064e434 GLOBAL_AT(int, 0x0064e434)
#define _DAT_0064e438 GLOBAL_AT(int, 0x0064e438)
#define _DAT_0064e43c GLOBAL_AT(int, 0x0064e43c)
#define _DAT_0064e440 GLOBAL_AT(int, 0x0064e440)
#define _DAT_0064e444 GLOBAL_AT(int, 0x0064e444)
#define _DAT_0064e448 GLOBAL_AT(int, 0x0064e448)
#define _DAT_0064e460 GLOBAL_AT(int, 0x0064e460)
#define _DAT_0064e464 GLOBAL_AT(int, 0x0064e464)
#define _DAT_0064e468 GLOBAL_AT(int, 0x0064e468)
#define _DAT_0064e46c GLOBAL_AT(int, 0x0064e46c)
#define _DAT_0064e470 GLOBAL_AT(int, 0x0064e470)
#define _DAT_0064e474 GLOBAL_AT(int, 0x0064e474)
#define _DAT_0064e478 GLOBAL_AT(int, 0x0064e478)
#define _DAT_0064e47c GLOBAL_AT(int, 0x0064e47c)
#define _DAT_0064e480 GLOBAL_AT(int, 0x0064e480)
#define _DAT_0064e484 GLOBAL_AT(int, 0x0064e484)
#define _DAT_0064e488 GLOBAL_AT(int, 0x0064e488)
#define _DAT_0064e494 GLOBAL_AT(int, 0x0064e494)
#define _DAT_0064e498 GLOBAL_AT(int, 0x0064e498)
#define _DAT_0064e49c GLOBAL_AT(int, 0x0064e49c)
#define _DAT_0064e4a0 GLOBAL_AT(int, 0x0064e4a0)
#define _DAT_0064e4a4 GLOBAL_AT(int, 0x0064e4a4)
#define _DAT_0064e4a8 GLOBAL_AT(int, 0x0064e4a8)
#define _DAT_0064e4ac GLOBAL_AT(int, 0x0064e4ac)
#define _DAT_0064e4b0 GLOBAL_AT(int, 0x0064e4b0)
#define _DAT_0064e4b4 GLOBAL_AT(int, 0x0064e4b4)
#define _DAT_0064e4b8 GLOBAL_AT(int, 0x0064e4b8)
#define _DAT_0064e4bc GLOBAL_AT(int, 0x0064e4bc)
#define _DAT_0064e4d0 GLOBAL_AT(int, 0x0064e4d0)
#define _DAT_0064e4d4 GLOBAL_AT(int, 0x0064e4d4)
#define _DAT_0064e4d8 GLOBAL_AT(int, 0x0064e4d8)
#define _DAT_0064e4dc GLOBAL_AT(int, 0x0064e4dc)
#define _DAT_0064e510 GLOBAL_AT(int, 0x0064e510)
#define _DAT_0064e514 GLOBAL_AT(int, 0x0064e514)
#define _DAT_0064e518 GLOBAL_AT(int, 0x0064e518)
#define _DAT_0064e51c GLOBAL_AT(int, 0x0064e51c)
#define _DAT_0064e550 GLOBAL_AT(int, 0x0064e550)
#define _DAT_0064e554 GLOBAL_AT(int, 0x0064e554)
#define _DAT_0064e558 GLOBAL_AT(int, 0x0064e558)
#define _DAT_0064e55c GLOBAL_AT(int, 0x0064e55c)
#define _DAT_0064e590 GLOBAL_AT(int, 0x0064e590)
#define _DAT_0064e594 GLOBAL_AT(int, 0x0064e594)
#define _DAT_0064e598 GLOBAL_AT(int, 0x0064e598)
#define _DAT_0064e59c GLOBAL_AT(int, 0x0064e59c)
#define _DAT_0064e5d0 GLOBAL_AT(int, 0x0064e5d0)
#define _DAT_0064e4c0 GLOBAL_AT(int, 0x0064e4c0)
#define _DAT_0064e4c4 GLOBAL_AT(int, 0x0064e4c4)
#define _DAT_0064e4c8 GLOBAL_AT(int, 0x0064e4c8)
#define _DAT_0064e4e0 GLOBAL_AT(int, 0x0064e4e0)
#define _DAT_0064e4e4 GLOBAL_AT(int, 0x0064e4e4)
#define _DAT_0064e4e8 GLOBAL_AT(int, 0x0064e4e8)
#define _DAT_0064e4ec GLOBAL_AT(int, 0x0064e4ec)
#define _DAT_0064e4f0 GLOBAL_AT(int, 0x0064e4f0)
#define _DAT_0064e4f4 GLOBAL_AT(int, 0x0064e4f4)
#define _DAT_0064e4f8 GLOBAL_AT(int, 0x0064e4f8)
#define _DAT_0064e4fc GLOBAL_AT(int, 0x0064e4fc)
#define _DAT_0064e500 GLOBAL_AT(int, 0x0064e500)
#define _DAT_0064e504 GLOBAL_AT(int, 0x0064e504)
#define _DAT_0064e508 GLOBAL_AT(int, 0x0064e508)
#define _DAT_0064e520 GLOBAL_AT(int, 0x0064e520)
#define _DAT_0064e524 GLOBAL_AT(int, 0x0064e524)
#define _DAT_0064e528 GLOBAL_AT(int, 0x0064e528)
#define _DAT_0064e52c GLOBAL_AT(int, 0x0064e52c)
#define _DAT_0064e530 GLOBAL_AT(int, 0x0064e530)
#define _DAT_0064e534 GLOBAL_AT(int, 0x0064e534)
#define _DAT_0064e538 GLOBAL_AT(int, 0x0064e538)
#define _DAT_0064e53c GLOBAL_AT(int, 0x0064e53c)
#define _DAT_0064e540 GLOBAL_AT(int, 0x0064e540)
#define _DAT_0064e544 GLOBAL_AT(int, 0x0064e544)
#define _DAT_0064e548 GLOBAL_AT(int, 0x0064e548)
#define _DAT_0064e560 GLOBAL_AT(int, 0x0064e560)
#define _DAT_0064e564 GLOBAL_AT(int, 0x0064e564)
#define _DAT_0064e568 GLOBAL_AT(int, 0x0064e568)
#define _DAT_0064e56c GLOBAL_AT(int, 0x0064e56c)
#define _DAT_0064e570 GLOBAL_AT(int, 0x0064e570)
#define _DAT_0064e574 GLOBAL_AT(int, 0x0064e574)
#define _DAT_0064e578 GLOBAL_AT(int, 0x0064e578)
#define _DAT_0064e57c GLOBAL_AT(int, 0x0064e57c)
#define _DAT_0064e580 GLOBAL_AT(int, 0x0064e580)
#define _DAT_0064e584 GLOBAL_AT(int, 0x0064e584)
#define _DAT_0064e588 GLOBAL_AT(int, 0x0064e588)
#define _DAT_0064e5a0 GLOBAL_AT(int, 0x0064e5a0)
#define _DAT_0064e5a4 GLOBAL_AT(int, 0x0064e5a4)
#define _DAT_0064e5a8 GLOBAL_AT(int, 0x0064e5a8)
#define _DAT_0064e5ac GLOBAL_AT(int, 0x0064e5ac)
#define _DAT_0064e5b0 GLOBAL_AT(int, 0x0064e5b0)
#define _DAT_0064e5b4 GLOBAL_AT(int, 0x0064e5b4)
#define _DAT_0064e5b8 GLOBAL_AT(int, 0x0064e5b8)
#define _DAT_0064e5bc GLOBAL_AT(int, 0x0064e5bc)
#define _DAT_0064e5c0 GLOBAL_AT(int, 0x0064e5c0)
#define _DAT_0064e5c4 GLOBAL_AT(int, 0x0064e5c4)
#define _DAT_0064e5c8 GLOBAL_AT(int, 0x0064e5c8)
#define _DAT_0064e5d4 GLOBAL_AT(int, 0x0064e5d4)
#define _DAT_0064e5d8 GLOBAL_AT(int, 0x0064e5d8)
#define _DAT_0064e5dc GLOBAL_AT(int, 0x0064e5dc)
#define _DAT_0064e5e0 GLOBAL_AT(int, 0x0064e5e0)
#define DAT_0064f514 GLOBAL_AT(int, 0x0064f514)
#define _DAT_0064e5e4 GLOBAL_AT(int, 0x0064e5e4)
#define _DAT_0064e5e8 GLOBAL_AT(int, 0x0064e5e8)
#define _DAT_0064e5ec GLOBAL_AT(int, 0x0064e5ec)
#define _DAT_0064e610 GLOBAL_AT(int, 0x0064e610)
#define _DAT_0064e614 GLOBAL_AT(int, 0x0064e614)
#define _DAT_0064e618 GLOBAL_AT(int, 0x0064e618)
#define _DAT_0064e61c GLOBAL_AT(int, 0x0064e61c)
#define _DAT_0064e650 GLOBAL_AT(int, 0x0064e650)
#define _DAT_0064e654 GLOBAL_AT(int, 0x0064e654)
#define _DAT_0064e658 GLOBAL_AT(int, 0x0064e658)
#define _DAT_0064e65c GLOBAL_AT(int, 0x0064e65c)
#define _DAT_0064e690 GLOBAL_AT(int, 0x0064e690)
#define _DAT_0064e694 GLOBAL_AT(int, 0x0064e694)
#define _DAT_0064e698 GLOBAL_AT(int, 0x0064e698)
#define _DAT_0064e69c GLOBAL_AT(int, 0x0064e69c)
#define _DAT_0064e6d0 GLOBAL_AT(int, 0x0064e6d0)
#define _DAT_0064e6d4 GLOBAL_AT(int, 0x0064e6d4)
#define _DAT_0064e6d8 GLOBAL_AT(int, 0x0064e6d8)
#define _DAT_0064e6dc GLOBAL_AT(int, 0x0064e6dc)
#define _DAT_0064e710 GLOBAL_AT(int, 0x0064e710)
#define _DAT_0064e5f0 GLOBAL_AT(int, 0x0064e5f0)
#define _DAT_0064e5f4 GLOBAL_AT(int, 0x0064e5f4)
#define _DAT_0064e5f8 GLOBAL_AT(int, 0x0064e5f8)
#define _DAT_0064e5fc GLOBAL_AT(int, 0x0064e5fc)
#define _DAT_0064e600 GLOBAL_AT(int, 0x0064e600)
#define _DAT_0064e604 GLOBAL_AT(int, 0x0064e604)
#define _DAT_0064e608 GLOBAL_AT(int, 0x0064e608)
#define _DAT_0064e620 GLOBAL_AT(int, 0x0064e620)
#define _DAT_0064e624 GLOBAL_AT(int, 0x0064e624)
#define _DAT_0064e628 GLOBAL_AT(int, 0x0064e628)
#define _DAT_0064e62c GLOBAL_AT(int, 0x0064e62c)
#define _DAT_0064e630 GLOBAL_AT(int, 0x0064e630)
#define _DAT_0064e634 GLOBAL_AT(int, 0x0064e634)
#define _DAT_0064e638 GLOBAL_AT(int, 0x0064e638)
#define _DAT_0064e63c GLOBAL_AT(int, 0x0064e63c)
#define _DAT_0064e640 GLOBAL_AT(int, 0x0064e640)
#define _DAT_0064e644 GLOBAL_AT(int, 0x0064e644)
#define _DAT_0064e648 GLOBAL_AT(int, 0x0064e648)
#define _DAT_0064e660 GLOBAL_AT(int, 0x0064e660)
#define _DAT_0064e664 GLOBAL_AT(int, 0x0064e664)
#define _DAT_0064e668 GLOBAL_AT(int, 0x0064e668)
#define _DAT_0064e66c GLOBAL_AT(int, 0x0064e66c)
#define _DAT_0064e670 GLOBAL_AT(int, 0x0064e670)
#define _DAT_0064e674 GLOBAL_AT(int, 0x0064e674)
#define _DAT_0064e678 GLOBAL_AT(int, 0x0064e678)
#define _DAT_0064e67c GLOBAL_AT(int, 0x0064e67c)
#define _DAT_0064e680 GLOBAL_AT(int, 0x0064e680)
#define _DAT_0064e684 GLOBAL_AT(int, 0x0064e684)
#define _DAT_0064e688 GLOBAL_AT(int, 0x0064e688)
#define _DAT_0064e6a0 GLOBAL_AT(int, 0x0064e6a0)
#define _DAT_0064e6a4 GLOBAL_AT(int, 0x0064e6a4)
#define _DAT_0064e6a8 GLOBAL_AT(int, 0x0064e6a8)
#define _DAT_0064e6ac GLOBAL_AT(int, 0x0064e6ac)
#define _DAT_0064e6b0 GLOBAL_AT(int, 0x0064e6b0)
#define _DAT_0064e6b4 GLOBAL_AT(int, 0x0064e6b4)
#define _DAT_0064e6b8 GLOBAL_AT(int, 0x0064e6b8)
#define _DAT_0064e6bc GLOBAL_AT(int, 0x0064e6bc)
#define _DAT_0064e6c0 GLOBAL_AT(int, 0x0064e6c0)
#define _DAT_0064e6c4 GLOBAL_AT(int, 0x0064e6c4)
#define _DAT_0064e6c8 GLOBAL_AT(int, 0x0064e6c8)
#define _DAT_0064e6e0 GLOBAL_AT(int, 0x0064e6e0)
#define _DAT_0064e6e4 GLOBAL_AT(int, 0x0064e6e4)
#define _DAT_0064e6e8 GLOBAL_AT(int, 0x0064e6e8)
#define _DAT_0064e6ec GLOBAL_AT(int, 0x0064e6ec)
#define _DAT_0064e6f0 GLOBAL_AT(int, 0x0064e6f0)
#define _DAT_0064e6f4 GLOBAL_AT(int, 0x0064e6f4)
#define _DAT_0064e6f8 GLOBAL_AT(int, 0x0064e6f8)
#define _DAT_0064e6fc GLOBAL_AT(int, 0x0064e6fc)
#define _DAT_0064e700 GLOBAL_AT(int, 0x0064e700)
#define _DAT_0064e704 GLOBAL_AT(int, 0x0064e704)
#define _DAT_0064e708 GLOBAL_AT(int, 0x0064e708)
#define _DAT_0064e714 GLOBAL_AT(int, 0x0064e714)
#define _DAT_0064e718 GLOBAL_AT(int, 0x0064e718)
#define _DAT_0064e71c GLOBAL_AT(int, 0x0064e71c)
#define _DAT_0064e750 GLOBAL_AT(int, 0x0064e750)
#define _DAT_0064e754 GLOBAL_AT(int, 0x0064e754)
#define _DAT_0064e758 GLOBAL_AT(int, 0x0064e758)
#define _DAT_0064e75c GLOBAL_AT(int, 0x0064e75c)
#define _DAT_0064e790 GLOBAL_AT(int, 0x0064e790)
#define _DAT_0064e794 GLOBAL_AT(int, 0x0064e794)
#define _DAT_0064e798 GLOBAL_AT(int, 0x0064e798)
#define _DAT_0064e79c GLOBAL_AT(int, 0x0064e79c)
#define _DAT_0064e7d0 GLOBAL_AT(int, 0x0064e7d0)
#define _DAT_0064e7d4 GLOBAL_AT(int, 0x0064e7d4)
#define _DAT_0064e7d8 GLOBAL_AT(int, 0x0064e7d8)
#define _DAT_0064e7dc GLOBAL_AT(int, 0x0064e7dc)
#define _DAT_0064e810 GLOBAL_AT(int, 0x0064e810)
#define _DAT_0064e814 GLOBAL_AT(int, 0x0064e814)
#define _DAT_0064e818 GLOBAL_AT(int, 0x0064e818)
#define _DAT_0064e81c GLOBAL_AT(int, 0x0064e81c)
#define _DAT_0064e720 GLOBAL_AT(int, 0x0064e720)
#define _DAT_0064e724 GLOBAL_AT(int, 0x0064e724)
#define _DAT_0064e728 GLOBAL_AT(int, 0x0064e728)
#define _DAT_0064e72c GLOBAL_AT(int, 0x0064e72c)
#define _DAT_0064e730 GLOBAL_AT(int, 0x0064e730)
#define _DAT_0064e734 GLOBAL_AT(int, 0x0064e734)
#define _DAT_0064e738 GLOBAL_AT(int, 0x0064e738)
#define _DAT_0064e73c GLOBAL_AT(int, 0x0064e73c)
#define _DAT_0064e740 GLOBAL_AT(int, 0x0064e740)
#define _DAT_0064e744 GLOBAL_AT(int, 0x0064e744)
#define _DAT_0064e748 GLOBAL_AT(int, 0x0064e748)
#define _DAT_0064e760 GLOBAL_AT(int, 0x0064e760)
#define _DAT_0064e764 GLOBAL_AT(int, 0x0064e764)
#define _DAT_0064e768 GLOBAL_AT(int, 0x0064e768)
#define _DAT_0064e76c GLOBAL_AT(int, 0x0064e76c)
#define _DAT_0064e770 GLOBAL_AT(int, 0x0064e770)
#define _DAT_0064e774 GLOBAL_AT(int, 0x0064e774)
#define _DAT_0064e778 GLOBAL_AT(int, 0x0064e778)
#define _DAT_0064e77c GLOBAL_AT(int, 0x0064e77c)
#define _DAT_0064e780 GLOBAL_AT(int, 0x0064e780)
#define _DAT_0064e784 GLOBAL_AT(int, 0x0064e784)
#define _DAT_0064e788 GLOBAL_AT(int, 0x0064e788)
#define _DAT_0064e7a0 GLOBAL_AT(int, 0x0064e7a0)
#define _DAT_0064e7a4 GLOBAL_AT(int, 0x0064e7a4)
#define _DAT_0064e7a8 GLOBAL_AT(int, 0x0064e7a8)
#define _DAT_0064e7ac GLOBAL_AT(int, 0x0064e7ac)
#define _DAT_0064e7b0 GLOBAL_AT(int, 0x0064e7b0)
#define _DAT_0064e7b4 GLOBAL_AT(int, 0x0064e7b4)
#define _DAT_0064e7b8 GLOBAL_AT(int, 0x0064e7b8)
#define _DAT_0064e7bc GLOBAL_AT(int, 0x0064e7bc)
#define _DAT_0064e7c0 GLOBAL_AT(int, 0x0064e7c0)
#define _DAT_0064e7c4 GLOBAL_AT(int, 0x0064e7c4)
#define _DAT_0064e7c8 GLOBAL_AT(int, 0x0064e7c8)
#define _DAT_0064e7e0 GLOBAL_AT(int, 0x0064e7e0)
#define _DAT_0064e7e4 GLOBAL_AT(int, 0x0064e7e4)
#define _DAT_0064e7e8 GLOBAL_AT(int, 0x0064e7e8)
#define _DAT_0064e7ec GLOBAL_AT(int, 0x0064e7ec)
#define _DAT_0064e7f0 GLOBAL_AT(int, 0x0064e7f0)
#define _DAT_0064e7f4 GLOBAL_AT(int, 0x0064e7f4)
#define _DAT_0064e7f8 GLOBAL_AT(int, 0x0064e7f8)
#define _DAT_0064e7fc GLOBAL_AT(int, 0x0064e7fc)
#define _DAT_0064e800 GLOBAL_AT(int, 0x0064e800)
#define _DAT_0064e804 GLOBAL_AT(int, 0x0064e804)
#define _DAT_0064e808 GLOBAL_AT(int, 0x0064e808)
#define _DAT_0064e820 GLOBAL_AT(int, 0x0064e820)
#define _DAT_0064e824 GLOBAL_AT(int, 0x0064e824)
#define _DAT_0064e828 GLOBAL_AT(int, 0x0064e828)
#define _DAT_0064e82c GLOBAL_AT(int, 0x0064e82c)
#define _DAT_0064e830 GLOBAL_AT(int, 0x0064e830)
#define _DAT_0064e834 GLOBAL_AT(int, 0x0064e834)
#define _DAT_0064e838 GLOBAL_AT(int, 0x0064e838)
#define _DAT_0064e83c GLOBAL_AT(int, 0x0064e83c)
#define _DAT_0064e840 GLOBAL_AT(int, 0x0064e840)
#define _DAT_0064e844 GLOBAL_AT(int, 0x0064e844)
#define _DAT_0064e848 GLOBAL_AT(int, 0x0064e848)
#define _DAT_0064e850 GLOBAL_AT(int, 0x0064e850)
#define _DAT_0064e854 GLOBAL_AT(int, 0x0064e854)
#define _DAT_0064e858 GLOBAL_AT(int, 0x0064e858)
#define _DAT_0064e85c GLOBAL_AT(int, 0x0064e85c)
#define _DAT_0064e890 GLOBAL_AT(int, 0x0064e890)
#define _DAT_0064e894 GLOBAL_AT(int, 0x0064e894)
#define _DAT_0064e898 GLOBAL_AT(int, 0x0064e898)
#define _DAT_0064e89c GLOBAL_AT(int, 0x0064e89c)
#define _DAT_0064e8d0 GLOBAL_AT(int, 0x0064e8d0)
#define _DAT_0064e8d4 GLOBAL_AT(int, 0x0064e8d4)
#define _DAT_0064e8d8 GLOBAL_AT(int, 0x0064e8d8)
#define _DAT_0064e8dc GLOBAL_AT(int, 0x0064e8dc)
#define _DAT_0064e910 GLOBAL_AT(int, 0x0064e910)
#define _DAT_0064e914 GLOBAL_AT(int, 0x0064e914)
#define _DAT_0064e918 GLOBAL_AT(int, 0x0064e918)
#define _DAT_0064e91c GLOBAL_AT(int, 0x0064e91c)
#define _DAT_0064e950 GLOBAL_AT(int, 0x0064e950)
#define _DAT_0064e860 GLOBAL_AT(int, 0x0064e860)
#define _DAT_0064e864 GLOBAL_AT(int, 0x0064e864)
#define _DAT_0064e868 GLOBAL_AT(int, 0x0064e868)
#define _DAT_0064e86c GLOBAL_AT(int, 0x0064e86c)
#define _DAT_0064e870 GLOBAL_AT(int, 0x0064e870)
#define _DAT_0064e874 GLOBAL_AT(int, 0x0064e874)
#define _DAT_0064e878 GLOBAL_AT(int, 0x0064e878)
#define _DAT_0064e87c GLOBAL_AT(int, 0x0064e87c)
#define _DAT_0064e880 GLOBAL_AT(int, 0x0064e880)
#define _DAT_0064e884 GLOBAL_AT(int, 0x0064e884)
#define _DAT_0064e888 GLOBAL_AT(int, 0x0064e888)
#define _DAT_0064e8a0 GLOBAL_AT(int, 0x0064e8a0)
#define _DAT_0064e8a4 GLOBAL_AT(int, 0x0064e8a4)
#define _DAT_0064e8a8 GLOBAL_AT(int, 0x0064e8a8)
#define _DAT_0064e8ac GLOBAL_AT(int, 0x0064e8ac)
#define _DAT_0064e8b0 GLOBAL_AT(int, 0x0064e8b0)
#define _DAT_0064e8b4 GLOBAL_AT(int, 0x0064e8b4)
#define _DAT_0064e8b8 GLOBAL_AT(int, 0x0064e8b8)
#define _DAT_0064e8bc GLOBAL_AT(int, 0x0064e8bc)
#define _DAT_0064e8c0 GLOBAL_AT(int, 0x0064e8c0)
#define _DAT_0064e8c4 GLOBAL_AT(int, 0x0064e8c4)
#define _DAT_0064e8c8 GLOBAL_AT(int, 0x0064e8c8)
#define _DAT_0064e8e0 GLOBAL_AT(int, 0x0064e8e0)
#define _DAT_0064e8e4 GLOBAL_AT(int, 0x0064e8e4)
#define _DAT_0064e8e8 GLOBAL_AT(int, 0x0064e8e8)
#define _DAT_0064e8ec GLOBAL_AT(int, 0x0064e8ec)
#define _DAT_0064e8f0 GLOBAL_AT(int, 0x0064e8f0)
#define _DAT_0064e8f4 GLOBAL_AT(int, 0x0064e8f4)
#define _DAT_0064e8f8 GLOBAL_AT(int, 0x0064e8f8)
#define _DAT_0064e8fc GLOBAL_AT(int, 0x0064e8fc)
#define _DAT_0064e900 GLOBAL_AT(int, 0x0064e900)
#define _DAT_0064e904 GLOBAL_AT(int, 0x0064e904)
#define _DAT_0064e908 GLOBAL_AT(int, 0x0064e908)
#define _DAT_0064e920 GLOBAL_AT(int, 0x0064e920)
#define _DAT_0064e924 GLOBAL_AT(int, 0x0064e924)
#define _DAT_0064e928 GLOBAL_AT(int, 0x0064e928)
#define _DAT_0064e92c GLOBAL_AT(int, 0x0064e92c)
#define _DAT_0064e930 GLOBAL_AT(int, 0x0064e930)
#define _DAT_0064e934 GLOBAL_AT(int, 0x0064e934)
#define _DAT_0064e938 GLOBAL_AT(int, 0x0064e938)
#define _DAT_0064e93c GLOBAL_AT(int, 0x0064e93c)
#define _DAT_0064e940 GLOBAL_AT(int, 0x0064e940)
#define _DAT_0064e944 GLOBAL_AT(int, 0x0064e944)
#define _DAT_0064e948 GLOBAL_AT(int, 0x0064e948)
#define _DAT_0064e954 GLOBAL_AT(int, 0x0064e954)
#define _DAT_0064e958 GLOBAL_AT(int, 0x0064e958)
#define _DAT_0064e95c GLOBAL_AT(int, 0x0064e95c)
#define _DAT_0064e960 GLOBAL_AT(int, 0x0064e960)
#define _DAT_0064e964 GLOBAL_AT(int, 0x0064e964)
#define _DAT_0064e968 GLOBAL_AT(int, 0x0064e968)
#define _DAT_0064e96c GLOBAL_AT(int, 0x0064e96c)
#define _DAT_0064e970 GLOBAL_AT(int, 0x0064e970)
#define _DAT_0064e974 GLOBAL_AT(int, 0x0064e974)
#define _DAT_0064e978 GLOBAL_AT(int, 0x0064e978)
#define _DAT_0064e97c GLOBAL_AT(int, 0x0064e97c)
#define _DAT_0064e980 GLOBAL_AT(int, 0x0064e980)
#define _DAT_0064e990 GLOBAL_AT(int, 0x0064e990)
#define _DAT_0064e994 GLOBAL_AT(int, 0x0064e994)
#define _DAT_0064e998 GLOBAL_AT(int, 0x0064e998)
#define _DAT_0064e99c GLOBAL_AT(int, 0x0064e99c)
#define _DAT_0064e9d0 GLOBAL_AT(int, 0x0064e9d0)
#define _DAT_0064e9d4 GLOBAL_AT(int, 0x0064e9d4)
#define _DAT_0064e9d8 GLOBAL_AT(int, 0x0064e9d8)
#define _DAT_0064e9dc GLOBAL_AT(int, 0x0064e9dc)
#define _DAT_0064ea10 GLOBAL_AT(int, 0x0064ea10)
#define _DAT_0064ea14 GLOBAL_AT(int, 0x0064ea14)
#define _DAT_0064ea18 GLOBAL_AT(int, 0x0064ea18)
#define _DAT_0064ea1c GLOBAL_AT(int, 0x0064ea1c)
#define _DAT_0064ea50 GLOBAL_AT(int, 0x0064ea50)
#define _DAT_0064ea54 GLOBAL_AT(int, 0x0064ea54)
#define _DAT_0064ea58 GLOBAL_AT(int, 0x0064ea58)
#define _DAT_0064ea5c GLOBAL_AT(int, 0x0064ea5c)
#define _DAT_0064ea90 GLOBAL_AT(int, 0x0064ea90)
#define _DAT_0064ea94 GLOBAL_AT(int, 0x0064ea94)
#define _DAT_0064ea98 GLOBAL_AT(int, 0x0064ea98)
#define _DAT_0064ea9c GLOBAL_AT(int, 0x0064ea9c)
#define _DAT_0064e984 GLOBAL_AT(int, 0x0064e984)
#define _DAT_0064e988 GLOBAL_AT(int, 0x0064e988)
#define _DAT_0064e9a0 GLOBAL_AT(int, 0x0064e9a0)
#define _DAT_0064e9a4 GLOBAL_AT(int, 0x0064e9a4)
#define _DAT_0064e9a8 GLOBAL_AT(int, 0x0064e9a8)
#define _DAT_0064e9ac GLOBAL_AT(int, 0x0064e9ac)
#define _DAT_0064e9b0 GLOBAL_AT(int, 0x0064e9b0)
#define _DAT_0064e9b4 GLOBAL_AT(int, 0x0064e9b4)
#define _DAT_0064e9b8 GLOBAL_AT(int, 0x0064e9b8)
#define _DAT_0064e9bc GLOBAL_AT(int, 0x0064e9bc)
#define _DAT_0064e9c0 GLOBAL_AT(int, 0x0064e9c0)
#define _DAT_0064e9c4 GLOBAL_AT(int, 0x0064e9c4)
#define _DAT_0064e9c8 GLOBAL_AT(int, 0x0064e9c8)
#define _DAT_0064e9e0 GLOBAL_AT(int, 0x0064e9e0)
#define _DAT_0064e9e4 GLOBAL_AT(int, 0x0064e9e4)
#define _DAT_0064e9e8 GLOBAL_AT(int, 0x0064e9e8)
#define _DAT_0064e9ec GLOBAL_AT(int, 0x0064e9ec)
#define _DAT_0064e9f0 GLOBAL_AT(int, 0x0064e9f0)
#define _DAT_0064e9f4 GLOBAL_AT(int, 0x0064e9f4)
#define _DAT_0064e9f8 GLOBAL_AT(int, 0x0064e9f8)
#define _DAT_0064e9fc GLOBAL_AT(int, 0x0064e9fc)
#define _DAT_0064ea00 GLOBAL_AT(int, 0x0064ea00)
#define _DAT_0064ea04 GLOBAL_AT(int, 0x0064ea04)
#define _DAT_0064ea08 GLOBAL_AT(int, 0x0064ea08)
#define _DAT_0064ea20 GLOBAL_AT(int, 0x0064ea20)
#define _DAT_0064ea24 GLOBAL_AT(int, 0x0064ea24)
#define _DAT_0064ea28 GLOBAL_AT(int, 0x0064ea28)
#define _DAT_0064ea2c GLOBAL_AT(int, 0x0064ea2c)
#define _DAT_0064ea30 GLOBAL_AT(int, 0x0064ea30)
#define _DAT_0064ea34 GLOBAL_AT(int, 0x0064ea34)
#define _DAT_0064ea38 GLOBAL_AT(int, 0x0064ea38)
#define _DAT_0064ea3c GLOBAL_AT(int, 0x0064ea3c)
#define _DAT_0064ea40 GLOBAL_AT(int, 0x0064ea40)
#define _DAT_0064ea44 GLOBAL_AT(int, 0x0064ea44)
#define _DAT_0064ea48 GLOBAL_AT(int, 0x0064ea48)
#define _DAT_0064ea60 GLOBAL_AT(int, 0x0064ea60)
#define _DAT_0064ea64 GLOBAL_AT(int, 0x0064ea64)
#define _DAT_0064ea68 GLOBAL_AT(int, 0x0064ea68)
#define _DAT_0064ea6c GLOBAL_AT(int, 0x0064ea6c)
#define _DAT_0064ea70 GLOBAL_AT(int, 0x0064ea70)
#define _DAT_0064ea74 GLOBAL_AT(int, 0x0064ea74)
#define _DAT_0064ea78 GLOBAL_AT(int, 0x0064ea78)
#define _DAT_0064ea7c GLOBAL_AT(int, 0x0064ea7c)
#define _DAT_0064ea80 GLOBAL_AT(int, 0x0064ea80)
#define _DAT_0064ea84 GLOBAL_AT(int, 0x0064ea84)
#define _DAT_0064ea88 GLOBAL_AT(int, 0x0064ea88)
#define _DAT_0064eaa0 GLOBAL_AT(int, 0x0064eaa0)
#define _DAT_0064eaa4 GLOBAL_AT(int, 0x0064eaa4)
#define _DAT_0064eaa8 GLOBAL_AT(int, 0x0064eaa8)
#define _DAT_0064eaac GLOBAL_AT(int, 0x0064eaac)
#define _DAT_0064ead0 GLOBAL_AT(int, 0x0064ead0)
#define _DAT_0064ead4 GLOBAL_AT(int, 0x0064ead4)
#define _DAT_0064ead8 GLOBAL_AT(int, 0x0064ead8)
#define _DAT_0064eadc GLOBAL_AT(int, 0x0064eadc)
#define _DAT_0064eb10 GLOBAL_AT(int, 0x0064eb10)
#define _DAT_0064eb14 GLOBAL_AT(int, 0x0064eb14)
#define _DAT_0064eb18 GLOBAL_AT(int, 0x0064eb18)
#define _DAT_0064eb1c GLOBAL_AT(int, 0x0064eb1c)
#define _DAT_0064eb50 GLOBAL_AT(int, 0x0064eb50)
#define _DAT_0064eb54 GLOBAL_AT(int, 0x0064eb54)
#define _DAT_0064eb58 GLOBAL_AT(int, 0x0064eb58)
#define _DAT_0064eb5c GLOBAL_AT(int, 0x0064eb5c)
#define _DAT_0064eb90 GLOBAL_AT(int, 0x0064eb90)
#define _DAT_0064eb94 GLOBAL_AT(int, 0x0064eb94)
#define _DAT_0064eb98 GLOBAL_AT(int, 0x0064eb98)
#define _DAT_0064eb9c GLOBAL_AT(int, 0x0064eb9c)
#define _DAT_0064ebd0 GLOBAL_AT(int, 0x0064ebd0)
#define _DAT_0064eab0 GLOBAL_AT(int, 0x0064eab0)
#define _DAT_0064eab4 GLOBAL_AT(int, 0x0064eab4)
#define _DAT_0064eab8 GLOBAL_AT(int, 0x0064eab8)
#define _DAT_0064eabc GLOBAL_AT(int, 0x0064eabc)
#define _DAT_0064eac0 GLOBAL_AT(int, 0x0064eac0)
#define _DAT_0064eac4 GLOBAL_AT(int, 0x0064eac4)
#define _DAT_0064eac8 GLOBAL_AT(int, 0x0064eac8)
#define _DAT_0064eae0 GLOBAL_AT(int, 0x0064eae0)
#define _DAT_0064eae4 GLOBAL_AT(int, 0x0064eae4)
#define _DAT_0064eae8 GLOBAL_AT(int, 0x0064eae8)
#define _DAT_0064eaec GLOBAL_AT(int, 0x0064eaec)
#define _DAT_0064eaf0 GLOBAL_AT(int, 0x0064eaf0)
#define _DAT_0064eaf4 GLOBAL_AT(int, 0x0064eaf4)
#define _DAT_0064eaf8 GLOBAL_AT(int, 0x0064eaf8)
#define _DAT_0064eafc GLOBAL_AT(int, 0x0064eafc)
#define _DAT_0064eb00 GLOBAL_AT(int, 0x0064eb00)
#define _DAT_0064eb04 GLOBAL_AT(int, 0x0064eb04)
#define _DAT_0064eb08 GLOBAL_AT(int, 0x0064eb08)
#define _DAT_0064eb20 GLOBAL_AT(int, 0x0064eb20)
#define _DAT_0064eb24 GLOBAL_AT(int, 0x0064eb24)
#define _DAT_0064eb28 GLOBAL_AT(int, 0x0064eb28)
#define _DAT_0064eb2c GLOBAL_AT(int, 0x0064eb2c)
#define _DAT_0064eb30 GLOBAL_AT(int, 0x0064eb30)
#define _DAT_0064eb34 GLOBAL_AT(int, 0x0064eb34)
#define _DAT_0064eb38 GLOBAL_AT(int, 0x0064eb38)
#define _DAT_0064eb3c GLOBAL_AT(int, 0x0064eb3c)
#define _DAT_0064eb40 GLOBAL_AT(int, 0x0064eb40)
#define _DAT_0064eb44 GLOBAL_AT(int, 0x0064eb44)
#define _DAT_0064eb48 GLOBAL_AT(int, 0x0064eb48)
#define _DAT_0064eb60 GLOBAL_AT(int, 0x0064eb60)
#define _DAT_0064eb64 GLOBAL_AT(int, 0x0064eb64)
#define _DAT_0064eb68 GLOBAL_AT(int, 0x0064eb68)
#define _DAT_0064eb6c GLOBAL_AT(int, 0x0064eb6c)
#define _DAT_0064eb70 GLOBAL_AT(int, 0x0064eb70)
#define _DAT_0064eb74 GLOBAL_AT(int, 0x0064eb74)
#define _DAT_0064eb78 GLOBAL_AT(int, 0x0064eb78)
#define _DAT_0064eb7c GLOBAL_AT(int, 0x0064eb7c)
#define _DAT_0064eb80 GLOBAL_AT(int, 0x0064eb80)
#define _DAT_0064eb84 GLOBAL_AT(int, 0x0064eb84)
#define _DAT_0064eb88 GLOBAL_AT(int, 0x0064eb88)
#define _DAT_0064eba0 GLOBAL_AT(int, 0x0064eba0)
#define _DAT_0064eba4 GLOBAL_AT(int, 0x0064eba4)
#define _DAT_0064eba8 GLOBAL_AT(int, 0x0064eba8)
#define _DAT_0064ebac GLOBAL_AT(int, 0x0064ebac)
#define _DAT_0064ebb0 GLOBAL_AT(int, 0x0064ebb0)
#define _DAT_0064ebb4 GLOBAL_AT(int, 0x0064ebb4)
#define _DAT_0064ebb8 GLOBAL_AT(int, 0x0064ebb8)
#define _DAT_0064ebbc GLOBAL_AT(int, 0x0064ebbc)
#define _DAT_0064ebc0 GLOBAL_AT(int, 0x0064ebc0)
#define _DAT_0064ebc4 GLOBAL_AT(int, 0x0064ebc4)
#define _DAT_0064ebc8 GLOBAL_AT(int, 0x0064ebc8)
#define _DAT_0064ebd4 GLOBAL_AT(int, 0x0064ebd4)
#define _DAT_0064ebd8 GLOBAL_AT(int, 0x0064ebd8)
#define _DAT_0064ebdc GLOBAL_AT(int, 0x0064ebdc)
#define _DAT_0064ec10 GLOBAL_AT(int, 0x0064ec10)
#define _DAT_0064ec14 GLOBAL_AT(int, 0x0064ec14)
#define _DAT_0064ec18 GLOBAL_AT(int, 0x0064ec18)
#define _DAT_0064ec1c GLOBAL_AT(int, 0x0064ec1c)
#define _DAT_0064ec50 GLOBAL_AT(int, 0x0064ec50)
#define _DAT_0064ec54 GLOBAL_AT(int, 0x0064ec54)
#define _DAT_0064ec58 GLOBAL_AT(int, 0x0064ec58)
#define _DAT_0064ec5c GLOBAL_AT(int, 0x0064ec5c)
#define _DAT_0064ec90 GLOBAL_AT(int, 0x0064ec90)
#define _DAT_0064ec94 GLOBAL_AT(int, 0x0064ec94)
#define _DAT_0064ec98 GLOBAL_AT(int, 0x0064ec98)
#define _DAT_0064ec9c GLOBAL_AT(int, 0x0064ec9c)
#define _DAT_0064ecd0 GLOBAL_AT(int, 0x0064ecd0)
#define _DAT_0064ecd4 GLOBAL_AT(int, 0x0064ecd4)
#define _DAT_0064ecd8 GLOBAL_AT(int, 0x0064ecd8)
#define _DAT_0064ecdc GLOBAL_AT(int, 0x0064ecdc)
#define _DAT_0064ebe0 GLOBAL_AT(int, 0x0064ebe0)
#define _DAT_0064ebe4 GLOBAL_AT(int, 0x0064ebe4)
#define _DAT_0064ebe8 GLOBAL_AT(int, 0x0064ebe8)
#define _DAT_0064ebec GLOBAL_AT(int, 0x0064ebec)
#define _DAT_0064ebf0 GLOBAL_AT(int, 0x0064ebf0)
#define _DAT_0064ebf4 GLOBAL_AT(int, 0x0064ebf4)
#define _DAT_0064ebf8 GLOBAL_AT(int, 0x0064ebf8)
#define _DAT_0064ebfc GLOBAL_AT(int, 0x0064ebfc)
#define _DAT_0064ec00 GLOBAL_AT(int, 0x0064ec00)
#define _DAT_0064ec04 GLOBAL_AT(int, 0x0064ec04)
#define _DAT_0064ec08 GLOBAL_AT(int, 0x0064ec08)
#define _DAT_0064ec20 GLOBAL_AT(int, 0x0064ec20)
#define _DAT_0064ec24 GLOBAL_AT(int, 0x0064ec24)
#define _DAT_0064ec28 GLOBAL_AT(int, 0x0064ec28)
#define _DAT_0064ec2c GLOBAL_AT(int, 0x0064ec2c)
#define _DAT_0064ec30 GLOBAL_AT(int, 0x0064ec30)
#define _DAT_0064ec34 GLOBAL_AT(int, 0x0064ec34)
#define _DAT_0064ec38 GLOBAL_AT(int, 0x0064ec38)
#define _DAT_0064ec3c GLOBAL_AT(int, 0x0064ec3c)
#define _DAT_0064ec40 GLOBAL_AT(int, 0x0064ec40)
#define _DAT_0064ec44 GLOBAL_AT(int, 0x0064ec44)
#define _DAT_0064ec48 GLOBAL_AT(int, 0x0064ec48)
#define _DAT_0064ec60 GLOBAL_AT(int, 0x0064ec60)
#define _DAT_0064ec64 GLOBAL_AT(int, 0x0064ec64)
#define _DAT_0064ec68 GLOBAL_AT(int, 0x0064ec68)
#define _DAT_0064ec6c GLOBAL_AT(int, 0x0064ec6c)
#define _DAT_0064ec70 GLOBAL_AT(int, 0x0064ec70)
#define _DAT_0064ec74 GLOBAL_AT(int, 0x0064ec74)
#define _DAT_0064ec78 GLOBAL_AT(int, 0x0064ec78)
#define _DAT_0064ec7c GLOBAL_AT(int, 0x0064ec7c)
#define _DAT_0064ec80 GLOBAL_AT(int, 0x0064ec80)
#define _DAT_0064ec84 GLOBAL_AT(int, 0x0064ec84)
#define _DAT_0064ec88 GLOBAL_AT(int, 0x0064ec88)
#define _DAT_0064eca0 GLOBAL_AT(int, 0x0064eca0)
#define _DAT_0064eca4 GLOBAL_AT(int, 0x0064eca4)
#define _DAT_0064eca8 GLOBAL_AT(int, 0x0064eca8)
#define _DAT_0064ecac GLOBAL_AT(int, 0x0064ecac)
#define _DAT_0064ecb0 GLOBAL_AT(int, 0x0064ecb0)
#define _DAT_0064ecb4 GLOBAL_AT(int, 0x0064ecb4)
#define _DAT_0064ecb8 GLOBAL_AT(int, 0x0064ecb8)
#define _DAT_0064ecbc GLOBAL_AT(int, 0x0064ecbc)
#define _DAT_0064ecc0 GLOBAL_AT(int, 0x0064ecc0)
#define _DAT_0064ecc4 GLOBAL_AT(int, 0x0064ecc4)
#define _DAT_0064ecc8 GLOBAL_AT(int, 0x0064ecc8)
#define _DAT_0064ece0 GLOBAL_AT(int, 0x0064ece0)
#define _DAT_0064ece4 GLOBAL_AT(int, 0x0064ece4)
#define _DAT_0064ece8 GLOBAL_AT(int, 0x0064ece8)
#define _DAT_0064ecec GLOBAL_AT(int, 0x0064ecec)
#define _DAT_0064ecf0 GLOBAL_AT(int, 0x0064ecf0)
#define _DAT_0064ecf4 GLOBAL_AT(int, 0x0064ecf4)
#define _DAT_0064ecf8 GLOBAL_AT(int, 0x0064ecf8)
#define _DAT_0064ecfc GLOBAL_AT(int, 0x0064ecfc)
#define _DAT_0064ed00 GLOBAL_AT(int, 0x0064ed00)
#define _DAT_0064ed04 GLOBAL_AT(int, 0x0064ed04)
#define _DAT_0064ed08 GLOBAL_AT(int, 0x0064ed08)
#define _DAT_0064ed10 GLOBAL_AT(int, 0x0064ed10)
#define _DAT_0064ed14 GLOBAL_AT(int, 0x0064ed14)
#define _DAT_0064ed18 GLOBAL_AT(int, 0x0064ed18)
#define _DAT_0064ed1c GLOBAL_AT(int, 0x0064ed1c)
#define _DAT_0064ed50 GLOBAL_AT(int, 0x0064ed50)
#define _DAT_0064ed54 GLOBAL_AT(int, 0x0064ed54)
#define _DAT_0064ed58 GLOBAL_AT(int, 0x0064ed58)
#define _DAT_0064ed5c GLOBAL_AT(int, 0x0064ed5c)
#define _DAT_0064ed90 GLOBAL_AT(int, 0x0064ed90)
#define _DAT_0064ed94 GLOBAL_AT(int, 0x0064ed94)
#define _DAT_0064ed98 GLOBAL_AT(int, 0x0064ed98)
#define _DAT_0064ed9c GLOBAL_AT(int, 0x0064ed9c)
#define _DAT_0064edd0 GLOBAL_AT(int, 0x0064edd0)
#define _DAT_0064edd4 GLOBAL_AT(int, 0x0064edd4)
#define _DAT_0064edd8 GLOBAL_AT(int, 0x0064edd8)
#define _DAT_0064eddc GLOBAL_AT(int, 0x0064eddc)
#define _DAT_0064ee10 GLOBAL_AT(int, 0x0064ee10)
#define _DAT_0064ed20 GLOBAL_AT(int, 0x0064ed20)
#define _DAT_0064ed24 GLOBAL_AT(int, 0x0064ed24)
#define _DAT_0064ed28 GLOBAL_AT(int, 0x0064ed28)
#define _DAT_0064ed2c GLOBAL_AT(int, 0x0064ed2c)
#define _DAT_0064ed30 GLOBAL_AT(int, 0x0064ed30)
#define _DAT_0064ed34 GLOBAL_AT(int, 0x0064ed34)
#define _DAT_0064ed38 GLOBAL_AT(int, 0x0064ed38)
#define _DAT_0064ed3c GLOBAL_AT(int, 0x0064ed3c)
#define _DAT_0064ed40 GLOBAL_AT(int, 0x0064ed40)
#define _DAT_0064ed44 GLOBAL_AT(int, 0x0064ed44)
#define _DAT_0064ed48 GLOBAL_AT(int, 0x0064ed48)
#define _DAT_0064ed60 GLOBAL_AT(int, 0x0064ed60)
#define _DAT_0064ed64 GLOBAL_AT(int, 0x0064ed64)
#define _DAT_0064ed68 GLOBAL_AT(int, 0x0064ed68)
#define _DAT_0064ed6c GLOBAL_AT(int, 0x0064ed6c)
#define _DAT_0064ed70 GLOBAL_AT(int, 0x0064ed70)
#define _DAT_0064ed74 GLOBAL_AT(int, 0x0064ed74)
#define _DAT_0064ed78 GLOBAL_AT(int, 0x0064ed78)
#define _DAT_0064ed7c GLOBAL_AT(int, 0x0064ed7c)
#define _DAT_0064ed80 GLOBAL_AT(int, 0x0064ed80)
#define _DAT_0064ed84 GLOBAL_AT(int, 0x0064ed84)
#define _DAT_0064ed88 GLOBAL_AT(int, 0x0064ed88)
#define _DAT_0064eda0 GLOBAL_AT(int, 0x0064eda0)
#define _DAT_0064eda4 GLOBAL_AT(int, 0x0064eda4)
#define _DAT_0064eda8 GLOBAL_AT(int, 0x0064eda8)
#define _DAT_0064edac GLOBAL_AT(int, 0x0064edac)
#define _DAT_0064edb0 GLOBAL_AT(int, 0x0064edb0)
#define _DAT_0064edb4 GLOBAL_AT(int, 0x0064edb4)
#define _DAT_0064edb8 GLOBAL_AT(int, 0x0064edb8)
#define _DAT_0064edbc GLOBAL_AT(int, 0x0064edbc)
#define _DAT_0064edc0 GLOBAL_AT(int, 0x0064edc0)
#define _DAT_0064edc4 GLOBAL_AT(int, 0x0064edc4)
#define _DAT_0064edc8 GLOBAL_AT(int, 0x0064edc8)
#define _DAT_0064ede0 GLOBAL_AT(int, 0x0064ede0)
#define _DAT_0064ede4 GLOBAL_AT(int, 0x0064ede4)
#define _DAT_0064ede8 GLOBAL_AT(int, 0x0064ede8)
#define _DAT_0064edec GLOBAL_AT(int, 0x0064edec)
#define _DAT_0064edf0 GLOBAL_AT(int, 0x0064edf0)
#define _DAT_0064edf4 GLOBAL_AT(int, 0x0064edf4)
#define _DAT_0064edf8 GLOBAL_AT(int, 0x0064edf8)
#define _DAT_0064edfc GLOBAL_AT(int, 0x0064edfc)
#define _DAT_0064ee00 GLOBAL_AT(int, 0x0064ee00)
#define _DAT_0064ee04 GLOBAL_AT(int, 0x0064ee04)
#define _DAT_0064ee08 GLOBAL_AT(int, 0x0064ee08)
#define _DAT_0064ee14 GLOBAL_AT(int, 0x0064ee14)
#define _DAT_0064ee18 GLOBAL_AT(int, 0x0064ee18)
#define _DAT_0064ee1c GLOBAL_AT(int, 0x0064ee1c)
#define _DAT_0064ee20 GLOBAL_AT(int, 0x0064ee20)
#define _DAT_0064ee24 GLOBAL_AT(int, 0x0064ee24)
#define _DAT_0064ee28 GLOBAL_AT(int, 0x0064ee28)
#define _DAT_0064ee2c GLOBAL_AT(int, 0x0064ee2c)
#define _DAT_0064ee30 GLOBAL_AT(int, 0x0064ee30)
#define _DAT_0064ee34 GLOBAL_AT(int, 0x0064ee34)
#define _DAT_0064ee38 GLOBAL_AT(int, 0x0064ee38)
#define _DAT_0064ee3c GLOBAL_AT(int, 0x0064ee3c)
#define _DAT_0064ee40 GLOBAL_AT(int, 0x0064ee40)
#define _DAT_0064ee50 GLOBAL_AT(int, 0x0064ee50)
#define _DAT_0064ee54 GLOBAL_AT(int, 0x0064ee54)
#define _DAT_0064ee58 GLOBAL_AT(int, 0x0064ee58)
#define _DAT_0064ee5c GLOBAL_AT(int, 0x0064ee5c)
#define _DAT_0064ee90 GLOBAL_AT(int, 0x0064ee90)
#define _DAT_0064ee94 GLOBAL_AT(int, 0x0064ee94)
#define _DAT_0064ee98 GLOBAL_AT(int, 0x0064ee98)
#define _DAT_0064ee9c GLOBAL_AT(int, 0x0064ee9c)
#define _DAT_0064eed0 GLOBAL_AT(int, 0x0064eed0)
#define _DAT_0064eed4 GLOBAL_AT(int, 0x0064eed4)
#define _DAT_0064eed8 GLOBAL_AT(int, 0x0064eed8)
#define _DAT_0064eedc GLOBAL_AT(int, 0x0064eedc)
#define _DAT_0064ef10 GLOBAL_AT(int, 0x0064ef10)
#define _DAT_0064ef14 GLOBAL_AT(int, 0x0064ef14)
#define _DAT_0064ef18 GLOBAL_AT(int, 0x0064ef18)
#define _DAT_0064ef1c GLOBAL_AT(int, 0x0064ef1c)
#define _DAT_0064ef50 GLOBAL_AT(int, 0x0064ef50)
#define _DAT_0064ee44 GLOBAL_AT(int, 0x0064ee44)
#define _DAT_0064ee48 GLOBAL_AT(int, 0x0064ee48)
#define _DAT_0064ee60 GLOBAL_AT(int, 0x0064ee60)
#define _DAT_0064ee64 GLOBAL_AT(int, 0x0064ee64)
#define _DAT_0064ee68 GLOBAL_AT(int, 0x0064ee68)
#define _DAT_0064ee6c GLOBAL_AT(int, 0x0064ee6c)
#define _DAT_0064ee70 GLOBAL_AT(int, 0x0064ee70)
#define _DAT_0064ee74 GLOBAL_AT(int, 0x0064ee74)
#define _DAT_0064ee78 GLOBAL_AT(int, 0x0064ee78)
#define _DAT_0064ee7c GLOBAL_AT(int, 0x0064ee7c)
#define _DAT_0064ee80 GLOBAL_AT(int, 0x0064ee80)
#define _DAT_0064ee84 GLOBAL_AT(int, 0x0064ee84)
#define _DAT_0064ee88 GLOBAL_AT(int, 0x0064ee88)
#define _DAT_0064eea0 GLOBAL_AT(int, 0x0064eea0)
#define _DAT_0064eea4 GLOBAL_AT(int, 0x0064eea4)
#define _DAT_0064eea8 GLOBAL_AT(int, 0x0064eea8)
#define _DAT_0064eeac GLOBAL_AT(int, 0x0064eeac)
#define _DAT_0064eeb0 GLOBAL_AT(int, 0x0064eeb0)
#define _DAT_0064eeb4 GLOBAL_AT(int, 0x0064eeb4)
#define _DAT_0064eeb8 GLOBAL_AT(int, 0x0064eeb8)
#define _DAT_0064eebc GLOBAL_AT(int, 0x0064eebc)
#define _DAT_0064eec0 GLOBAL_AT(int, 0x0064eec0)
#define _DAT_0064eec4 GLOBAL_AT(int, 0x0064eec4)
#define _DAT_0064eec8 GLOBAL_AT(int, 0x0064eec8)
#define _DAT_0064eee0 GLOBAL_AT(int, 0x0064eee0)
#define _DAT_0064eee4 GLOBAL_AT(int, 0x0064eee4)
#define _DAT_0064eee8 GLOBAL_AT(int, 0x0064eee8)
#define _DAT_0064eeec GLOBAL_AT(int, 0x0064eeec)
#define _DAT_0064eef0 GLOBAL_AT(int, 0x0064eef0)
#define _DAT_0064eef4 GLOBAL_AT(int, 0x0064eef4)
#define _DAT_0064eef8 GLOBAL_AT(int, 0x0064eef8)
#define _DAT_0064eefc GLOBAL_AT(int, 0x0064eefc)
#define _DAT_0064ef00 GLOBAL_AT(int, 0x0064ef00)
#define _DAT_0064ef04 GLOBAL_AT(int, 0x0064ef04)
#define _DAT_0064ef08 GLOBAL_AT(int, 0x0064ef08)
#define _DAT_0064ef20 GLOBAL_AT(int, 0x0064ef20)
#define _DAT_0064ef24 GLOBAL_AT(int, 0x0064ef24)
#define _DAT_0064ef28 GLOBAL_AT(int, 0x0064ef28)
#define _DAT_0064ef2c GLOBAL_AT(int, 0x0064ef2c)
#define _DAT_0064ef30 GLOBAL_AT(int, 0x0064ef30)
#define _DAT_0064ef34 GLOBAL_AT(int, 0x0064ef34)
#define _DAT_0064ef38 GLOBAL_AT(int, 0x0064ef38)
#define _DAT_0064ef3c GLOBAL_AT(int, 0x0064ef3c)
#define _DAT_0064ef40 GLOBAL_AT(int, 0x0064ef40)
#define _DAT_0064ef44 GLOBAL_AT(int, 0x0064ef44)
#define _DAT_0064ef48 GLOBAL_AT(int, 0x0064ef48)
#define _DAT_0064ef54 GLOBAL_AT(int, 0x0064ef54)
#define _DAT_0064ef58 GLOBAL_AT(int, 0x0064ef58)
#define _DAT_0064ef5c GLOBAL_AT(int, 0x0064ef5c)
#define _DAT_0064ef60 GLOBAL_AT(int, 0x0064ef60)
#define _DAT_0064ef64 GLOBAL_AT(int, 0x0064ef64)
#define _DAT_0064ef68 GLOBAL_AT(int, 0x0064ef68)
#define _DAT_0064ef6c GLOBAL_AT(int, 0x0064ef6c)
#define _DAT_0064efec GLOBAL_AT(int, 0x0064efec)
#define _DAT_0064f010 GLOBAL_AT(int, 0x0064f010)
#define _DAT_0064f014 GLOBAL_AT(int, 0x0064f014)
#define _DAT_0064f018 GLOBAL_AT(int, 0x0064f018)
#define _DAT_0064ef90 GLOBAL_AT(int, 0x0064ef90)
#define _DAT_0064f050 GLOBAL_AT(int, 0x0064f050)
#define _DAT_0064ef94 GLOBAL_AT(int, 0x0064ef94)
#define _DAT_0064ef98 GLOBAL_AT(int, 0x0064ef98)
#define _DAT_0064ef9c GLOBAL_AT(int, 0x0064ef9c)
#define _DAT_0064f054 GLOBAL_AT(int, 0x0064f054)
#define _DAT_0064f058 GLOBAL_AT(int, 0x0064f058)
#define _DAT_0064efd0 GLOBAL_AT(int, 0x0064efd0)
#define _DAT_0064f090 GLOBAL_AT(int, 0x0064f090)
#define _DAT_0064ef70 GLOBAL_AT(int, 0x0064ef70)
#define _DAT_0064ef74 GLOBAL_AT(int, 0x0064ef74)
#define _DAT_0064ef78 GLOBAL_AT(int, 0x0064ef78)
#define _DAT_0064ef7c GLOBAL_AT(int, 0x0064ef7c)
#define _DAT_0064ef80 GLOBAL_AT(int, 0x0064ef80)
#define _DAT_0064ef84 GLOBAL_AT(int, 0x0064ef84)
#define _DAT_0064ef88 GLOBAL_AT(int, 0x0064ef88)
#define _DAT_0064efa0 GLOBAL_AT(int, 0x0064efa0)
#define _DAT_0064efa4 GLOBAL_AT(int, 0x0064efa4)
#define _DAT_0064efa8 GLOBAL_AT(int, 0x0064efa8)
#define _DAT_0064efac GLOBAL_AT(int, 0x0064efac)
#define _DAT_0064efb0 GLOBAL_AT(int, 0x0064efb0)
#define _DAT_0064efb4 GLOBAL_AT(int, 0x0064efb4)
#define _DAT_0064efb8 GLOBAL_AT(int, 0x0064efb8)
#define _DAT_0064efbc GLOBAL_AT(int, 0x0064efbc)
#define _DAT_0064efc0 GLOBAL_AT(int, 0x0064efc0)
#define _DAT_0064efc4 GLOBAL_AT(int, 0x0064efc4)
#define _DAT_0064efc8 GLOBAL_AT(int, 0x0064efc8)
#define _DAT_0064efd4 GLOBAL_AT(int, 0x0064efd4)
#define _DAT_0064efd8 GLOBAL_AT(int, 0x0064efd8)
#define _DAT_0064efdc GLOBAL_AT(int, 0x0064efdc)
#define _DAT_0064efe0 GLOBAL_AT(int, 0x0064efe0)
#define _DAT_0064efe4 GLOBAL_AT(int, 0x0064efe4)
#define _DAT_0064efe8 GLOBAL_AT(int, 0x0064efe8)
#define _DAT_0064eff0 GLOBAL_AT(int, 0x0064eff0)
#define _DAT_0064eff4 GLOBAL_AT(int, 0x0064eff4)
#define _DAT_0064eff8 GLOBAL_AT(int, 0x0064eff8)
#define _DAT_0064effc GLOBAL_AT(int, 0x0064effc)
#define _DAT_0064f000 GLOBAL_AT(int, 0x0064f000)
#define _DAT_0064f004 GLOBAL_AT(int, 0x0064f004)
#define _DAT_0064f008 GLOBAL_AT(int, 0x0064f008)
#define _DAT_0064f01c GLOBAL_AT(int, 0x0064f01c)
#define _DAT_0064f020 GLOBAL_AT(int, 0x0064f020)
#define _DAT_0064f024 GLOBAL_AT(int, 0x0064f024)
#define _DAT_0064f028 GLOBAL_AT(int, 0x0064f028)
#define _DAT_0064f02c GLOBAL_AT(int, 0x0064f02c)
#define _DAT_0064f030 GLOBAL_AT(int, 0x0064f030)
#define _DAT_0064f034 GLOBAL_AT(int, 0x0064f034)
#define _DAT_0064f038 GLOBAL_AT(int, 0x0064f038)
#define _DAT_0064f03c GLOBAL_AT(int, 0x0064f03c)
#define _DAT_0064f040 GLOBAL_AT(int, 0x0064f040)
#define _DAT_0064f044 GLOBAL_AT(int, 0x0064f044)
#define _DAT_0064f048 GLOBAL_AT(int, 0x0064f048)
#define _DAT_0064f05c GLOBAL_AT(int, 0x0064f05c)
#define _DAT_0064f060 GLOBAL_AT(int, 0x0064f060)
#define _DAT_0064f064 GLOBAL_AT(int, 0x0064f064)
#define _DAT_0064f068 GLOBAL_AT(int, 0x0064f068)
#define _DAT_0064f06c GLOBAL_AT(int, 0x0064f06c)
#define _DAT_0064f070 GLOBAL_AT(int, 0x0064f070)
#define _DAT_0064f074 GLOBAL_AT(int, 0x0064f074)
#define _DAT_0064f078 GLOBAL_AT(int, 0x0064f078)
#define _DAT_0064f07c GLOBAL_AT(int, 0x0064f07c)
#define _DAT_0064f080 GLOBAL_AT(int, 0x0064f080)
#define _DAT_0064f084 GLOBAL_AT(int, 0x0064f084)
#define _DAT_0064f088 GLOBAL_AT(int, 0x0064f088)
#define _DAT_0064f094 GLOBAL_AT(int, 0x0064f094)
#define _DAT_0064f098 GLOBAL_AT(int, 0x0064f098)
#define _DAT_0064f09c GLOBAL_AT(int, 0x0064f09c)
#define _DAT_0064f0ac GLOBAL_AT(int, 0x0064f0ac)
#define _DAT_0064f0ec GLOBAL_AT(int, 0x0064f0ec)
#define _DAT_0064f0f0 GLOBAL_AT(int, 0x0064f0f0)
#define _DAT_0064f0f4 GLOBAL_AT(int, 0x0064f0f4)
#define _DAT_0064f110 GLOBAL_AT(int, 0x0064f110)
#define _DAT_0064f118 GLOBAL_AT(int, 0x0064f118)
#define _DAT_0064f150 GLOBAL_AT(int, 0x0064f150)
#define _DAT_0064f158 GLOBAL_AT(int, 0x0064f158)
#define _DAT_0064f190 GLOBAL_AT(int, 0x0064f190)
#define _DAT_0064f0d0 GLOBAL_AT(int, 0x0064f0d0)
#define _DAT_0064f0e4 GLOBAL_AT(int, 0x0064f0e4)
#define _DAT_0064f12c GLOBAL_AT(int, 0x0064f12c)
#define _DAT_0064f16c GLOBAL_AT(int, 0x0064f16c)
#define _DAT_0064f198 GLOBAL_AT(int, 0x0064f198)
#define _DAT_0064f1ac GLOBAL_AT(int, 0x0064f1ac)
#define _DAT_0064f0a0 GLOBAL_AT(int, 0x0064f0a0)
#define _DAT_0064f0a4 GLOBAL_AT(int, 0x0064f0a4)
#define _DAT_0064f0a8 GLOBAL_AT(int, 0x0064f0a8)
#define _DAT_0064f0b0 GLOBAL_AT(int, 0x0064f0b0)
#define _DAT_0064f0b4 GLOBAL_AT(int, 0x0064f0b4)
#define _DAT_0064f0b8 GLOBAL_AT(int, 0x0064f0b8)
#define _DAT_0064f0bc GLOBAL_AT(int, 0x0064f0bc)
#define _DAT_0064f0c0 GLOBAL_AT(int, 0x0064f0c0)
#define _DAT_0064f0c4 GLOBAL_AT(int, 0x0064f0c4)
#define _DAT_0064f0c8 GLOBAL_AT(int, 0x0064f0c8)
#define _DAT_0064f0d4 GLOBAL_AT(int, 0x0064f0d4)
#define _DAT_0064f0d8 GLOBAL_AT(int, 0x0064f0d8)
#define _DAT_0064f0dc GLOBAL_AT(int, 0x0064f0dc)
#define _DAT_0064f0e0 GLOBAL_AT(int, 0x0064f0e0)
#define _DAT_0064f0e8 GLOBAL_AT(int, 0x0064f0e8)
#define _DAT_0064f0f8 GLOBAL_AT(int, 0x0064f0f8)
#define _DAT_0064f0fc GLOBAL_AT(int, 0x0064f0fc)
#define _DAT_0064f100 GLOBAL_AT(int, 0x0064f100)
#define _DAT_0064f104 GLOBAL_AT(int, 0x0064f104)
#define _DAT_0064f108 GLOBAL_AT(int, 0x0064f108)
#define _DAT_0064f114 GLOBAL_AT(int, 0x0064f114)
#define _DAT_0064f11c GLOBAL_AT(int, 0x0064f11c)
#define _DAT_0064f120 GLOBAL_AT(int, 0x0064f120)
#define _DAT_0064f124 GLOBAL_AT(int, 0x0064f124)
#define _DAT_0064f128 GLOBAL_AT(int, 0x0064f128)
#define _DAT_0064f130 GLOBAL_AT(int, 0x0064f130)
#define _DAT_0064f134 GLOBAL_AT(int, 0x0064f134)
#define _DAT_0064f138 GLOBAL_AT(int, 0x0064f138)
#define _DAT_0064f13c GLOBAL_AT(int, 0x0064f13c)
#define _DAT_0064f140 GLOBAL_AT(int, 0x0064f140)
#define _DAT_0064f144 GLOBAL_AT(int, 0x0064f144)
#define _DAT_0064f148 GLOBAL_AT(int, 0x0064f148)
#define _DAT_0064f154 GLOBAL_AT(int, 0x0064f154)
#define _DAT_0064f15c GLOBAL_AT(int, 0x0064f15c)
#define _DAT_0064f160 GLOBAL_AT(int, 0x0064f160)
#define _DAT_0064f164 GLOBAL_AT(int, 0x0064f164)
#define _DAT_0064f168 GLOBAL_AT(int, 0x0064f168)
#define _DAT_0064f170 GLOBAL_AT(int, 0x0064f170)
#define _DAT_0064f174 GLOBAL_AT(int, 0x0064f174)
#define _DAT_0064f178 GLOBAL_AT(int, 0x0064f178)
#define _DAT_0064f17c GLOBAL_AT(int, 0x0064f17c)
#define _DAT_0064f180 GLOBAL_AT(int, 0x0064f180)
#define _DAT_0064f184 GLOBAL_AT(int, 0x0064f184)
#define _DAT_0064f188 GLOBAL_AT(int, 0x0064f188)
#define _DAT_0064f194 GLOBAL_AT(int, 0x0064f194)
#define _DAT_0064f19c GLOBAL_AT(int, 0x0064f19c)
#define _DAT_0064f1a0 GLOBAL_AT(int, 0x0064f1a0)
#define _DAT_0064f1a4 GLOBAL_AT(int, 0x0064f1a4)
#define _DAT_0064f1a8 GLOBAL_AT(int, 0x0064f1a8)
#define _DAT_0064f1b0 GLOBAL_AT(int, 0x0064f1b0)
#define _DAT_0064f1b4 GLOBAL_AT(int, 0x0064f1b4)
#define _DAT_0064f1b8 GLOBAL_AT(int, 0x0064f1b8)
#define _DAT_0064f1bc GLOBAL_AT(int, 0x0064f1bc)
#define _DAT_0064f1c0 GLOBAL_AT(int, 0x0064f1c0)
#define _DAT_0064f1c4 GLOBAL_AT(int, 0x0064f1c4)
#define _DAT_0064f1c8 GLOBAL_AT(int, 0x0064f1c8)
#define _DAT_0064f1dc GLOBAL_AT(int, 0x0064f1dc)
#define _DAT_0064f1d0 GLOBAL_AT(int, 0x0064f1d0)
#define _DAT_0064f1d4 GLOBAL_AT(int, 0x0064f1d4)
#define _DAT_0064f1e8 GLOBAL_AT(int, 0x0064f1e8)
#define _DAT_0064f218 GLOBAL_AT(int, 0x0064f218)
#define _DAT_0064f208 GLOBAL_AT(int, 0x0064f208)
#define _DAT_0064f1d8 GLOBAL_AT(int, 0x0064f1d8)
#define _DAT_0064f1e0 GLOBAL_AT(int, 0x0064f1e0)
#define _DAT_0064f1e4 GLOBAL_AT(int, 0x0064f1e4)
#define _DAT_0064f1ec GLOBAL_AT(int, 0x0064f1ec)
#define _DAT_0064f1f0 GLOBAL_AT(int, 0x0064f1f0)
#define _DAT_0064f1f4 GLOBAL_AT(int, 0x0064f1f4)
#define _DAT_0064f1f8 GLOBAL_AT(int, 0x0064f1f8)
#define _DAT_0064f1fc GLOBAL_AT(int, 0x0064f1fc)
#define _DAT_0064f200 GLOBAL_AT(int, 0x0064f200)
#define _DAT_0064f204 GLOBAL_AT(int, 0x0064f204)
#define _DAT_0064f210 GLOBAL_AT(int, 0x0064f210)
#define _DAT_0064f214 GLOBAL_AT(int, 0x0064f214)
#define _DAT_0064f21c GLOBAL_AT(int, 0x0064f21c)
#define s_PrimaryObjectiveFailed_0064f5a4 ((char*)0x0064f5a4)
#define s_SetName_0064f240 ((char*)0x0064f240)
#define s_GetNumUnits_0064f838 ((char*)0x0064f838)
#define s_UnHighlightHudPart_0064f888 ((char*)0x0064f888)
#define s_GetWaterHeight_0064f72c ((char*)0x0064f72c)
#define s_DisableFlightMode_0064f4b8 ((char*)0x0064f4b8)
#define s_SetVar_0064f6a8 ((char*)0x0064f6a8)
#define s_AddScore_0064f5c4 ((char*)0x0064f5c4)
#define s_SetVariable_0064f648 ((char*)0x0064f648)
#define s_SetStealth_0064f27c ((char*)0x0064f27c)
#define s_GetFloatRand_0064f6b0 ((char*)0x0064f6b0)
#define s_SetLightningDensity_0064f7e4 ((char*)0x0064f7e4)
#define s_ResetSegmentHealth_0064f2ac ((char*)0x0064f2ac)
#define s_LevelLost_0064f9c8 ((char*)0x0064f9c8)
#define s_GetDistToObj_0064f950 ((char*)0x0064f950)
#define s_SetPlayerLives_0064f31c ((char*)0x0064f31c)
#define s_GetEnergy_0064f61c ((char*)0x0064f61c)
#define s_SetAllSegmentsVulnerable_0064f428 ((char*)0x0064f428)
#define s_PlayCutscene_0064f8fc ((char*)0x0064f8fc)
#define s_Surface_0064f664 ((char*)0x0064f664)
#define s_ToggleCockpit_0064f288 ((char*)0x0064f288)
#define s_Normalise_0064f494 ((char*)0x0064f494)
#define s_Retreat_0064f608 ((char*)0x0064f608)
#define s_Print_0064f9a8 ((char*)0x0064f9a8)
#define s_GetPos_0064f7ac ((char*)0x0064f7ac)
#define s_IsFriendly_0064f9d4 ((char*)0x0064f9d4)
#define s_GetComponent_0064f6d0 ((char*)0x0064f6d0)
#define s_CreatePosition_0064f6c0 ((char*)0x0064f6c0)
#define s_SetSlot_0064f340 ((char*)0x0064f340)
#define s_TeleportOrientation_0064f268 ((char*)0x0064f268)
#define s_GetSafePos_0064f6e0 ((char*)0x0064f6e0)
#define s_PlaySample_0064f9b0 ((char*)0x0064f9b0)
#define s_PlayPCharMessage_0064f568 ((char*)0x0064f568)
#define s_AddMessage_0064f978 ((char*)0x0064f978)
#define s_LevelLostString_0064f478 ((char*)0x0064f478)
#define s_GetVariable_0064f610 ((char*)0x0064f610)
#define s_Exists_0064f9a0 ((char*)0x0064f9a0)
#define s_GetAngle_0064f57c ((char*)0x0064f57c)
#define s_Deactivate_00623e08 ((char*)0x00623e08)
#define s_SetScript_0064f7b4 ((char*)0x0064f7b4)
#define s_LevelWon_0064f9bc ((char*)0x0064f9bc)
#define s_SetAIState_0064f91c ((char*)0x0064f91c)
#define s_SetSlotSave_0064f2c0 ((char*)0x0064f2c0)
#define s_PlayAnimation_0064f760 ((char*)0x0064f760)
#define s_GetConfiguration_0064f3a0 ((char*)0x0064f3a0)
#define s_PrintText_0064f984 ((char*)0x0064f984)
#define s_PlayCharMessageWait_0064f874 ((char*)0x0064f874)
#define s_SetTimer_0064f960 ((char*)0x0064f960)
#define s_SetRainDensity_0064f808 ((char*)0x0064f808)
#define s_GetRatioBattleLineNodes_0064f7c0 ((char*)0x0064f7c0)
#define s_Damage_0064f6a0 ((char*)0x0064f6a0)
#define s_Goto3PointPanCamera_0064f3dc ((char*)0x0064f3dc)
#define s_GetWeaponCharge_0064f844 ((char*)0x0064f844)
#define s_SetWindVector_0064f818 ((char*)0x0064f818)
#define s_GetThingRef_0064f990 ((char*)0x0064f990)
#define s_PrimaryObjectiveComplete_0064f5ec ((char*)0x0064f5ec)
#define s_GetHealth_0064f96c ((char*)0x0064f96c)
#define s_GetWeaponName_0064f854 ((char*)0x0064f854)
#define s_PlayCharMessage_0064f8ec ((char*)0x0064f8ec)
#define s_GameTime_0064f694 ((char*)0x0064f694)
#define s_SetSnowDensity_0064f7f8 ((char*)0x0064f7f8)
#define s_SwitchMessagesOn_0064f404 ((char*)0x0064f404)
#define s_SetAllSegmentsHealth_0064f770 ((char*)0x0064f770)
#define s_NumContained_0064f8b0 ((char*)0x0064f8b0)
#define s_Goto4PointPanCamera_0064f3c8 ((char*)0x0064f3c8)
#define s_Undeploy_0064f500 ((char*)0x0064f500)
#define s_SpawnThing_0064f9fc ((char*)0x0064f9fc)
#define s_Deploy_0064f50c ((char*)0x0064f50c)
#define s_IsOverWater_0064f234 ((char*)0x0064f234)
#define s_Shutdown_0064f628 ((char*)0x0064f628)
#define s_GetRealHealth_0064f418 ((char*)0x0064f418)
#define s_IsFiring_0064f46c ((char*)0x0064f46c)
#define s_Teleport_0064f90c ((char*)0x0064f90c)
#define s_GetPlayer_0064f944 ((char*)0x0064f944)
#define s_SecondaryObjectiveFailed_0064f588 ((char*)0x0064f588)
#define s_SpawnEscapePod_0064f2cc ((char*)0x0064f2cc)
#define s_Activate_00623e14 ((char*)0x00623e14)
#define s_GetSlot_0064f338 ((char*)0x0064f338)
#define s_SetGoalPoint_0064f6ec ((char*)0x0064f6ec)
#define s_EnableWeapon_0064f4f0 ((char*)0x0064f4f0)
#define s_SetVelocity_0064f2fc ((char*)0x0064f2fc)
#define s_GetMapHeight_0064f73c ((char*)0x0064f73c)
#define s_HighlightHudPart_0064f89c ((char*)0x0064f89c)
#define s_MPDeclarePlayerWon_0064f35c ((char*)0x0064f35c)
#define s_UnsetObjective_0064f8dc ((char*)0x0064f8dc)
#define s_SetAllegiance_0064f828 ((char*)0x0064f828)
#define s_GetInitialHealth_0064f53c ((char*)0x0064f53c)
#define s_GetTarget_0064f4a0 ((char*)0x0064f4a0)
#define s_IsNumberBetween_0064f45c ((char*)0x0064f45c)
#define s_Pause_0064f9f4 ((char*)0x0064f9f4)
#define s_SetSpawnScript_0064f51c ((char*)0x0064f51c)
#define s_SetHealth_0064f7d8 ((char*)0x0064f7d8)
#define s_DisableWeapon_0064f4e0 ((char*)0x0064f4e0)
#define s_AddHelpMessage_0064f390 ((char*)0x0064f390)
#define s_GetNumber_0064f2dc ((char*)0x0064f2dc)
#define s_SetVulnerable_0064f8c0 ((char*)0x0064f8c0)
#define s_Magnitude_0064f488 ((char*)0x0064f488)
#define s_FollowWaypointWait_0064fa14 ((char*)0x0064fa14)
#define s_SetObjective_0064f928 ((char*)0x0064f928)
#define s_EnableFlightMode_0064f4cc ((char*)0x0064f4cc)
#define s_IsObjective_0064f8d0 ((char*)0x0064f8d0)
#define s_SetSpeed_0064fa08 ((char*)0x0064fa08)
#define s_SecondaryObjectiveComplete_0064f5d0 ((char*)0x0064f5d0)
#define s_InJetMode_0064f32c ((char*)0x0064f32c)
#define s_SpawnersInUse_0064f52c ((char*)0x0064f52c)
#define s_SetPos_0064f2a4 ((char*)0x0064f2a4)
#define s_SetGoodieState_0064f380 ((char*)0x0064f380)
#define s_GotoPlayerCamera_0064f3b4 ((char*)0x0064f3b4)
#define s_IsEnemy_0064f68c ((char*)0x0064f68c)
#define s_GetGoodieState_0064f370 ((char*)0x0064f370)
#define s_PlayAnimationWait_0064f74c ((char*)0x0064f74c)
#define s_GetWeaponAmmo_0064f864 ((char*)0x0064f864)
#define s_DisableSpawner_0064f248 ((char*)0x0064f248)
#define s_PostEvent_0064f9e8 ((char*)0x0064f9e8)
#define s_SetSegmentHealth_0064f788 ((char*)0x0064f788)
#define s_SwitchMessagesOff_0064f3f0 ((char*)0x0064f3f0)
#define s_EnableSpawner_0064f258 ((char*)0x0064f258)
#define s_PlayPCharMessageWait_0064f550 ((char*)0x0064f550)
#define s_HalfDestroy_0064f308 ((char*)0x0064f308)
#define s_MPDeclareGameDrawn_0064f348 ((char*)0x0064f348)
#define s_SetLockable_0064f298 ((char*)0x0064f298)
#define s_TriggerHitEffect_0064f2e8 ((char*)0x0064f2e8)
#define s_GetSquad_0064f4ac ((char*)0x0064f4ac)
#define s_SetVisible_0064f938 ((char*)0x0064f938)
#define s_Attack_0064f5bc ((char*)0x0064f5bc)
#define s_SpawnersEmpty_0064f674 ((char*)0x0064f674)
#define s_InitVariable_0064f654 ((char*)0x0064f654)
#define s_ShutdownVariable_0064f634 ((char*)0x0064f634)
#define s_SpawnParticle_0064f79c ((char*)0x0064f79c)
#define s_Launch_0064f314 ((char*)0x0064f314)
#define s_SetSegmentVulnerable_0064f444 ((char*)0x0064f444)
#define PTR_LAB_0064f918 GLOBAL_AT(void*, 0x0064f918)
#define PTR_DAT_0064f99c GLOBAL_AT(void*, 0x0064f99c)

static undefined4 BEA_CDECL ap_0052ff30(void)
{
  _DAT_0064ce94 = 0;
  _DAT_0064ced0 = ((void*)0x00453ac0);
  _DAT_0064ced8 = 0;
  _DAT_0064ce54 = 0;
  _DAT_0064cf10 = ((void*)0x00536cd0);
  _DAT_0064ce50 = ((void*)0x00537d70);
  _DAT_0064ce5c = 0;
  _DAT_0064ce90 = ((void*)0x00537e40);
  _DAT_0064ce9c = 0;
  _DAT_0064ced4 = 0;
  _DAT_0064cf14 = 0;
  _DAT_0064cf18 = 0;
  _DAT_0064ce58 = 0;
  _DAT_0064ce60 = s_FollowWaypointWait_0064fa14;
  _DAT_0064ce64 = 1;
  _DAT_0064ce68 = 0;
  _DAT_0064ce6c = 3;
  _DAT_0064ce70 = 0;
  _DAT_0064ce74 = 0;
  _DAT_0064ce78 = 0;
  _DAT_0064ce7c = 0;
  _DAT_0064ce80 = 0;
  _DAT_0064ce84 = 0;
  _DAT_0064ce88 = 0;
  _DAT_0064ce98 = 0;
  _DAT_0064cea0 = s_SetSpeed_0064fa08;
  _DAT_0064cea4 = 1;
  _DAT_0064cea8 = 0;
  _DAT_0064ceac = 2;
  _DAT_0064ceb0 = 0;
  _DAT_0064ceb4 = 0;
  _DAT_0064ceb8 = 0;
  _DAT_0064cebc = 0;
  _DAT_0064cec0 = 0;
  _DAT_0064cec4 = 0;
  _DAT_0064cec8 = 0;
  _DAT_0064cedc = 0;
  _DAT_0064cee0 = s_SpawnThing_0064f9fc;
  _DAT_0064cee4 = 4;
  _DAT_0064cee8 = 0;
  _DAT_0064ceec = 3;
  _DAT_0064cef0 = 3;
  _DAT_0064cef4 = 1;
  _DAT_0064cef8 = 3;
  _DAT_0064cefc = 0;
  _DAT_0064cf00 = 0;
  _DAT_0064cf04 = 0;
  _DAT_0064cf08 = 0;
  _DAT_0064cf1c = 0;
  _DAT_0064cf20 = s_Pause_0064f9f4;
  _DAT_0064cf24 = 1;
  _DAT_0064cf28 = 0;
  _DAT_0064cf2c = 2;
  _DAT_0064cf30 = 0;
  _DAT_0064cf34 = 0;
  _DAT_0064cf38 = 0;
  _DAT_0064cf3c = 0;
  _DAT_0064cf40 = 0;
  _DAT_0064cf44 = 0;
  _DAT_0064cf48 = 0;
  _DAT_0064cf50 = ((void*)0x00537c70);
  _DAT_0064cf5c = 0;
  _DAT_0064cf54 = 0;
  _DAT_0064cf58 = 0;
  _DAT_0064cf60 = s_PostEvent_0064f9e8;
  _DAT_0064cf90 = ((void*)0x005383c0);
  _DAT_0064cf94 = 0;
  _DAT_0064cf98 = 0;
  _DAT_0064cf64 = 1;
  _DAT_0064cfd0 = ((void*)0x00538230);
  _DAT_0064cfd4 = 0;
  _DAT_0064cfd8 = 0;
  _DAT_0064cf68 = 0;
  _DAT_0064d010 = ((void*)0x00537fd0);
  _DAT_0064d014 = 0;
  _DAT_0064d018 = 0;
  _DAT_0064cf6c = 3;
  _DAT_0064d050 = ((void*)0x005381a0);
  _DAT_0064cf70 = 0;
  _DAT_0064cf74 = 0;
  _DAT_0064cf78 = 0;
  _DAT_0064cf7c = 0;
  _DAT_0064cf80 = 0;
  _DAT_0064cf84 = 0;
  _DAT_0064cf88 = 0;
  _DAT_0064cf9c = 0;
  _DAT_0064cfa0 = &DAT_0064f9e0;
  _DAT_0064cfa4 = 1;
  _DAT_0064cfa8 = 1;
  _DAT_0064cfac = 1;
  _DAT_0064cfb0 = 0;
  _DAT_0064cfb4 = 0;
  _DAT_0064cfb8 = 0;
  _DAT_0064cfbc = 0;
  _DAT_0064cfc0 = 0;
  _DAT_0064cfc4 = 0;
  _DAT_0064cfc8 = 1;
  _DAT_0064cfdc = 0;
  _DAT_0064cfe0 = s_IsFriendly_0064f9d4;
  _DAT_0064cfe4 = 0;
  _DAT_0064cfe8 = 1;
  _DAT_0064cfec = 0;
  _DAT_0064cff0 = 0;
  _DAT_0064cff4 = 0;
  _DAT_0064cff8 = 0;
  _DAT_0064cffc = 0;
  _DAT_0064d000 = 0;
  _DAT_0064d004 = 0;
  _DAT_0064d008 = 4;
  _DAT_0064d01c = 0;
  _DAT_0064d020 = s_LevelLost_0064f9c8;
  _DAT_0064d024 = 0;
  _DAT_0064d028 = 0;
  _DAT_0064d02c = 0;
  _DAT_0064d030 = 0;
  _DAT_0064d034 = 0;
  _DAT_0064d038 = 0;
  _DAT_0064d03c = 0;
  _DAT_0064d040 = 0;
  _DAT_0064d044 = 0;
  _DAT_0064d048 = 0;
  _DAT_0064d054 = 0;
  _DAT_0064d058 = 0;
  _DAT_0064d05c = 0;
  _DAT_0064d060 = s_LevelWon_0064f9bc;
  _DAT_0064d064 = 0;
  _DAT_0064d068 = 0;
  _DAT_0064d06c = 0;
  _DAT_0064d070 = 0;
  _DAT_0064d074 = 0;
  _DAT_0064d078 = 0;
  _DAT_0064d07c = 0;
  _DAT_0064d080 = 0;
  _DAT_0064d090 = ((void*)0x005381e0);
  _DAT_0064d094 = 0;
  _DAT_0064d098 = 0;
  _DAT_0064d150 = ((void*)0x00536920);
  _DAT_0064d0d0 = ((void*)0x005381f0);
  _DAT_0064d0d4 = 0;
  _DAT_0064d0d8 = 0;
  _DAT_0064d110 = ((void*)0x00537ad0);
  _DAT_0064d154 = 0;
  _DAT_0064d158 = 0;
  _DAT_0064d15c = 0;
  _DAT_0064d114 = 0;
  _DAT_0064d118 = 0;
  _DAT_0064d190 = ((void*)0x00535cd0);
  _DAT_0064d084 = 0;
  _DAT_0064d088 = 0;
  _DAT_0064d09c = 0;
  _DAT_0064d0a0 = s_PlaySample_0064f9b0;
  _DAT_0064d0a4 = 1;
  _DAT_0064d0a8 = 0;
  _DAT_0064d0ac = 3;
  _DAT_0064d0b0 = 0;
  _DAT_0064d0b4 = 0;
  _DAT_0064d0b8 = 0;
  _DAT_0064d0bc = 0;
  _DAT_0064d0c0 = 0;
  _DAT_0064d0c4 = 0;
  _DAT_0064d0c8 = 0;
  _DAT_0064d0dc = 0;
  _DAT_0064d0e0 = s_Print_0064f9a8;
  _DAT_0064d0e4 = 1;
  _DAT_0064d0e8 = 0;
  _DAT_0064d0ec = 7;
  _DAT_0064d0f0 = 0;
  _DAT_0064d0f4 = 0;
  _DAT_0064d0f8 = 0;
  _DAT_0064d0fc = 0;
  _DAT_0064d100 = 0;
  _DAT_0064d104 = 0;
  _DAT_0064d108 = 0;
  _DAT_0064d11c = 0;
  _DAT_0064d120 = s_Exists_0064f9a0;
  _DAT_0064d124 = 1;
  _DAT_0064d128 = 1;
  _DAT_0064d12c = 5;
  _DAT_0064d130 = 0;
  _DAT_0064d134 = 0;
  _DAT_0064d138 = 0;
  _DAT_0064d13c = 0;
  _DAT_0064d140 = 0;
  _DAT_0064d144 = 0;
  _DAT_0064d148 = 4;
  _DAT_0064d160 = &PTR_DAT_0064f99c;
  _DAT_0064d164 = 0;
  _DAT_0064d168 = 0;
  _DAT_0064d16c = 0;
  _DAT_0064d170 = 0;
  _DAT_0064d174 = 0;
  _DAT_0064d178 = 0;
  _DAT_0064d17c = 0;
  _DAT_0064d180 = 0;
  _DAT_0064d184 = 0;
  _DAT_0064d188 = 0;
  _DAT_0064d194 = 0;
  _DAT_0064d198 = 0;
  _DAT_0064d19c = 0;
  _DAT_0064d1a0 = s_GetThingRef_0064f990;
  _DAT_0064d1a4 = 1;
  _DAT_0064d1a8 = 1;
  _DAT_0064d1ac = 5;
  _DAT_0064d1b0 = 0;
  _DAT_0064d1d0 = ((void*)0x005367c0);
  _DAT_0064d1d4 = 0;
  _DAT_0064d1d8 = 0;
  _DAT_0064d1dc = 0;
  _DAT_0064d210 = ((void*)0x00535d50);
  _DAT_0064d214 = 0;
  _DAT_0064d218 = 0;
  _DAT_0064d21c = 0;
  _DAT_0064d250 = ((void*)0x00537c40);
  _DAT_0064d254 = 0;
  _DAT_0064d258 = 0;
  _DAT_0064d25c = 0;
  _DAT_0064d290 = ((void*)0x00537410);
  _DAT_0064d294 = 0;
  _DAT_0064d298 = 0;
  _DAT_0064d29c = 0;
  _DAT_0064d2d0 = ((void*)0x00535920);
  _DAT_0064d1b4 = 0;
  _DAT_0064d1b8 = 0;
  _DAT_0064d1bc = 0;
  _DAT_0064d1c0 = 0;
  _DAT_0064d1c4 = 0;
  _DAT_0064d1c8 = 5;
  _DAT_0064d1e0 = s_Activate_00623e14;
  _DAT_0064d1e4 = 0;
  _DAT_0064d1e8 = 0;
  _DAT_0064d1ec = 0;
  _DAT_0064d1f0 = 0;
  _DAT_0064d1f4 = 0;
  _DAT_0064d1f8 = 0;
  _DAT_0064d1fc = 0;
  _DAT_0064d200 = 0;
  _DAT_0064d204 = 0;
  _DAT_0064d208 = 0;
  _DAT_0064d220 = s_PrintText_0064f984;
  _DAT_0064d224 = 1;
  _DAT_0064d228 = 0;
  _DAT_0064d22c = 1;
  _DAT_0064d230 = 0;
  _DAT_0064d234 = 0;
  _DAT_0064d238 = 0;
  _DAT_0064d23c = 0;
  _DAT_0064d240 = 0;
  _DAT_0064d244 = 0;
  _DAT_0064d248 = 0;
  _DAT_0064d260 = s_AddMessage_0064f978;
  _DAT_0064d264 = 2;
  _DAT_0064d268 = 0;
  _DAT_0064d26c = 1;
  _DAT_0064d270 = 2;
  _DAT_0064d274 = 0;
  _DAT_0064d278 = 0;
  _DAT_0064d27c = 0;
  _DAT_0064d280 = 0;
  _DAT_0064d284 = 0;
  _DAT_0064d288 = 0;
  _DAT_0064d2a0 = s_GetHealth_0064f96c;
  _DAT_0064d2a4 = 0;
  _DAT_0064d2a8 = 1;
  _DAT_0064d2ac = 0;
  _DAT_0064d2b0 = 0;
  _DAT_0064d2b4 = 0;
  _DAT_0064d2b8 = 0;
  _DAT_0064d2bc = 0;
  _DAT_0064d2c0 = 0;
  _DAT_0064d2c4 = 0;
  _DAT_0064d2c8 = 2;
  _DAT_0064d2d4 = 0;
  _DAT_0064d2d8 = 0;
  _DAT_0064d2dc = 0;
  _DAT_0064d32c = 5;
  _DAT_0064d388 = 5;
  _DAT_0064d310 = ((void*)0x005358e0);
  _DAT_0064d390 = ((void*)0x005363e0);
  _DAT_0064d314 = 0;
  _DAT_0064d318 = 0;
  _DAT_0064d31c = 0;
  _DAT_0064d394 = 0;
  _DAT_0064d398 = 0;
  _DAT_0064d350 = ((void*)0x00536070);
  _DAT_0064d3d0 = ((void*)0x00535ea0);
  _DAT_0064d2e0 = s_SetTimer_0064f960;
  _DAT_0064d3d4 = 0;
  _DAT_0064d3d8 = 0;
  _DAT_0064d2e4 = 1;
  _DAT_0064d2e8 = 0;
  _DAT_0064d2ec = 2;
  _DAT_0064d2f0 = 0;
  _DAT_0064d2f4 = 0;
  _DAT_0064d2f8 = 0;
  _DAT_0064d2fc = 0;
  _DAT_0064d300 = 0;
  _DAT_0064d304 = 0;
  _DAT_0064d308 = 0;
  _DAT_0064d320 = s_GetDistToObj_0064f950;
  _DAT_0064d324 = 1;
  _DAT_0064d328 = 1;
  _DAT_0064d330 = 0;
  _DAT_0064d334 = 0;
  _DAT_0064d338 = 0;
  _DAT_0064d33c = 0;
  _DAT_0064d340 = 0;
  _DAT_0064d344 = 0;
  _DAT_0064d348 = 2;
  _DAT_0064d354 = 0;
  _DAT_0064d358 = 0;
  _DAT_0064d35c = 0;
  _DAT_0064d360 = s_GetPlayer_0064f944;
  _DAT_0064d364 = 1;
  _DAT_0064d368 = 1;
  _DAT_0064d36c = 1;
  _DAT_0064d370 = 0;
  _DAT_0064d374 = 0;
  _DAT_0064d378 = 0;
  _DAT_0064d37c = 0;
  _DAT_0064d380 = 0;
  _DAT_0064d384 = 0;
  _DAT_0064d39c = 0;
  _DAT_0064d3a0 = s_SetVisible_0064f938;
  _DAT_0064d3a4 = 1;
  _DAT_0064d3a8 = 0;
  _DAT_0064d3ac = 4;
  _DAT_0064d3b0 = 0;
  _DAT_0064d3b4 = 0;
  _DAT_0064d3b8 = 0;
  _DAT_0064d3bc = 0;
  _DAT_0064d3c0 = 0;
  _DAT_0064d3c4 = 0;
  _DAT_0064d3c8 = 0;
  _DAT_0064d3dc = 0;
  _DAT_0064d3e0 = s_SetObjective_0064f928;
  _DAT_0064d3e4 = 0;
  _DAT_0064d3e8 = 0;
  _DAT_0064d3ec = 0;
  _DAT_0064d3f0 = 0;
  _DAT_0064d3f4 = 0;
  _DAT_0064d3f8 = 0;
  _DAT_0064d3fc = 0;
  _DAT_0064d400 = 0;
  _DAT_0064d404 = 0;
  _DAT_0064d408 = 0;
  _DAT_0064d410 = ((void*)0x00535ed0);
  _DAT_0064d41c = 0;
  _DAT_0064d414 = 0;
  _DAT_0064d418 = 0;
  _DAT_0064d420 = s_SetAIState_0064f91c;
  _DAT_0064d450 = ((void*)0x005361a0);
  _DAT_0064d454 = 0;
  _DAT_0064d458 = 0;
  _DAT_0064d424 = 1;
  _DAT_0064d490 = ((void*)0x00536350);
  _DAT_0064d494 = 0;
  _DAT_0064d498 = 0;
  _DAT_0064d428 = 0;
  _DAT_0064d4d0 = ((void*)0x005369b0);
  _DAT_0064d4d4 = 0;
  _DAT_0064d4d8 = 0;
  _DAT_0064d42c = 1;
  _DAT_0064d510 = ((void*)0x00535890);
  _DAT_0064d430 = 0;
  _DAT_0064d434 = 0;
  _DAT_0064d438 = 0;
  _DAT_0064d43c = 0;
  _DAT_0064d440 = 0;
  _DAT_0064d444 = 0;
  _DAT_0064d448 = 2;
  _DAT_0064d45c = 0;
  _DAT_0064d460 = &PTR_LAB_0064f918;
  _DAT_0064d464 = 1;
  _DAT_0064d468 = 1;
  _DAT_0064d46c = 1;
  _DAT_0064d470 = 0;
  _DAT_0064d474 = 0;
  _DAT_0064d478 = 0;
  _DAT_0064d47c = 0;
  _DAT_0064d480 = 0;
  _DAT_0064d484 = 0;
  _DAT_0064d488 = 4;
  _DAT_0064d49c = 0;
  _DAT_0064d4a0 = s_Teleport_0064f90c;
  _DAT_0064d4a4 = 1;
  _DAT_0064d4a8 = 0;
  _DAT_0064d4ac = 3;
  _DAT_0064d4b0 = 0;
  _DAT_0064d4b4 = 0;
  _DAT_0064d4b8 = 0;
  _DAT_0064d4bc = 0;
  _DAT_0064d4c0 = 0;
  _DAT_0064d4c4 = 0;
  _DAT_0064d4c8 = 0;
  _DAT_0064d4dc = 0;
  _DAT_0064d4e0 = s_PlayCutscene_0064f8fc;
  _DAT_0064d4e4 = 1;
  _DAT_0064d4e8 = 0;
  _DAT_0064d4ec = 3;
  _DAT_0064d4f0 = 0;
  _DAT_0064d4f4 = 0;
  _DAT_0064d4f8 = 0;
  _DAT_0064d4fc = 0;
  _DAT_0064d500 = 0;
  _DAT_0064d504 = 0;
  _DAT_0064d508 = 0;
  _DAT_0064d514 = 0;
  _DAT_0064d518 = 0;
  _DAT_0064d51c = 0;
  _DAT_0064d520 = s_PlayCharMessage_0064f8ec;
  _DAT_0064d524 = 3;
  _DAT_0064d528 = 0;
  _DAT_0064d52c = 1;
  _DAT_0064d530 = 1;
  _DAT_0064d534 = 2;
  _DAT_0064d538 = 0;
  _DAT_0064d53c = 0;
  _DAT_0064d540 = 0;
  _DAT_0064d544 = 0;
  _DAT_0064d550 = ((void*)0x00537500);
  _DAT_0064d554 = 0;
  _DAT_0064d558 = 0;
  _DAT_0064d548 = 0;
  _DAT_0064d590 = ((void*)0x00535d60);
  _DAT_0064d594 = 0;
  _DAT_0064d598 = 0;
  _DAT_0064d55c = 0;
  _DAT_0064d5d0 = ((void*)0x00535ee0);
  _DAT_0064d5d4 = 0;
  _DAT_0064d5d8 = 0;
  _DAT_0064d560 = s_Deactivate_00623e08;
  _DAT_0064d610 = ((void*)0x00535ef0);
  _DAT_0064d614 = 0;
  _DAT_0064d618 = 0;
  _DAT_0064d564 = 0;
  _DAT_0064d650 = ((void*)0x00535f70);
  _DAT_0064d568 = 0;
  _DAT_0064d56c = 0;
  _DAT_0064d570 = 0;
  _DAT_0064d574 = 0;
  _DAT_0064d578 = 0;
  _DAT_0064d57c = 0;
  _DAT_0064d580 = 0;
  _DAT_0064d584 = 0;
  _DAT_0064d588 = 0;
  _DAT_0064d59c = 0;
  _DAT_0064d5a0 = s_UnsetObjective_0064f8dc;
  _DAT_0064d5a4 = 0;
  _DAT_0064d5a8 = 0;
  _DAT_0064d5ac = 0;
  _DAT_0064d5b0 = 0;
  _DAT_0064d5b4 = 0;
  _DAT_0064d5b8 = 0;
  _DAT_0064d5bc = 0;
  _DAT_0064d5c0 = 0;
  _DAT_0064d5c4 = 0;
  _DAT_0064d5c8 = 0;
  _DAT_0064d5dc = 0;
  _DAT_0064d5e0 = s_IsObjective_0064f8d0;
  _DAT_0064d5e4 = 0;
  _DAT_0064d5e8 = 1;
  _DAT_0064d5ec = 0;
  _DAT_0064d5f0 = 0;
  _DAT_0064d5f4 = 0;
  _DAT_0064d5f8 = 0;
  _DAT_0064d5fc = 0;
  _DAT_0064d600 = 0;
  _DAT_0064d604 = 0;
  _DAT_0064d608 = 4;
  _DAT_0064d61c = 0;
  _DAT_0064d620 = s_SetVulnerable_0064f8c0;
  _DAT_0064d624 = 1;
  _DAT_0064d628 = 0;
  _DAT_0064d62c = 4;
  _DAT_0064d630 = 0;
  _DAT_0064d634 = 0;
  _DAT_0064d638 = 0;
  _DAT_0064d63c = 0;
  _DAT_0064d640 = 0;
  _DAT_0064d644 = 0;
  _DAT_0064d648 = 0;
  _DAT_0064d654 = 0;
  _DAT_0064d658 = 0;
  _DAT_0064d65c = 0;
  _DAT_0064d660 = s_NumContained_0064f8b0;
  _DAT_0064d664 = 1;
  _DAT_0064d668 = 1;
  _DAT_0064d66c = 3;
  _DAT_0064d670 = 0;
  _DAT_0064d674 = 0;
  _DAT_0064d690 = ((void*)0x00535d70);
  _DAT_0064d694 = 0;
  _DAT_0064d698 = 0;
  _DAT_0064d678 = 0;
  _DAT_0064d6d0 = ((void*)0x00535e60);
  _DAT_0064d6d4 = 0;
  _DAT_0064d6d8 = 0;
  _DAT_0064d67c = 0;
  _DAT_0064d710 = ((void*)0x00535e80);
  _DAT_0064d714 = 0;
  _DAT_0064d718 = 0;
  _DAT_0064d680 = 0;
  _DAT_0064d750 = ((void*)0x005375f0);
  _DAT_0064d754 = 0;
  _DAT_0064d758 = 0;
  _DAT_0064d684 = 0;
  _DAT_0064d790 = ((void*)0x00535610);
  _DAT_0064d688 = 1;
  _DAT_0064d69c = 0;
  _DAT_0064d6a0 = s_HighlightHudPart_0064f89c;
  _DAT_0064d6a4 = 1;
  _DAT_0064d6a8 = 0;
  _DAT_0064d6ac = 1;
  _DAT_0064d6b0 = 0;
  _DAT_0064d6b4 = 0;
  _DAT_0064d6b8 = 0;
  _DAT_0064d6bc = 0;
  _DAT_0064d6c0 = 0;
  _DAT_0064d6c4 = 0;
  _DAT_0064d6c8 = 1;
  _DAT_0064d6dc = 0;
  _DAT_0064d6e0 = s_UnHighlightHudPart_0064f888;
  _DAT_0064d6e4 = 1;
  _DAT_0064d6e8 = 0;
  _DAT_0064d6ec = 1;
  _DAT_0064d6f0 = 0;
  _DAT_0064d6f4 = 0;
  _DAT_0064d6f8 = 0;
  _DAT_0064d6fc = 0;
  _DAT_0064d700 = 0;
  _DAT_0064d704 = 0;
  _DAT_0064d708 = 1;
  _DAT_0064d71c = 0;
  _DAT_0064d720 = s_PlayCharMessageWait_0064f874;
  _DAT_0064d724 = 3;
  _DAT_0064d728 = 0;
  _DAT_0064d72c = 1;
  _DAT_0064d730 = 1;
  _DAT_0064d734 = 2;
  _DAT_0064d738 = 0;
  _DAT_0064d73c = 0;
  _DAT_0064d740 = 0;
  _DAT_0064d744 = 0;
  _DAT_0064d748 = 0;
  _DAT_0064d75c = 0;
  _DAT_0064d760 = s_GetWeaponAmmo_0064f864;
  _DAT_0064d764 = 0;
  _DAT_0064d768 = 1;
  _DAT_0064d76c = 0;
  _DAT_0064d770 = 0;
  _DAT_0064d774 = 0;
  _DAT_0064d778 = 0;
  _DAT_0064d77c = 0;
  _DAT_0064d780 = 0;
  _DAT_0064d784 = 0;
  _DAT_0064d788 = 2;
  _DAT_0064d794 = 0;
  _DAT_0064d798 = 0;
  _DAT_0064d79c = 0;
  _DAT_0064d7a0 = s_GetWeaponName_0064f854;
  _DAT_0064d7a4 = 0;
  _DAT_0064d7d0 = ((void*)0x00535670);
  _DAT_0064d7d4 = 0;
  _DAT_0064d7d8 = 0;
  _DAT_0064d7a8 = 1;
  _DAT_0064d810 = ((void*)0x00535750);
  _DAT_0064d814 = 0;
  _DAT_0064d818 = 0;
  _DAT_0064d7ac = 0;
  _DAT_0064d850 = ((void*)0x00535590);
  _DAT_0064d854 = 0;
  _DAT_0064d858 = 0;
  _DAT_0064d7b0 = 0;
  _DAT_0064d890 = ((void*)0x00535560);
  _DAT_0064d894 = 0;
  _DAT_0064d898 = 0;
  _DAT_0064d7b4 = 0;
  _DAT_0064d8d0 = ((void*)0x00538300);
  _DAT_0064d7b8 = 0;
  _DAT_0064d7bc = 0;
  _DAT_0064d7c0 = 0;
  _DAT_0064d7c4 = 0;
  _DAT_0064d7c8 = 3;
  _DAT_0064d7dc = 0;
  _DAT_0064d7e0 = s_GetWeaponCharge_0064f844;
  _DAT_0064d7e4 = 0;
  _DAT_0064d7e8 = 1;
  _DAT_0064d7ec = 0;
  _DAT_0064d7f0 = 0;
  _DAT_0064d7f4 = 0;
  _DAT_0064d7f8 = 0;
  _DAT_0064d7fc = 0;
  _DAT_0064d800 = 0;
  _DAT_0064d804 = 0;
  _DAT_0064d808 = 2;
  _DAT_0064d81c = 0;
  _DAT_0064d820 = s_GetNumUnits_0064f838;
  _DAT_0064d824 = 2;
  _DAT_0064d828 = 1;
  _DAT_0064d82c = 1;
  _DAT_0064d830 = 1;
  _DAT_0064d834 = 0;
  _DAT_0064d838 = 0;
  _DAT_0064d83c = 0;
  _DAT_0064d840 = 0;
  _DAT_0064d844 = 0;
  _DAT_0064d848 = 1;
  _DAT_0064d85c = 0;
  _DAT_0064d860 = s_SetAllegiance_0064f828;
  _DAT_0064d864 = 1;
  _DAT_0064d868 = 0;
  _DAT_0064d86c = 1;
  _DAT_0064d870 = 0;
  _DAT_0064d874 = 0;
  _DAT_0064d878 = 0;
  _DAT_0064d87c = 0;
  _DAT_0064d880 = 0;
  _DAT_0064d884 = 0;
  _DAT_0064d888 = 0;
  _DAT_0064d89c = 0;
  _DAT_0064d8a0 = s_SetWindVector_0064f818;
  _DAT_0064d8a4 = 3;
  _DAT_0064d8a8 = 0;
  _DAT_0064d8ac = 2;
  _DAT_0064d8b0 = 2;
  _DAT_0064d8b4 = 2;
  _DAT_0064d8b8 = 0;
  _DAT_0064d8bc = 0;
  _DAT_0064d8c0 = 0;
  _DAT_0064d8c4 = 0;
  _DAT_0064d8c8 = 0;
  _DAT_0064d8d4 = 0;
  _DAT_0064d8d8 = 0;
  _DAT_0064d8dc = 0;
  _DAT_0064d910 = ((void*)0x00538360);
  _DAT_0064d914 = 0;
  _DAT_0064d918 = 0;
  _DAT_0064d8e0 = s_SetRainDensity_0064f808;
  _DAT_0064d950 = ((void*)0x00538380);
  _DAT_0064d954 = 0;
  _DAT_0064d958 = 0;
  _DAT_0064d8e4 = 1;
  _DAT_0064d990 = ((void*)0x005383a0);
  _DAT_0064d994 = 0;
  _DAT_0064d998 = 0;
  _DAT_0064d8e8 = 0;
  _DAT_0064d9d0 = ((void*)0x00535c10);
  _DAT_0064d8ec = 2;
  _DAT_0064d8f0 = 0;
  _DAT_0064d8f4 = 0;
  _DAT_0064d8f8 = 0;
  _DAT_0064d8fc = 0;
  _DAT_0064d900 = 0;
  _DAT_0064d904 = 0;
  _DAT_0064d908 = 0;
  _DAT_0064d91c = 0;
  _DAT_0064d920 = s_SetSnowDensity_0064f7f8;
  _DAT_0064d924 = 1;
  _DAT_0064d928 = 0;
  _DAT_0064d92c = 2;
  _DAT_0064d930 = 0;
  _DAT_0064d934 = 0;
  _DAT_0064d938 = 0;
  _DAT_0064d93c = 0;
  _DAT_0064d940 = 0;
  _DAT_0064d944 = 0;
  _DAT_0064d948 = 0;
  _DAT_0064d95c = 0;
  _DAT_0064d960 = s_SetLightningDensity_0064f7e4;
  _DAT_0064d964 = 1;
  _DAT_0064d968 = 0;
  _DAT_0064d96c = 2;
  _DAT_0064d970 = 0;
  _DAT_0064d974 = 0;
  _DAT_0064d978 = 0;
  _DAT_0064d97c = 0;
  _DAT_0064d980 = 0;
  _DAT_0064d984 = 0;
  _DAT_0064d988 = 0;
  _DAT_0064d99c = 0;
  _DAT_0064d9a0 = s_SetHealth_0064f7d8;
  _DAT_0064d9a4 = 1;
  _DAT_0064d9a8 = 0;
  _DAT_0064d9ac = 2;
  _DAT_0064d9b0 = 0;
  _DAT_0064d9b4 = 0;
  _DAT_0064d9b8 = 0;
  _DAT_0064d9bc = 0;
  _DAT_0064d9c0 = 0;
  _DAT_0064d9c4 = 0;
  _DAT_0064d9c8 = 0;
  _DAT_0064d9d4 = 0;
  _DAT_0064d9d8 = 0;
  _DAT_0064d9dc = 0;
  _DAT_0064d9e0 = s_GetRatioBattleLineNodes_0064f7c0;
  _DAT_0064d9e4 = 1;
  _DAT_0064d9e8 = 1;
  _DAT_0064d9ec = 1;
  _DAT_0064d9f0 = 0;
  _DAT_0064d9f4 = 0;
  _DAT_0064d9f8 = 0;
  _DAT_0064d9fc = 0;
  _DAT_0064da00 = 0;
  _DAT_0064da04 = 0;
  _DAT_0064da90 = ((void*)0x00536c00);
  _DAT_0064da10 = ((void*)0x005353a0);
  _DAT_0064da94 = 0;
  _DAT_0064da98 = 0;
  _DAT_0064da9c = 0;
  _DAT_0064da14 = 0;
  _DAT_0064da18 = 0;
  _DAT_0064dad0 = ((void*)0x00536b70);
  _DAT_0064da50 = ((void*)0x00535c50);
  _DAT_0064dad4 = 0;
  _DAT_0064dad8 = 0;
  _DAT_0064dadc = 0;
  _DAT_0064da54 = 0;
  _DAT_0064da58 = 0;
  _DAT_0064db10 = ((void*)0x00535480);
  _DAT_0064da08 = 2;
  _DAT_0064da1c = 0;
  _DAT_0064da20 = s_SetScript_0064f7b4;
  _DAT_0064da24 = 1;
  _DAT_0064da28 = 0;
  _DAT_0064da2c = 3;
  _DAT_0064da30 = 0;
  _DAT_0064da34 = 0;
  _DAT_0064da38 = 0;
  _DAT_0064da3c = 0;
  _DAT_0064da40 = 0;
  _DAT_0064da44 = 0;
  _DAT_0064da48 = 0;
  _DAT_0064da5c = 0;
  _DAT_0064da60 = s_GetPos_0064f7ac;
  _DAT_0064da64 = 0;
  _DAT_0064da68 = 1;
  _DAT_0064da6c = 0;
  _DAT_0064da70 = 0;
  _DAT_0064da74 = 0;
  _DAT_0064da78 = 0;
  _DAT_0064da7c = 0;
  _DAT_0064da80 = 0;
  _DAT_0064da84 = 0;
  _DAT_0064da88 = 6;
  _DAT_0064daa0 = s_SpawnParticle_0064f79c;
  _DAT_0064daa4 = 2;
  _DAT_0064daa8 = 0;
  _DAT_0064daac = 3;
  _DAT_0064dab0 = 6;
  _DAT_0064dab4 = 0;
  _DAT_0064dab8 = 0;
  _DAT_0064dabc = 0;
  _DAT_0064dac0 = 0;
  _DAT_0064dac4 = 0;
  _DAT_0064dac8 = 0;
  _DAT_0064dae0 = s_SetSegmentHealth_0064f788;
  _DAT_0064dae4 = 2;
  _DAT_0064dae8 = 0;
  _DAT_0064daec = 3;
  _DAT_0064daf0 = 2;
  _DAT_0064daf4 = 0;
  _DAT_0064daf8 = 0;
  _DAT_0064dafc = 0;
  _DAT_0064db00 = 0;
  _DAT_0064db04 = 0;
  _DAT_0064db08 = 0;
  _DAT_0064db14 = 0;
  _DAT_0064db18 = 0;
  _DAT_0064db1c = 0;
  _DAT_0064db20 = s_SetAllSegmentsHealth_0064f770;
  _DAT_0064db24 = 1;
  _DAT_0064db28 = 0;
  _DAT_0064db2c = 2;
  _DAT_0064db30 = 0;
  _DAT_0064db34 = 0;
  _DAT_0064db50 = ((void*)0x00535500);
  _DAT_0064db54 = 0;
  _DAT_0064db58 = 0;
  _DAT_0064db5c = 0;
  _DAT_0064db90 = ((void*)0x00535160);
  _DAT_0064db94 = 0;
  _DAT_0064db98 = 0;
  _DAT_0064db9c = 0;
  _DAT_0064dbd0 = ((void*)0x005351d0);
  _DAT_0064dbd4 = 0;
  _DAT_0064dbd8 = 0;
  _DAT_0064dbdc = 0;
  _DAT_0064dc10 = ((void*)0x00534ac0);
  _DAT_0064dc14 = 0;
  _DAT_0064dc18 = 0;
  _DAT_0064dc1c = 0;
  _DAT_0064dc50 = ((void*)0x00534b30);
  _DAT_0064db38 = 0;
  _DAT_0064db3c = 0;
  _DAT_0064db40 = 0;
  _DAT_0064db44 = 0;
  _DAT_0064db48 = 0;
  _DAT_0064db60 = s_PlayAnimation_0064f760;
  _DAT_0064db64 = 3;
  _DAT_0064db68 = 0;
  _DAT_0064db6c = 3;
  _DAT_0064db70 = 4;
  _DAT_0064db74 = 4;
  _DAT_0064db78 = 0;
  _DAT_0064db7c = 0;
  _DAT_0064db80 = 0;
  _DAT_0064db84 = 0;
  _DAT_0064db88 = 0;
  _DAT_0064dba0 = s_PlayAnimationWait_0064f74c;
  _DAT_0064dba4 = 3;
  _DAT_0064dba8 = 0;
  _DAT_0064dbac = 3;
  _DAT_0064dbb0 = 4;
  _DAT_0064dbb4 = 4;
  _DAT_0064dbb8 = 0;
  _DAT_0064dbbc = 0;
  _DAT_0064dbc0 = 0;
  _DAT_0064dbc4 = 0;
  _DAT_0064dbc8 = 0;
  _DAT_0064dbe0 = s_GetMapHeight_0064f73c;
  _DAT_0064dbe4 = 1;
  _DAT_0064dbe8 = 1;
  _DAT_0064dbec = 6;
  _DAT_0064dbf0 = 0;
  _DAT_0064dbf4 = 0;
  _DAT_0064dbf8 = 0;
  _DAT_0064dbfc = 0;
  _DAT_0064dc00 = 0;
  _DAT_0064dc04 = 0;
  _DAT_0064dc08 = 2;
  _DAT_0064dc20 = s_GetWaterHeight_0064f72c;
  _DAT_0064dc24 = 0;
  _DAT_0064dc28 = 1;
  _DAT_0064dc2c = 0;
  _DAT_0064dc30 = 0;
  _DAT_0064dc34 = 0;
  _DAT_0064dc38 = 0;
  _DAT_0064dc3c = 0;
  _DAT_0064dc40 = 0;
  _DAT_0064dc44 = 0;
  _DAT_0064dc48 = 2;
  _DAT_0064dc54 = 0;
  _DAT_0064dc58 = 0;
  _DAT_0064dc5c = 0;
  _DAT_0064dc60 = &DAT_0064f724;
  _DAT_0064dc64 = 1;
  _DAT_0064dc90 = ((void*)0x00534b80);
  _DAT_0064dc94 = 0;
  _DAT_0064dc98 = 0;
  _DAT_0064dc9c = 0;
  _DAT_0064dcd0 = ((void*)0x00534c10);
  _DAT_0064dcd4 = 0;
  _DAT_0064dcd8 = 0;
  _DAT_0064dcdc = 0;
  _DAT_0064dd10 = ((void*)0x00534ca0);
  _DAT_0064dd14 = 0;
  _DAT_0064dd18 = 0;
  _DAT_0064dd1c = 0;
  _DAT_0064dd50 = ((void*)0x00534d30);
  _DAT_0064dd54 = 0;
  _DAT_0064dd58 = 0;
  _DAT_0064dd5c = 0;
  _DAT_0064dd90 = &DAT_00534dc0;
  _DAT_0064dc68 = 1;
  _DAT_0064dc6c = 6;
  _DAT_0064dc70 = 0;
  _DAT_0064dc74 = 0;
  _DAT_0064dc78 = 0;
  _DAT_0064dc7c = 0;
  _DAT_0064dc80 = 0;
  _DAT_0064dc84 = 0;
  _DAT_0064dc88 = 2;
  _DAT_0064dca0 = &DAT_0064f71c;
  _DAT_0064dca4 = 1;
  _DAT_0064dca8 = 1;
  _DAT_0064dcac = 6;
  _DAT_0064dcb0 = 0;
  _DAT_0064dcb4 = 0;
  _DAT_0064dcb8 = 0;
  _DAT_0064dcbc = 0;
  _DAT_0064dcc0 = 0;
  _DAT_0064dcc4 = 0;
  _DAT_0064dcc8 = 2;
  _DAT_0064dce0 = &DAT_0064f714;
  _DAT_0064dce4 = 1;
  _DAT_0064dce8 = 1;
  _DAT_0064dcec = 6;
  _DAT_0064dcf0 = 0;
  _DAT_0064dcf4 = 0;
  _DAT_0064dcf8 = 0;
  _DAT_0064dcfc = 0;
  _DAT_0064dd00 = 0;
  _DAT_0064dd04 = 0;
  _DAT_0064dd08 = 2;
  _DAT_0064dd20 = &DAT_0064f70c;
  _DAT_0064dd24 = 2;
  _DAT_0064dd28 = 1;
  _DAT_0064dd2c = 6;
  _DAT_0064dd30 = 2;
  _DAT_0064dd34 = 0;
  _DAT_0064dd38 = 0;
  _DAT_0064dd3c = 0;
  _DAT_0064dd40 = 0;
  _DAT_0064dd44 = 0;
  _DAT_0064dd48 = 6;
  _DAT_0064dd60 = &DAT_0064f704;
  _DAT_0064dd64 = 2;
  _DAT_0064dd68 = 1;
  _DAT_0064dd6c = 6;
  _DAT_0064dd70 = 2;
  _DAT_0064dd74 = 0;
  _DAT_0064dd78 = 0;
  _DAT_0064dd7c = 0;
  _DAT_0064dd80 = 0;
  _DAT_0064dd84 = 0;
  _DAT_0064dd88 = 6;
  _DAT_0064dd94 = 0;
  _DAT_0064dd98 = 0;
  _DAT_0064dd9c = 0;
  _DAT_0064ddd0 = ((void*)0x00534e50);
  _DAT_0064ddd4 = 0;
  _DAT_0064ddd8 = 0;
  _DAT_0064dddc = 0;
  _DAT_0064de10 = ((void*)0x00534ee0);
  _DAT_0064de14 = 0;
  _DAT_0064de18 = 0;
  _DAT_0064de1c = 0;
  _DAT_0064de50 = ((void*)0x005350b0);
  _DAT_0064de54 = 0;
  _DAT_0064de58 = 0;
  _DAT_0064de5c = 0;
  _DAT_0064de90 = ((void*)0x005349b0);
  _DAT_0064dda0 = &DAT_0064f6fc;
  _DAT_0064dda4 = 2;
  _DAT_0064dda8 = 1;
  _DAT_0064ddac = 6;
  _DAT_0064ddb0 = 2;
  _DAT_0064ddb4 = 0;
  _DAT_0064ddb8 = 0;
  _DAT_0064ddbc = 0;
  _DAT_0064ddc0 = 0;
  _DAT_0064ddc4 = 0;
  _DAT_0064ddc8 = 6;
  _DAT_0064dde0 = s_SetGoalPoint_0064f6ec;
  _DAT_0064dde4 = 1;
  _DAT_0064dde8 = 0;
  _DAT_0064ddec = 6;
  _DAT_0064ddf0 = 0;
  _DAT_0064ddf4 = 0;
  _DAT_0064ddf8 = 0;
  _DAT_0064ddfc = 0;
  _DAT_0064de00 = 0;
  _DAT_0064de04 = 0;
  _DAT_0064de08 = 0;
  _DAT_0064de20 = s_GetSafePos_0064f6e0;
  _DAT_0064de24 = 0;
  _DAT_0064de28 = 1;
  _DAT_0064de2c = 0;
  _DAT_0064de30 = 0;
  _DAT_0064de34 = 0;
  _DAT_0064de38 = 0;
  _DAT_0064de3c = 0;
  _DAT_0064de40 = 0;
  _DAT_0064de44 = 0;
  _DAT_0064de48 = 6;
  _DAT_0064de60 = s_GetComponent_0064f6d0;
  _DAT_0064de64 = 1;
  _DAT_0064de68 = 1;
  _DAT_0064de6c = 1;
  _DAT_0064de70 = 0;
  _DAT_0064de74 = 0;
  _DAT_0064de78 = 0;
  _DAT_0064de7c = 0;
  _DAT_0064de80 = 0;
  _DAT_0064de84 = 0;
  _DAT_0064de88 = 5;
  _DAT_0064de94 = 0;
  _DAT_0064de98 = 0;
  _DAT_0064de9c = 0;
  _DAT_0064dea0 = s_CreatePosition_0064f6c0;
  _DAT_0064dea4 = 3;
  _DAT_0064dea8 = 1;
  _DAT_0064deac = 2;
  _DAT_0064deb0 = 2;
  _DAT_0064deb4 = 2;
  _DAT_0064deb8 = 0;
  _DAT_0064debc = 0;
  _DAT_0064dec0 = 0;
  _DAT_0064dec4 = 0;
  _DAT_0064dec8 = 6;
  _DAT_0064ded0 = ((void*)0x00534910);
  _DAT_0064ded4 = 0;
  _DAT_0064ded8 = 0;
  _DAT_0064dedc = 0;
  _DAT_0064df10 = ((void*)0x00538290);
  _DAT_0064df14 = 0;
  _DAT_0064df18 = 0;
  _DAT_0064df1c = 0;
  _DAT_0064df50 = ((void*)0x005348f0);
  _DAT_0064df54 = 0;
  _DAT_0064df58 = 0;
  _DAT_0064df5c = 0;
  _DAT_0064df90 = ((void*)0x005348c0);
  _DAT_0064df94 = 0;
  _DAT_0064df98 = 0;
  _DAT_0064df9c = 0;
  _DAT_0064dfd0 = ((void*)0x00534770);
  _DAT_0064dee0 = s_GetFloatRand_0064f6b0;
  _DAT_0064dee4 = 0;
  _DAT_0064dee8 = 1;
  _DAT_0064deec = 0;
  _DAT_0064def0 = 0;
  _DAT_0064def4 = 0;
  _DAT_0064def8 = 0;
  _DAT_0064defc = 0;
  _DAT_0064df00 = 0;
  _DAT_0064df04 = 0;
  _DAT_0064df08 = 2;
  _DAT_0064df20 = s_SetVar_0064f6a8;
  _DAT_0064df24 = 2;
  _DAT_0064df28 = 0;
  _DAT_0064df2c = 3;
  _DAT_0064df30 = 7;
  _DAT_0064df34 = 0;
  _DAT_0064df38 = 0;
  _DAT_0064df3c = 0;
  _DAT_0064df40 = 0;
  _DAT_0064df44 = 0;
  _DAT_0064df48 = 0;
  _DAT_0064df60 = s_Damage_0064f6a0;
  _DAT_0064df64 = 1;
  _DAT_0064df68 = 0;
  _DAT_0064df6c = 2;
  _DAT_0064df70 = 0;
  _DAT_0064df74 = 0;
  _DAT_0064df78 = 0;
  _DAT_0064df7c = 0;
  _DAT_0064df80 = 0;
  _DAT_0064df84 = 0;
  _DAT_0064df88 = 0;
  _DAT_0064dfa0 = s_GameTime_0064f694;
  _DAT_0064dfa4 = 0;
  _DAT_0064dfa8 = 1;
  _DAT_0064dfac = 0;
  _DAT_0064dfb0 = 0;
  _DAT_0064dfb4 = 0;
  _DAT_0064dfb8 = 0;
  _DAT_0064dfbc = 0;
  _DAT_0064dfc0 = 0;
  _DAT_0064dfc4 = 0;
  _DAT_0064dfc8 = 2;
  _DAT_0064dfd4 = 0;
  _DAT_0064dfd8 = 0;
  _DAT_0064dfdc = 0;
  _DAT_0064dfe0 = s_IsEnemy_0064f68c;
  _DAT_0064dfe4 = 0;
  _DAT_0064dfe8 = 1;
  _DAT_0064dfec = 0;
  _DAT_0064dff0 = 0;
  _DAT_0064dff4 = 0;
  _DAT_0064dff8 = 0;
  _DAT_0064e010 = ((void*)0x00538060);
  _DAT_0064e014 = 0;
  _DAT_0064e018 = 0;
  _DAT_0064e01c = 0;
  _DAT_0064e050 = ((void*)0x005361d0);
  _DAT_0064e054 = 0;
  _DAT_0064e058 = 0;
  _DAT_0064e05c = 0;
  _DAT_0064e090 = ((void*)0x00535a90);
  _DAT_0064e094 = 0;
  _DAT_0064e098 = 0;
  _DAT_0064e09c = 0;
  _DAT_0064e0d0 = ((void*)0x005361f0);
  _DAT_0064e0d4 = 0;
  _DAT_0064e0d8 = 0;
  _DAT_0064e0dc = 0;
  _DAT_0064e110 = ((void*)0x00536210);
  _DAT_0064dffc = 0;
  _DAT_0064e000 = 0;
  _DAT_0064e004 = 0;
  _DAT_0064e008 = 4;
  _DAT_0064e020 = &DAT_0064f684;
  _DAT_0064e024 = 0;
  _DAT_0064e028 = 0;
  _DAT_0064e02c = 0;
  _DAT_0064e030 = 0;
  _DAT_0064e034 = 0;
  _DAT_0064e038 = 0;
  _DAT_0064e03c = 0;
  _DAT_0064e040 = 0;
  _DAT_0064e044 = 0;
  _DAT_0064e048 = 2;
  _DAT_0064e060 = s_SpawnersEmpty_0064f674;
  _DAT_0064e064 = 0;
  _DAT_0064e068 = 1;
  _DAT_0064e06c = 0;
  _DAT_0064e070 = 0;
  _DAT_0064e074 = 0;
  _DAT_0064e078 = 0;
  _DAT_0064e07c = 0;
  _DAT_0064e080 = 0;
  _DAT_0064e084 = 0;
  _DAT_0064e088 = 4;
  _DAT_0064e0a0 = &DAT_0064f66c;
  _DAT_0064e0a4 = 0;
  _DAT_0064e0a8 = 0;
  _DAT_0064e0ac = 0;
  _DAT_0064e0b0 = 0;
  _DAT_0064e0b4 = 0;
  _DAT_0064e0b8 = 0;
  _DAT_0064e0bc = 0;
  _DAT_0064e0c0 = 0;
  _DAT_0064e0c4 = 0;
  _DAT_0064e0c8 = 2;
  _DAT_0064e0e0 = s_Surface_0064f664;
  _DAT_0064e0e4 = 0;
  _DAT_0064e0e8 = 0;
  _DAT_0064e0ec = 0;
  _DAT_0064e0f0 = 0;
  _DAT_0064e0f4 = 0;
  _DAT_0064e0f8 = 0;
  _DAT_0064e0fc = 0;
  _DAT_0064e100 = 0;
  _DAT_0064e104 = 0;
  _DAT_0064e108 = 2;
  _DAT_0064e114 = 0;
  _DAT_0064e118 = 0;
  _DAT_0064e11c = 0;
  _DAT_0064e120 = s_InitVariable_0064f654;
  _DAT_0064e124 = 2;
  _DAT_0064e128 = 0;
  _DAT_0064e150 = ((void*)0x00536230);
  _DAT_0064e154 = 0;
  _DAT_0064e158 = 0;
  _DAT_0064e15c = 0;
  _DAT_0064e190 = ((void*)0x00536260);
  _DAT_0064e194 = 0;
  _DAT_0064e198 = 0;
  _DAT_0064e19c = 0;
  _DAT_0064e1d0 = ((void*)0x00536330);
  _DAT_0064e1d4 = 0;
  _DAT_0064e1d8 = 0;
  _DAT_0064e1dc = 0;
  _DAT_0064e210 = ((void*)0x00535d00);
  _DAT_0064e214 = 0;
  _DAT_0064e218 = 0;
  _DAT_0064e21c = 0;
  _DAT_0064e250 = ((void*)0x00535bb0);
  _DAT_0064e12c = 1;
  _DAT_0064e130 = 1;
  _DAT_0064e134 = 0;
  _DAT_0064e138 = 0;
  _DAT_0064e13c = 0;
  _DAT_0064e140 = 0;
  _DAT_0064e144 = 0;
  _DAT_0064e148 = 2;
  _DAT_0064e160 = s_SetVariable_0064f648;
  _DAT_0064e164 = 3;
  _DAT_0064e168 = 0;
  _DAT_0064e16c = 1;
  _DAT_0064e170 = 2;
  _DAT_0064e174 = 2;
  _DAT_0064e178 = 0;
  _DAT_0064e17c = 0;
  _DAT_0064e180 = 0;
  _DAT_0064e184 = 0;
  _DAT_0064e188 = 2;
  _DAT_0064e1a0 = s_ShutdownVariable_0064f634;
  _DAT_0064e1a4 = 1;
  _DAT_0064e1a8 = 0;
  _DAT_0064e1ac = 1;
  _DAT_0064e1b0 = 0;
  _DAT_0064e1b4 = 0;
  _DAT_0064e1b8 = 0;
  _DAT_0064e1bc = 0;
  _DAT_0064e1c0 = 0;
  _DAT_0064e1c4 = 0;
  _DAT_0064e1c8 = 2;
  _DAT_0064e1e0 = s_Shutdown_0064f628;
  _DAT_0064e1e4 = 0;
  _DAT_0064e1e8 = 0;
  _DAT_0064e1ec = 0;
  _DAT_0064e1f0 = 0;
  _DAT_0064e1f4 = 0;
  _DAT_0064e1f8 = 0;
  _DAT_0064e1fc = 0;
  _DAT_0064e200 = 0;
  _DAT_0064e204 = 0;
  _DAT_0064e208 = 0;
  _DAT_0064e220 = s_GetEnergy_0064f61c;
  _DAT_0064e224 = 0;
  _DAT_0064e228 = 1;
  _DAT_0064e22c = 0;
  _DAT_0064e230 = 0;
  _DAT_0064e234 = 0;
  _DAT_0064e238 = 0;
  _DAT_0064e23c = 0;
  _DAT_0064e240 = 0;
  _DAT_0064e244 = 0;
  _DAT_0064e248 = 2;
  _DAT_0064e254 = 0;
  _DAT_0064e258 = 0;
  _DAT_0064e25c = 0;
  _DAT_0064e260 = s_GetVariable_0064f610;
  _DAT_0064e290 = ((void*)0x005362a0);
  _DAT_0064e294 = 0;
  _DAT_0064e298 = 0;
  _DAT_0064e29c = 0;
  _DAT_0064e2d0 = ((void*)0x00535d30);
  _DAT_0064e2d4 = 0;
  _DAT_0064e2d8 = 0;
  _DAT_0064e2dc = 0;
  _DAT_0064e310 = ((void*)0x005343e0);
  _DAT_0064e314 = 0;
  _DAT_0064e318 = 0;
  _DAT_0064e31c = 0;
  _DAT_0064e350 = ((void*)0x00534410);
  _DAT_0064e264 = 1;
  _DAT_0064e268 = 1;
  _DAT_0064e26c = 2;
  _DAT_0064e270 = 0;
  _DAT_0064e274 = 0;
  _DAT_0064e278 = 0;
  _DAT_0064e27c = 0;
  _DAT_0064e280 = 0;
  _DAT_0064e284 = 0;
  _DAT_0064e288 = 1;
  _DAT_0064e2a0 = s_Retreat_0064f608;
  _DAT_0064e2a4 = 0;
  _DAT_0064e2a8 = 0;
  _DAT_0064e2ac = 0;
  _DAT_0064e2b0 = 0;
  _DAT_0064e2b4 = 0;
  _DAT_0064e2b8 = 0;
  _DAT_0064e2bc = 0;
  _DAT_0064e2c0 = 0;
  _DAT_0064e2c4 = 0;
  _DAT_0064e2c8 = 0;
  _DAT_0064e2e0 = s_PrimaryObjectiveComplete_0064f5ec;
  _DAT_0064e2e4 = 2;
  _DAT_0064e2e8 = 0;
  _DAT_0064e2ec = 1;
  _DAT_0064e2f0 = 1;
  _DAT_0064e2f4 = 0;
  _DAT_0064e2f8 = 0;
  _DAT_0064e2fc = 0;
  _DAT_0064e300 = 0;
  _DAT_0064e304 = 0;
  _DAT_0064e308 = 0;
  _DAT_0064e320 = s_SecondaryObjectiveComplete_0064f5d0;
  _DAT_0064e324 = 2;
  _DAT_0064e328 = 0;
  _DAT_0064e32c = 1;
  _DAT_0064e330 = 1;
  _DAT_0064e334 = 0;
  _DAT_0064e338 = 0;
  _DAT_0064e33c = 0;
  _DAT_0064e340 = 0;
  _DAT_0064e344 = 0;
  _DAT_0064e348 = 0;
  _DAT_0064e354 = 0;
  _DAT_0064e358 = 0;
  _DAT_0064e35c = 0;
  _DAT_0064e360 = s_AddScore_0064f5c4;
  _DAT_0064e364 = 1;
  _DAT_0064e368 = 0;
  _DAT_0064e36c = 1;
  _DAT_0064e370 = 0;
  _DAT_0064e374 = 0;
  _DAT_0064e378 = 0;
  _DAT_0064e37c = 0;
  _DAT_0064e380 = 0;
  _DAT_0064e384 = 0;
  _DAT_0064e388 = 0;
  _DAT_0064e3a0 = s_Attack_0064f5bc;
  _DAT_0064e390 = ((void*)0x005343c0);
  _DAT_0064e394 = 0;
  _DAT_0064e398 = 0;
  _DAT_0064e39c = 0;
  _DAT_0064e3d0 = ((void*)0x00535fa0);
  _DAT_0064e3d4 = 0;
  _DAT_0064e3d8 = 0;
  _DAT_0064e3dc = 0;
  _DAT_0064e410 = ((void*)0x00534440);
  _DAT_0064e414 = 0;
  _DAT_0064e418 = 0;
  _DAT_0064e41c = 0;
  _DAT_0064e450 = ((void*)0x00534470);
  _DAT_0064e454 = 0;
  _DAT_0064e458 = 0;
  _DAT_0064e45c = 0;
  _DAT_0064e490 = ((void*)0x00534680);
  _DAT_0064e3a4 = 1;
  _DAT_0064e3a8 = 0;
  _DAT_0064e3ac = 5;
  _DAT_0064e3b0 = 0;
  _DAT_0064e3b4 = 0;
  _DAT_0064e3b8 = 0;
  _DAT_0064e3bc = 0;
  _DAT_0064e3c0 = 0;
  _DAT_0064e3c4 = 0;
  _DAT_0064e3c8 = 0;
  _DAT_0064e3e0 = s_PrimaryObjectiveFailed_0064f5a4;
  _DAT_0064e3e4 = 2;
  _DAT_0064e3e8 = 0;
  _DAT_0064e3ec = 1;
  _DAT_0064e3f0 = 1;
  _DAT_0064e3f4 = 0;
  _DAT_0064e3f8 = 0;
  _DAT_0064e3fc = 0;
  _DAT_0064e400 = 0;
  _DAT_0064e404 = 0;
  _DAT_0064e408 = 0;
  _DAT_0064e420 = s_SecondaryObjectiveFailed_0064f588;
  _DAT_0064e424 = 2;
  _DAT_0064e428 = 0;
  _DAT_0064e42c = 1;
  _DAT_0064e430 = 1;
  _DAT_0064e434 = 0;
  _DAT_0064e438 = 0;
  _DAT_0064e43c = 0;
  _DAT_0064e440 = 0;
  _DAT_0064e444 = 0;
  _DAT_0064e448 = 0;
  _DAT_0064e460 = s_GetAngle_0064f57c;
  _DAT_0064e464 = 1;
  _DAT_0064e468 = 1;
  _DAT_0064e46c = 5;
  _DAT_0064e470 = 0;
  _DAT_0064e474 = 0;
  _DAT_0064e478 = 0;
  _DAT_0064e47c = 0;
  _DAT_0064e480 = 0;
  _DAT_0064e484 = 0;
  _DAT_0064e488 = 2;
  _DAT_0064e494 = 0;
  _DAT_0064e498 = 0;
  _DAT_0064e49c = 0;
  _DAT_0064e4a0 = s_PlayPCharMessage_0064f568;
  _DAT_0064e4a4 = 4;
  _DAT_0064e4a8 = 0;
  _DAT_0064e4ac = 1;
  _DAT_0064e4b0 = 1;
  _DAT_0064e4b4 = 2;
  _DAT_0064e4b8 = 1;
  _DAT_0064e4bc = 0;
  _DAT_0064e4d0 = ((void*)0x005377e0);
  _DAT_0064e4d4 = 0;
  _DAT_0064e4d8 = 0;
  _DAT_0064e4dc = 0;
  _DAT_0064e510 = ((void*)0x005378e0);
  _DAT_0064e514 = 0;
  _DAT_0064e518 = 0;
  _DAT_0064e51c = 0;
  _DAT_0064e550 = ((void*)0x00535a30);
  _DAT_0064e554 = 0;
  _DAT_0064e558 = 0;
  _DAT_0064e55c = 0;
  _DAT_0064e590 = ((void*)0x00535af0);
  _DAT_0064e594 = 0;
  _DAT_0064e598 = 0;
  _DAT_0064e59c = 0;
  _DAT_0064e5d0 = ((void*)0x00535ca0);
  _DAT_0064e4c0 = 0;
  _DAT_0064e4c4 = 0;
  _DAT_0064e4c8 = 0;
  _DAT_0064e4e0 = s_PlayPCharMessageWait_0064f550;
  _DAT_0064e4e4 = 4;
  _DAT_0064e4e8 = 0;
  _DAT_0064e4ec = 1;
  _DAT_0064e4f0 = 1;
  _DAT_0064e4f4 = 2;
  _DAT_0064e4f8 = 1;
  _DAT_0064e4fc = 0;
  _DAT_0064e500 = 0;
  _DAT_0064e504 = 0;
  _DAT_0064e508 = 0;
  _DAT_0064e520 = s_GetInitialHealth_0064f53c;
  _DAT_0064e524 = 0;
  _DAT_0064e528 = 1;
  _DAT_0064e52c = 0;
  _DAT_0064e530 = 0;
  _DAT_0064e534 = 0;
  _DAT_0064e538 = 0;
  _DAT_0064e53c = 0;
  _DAT_0064e540 = 0;
  _DAT_0064e544 = 0;
  _DAT_0064e548 = 2;
  _DAT_0064e560 = s_SpawnersInUse_0064f52c;
  _DAT_0064e564 = 0;
  _DAT_0064e568 = 1;
  _DAT_0064e56c = 0;
  _DAT_0064e570 = 0;
  _DAT_0064e574 = 0;
  _DAT_0064e578 = 0;
  _DAT_0064e57c = 0;
  _DAT_0064e580 = 0;
  _DAT_0064e584 = 0;
  _DAT_0064e588 = 4;
  _DAT_0064e5a0 = s_SetSpawnScript_0064f51c;
  _DAT_0064e5a4 = 1;
  _DAT_0064e5a8 = 0;
  _DAT_0064e5ac = 3;
  _DAT_0064e5b0 = 0;
  _DAT_0064e5b4 = 0;
  _DAT_0064e5b8 = 0;
  _DAT_0064e5bc = 0;
  _DAT_0064e5c0 = 0;
  _DAT_0064e5c4 = 0;
  _DAT_0064e5c8 = 0;
  _DAT_0064e5d4 = 0;
  _DAT_0064e5d8 = 0;
  _DAT_0064e5dc = 0;
  _DAT_0064e5e0 = &DAT_0064f514;
  _DAT_0064e5e4 = 0;
  _DAT_0064e5e8 = 0;
  _DAT_0064e5ec = 0;
  _DAT_0064e610 = ((void*)0x00534f30);
  _DAT_0064e614 = 0;
  _DAT_0064e618 = 0;
  _DAT_0064e61c = 0;
  _DAT_0064e650 = ((void*)0x00534f70);
  _DAT_0064e654 = 0;
  _DAT_0064e658 = 0;
  _DAT_0064e65c = 0;
  _DAT_0064e690 = ((void*)0x00534f90);
  _DAT_0064e694 = 0;
  _DAT_0064e698 = 0;
  _DAT_0064e69c = 0;
  _DAT_0064e6d0 = ((void*)0x00534fb0);
  _DAT_0064e6d4 = 0;
  _DAT_0064e6d8 = 0;
  _DAT_0064e6dc = 0;
  _DAT_0064e710 = ((void*)0x00534fe0);
  _DAT_0064e5f0 = 0;
  _DAT_0064e5f4 = 0;
  _DAT_0064e5f8 = 0;
  _DAT_0064e5fc = 0;
  _DAT_0064e600 = 0;
  _DAT_0064e604 = 0;
  _DAT_0064e608 = 0;
  _DAT_0064e620 = s_Deploy_0064f50c;
  _DAT_0064e624 = 0;
  _DAT_0064e628 = 0;
  _DAT_0064e62c = 0;
  _DAT_0064e630 = 0;
  _DAT_0064e634 = 0;
  _DAT_0064e638 = 0;
  _DAT_0064e63c = 0;
  _DAT_0064e640 = 0;
  _DAT_0064e644 = 0;
  _DAT_0064e648 = 0;
  _DAT_0064e660 = s_Undeploy_0064f500;
  _DAT_0064e664 = 0;
  _DAT_0064e668 = 0;
  _DAT_0064e66c = 0;
  _DAT_0064e670 = 0;
  _DAT_0064e674 = 0;
  _DAT_0064e678 = 0;
  _DAT_0064e67c = 0;
  _DAT_0064e680 = 0;
  _DAT_0064e684 = 0;
  _DAT_0064e688 = 0;
  _DAT_0064e6a0 = s_EnableWeapon_0064f4f0;
  _DAT_0064e6a4 = 1;
  _DAT_0064e6a8 = 0;
  _DAT_0064e6ac = 3;
  _DAT_0064e6b0 = 0;
  _DAT_0064e6b4 = 0;
  _DAT_0064e6b8 = 0;
  _DAT_0064e6bc = 0;
  _DAT_0064e6c0 = 0;
  _DAT_0064e6c4 = 0;
  _DAT_0064e6c8 = 0;
  _DAT_0064e6e0 = s_DisableWeapon_0064f4e0;
  _DAT_0064e6e4 = 1;
  _DAT_0064e6e8 = 0;
  _DAT_0064e6ec = 3;
  _DAT_0064e6f0 = 0;
  _DAT_0064e6f4 = 0;
  _DAT_0064e6f8 = 0;
  _DAT_0064e6fc = 0;
  _DAT_0064e700 = 0;
  _DAT_0064e704 = 0;
  _DAT_0064e708 = 0;
  _DAT_0064e714 = 0;
  _DAT_0064e718 = 0;
  _DAT_0064e71c = 0;
  _DAT_0064e750 = ((void*)0x00535070);
  _DAT_0064e754 = 0;
  _DAT_0064e758 = 0;
  _DAT_0064e75c = 0;
  _DAT_0064e790 = ((void*)0x00535090);
  _DAT_0064e794 = 0;
  _DAT_0064e798 = 0;
  _DAT_0064e79c = 0;
  _DAT_0064e7d0 = ((void*)0x005365c0);
  _DAT_0064e7d4 = 0;
  _DAT_0064e7d8 = 0;
  _DAT_0064e7dc = 0;
  _DAT_0064e810 = ((void*)0x005366c0);
  _DAT_0064e814 = 0;
  _DAT_0064e818 = 0;
  _DAT_0064e81c = 0;
  _DAT_0064e720 = s_EnableFlightMode_0064f4cc;
  _DAT_0064e724 = 0;
  _DAT_0064e728 = 0;
  _DAT_0064e72c = 0;
  _DAT_0064e730 = 0;
  _DAT_0064e734 = 0;
  _DAT_0064e738 = 0;
  _DAT_0064e73c = 0;
  _DAT_0064e740 = 0;
  _DAT_0064e744 = 0;
  _DAT_0064e748 = 0;
  _DAT_0064e760 = s_DisableFlightMode_0064f4b8;
  _DAT_0064e764 = 0;
  _DAT_0064e768 = 0;
  _DAT_0064e76c = 0;
  _DAT_0064e770 = 0;
  _DAT_0064e774 = 0;
  _DAT_0064e778 = 0;
  _DAT_0064e77c = 0;
  _DAT_0064e780 = 0;
  _DAT_0064e784 = 0;
  _DAT_0064e788 = 0;
  _DAT_0064e7a0 = s_GetSquad_0064f4ac;
  _DAT_0064e7a4 = 0;
  _DAT_0064e7a8 = 1;
  _DAT_0064e7ac = 0;
  _DAT_0064e7b0 = 0;
  _DAT_0064e7b4 = 0;
  _DAT_0064e7b8 = 0;
  _DAT_0064e7bc = 0;
  _DAT_0064e7c0 = 0;
  _DAT_0064e7c4 = 0;
  _DAT_0064e7c8 = 5;
  _DAT_0064e7e0 = s_GetTarget_0064f4a0;
  _DAT_0064e7e4 = 0;
  _DAT_0064e7e8 = 1;
  _DAT_0064e7ec = 0;
  _DAT_0064e7f0 = 0;
  _DAT_0064e7f4 = 0;
  _DAT_0064e7f8 = 0;
  _DAT_0064e7fc = 0;
  _DAT_0064e800 = 0;
  _DAT_0064e804 = 0;
  _DAT_0064e808 = 5;
  _DAT_0064e820 = s_Normalise_0064f494;
  _DAT_0064e824 = 1;
  _DAT_0064e828 = 1;
  _DAT_0064e82c = 6;
  _DAT_0064e830 = 0;
  _DAT_0064e834 = 0;
  _DAT_0064e838 = 0;
  _DAT_0064e83c = 0;
  _DAT_0064e840 = 0;
  _DAT_0064e844 = 0;
  _DAT_0064e848 = 6;
  _DAT_0064e850 = ((void*)0x00534500);
  _DAT_0064e854 = 0;
  _DAT_0064e858 = 0;
  _DAT_0064e85c = 0;
  _DAT_0064e890 = ((void*)0x005345d0);
  _DAT_0064e894 = 0;
  _DAT_0064e898 = 0;
  _DAT_0064e89c = 0;
  _DAT_0064e8d0 = ((void*)0x005381c0);
  _DAT_0064e8d4 = 0;
  _DAT_0064e8d8 = 0;
  _DAT_0064e8dc = 0;
  _DAT_0064e910 = ((void*)0x00535b50);
  _DAT_0064e914 = 0;
  _DAT_0064e918 = 0;
  _DAT_0064e91c = 0;
  _DAT_0064e950 = ((void*)0x005347b0);
  _DAT_0064e860 = s_Magnitude_0064f488;
  _DAT_0064e864 = 1;
  _DAT_0064e868 = 1;
  _DAT_0064e86c = 6;
  _DAT_0064e870 = 0;
  _DAT_0064e874 = 0;
  _DAT_0064e878 = 0;
  _DAT_0064e87c = 0;
  _DAT_0064e880 = 0;
  _DAT_0064e884 = 0;
  _DAT_0064e888 = 2;
  _DAT_0064e8a0 = s_LevelLostString_0064f478;
  _DAT_0064e8a4 = 1;
  _DAT_0064e8a8 = 0;
  _DAT_0064e8ac = 1;
  _DAT_0064e8b0 = 0;
  _DAT_0064e8b4 = 0;
  _DAT_0064e8b8 = 0;
  _DAT_0064e8bc = 0;
  _DAT_0064e8c0 = 0;
  _DAT_0064e8c4 = 0;
  _DAT_0064e8c8 = 0;
  _DAT_0064e8e0 = s_IsFiring_0064f46c;
  _DAT_0064e8e4 = 0;
  _DAT_0064e8e8 = 1;
  _DAT_0064e8ec = 0;
  _DAT_0064e8f0 = 0;
  _DAT_0064e8f4 = 0;
  _DAT_0064e8f8 = 0;
  _DAT_0064e8fc = 0;
  _DAT_0064e900 = 0;
  _DAT_0064e904 = 0;
  _DAT_0064e908 = 4;
  _DAT_0064e920 = s_IsNumberBetween_0064f45c;
  _DAT_0064e924 = 3;
  _DAT_0064e928 = 1;
  _DAT_0064e92c = 2;
  _DAT_0064e930 = 2;
  _DAT_0064e934 = 2;
  _DAT_0064e938 = 0;
  _DAT_0064e93c = 0;
  _DAT_0064e940 = 0;
  _DAT_0064e944 = 0;
  _DAT_0064e948 = 4;
  _DAT_0064e954 = 0;
  _DAT_0064e958 = 0;
  _DAT_0064e95c = 0;
  _DAT_0064e960 = s_SetSegmentVulnerable_0064f444;
  _DAT_0064e964 = 2;
  _DAT_0064e968 = 0;
  _DAT_0064e96c = 3;
  _DAT_0064e970 = 4;
  _DAT_0064e974 = 0;
  _DAT_0064e978 = 0;
  _DAT_0064e97c = 0;
  _DAT_0064e980 = 0;
  _DAT_0064e990 = ((void*)0x00534300);
  _DAT_0064e994 = 0;
  _DAT_0064e998 = 0;
  _DAT_0064e99c = 0;
  _DAT_0064e9d0 = ((void*)0x00534390);
  _DAT_0064e9d4 = 0;
  _DAT_0064e9d8 = 0;
  _DAT_0064e9dc = 0;
  _DAT_0064ea10 = ((void*)0x005359d0);
  _DAT_0064ea14 = 0;
  _DAT_0064ea18 = 0;
  _DAT_0064ea1c = 0;
  _DAT_0064ea50 = ((void*)0x005342c0);
  _DAT_0064ea54 = 0;
  _DAT_0064ea58 = 0;
  _DAT_0064ea5c = 0;
  _DAT_0064ea90 = ((void*)0x005342e0);
  _DAT_0064ea94 = 0;
  _DAT_0064ea98 = 0;
  _DAT_0064ea9c = 0;
  _DAT_0064e984 = 0;
  _DAT_0064e988 = 0;
  _DAT_0064e9a0 = s_SetAllSegmentsVulnerable_0064f428;
  _DAT_0064e9a4 = 1;
  _DAT_0064e9a8 = 0;
  _DAT_0064e9ac = 4;
  _DAT_0064e9b0 = 0;
  _DAT_0064e9b4 = 0;
  _DAT_0064e9b8 = 0;
  _DAT_0064e9bc = 0;
  _DAT_0064e9c0 = 0;
  _DAT_0064e9c4 = 0;
  _DAT_0064e9c8 = 0;
  _DAT_0064e9e0 = s_GetRealHealth_0064f418;
  _DAT_0064e9e4 = 0;
  _DAT_0064e9e8 = 1;
  _DAT_0064e9ec = 0;
  _DAT_0064e9f0 = 0;
  _DAT_0064e9f4 = 0;
  _DAT_0064e9f8 = 0;
  _DAT_0064e9fc = 0;
  _DAT_0064ea00 = 0;
  _DAT_0064ea04 = 0;
  _DAT_0064ea08 = 2;
  _DAT_0064ea20 = s_SwitchMessagesOn_0064f404;
  _DAT_0064ea24 = 0;
  _DAT_0064ea28 = 0;
  _DAT_0064ea2c = 0;
  _DAT_0064ea30 = 0;
  _DAT_0064ea34 = 0;
  _DAT_0064ea38 = 0;
  _DAT_0064ea3c = 0;
  _DAT_0064ea40 = 0;
  _DAT_0064ea44 = 0;
  _DAT_0064ea48 = 0;
  _DAT_0064ea60 = s_SwitchMessagesOff_0064f3f0;
  _DAT_0064ea64 = 0;
  _DAT_0064ea68 = 0;
  _DAT_0064ea6c = 0;
  _DAT_0064ea70 = 0;
  _DAT_0064ea74 = 0;
  _DAT_0064ea78 = 0;
  _DAT_0064ea7c = 0;
  _DAT_0064ea80 = 0;
  _DAT_0064ea84 = 0;
  _DAT_0064ea88 = 0;
  _DAT_0064eaa0 = s_Goto3PointPanCamera_0064f3dc;
  _DAT_0064eaa4 = 5;
  _DAT_0064eaa8 = 0;
  _DAT_0064eaac = 5;
  _DAT_0064ead0 = ((void*)0x00533b70);
  _DAT_0064ead4 = 0;
  _DAT_0064ead8 = 0;
  _DAT_0064eadc = 0;
  _DAT_0064eb10 = ((void*)0x00533eb0);
  _DAT_0064eb14 = 0;
  _DAT_0064eb18 = 0;
  _DAT_0064eb1c = 0;
  _DAT_0064eb50 = ((void*)0x005342b0);
  _DAT_0064eb54 = 0;
  _DAT_0064eb58 = 0;
  _DAT_0064eb5c = 0;
  _DAT_0064eb90 = ((void*)0x005357b0);
  _DAT_0064eb94 = 0;
  _DAT_0064eb98 = 0;
  _DAT_0064eb9c = 0;
  _DAT_0064ebd0 = ((void*)0x00533b30);
  _DAT_0064eab0 = 6;
  _DAT_0064eab4 = 6;
  _DAT_0064eab8 = 6;
  _DAT_0064eabc = 2;
  _DAT_0064eac0 = 0;
  _DAT_0064eac4 = 0;
  _DAT_0064eac8 = 0;
  _DAT_0064eae0 = s_Goto4PointPanCamera_0064f3c8;
  _DAT_0064eae4 = 6;
  _DAT_0064eae8 = 0;
  _DAT_0064eaec = 5;
  _DAT_0064eaf0 = 6;
  _DAT_0064eaf4 = 6;
  _DAT_0064eaf8 = 6;
  _DAT_0064eafc = 6;
  _DAT_0064eb00 = 2;
  _DAT_0064eb04 = 0;
  _DAT_0064eb08 = 0;
  _DAT_0064eb20 = s_GotoPlayerCamera_0064f3b4;
  _DAT_0064eb24 = 0;
  _DAT_0064eb28 = 0;
  _DAT_0064eb2c = 0;
  _DAT_0064eb30 = 0;
  _DAT_0064eb34 = 0;
  _DAT_0064eb38 = 0;
  _DAT_0064eb3c = 0;
  _DAT_0064eb40 = 0;
  _DAT_0064eb44 = 0;
  _DAT_0064eb48 = 0;
  _DAT_0064eb60 = s_GetConfiguration_0064f3a0;
  _DAT_0064eb64 = 0;
  _DAT_0064eb68 = 1;
  _DAT_0064eb6c = 0;
  _DAT_0064eb70 = 0;
  _DAT_0064eb74 = 0;
  _DAT_0064eb78 = 0;
  _DAT_0064eb7c = 0;
  _DAT_0064eb80 = 0;
  _DAT_0064eb84 = 0;
  _DAT_0064eb88 = 3;
  _DAT_0064eba0 = s_AddHelpMessage_0064f390;
  _DAT_0064eba4 = 1;
  _DAT_0064eba8 = 0;
  _DAT_0064ebac = 1;
  _DAT_0064ebb0 = 0;
  _DAT_0064ebb4 = 0;
  _DAT_0064ebb8 = 0;
  _DAT_0064ebbc = 0;
  _DAT_0064ebc0 = 0;
  _DAT_0064ebc4 = 0;
  _DAT_0064ebc8 = 0;
  _DAT_0064ebd4 = 0;
  _DAT_0064ebd8 = 0;
  _DAT_0064ebdc = 0;
  _DAT_0064ec10 = ((void*)0x00533a70);
  _DAT_0064ec14 = 0;
  _DAT_0064ec18 = 0;
  _DAT_0064ec1c = 0;
  _DAT_0064ec50 = ((void*)0x00533aa0);
  _DAT_0064ec54 = 0;
  _DAT_0064ec58 = 0;
  _DAT_0064ec5c = 0;
  _DAT_0064ec90 = ((void*)0x00533a40);
  _DAT_0064ec94 = 0;
  _DAT_0064ec98 = 0;
  _DAT_0064ec9c = 0;
  _DAT_0064ecd0 = ((void*)0x00533a60);
  _DAT_0064ecd4 = 0;
  _DAT_0064ecd8 = 0;
  _DAT_0064ecdc = 0;
  _DAT_0064ebe0 = s_SetGoodieState_0064f380;
  _DAT_0064ebe4 = 2;
  _DAT_0064ebe8 = 0;
  _DAT_0064ebec = 1;
  _DAT_0064ebf0 = 1;
  _DAT_0064ebf4 = 0;
  _DAT_0064ebf8 = 0;
  _DAT_0064ebfc = 0;
  _DAT_0064ec00 = 0;
  _DAT_0064ec04 = 0;
  _DAT_0064ec08 = 0;
  _DAT_0064ec20 = s_GetGoodieState_0064f370;
  _DAT_0064ec24 = 1;
  _DAT_0064ec28 = 1;
  _DAT_0064ec2c = 1;
  _DAT_0064ec30 = 0;
  _DAT_0064ec34 = 0;
  _DAT_0064ec38 = 0;
  _DAT_0064ec3c = 0;
  _DAT_0064ec40 = 0;
  _DAT_0064ec44 = 0;
  _DAT_0064ec48 = 1;
  _DAT_0064ec60 = s_MPDeclarePlayerWon_0064f35c;
  _DAT_0064ec64 = 1;
  _DAT_0064ec68 = 0;
  _DAT_0064ec6c = 1;
  _DAT_0064ec70 = 0;
  _DAT_0064ec74 = 0;
  _DAT_0064ec78 = 0;
  _DAT_0064ec7c = 0;
  _DAT_0064ec80 = 0;
  _DAT_0064ec84 = 0;
  _DAT_0064ec88 = 0;
  _DAT_0064eca0 = s_MPDeclareGameDrawn_0064f348;
  _DAT_0064eca4 = 0;
  _DAT_0064eca8 = 0;
  _DAT_0064ecac = 0;
  _DAT_0064ecb0 = 0;
  _DAT_0064ecb4 = 0;
  _DAT_0064ecb8 = 0;
  _DAT_0064ecbc = 0;
  _DAT_0064ecc0 = 0;
  _DAT_0064ecc4 = 0;
  _DAT_0064ecc8 = 0;
  _DAT_0064ece0 = s_SetSlot_0064f340;
  _DAT_0064ece4 = 2;
  _DAT_0064ece8 = 0;
  _DAT_0064ecec = 1;
  _DAT_0064ecf0 = 4;
  _DAT_0064ecf4 = 0;
  _DAT_0064ecf8 = 0;
  _DAT_0064ecfc = 0;
  _DAT_0064ed00 = 0;
  _DAT_0064ed04 = 0;
  _DAT_0064ed08 = 0;
  _DAT_0064ed10 = ((void*)0x005338d0);
  _DAT_0064ed14 = 0;
  _DAT_0064ed18 = 0;
  _DAT_0064ed1c = 0;
  _DAT_0064ed50 = ((void*)0x005339a0);
  _DAT_0064ed54 = 0;
  _DAT_0064ed58 = 0;
  _DAT_0064ed5c = 0;
  _DAT_0064ed90 = ((void*)0x005380f0);
  _DAT_0064ed94 = 0;
  _DAT_0064ed98 = 0;
  _DAT_0064ed9c = 0;
  _DAT_0064edd0 = ((void*)0x005338a0);
  _DAT_0064edd4 = 0;
  _DAT_0064edd8 = 0;
  _DAT_0064eddc = 0;
  _DAT_0064ee10 = ((void*)0x005344a0);
  _DAT_0064ed20 = s_GetSlot_0064f338;
  _DAT_0064ed24 = 1;
  _DAT_0064ed28 = 1;
  _DAT_0064ed2c = 1;
  _DAT_0064ed30 = 0;
  _DAT_0064ed34 = 0;
  _DAT_0064ed38 = 0;
  _DAT_0064ed3c = 0;
  _DAT_0064ed40 = 0;
  _DAT_0064ed44 = 0;
  _DAT_0064ed48 = 4;
  _DAT_0064ed60 = s_InJetMode_0064f32c;
  _DAT_0064ed64 = 0;
  _DAT_0064ed68 = 1;
  _DAT_0064ed6c = 0;
  _DAT_0064ed70 = 0;
  _DAT_0064ed74 = 0;
  _DAT_0064ed78 = 0;
  _DAT_0064ed7c = 0;
  _DAT_0064ed80 = 0;
  _DAT_0064ed84 = 0;
  _DAT_0064ed88 = 4;
  _DAT_0064eda0 = s_SetPlayerLives_0064f31c;
  _DAT_0064eda4 = 2;
  _DAT_0064eda8 = 0;
  _DAT_0064edac = 1;
  _DAT_0064edb0 = 1;
  _DAT_0064edb4 = 0;
  _DAT_0064edb8 = 0;
  _DAT_0064edbc = 0;
  _DAT_0064edc0 = 0;
  _DAT_0064edc4 = 0;
  _DAT_0064edc8 = 0;
  _DAT_0064ede0 = s_Launch_0064f314;
  _DAT_0064ede4 = 1;
  _DAT_0064ede8 = 0;
  _DAT_0064edec = 6;
  _DAT_0064edf0 = 0;
  _DAT_0064edf4 = 0;
  _DAT_0064edf8 = 0;
  _DAT_0064edfc = 0;
  _DAT_0064ee00 = 0;
  _DAT_0064ee04 = 0;
  _DAT_0064ee08 = 0;
  _DAT_0064ee14 = 0;
  _DAT_0064ee18 = 0;
  _DAT_0064ee1c = 0;
  _DAT_0064ee20 = s_HalfDestroy_0064f308;
  _DAT_0064ee24 = 0;
  _DAT_0064ee28 = 0;
  _DAT_0064ee2c = 0;
  _DAT_0064ee30 = 0;
  _DAT_0064ee34 = 0;
  _DAT_0064ee38 = 0;
  _DAT_0064ee3c = 0;
  _DAT_0064ee40 = 0;
  _DAT_0064ee50 = ((void*)0x00534370);
  _DAT_0064ee54 = 0;
  _DAT_0064ee58 = 0;
  _DAT_0064ee5c = 0;
  _DAT_0064ee90 = ((void*)0x00534340);
  _DAT_0064ee94 = 0;
  _DAT_0064ee98 = 0;
  _DAT_0064ee9c = 0;
  _DAT_0064eed0 = ((void*)0x00536ca0);
  _DAT_0064eed4 = 0;
  _DAT_0064eed8 = 0;
  _DAT_0064eedc = 0;
  _DAT_0064ef10 = ((void*)0x00535980);
  _DAT_0064ef14 = 0;
  _DAT_0064ef18 = 0;
  _DAT_0064ef1c = 0;
  _DAT_0064ef50 = ((void*)0x005371e0);
  _DAT_0064ee44 = 0;
  _DAT_0064ee48 = 0;
  _DAT_0064ee60 = s_SetVelocity_0064f2fc;
  _DAT_0064ee64 = 1;
  _DAT_0064ee68 = 0;
  _DAT_0064ee6c = 6;
  _DAT_0064ee70 = 0;
  _DAT_0064ee74 = 0;
  _DAT_0064ee78 = 0;
  _DAT_0064ee7c = 0;
  _DAT_0064ee80 = 0;
  _DAT_0064ee84 = 0;
  _DAT_0064ee88 = 0;
  _DAT_0064eea0 = s_TriggerHitEffect_0064f2e8;
  _DAT_0064eea4 = 1;
  _DAT_0064eea8 = 0;
  _DAT_0064eeac = 2;
  _DAT_0064eeb0 = 0;
  _DAT_0064eeb4 = 0;
  _DAT_0064eeb8 = 0;
  _DAT_0064eebc = 0;
  _DAT_0064eec0 = 0;
  _DAT_0064eec4 = 0;
  _DAT_0064eec8 = 0;
  _DAT_0064eee0 = s_GetNumber_0064f2dc;
  _DAT_0064eee4 = 0;
  _DAT_0064eee8 = 1;
  _DAT_0064eeec = 0;
  _DAT_0064eef0 = 0;
  _DAT_0064eef4 = 0;
  _DAT_0064eef8 = 0;
  _DAT_0064eefc = 0;
  _DAT_0064ef00 = 0;
  _DAT_0064ef04 = 0;
  _DAT_0064ef08 = 1;
  _DAT_0064ef20 = s_SpawnEscapePod_0064f2cc;
  _DAT_0064ef24 = 0;
  _DAT_0064ef28 = 0;
  _DAT_0064ef2c = 0;
  _DAT_0064ef30 = 0;
  _DAT_0064ef34 = 0;
  _DAT_0064ef38 = 0;
  _DAT_0064ef3c = 0;
  _DAT_0064ef40 = 0;
  _DAT_0064ef44 = 0;
  _DAT_0064ef48 = 0;
  _DAT_0064ef54 = 0;
  _DAT_0064ef58 = 0;
  _DAT_0064ef5c = 0;
  _DAT_0064ef60 = s_SetSlotSave_0064f2c0;
  _DAT_0064ef64 = 2;
  _DAT_0064ef68 = 0;
  _DAT_0064ef6c = 1;
  _DAT_0064efec = 6;
  _DAT_0064f010 = ((void*)0x00536c70);
  _DAT_0064f014 = 0;
  _DAT_0064f018 = 0;
  _DAT_0064ef90 = ((void*)0x00533900);
  _DAT_0064f050 = ((void*)0x00533950);
  _DAT_0064ef94 = 0;
  _DAT_0064ef98 = 0;
  _DAT_0064ef9c = 0;
  _DAT_0064f054 = 0;
  _DAT_0064f058 = 0;
  _DAT_0064efd0 = ((void*)0x005354c0);
  _DAT_0064f090 = ((void*)0x00533980);
  _DAT_0064ef70 = 4;
  _DAT_0064ef74 = 0;
  _DAT_0064ef78 = 0;
  _DAT_0064ef7c = 0;
  _DAT_0064ef80 = 0;
  _DAT_0064ef84 = 0;
  _DAT_0064ef88 = 0;
  _DAT_0064efa0 = s_ResetSegmentHealth_0064f2ac;
  _DAT_0064efa4 = 2;
  _DAT_0064efa8 = 0;
  _DAT_0064efac = 3;
  _DAT_0064efb0 = 2;
  _DAT_0064efb4 = 0;
  _DAT_0064efb8 = 0;
  _DAT_0064efbc = 0;
  _DAT_0064efc0 = 0;
  _DAT_0064efc4 = 0;
  _DAT_0064efc8 = 0;
  _DAT_0064efd4 = 0;
  _DAT_0064efd8 = 0;
  _DAT_0064efdc = 0;
  _DAT_0064efe0 = s_SetPos_0064f2a4;
  _DAT_0064efe4 = 1;
  _DAT_0064efe8 = 0;
  _DAT_0064eff0 = 0;
  _DAT_0064eff4 = 0;
  _DAT_0064eff8 = 0;
  _DAT_0064effc = 0;
  _DAT_0064f000 = 0;
  _DAT_0064f004 = 0;
  _DAT_0064f008 = 0;
  _DAT_0064f01c = 0;
  _DAT_0064f020 = s_SetLockable_0064f298;
  _DAT_0064f024 = 1;
  _DAT_0064f028 = 0;
  _DAT_0064f02c = 4;
  _DAT_0064f030 = 0;
  _DAT_0064f034 = 0;
  _DAT_0064f038 = 0;
  _DAT_0064f03c = 0;
  _DAT_0064f040 = 0;
  _DAT_0064f044 = 0;
  _DAT_0064f048 = 0;
  _DAT_0064f05c = 0;
  _DAT_0064f060 = s_ToggleCockpit_0064f288;
  _DAT_0064f064 = 0;
  _DAT_0064f068 = 0;
  _DAT_0064f06c = 0;
  _DAT_0064f070 = 0;
  _DAT_0064f074 = 0;
  _DAT_0064f078 = 0;
  _DAT_0064f07c = 0;
  _DAT_0064f080 = 0;
  _DAT_0064f084 = 0;
  _DAT_0064f088 = 0;
  _DAT_0064f094 = 0;
  _DAT_0064f098 = 0;
  _DAT_0064f09c = 0;
  _DAT_0064f0ac = 2;
  _DAT_0064f0ec = 2;
  _DAT_0064f0f0 = 2;
  _DAT_0064f0f4 = 2;
  _DAT_0064f110 = ((void*)0x00536a60);
  _DAT_0064f118 = 0;
  _DAT_0064f150 = ((void*)0x00535010);
  _DAT_0064f158 = 0;
  _DAT_0064f190 = ((void*)0x00535040);
  _DAT_0064f0d0 = ((void*)0x00535530);
  _DAT_0064f0e4 = 3;
  _DAT_0064f12c = 3;
  _DAT_0064f16c = 3;
  _DAT_0064f198 = 0;
  _DAT_0064f1ac = 3;
  _DAT_0064f0a0 = s_SetStealth_0064f27c;
  _DAT_0064f0a4 = 1;
  _DAT_0064f0a8 = 0;
  _DAT_0064f0b0 = 0;
  _DAT_0064f0b4 = 0;
  _DAT_0064f0b8 = 0;
  _DAT_0064f0bc = 0;
  _DAT_0064f0c0 = 0;
  _DAT_0064f0c4 = 0;
  _DAT_0064f0c8 = 0;
  _DAT_0064f0d4 = 0;
  _DAT_0064f0d8 = 0;
  _DAT_0064f0dc = 0;
  _DAT_0064f0e0 = s_TeleportOrientation_0064f268;
  _DAT_0064f0e8 = 0;
  _DAT_0064f0f8 = 0;
  _DAT_0064f0fc = 0;
  _DAT_0064f100 = 0;
  _DAT_0064f104 = 0;
  _DAT_0064f108 = 0;
  _DAT_0064f114 = 0;
  _DAT_0064f11c = 0;
  _DAT_0064f120 = s_EnableSpawner_0064f258;
  _DAT_0064f124 = 1;
  _DAT_0064f128 = 0;
  _DAT_0064f130 = 0;
  _DAT_0064f134 = 0;
  _DAT_0064f138 = 0;
  _DAT_0064f13c = 0;
  _DAT_0064f140 = 0;
  _DAT_0064f144 = 0;
  _DAT_0064f148 = 0;
  _DAT_0064f154 = 0;
  _DAT_0064f15c = 0;
  _DAT_0064f160 = s_DisableSpawner_0064f248;
  _DAT_0064f164 = 1;
  _DAT_0064f168 = 0;
  _DAT_0064f170 = 0;
  _DAT_0064f174 = 0;
  _DAT_0064f178 = 0;
  _DAT_0064f17c = 0;
  _DAT_0064f180 = 0;
  _DAT_0064f184 = 0;
  _DAT_0064f188 = 0;
  _DAT_0064f194 = 0;
  _DAT_0064f19c = 0;
  _DAT_0064f1a0 = s_SetName_0064f240;
  _DAT_0064f1a4 = 1;
  _DAT_0064f1a8 = 0;
  _DAT_0064f1b0 = 0;
  _DAT_0064f1b4 = 0;
  _DAT_0064f1b8 = 0;
  _DAT_0064f1bc = 0;
  _DAT_0064f1c0 = 0;
  _DAT_0064f1c4 = 0;
  _DAT_0064f1c8 = 0;
  _DAT_0064f1dc = 0;
  _DAT_0064f1d0 = ((void*)0x00535c70);
  _DAT_0064f1d4 = 0;
  _DAT_0064f1e8 = 1;
  _DAT_0064f218 = 0;
  _DAT_0064f208 = 4;
  _DAT_0064f1d8 = 0;
  _DAT_0064f1e0 = s_IsOverWater_0064f234;
  _DAT_0064f1e4 = 0;
  _DAT_0064f1ec = 0;
  _DAT_0064f1f0 = 0;
  _DAT_0064f1f4 = 0;
  _DAT_0064f1f8 = 0;
  _DAT_0064f1fc = 0;
  _DAT_0064f200 = 0;
  _DAT_0064f204 = 0;
  _DAT_0064f210 = ((void*)0x00538150);
  _DAT_0064f214 = 0;
  _DAT_0064f21c = 0;
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052ff30, ap_0052ff30));
