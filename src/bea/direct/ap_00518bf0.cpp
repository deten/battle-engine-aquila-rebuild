// auto-ported from 00518bf0_FUN_00518bf0.c (FUN_00518bf0, 5109 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00896ca8 GLOBAL_AT(int, 0x00896ca8)
#define DAT_00896cac GLOBAL_AT(int, 0x00896cac)
#define DAT_00896cb0 GLOBAL_AT(int, 0x00896cb0)
#define DAT_00896cb4 GLOBAL_AT(int, 0x00896cb4)
#define DAT_00896cb8 GLOBAL_AT(int, 0x00896cb8)
#define DAT_00896cbc GLOBAL_AT(int, 0x00896cbc)
#define DAT_00896cc0 GLOBAL_AT(int, 0x00896cc0)
#define DAT_00896cc4 GLOBAL_AT(int, 0x00896cc4)
#define _DAT_00896cc8 GLOBAL_AT(int, 0x00896cc8)
#define _DAT_00896ccc GLOBAL_AT(int, 0x00896ccc)
#define _DAT_00896cd0 GLOBAL_AT(int, 0x00896cd0)
#define DAT_00896cd4 GLOBAL_AT(int, 0x00896cd4)
#define _DAT_00896cd8 GLOBAL_AT(int, 0x00896cd8)
#define _DAT_00896cdc GLOBAL_AT(int, 0x00896cdc)
#define _DAT_00896ce0 GLOBAL_AT(int, 0x00896ce0)
#define _DAT_00896ce4 GLOBAL_AT(int, 0x00896ce4)
#define _DAT_00896ce8 GLOBAL_AT(int, 0x00896ce8)
#define _DAT_00896cec GLOBAL_AT(int, 0x00896cec)
#define _DAT_00896cf0 GLOBAL_AT(int, 0x00896cf0)
#define _DAT_00896cf4 GLOBAL_AT(int, 0x00896cf4)
#define _DAT_00896cf8 GLOBAL_AT(int, 0x00896cf8)
#define _DAT_00896cfc GLOBAL_AT(int, 0x00896cfc)
#define _DAT_00896d00 GLOBAL_AT(int, 0x00896d00)
#define _DAT_00896d04 GLOBAL_AT(int, 0x00896d04)
#define _DAT_00896d08 GLOBAL_AT(int, 0x00896d08)
#define _DAT_00896d0c GLOBAL_AT(int, 0x00896d0c)
#define _DAT_00896d10 GLOBAL_AT(int, 0x00896d10)
#define _DAT_00896d14 GLOBAL_AT(int, 0x00896d14)
#define _DAT_00896d18 GLOBAL_AT(int, 0x00896d18)
#define _DAT_00896d1c GLOBAL_AT(int, 0x00896d1c)
#define _DAT_00896d20 GLOBAL_AT(int, 0x00896d20)
#define _DAT_00896d24 GLOBAL_AT(int, 0x00896d24)
#define _DAT_00896d28 GLOBAL_AT(int, 0x00896d28)
#define _DAT_00896d2c GLOBAL_AT(int, 0x00896d2c)
#define _DAT_00896d30 GLOBAL_AT(int, 0x00896d30)
#define _DAT_00896d34 GLOBAL_AT(int, 0x00896d34)
#define _DAT_00896d38 GLOBAL_AT(int, 0x00896d38)
#define _DAT_00896d3c GLOBAL_AT(int, 0x00896d3c)
#define _DAT_00896d40 GLOBAL_AT(int, 0x00896d40)
#define _DAT_00896d44 GLOBAL_AT(int, 0x00896d44)
#define _DAT_00896d48 GLOBAL_AT(int, 0x00896d48)
#define _DAT_00896d4c GLOBAL_AT(int, 0x00896d4c)
#define _DAT_00896d50 GLOBAL_AT(int, 0x00896d50)
#define _DAT_00896d54 GLOBAL_AT(int, 0x00896d54)
#define _DAT_00896d58 GLOBAL_AT(int, 0x00896d58)
#define _DAT_00896d5c GLOBAL_AT(int, 0x00896d5c)
#define _DAT_00896d60 GLOBAL_AT(int, 0x00896d60)
#define _DAT_00896d64 GLOBAL_AT(int, 0x00896d64)
#define _DAT_00896d68 GLOBAL_AT(int, 0x00896d68)
#define _DAT_00896d6c GLOBAL_AT(int, 0x00896d6c)
#define _DAT_00896d70 GLOBAL_AT(int, 0x00896d70)
#define _DAT_00896d74 GLOBAL_AT(int, 0x00896d74)
#define _DAT_00896d78 GLOBAL_AT(int, 0x00896d78)
#define _DAT_00896d7c GLOBAL_AT(int, 0x00896d7c)
#define _DAT_00896d80 GLOBAL_AT(int, 0x00896d80)
#define _DAT_00896d84 GLOBAL_AT(int, 0x00896d84)
#define _DAT_00896d88 GLOBAL_AT(int, 0x00896d88)
#define _DAT_00896d8c GLOBAL_AT(int, 0x00896d8c)
#define _DAT_00896d90 GLOBAL_AT(int, 0x00896d90)
#define _DAT_00896d94 GLOBAL_AT(int, 0x00896d94)
#define _DAT_00896d98 GLOBAL_AT(int, 0x00896d98)
#define _DAT_00896d9c GLOBAL_AT(int, 0x00896d9c)
#define _DAT_00896da0 GLOBAL_AT(int, 0x00896da0)
#define _DAT_00896da4 GLOBAL_AT(int, 0x00896da4)
#define _DAT_00896da8 GLOBAL_AT(int, 0x00896da8)
#define _DAT_00896dac GLOBAL_AT(int, 0x00896dac)
#define _DAT_00896db0 GLOBAL_AT(int, 0x00896db0)
#define _DAT_00896db4 GLOBAL_AT(int, 0x00896db4)
#define _DAT_00896db8 GLOBAL_AT(int, 0x00896db8)
#define _DAT_00896dbc GLOBAL_AT(int, 0x00896dbc)
#define _DAT_00896dc0 GLOBAL_AT(int, 0x00896dc0)
#define _DAT_00896dc4 GLOBAL_AT(int, 0x00896dc4)
#define _DAT_00896dc8 GLOBAL_AT(int, 0x00896dc8)
#define _DAT_00896dcc GLOBAL_AT(int, 0x00896dcc)
#define _DAT_00896dd0 GLOBAL_AT(int, 0x00896dd0)
#define _DAT_00896dd4 GLOBAL_AT(int, 0x00896dd4)
#define _DAT_00896dd8 GLOBAL_AT(int, 0x00896dd8)
#define _DAT_00896ddc GLOBAL_AT(int, 0x00896ddc)
#define _DAT_00896de0 GLOBAL_AT(int, 0x00896de0)
#define _DAT_00896de4 GLOBAL_AT(int, 0x00896de4)
#define _DAT_00896de8 GLOBAL_AT(int, 0x00896de8)
#define _DAT_00896dec GLOBAL_AT(int, 0x00896dec)
#define _DAT_00896df0 GLOBAL_AT(int, 0x00896df0)
#define _DAT_00896df4 GLOBAL_AT(int, 0x00896df4)
#define _DAT_00896df8 GLOBAL_AT(int, 0x00896df8)
#define _DAT_00896dfc GLOBAL_AT(int, 0x00896dfc)
#define _DAT_00896e00 GLOBAL_AT(int, 0x00896e00)
#define _DAT_00896e04 GLOBAL_AT(int, 0x00896e04)
#define _DAT_00896e08 GLOBAL_AT(int, 0x00896e08)
#define _DAT_00896e0c GLOBAL_AT(int, 0x00896e0c)
#define _DAT_00896e10 GLOBAL_AT(int, 0x00896e10)
#define _DAT_00896e14 GLOBAL_AT(int, 0x00896e14)
#define _DAT_00896e18 GLOBAL_AT(int, 0x00896e18)
#define _DAT_00896e1c GLOBAL_AT(int, 0x00896e1c)
#define _DAT_00896e20 GLOBAL_AT(int, 0x00896e20)
#define _DAT_00896e24 GLOBAL_AT(int, 0x00896e24)
#define _DAT_00896e28 GLOBAL_AT(int, 0x00896e28)
#define _DAT_00896e2c GLOBAL_AT(int, 0x00896e2c)
#define _DAT_00896e30 GLOBAL_AT(int, 0x00896e30)
#define _DAT_00896e34 GLOBAL_AT(int, 0x00896e34)
#define _DAT_00896e38 GLOBAL_AT(int, 0x00896e38)
#define _DAT_00896e3c GLOBAL_AT(int, 0x00896e3c)
#define _DAT_00896e40 GLOBAL_AT(int, 0x00896e40)
#define _DAT_00896e44 GLOBAL_AT(int, 0x00896e44)
#define _DAT_00896e48 GLOBAL_AT(int, 0x00896e48)
#define _DAT_00896e4c GLOBAL_AT(int, 0x00896e4c)
#define _DAT_00896e50 GLOBAL_AT(int, 0x00896e50)
#define _DAT_00896e54 GLOBAL_AT(int, 0x00896e54)
#define _DAT_00896e58 GLOBAL_AT(int, 0x00896e58)
#define _DAT_00896e5c GLOBAL_AT(int, 0x00896e5c)
#define _DAT_00896e60 GLOBAL_AT(int, 0x00896e60)
#define _DAT_00896e64 GLOBAL_AT(int, 0x00896e64)
#define _DAT_00896e68 GLOBAL_AT(int, 0x00896e68)
#define _DAT_00896e6c GLOBAL_AT(int, 0x00896e6c)
#define _DAT_00896e70 GLOBAL_AT(int, 0x00896e70)
#define _DAT_00896e74 GLOBAL_AT(int, 0x00896e74)
#define _DAT_00896e78 GLOBAL_AT(int, 0x00896e78)
#define _DAT_00896e7c GLOBAL_AT(int, 0x00896e7c)
#define _DAT_00896e80 GLOBAL_AT(int, 0x00896e80)
#define _DAT_00896e84 GLOBAL_AT(int, 0x00896e84)
#define _DAT_00896e88 GLOBAL_AT(int, 0x00896e88)
#define _DAT_00896e8c GLOBAL_AT(int, 0x00896e8c)
#define _DAT_00896e90 GLOBAL_AT(int, 0x00896e90)
#define _DAT_00896e94 GLOBAL_AT(int, 0x00896e94)
#define _DAT_00896e98 GLOBAL_AT(int, 0x00896e98)
#define _DAT_00896e9c GLOBAL_AT(int, 0x00896e9c)
#define _DAT_00896ea0 GLOBAL_AT(int, 0x00896ea0)
#define _DAT_00896ea4 GLOBAL_AT(int, 0x00896ea4)
#define _DAT_00896ea8 GLOBAL_AT(int, 0x00896ea8)
#define _DAT_00896eac GLOBAL_AT(int, 0x00896eac)
#define _DAT_00896eb0 GLOBAL_AT(int, 0x00896eb0)
#define _DAT_00896eb4 GLOBAL_AT(int, 0x00896eb4)
#define _DAT_00896eb8 GLOBAL_AT(int, 0x00896eb8)
#define _DAT_00896ebc GLOBAL_AT(int, 0x00896ebc)
#define _DAT_00896ec0 GLOBAL_AT(int, 0x00896ec0)
#define _DAT_00896ec4 GLOBAL_AT(int, 0x00896ec4)
#define _DAT_00896ec8 GLOBAL_AT(int, 0x00896ec8)
#define _DAT_00896ecc GLOBAL_AT(int, 0x00896ecc)
#define _DAT_00896ed0 GLOBAL_AT(int, 0x00896ed0)
#define _DAT_00896ed4 GLOBAL_AT(int, 0x00896ed4)
#define _DAT_00896ed8 GLOBAL_AT(int, 0x00896ed8)
#define _DAT_00896edc GLOBAL_AT(int, 0x00896edc)
#define _DAT_00896ee0 GLOBAL_AT(int, 0x00896ee0)
#define _DAT_00896ee4 GLOBAL_AT(int, 0x00896ee4)
#define _DAT_00896ee8 GLOBAL_AT(int, 0x00896ee8)
#define _DAT_00896eec GLOBAL_AT(int, 0x00896eec)
#define _DAT_00896ef0 GLOBAL_AT(int, 0x00896ef0)
#define _DAT_00896ef4 GLOBAL_AT(int, 0x00896ef4)
#define _DAT_00896ef8 GLOBAL_AT(int, 0x00896ef8)
#define _DAT_00896efc GLOBAL_AT(int, 0x00896efc)
#define _DAT_00896f00 GLOBAL_AT(int, 0x00896f00)
#define _DAT_00896f04 GLOBAL_AT(int, 0x00896f04)
#define _DAT_00896f08 GLOBAL_AT(int, 0x00896f08)
#define _DAT_00896f0c GLOBAL_AT(int, 0x00896f0c)
#define _DAT_00896f10 GLOBAL_AT(int, 0x00896f10)
#define _DAT_00896f14 GLOBAL_AT(int, 0x00896f14)
#define _DAT_00896f18 GLOBAL_AT(int, 0x00896f18)
#define _DAT_00896f1c GLOBAL_AT(int, 0x00896f1c)
#define _DAT_00896f20 GLOBAL_AT(int, 0x00896f20)
#define _DAT_00896f24 GLOBAL_AT(int, 0x00896f24)
#define _DAT_00896f28 GLOBAL_AT(int, 0x00896f28)
#define _DAT_00896f2c GLOBAL_AT(int, 0x00896f2c)
#define _DAT_00896f30 GLOBAL_AT(int, 0x00896f30)
#define _DAT_00896f34 GLOBAL_AT(int, 0x00896f34)
#define _DAT_00896f38 GLOBAL_AT(int, 0x00896f38)
#define _DAT_00896f3c GLOBAL_AT(int, 0x00896f3c)
#define _DAT_00896f40 GLOBAL_AT(int, 0x00896f40)
#define _DAT_00896f44 GLOBAL_AT(int, 0x00896f44)
#define _DAT_00896f48 GLOBAL_AT(int, 0x00896f48)
#define _DAT_00896f4c GLOBAL_AT(int, 0x00896f4c)
#define _DAT_00896f50 GLOBAL_AT(int, 0x00896f50)
#define _DAT_00896f54 GLOBAL_AT(int, 0x00896f54)
#define _DAT_00896f58 GLOBAL_AT(int, 0x00896f58)
#define _DAT_00896f5c GLOBAL_AT(int, 0x00896f5c)
#define _DAT_00896f60 GLOBAL_AT(int, 0x00896f60)
#define _DAT_00896f64 GLOBAL_AT(int, 0x00896f64)
#define _DAT_00896f68 GLOBAL_AT(int, 0x00896f68)
#define _DAT_00896f6c GLOBAL_AT(int, 0x00896f6c)
#define _DAT_00896f70 GLOBAL_AT(int, 0x00896f70)
#define _DAT_00896f74 GLOBAL_AT(int, 0x00896f74)
#define _DAT_00896f78 GLOBAL_AT(int, 0x00896f78)
#define _DAT_00896f7c GLOBAL_AT(int, 0x00896f7c)
#define _DAT_00896f80 GLOBAL_AT(int, 0x00896f80)
#define _DAT_00896f84 GLOBAL_AT(int, 0x00896f84)
#define _DAT_00896f88 GLOBAL_AT(int, 0x00896f88)
#define _DAT_00896f8c GLOBAL_AT(int, 0x00896f8c)
#define _DAT_00896f90 GLOBAL_AT(int, 0x00896f90)
#define _DAT_00896f94 GLOBAL_AT(int, 0x00896f94)
#define _DAT_00896f98 GLOBAL_AT(int, 0x00896f98)
#define _DAT_00896f9c GLOBAL_AT(int, 0x00896f9c)
#define _DAT_00896fa0 GLOBAL_AT(int, 0x00896fa0)
#define _DAT_00896fa4 GLOBAL_AT(int, 0x00896fa4)
#define _DAT_00896fa8 GLOBAL_AT(int, 0x00896fa8)
#define _DAT_00896fac GLOBAL_AT(int, 0x00896fac)
#define _DAT_00896fb0 GLOBAL_AT(int, 0x00896fb0)
#define _DAT_00896fb4 GLOBAL_AT(int, 0x00896fb4)
#define _DAT_00896fb8 GLOBAL_AT(int, 0x00896fb8)
#define _DAT_00896fbc GLOBAL_AT(int, 0x00896fbc)
#define _DAT_00896fc0 GLOBAL_AT(int, 0x00896fc0)
#define _DAT_00896fc4 GLOBAL_AT(int, 0x00896fc4)
#define _DAT_00896fc8 GLOBAL_AT(int, 0x00896fc8)
#define _DAT_00896fcc GLOBAL_AT(int, 0x00896fcc)
#define _DAT_00896fd0 GLOBAL_AT(int, 0x00896fd0)
#define _DAT_00896fd4 GLOBAL_AT(int, 0x00896fd4)
#define _DAT_00896fd8 GLOBAL_AT(int, 0x00896fd8)
#define _DAT_00896fdc GLOBAL_AT(int, 0x00896fdc)
#define _DAT_00896fe0 GLOBAL_AT(int, 0x00896fe0)
#define _DAT_00896fe4 GLOBAL_AT(int, 0x00896fe4)
#define _DAT_00896fe8 GLOBAL_AT(int, 0x00896fe8)
#define _DAT_00896fec GLOBAL_AT(int, 0x00896fec)
#define _DAT_00896ff0 GLOBAL_AT(int, 0x00896ff0)
#define _DAT_00896ff4 GLOBAL_AT(int, 0x00896ff4)
#define _DAT_00896ff8 GLOBAL_AT(int, 0x00896ff8)
#define _DAT_00896ffc GLOBAL_AT(int, 0x00896ffc)
#define _DAT_00897000 GLOBAL_AT(int, 0x00897000)
#define _DAT_00897004 GLOBAL_AT(int, 0x00897004)
#define _DAT_00897008 GLOBAL_AT(int, 0x00897008)
#define _DAT_0089700c GLOBAL_AT(int, 0x0089700c)
#define _DAT_00897010 GLOBAL_AT(int, 0x00897010)
#define _DAT_00897014 GLOBAL_AT(int, 0x00897014)
#define _DAT_00897018 GLOBAL_AT(int, 0x00897018)
#define _DAT_0089701c GLOBAL_AT(int, 0x0089701c)
#define _DAT_00897020 GLOBAL_AT(int, 0x00897020)
#define _DAT_00897024 GLOBAL_AT(int, 0x00897024)
#define _DAT_00897028 GLOBAL_AT(int, 0x00897028)
#define _DAT_0089702c GLOBAL_AT(int, 0x0089702c)
#define _DAT_00897030 GLOBAL_AT(int, 0x00897030)
#define _DAT_00897034 GLOBAL_AT(int, 0x00897034)
#define _DAT_00897038 GLOBAL_AT(int, 0x00897038)
#define _DAT_0089703c GLOBAL_AT(int, 0x0089703c)
#define _DAT_00897040 GLOBAL_AT(int, 0x00897040)
#define _DAT_00897044 GLOBAL_AT(int, 0x00897044)
#define _DAT_00897048 GLOBAL_AT(int, 0x00897048)
#define _DAT_0089704c GLOBAL_AT(int, 0x0089704c)
#define _DAT_00897050 GLOBAL_AT(int, 0x00897050)
#define _DAT_00897054 GLOBAL_AT(int, 0x00897054)
#define _DAT_00897058 GLOBAL_AT(int, 0x00897058)
#define _DAT_0089705c GLOBAL_AT(int, 0x0089705c)
#define _DAT_00897060 GLOBAL_AT(int, 0x00897060)
#define _DAT_00897064 GLOBAL_AT(int, 0x00897064)
#define _DAT_00897068 GLOBAL_AT(int, 0x00897068)
#define _DAT_0089706c GLOBAL_AT(int, 0x0089706c)
#define _DAT_00897070 GLOBAL_AT(int, 0x00897070)
#define _DAT_00897074 GLOBAL_AT(int, 0x00897074)
#define _DAT_00897078 GLOBAL_AT(int, 0x00897078)
#define _DAT_0089707c GLOBAL_AT(int, 0x0089707c)
#define _DAT_00897080 GLOBAL_AT(int, 0x00897080)
#define _DAT_00897084 GLOBAL_AT(int, 0x00897084)
#define _DAT_00897088 GLOBAL_AT(int, 0x00897088)
#define _DAT_0089708c GLOBAL_AT(int, 0x0089708c)
#define _DAT_00897090 GLOBAL_AT(int, 0x00897090)
#define _DAT_00897094 GLOBAL_AT(int, 0x00897094)
#define _DAT_00897098 GLOBAL_AT(int, 0x00897098)
#define _DAT_0089709c GLOBAL_AT(int, 0x0089709c)
#define _DAT_008970a0 GLOBAL_AT(int, 0x008970a0)
#define _DAT_008970a4 GLOBAL_AT(int, 0x008970a4)
#define _DAT_008970a8 GLOBAL_AT(int, 0x008970a8)
#define _DAT_008970ac GLOBAL_AT(int, 0x008970ac)
#define _DAT_008970b0 GLOBAL_AT(int, 0x008970b0)
#define _DAT_008970b4 GLOBAL_AT(int, 0x008970b4)
#define _DAT_008970b8 GLOBAL_AT(int, 0x008970b8)
#define _DAT_008970bc GLOBAL_AT(int, 0x008970bc)
#define _DAT_008970c0 GLOBAL_AT(int, 0x008970c0)
#define _DAT_008970c4 GLOBAL_AT(int, 0x008970c4)
#define _DAT_008970c8 GLOBAL_AT(int, 0x008970c8)
#define _DAT_008970cc GLOBAL_AT(int, 0x008970cc)
#define _DAT_008970d0 GLOBAL_AT(int, 0x008970d0)
#define _DAT_008970d4 GLOBAL_AT(int, 0x008970d4)
#define _DAT_008970d8 GLOBAL_AT(int, 0x008970d8)
#define _DAT_008970dc GLOBAL_AT(int, 0x008970dc)
#define _DAT_008970e0 GLOBAL_AT(int, 0x008970e0)
#define _DAT_008970e4 GLOBAL_AT(int, 0x008970e4)
#define _DAT_008970e8 GLOBAL_AT(int, 0x008970e8)
#define _DAT_008970ec GLOBAL_AT(int, 0x008970ec)
#define _DAT_008970f0 GLOBAL_AT(int, 0x008970f0)
#define _DAT_008970f4 GLOBAL_AT(int, 0x008970f4)
#define _DAT_008970f8 GLOBAL_AT(int, 0x008970f8)
#define _DAT_008970fc GLOBAL_AT(int, 0x008970fc)
#define _DAT_00897100 GLOBAL_AT(int, 0x00897100)
#define _DAT_00897104 GLOBAL_AT(int, 0x00897104)
#define _DAT_00897108 GLOBAL_AT(int, 0x00897108)
#define _DAT_0089710c GLOBAL_AT(int, 0x0089710c)
#define _DAT_00897110 GLOBAL_AT(int, 0x00897110)
#define _DAT_00897114 GLOBAL_AT(int, 0x00897114)
#define _DAT_00897118 GLOBAL_AT(int, 0x00897118)
#define _DAT_0089711c GLOBAL_AT(int, 0x0089711c)
#define _DAT_00897120 GLOBAL_AT(int, 0x00897120)
#define _DAT_00897124 GLOBAL_AT(int, 0x00897124)
#define _DAT_00897128 GLOBAL_AT(int, 0x00897128)
#define _DAT_0089712c GLOBAL_AT(int, 0x0089712c)
#define _DAT_00897130 GLOBAL_AT(int, 0x00897130)
#define _DAT_00897134 GLOBAL_AT(int, 0x00897134)
#define _DAT_00897138 GLOBAL_AT(int, 0x00897138)
#define _DAT_0089713c GLOBAL_AT(int, 0x0089713c)
#define _DAT_00897140 GLOBAL_AT(int, 0x00897140)
#define _DAT_00897144 GLOBAL_AT(int, 0x00897144)
#define _DAT_00897148 GLOBAL_AT(int, 0x00897148)
#define _DAT_0089714c GLOBAL_AT(int, 0x0089714c)
#define _DAT_00897150 GLOBAL_AT(int, 0x00897150)
#define _DAT_00897154 GLOBAL_AT(int, 0x00897154)
#define _DAT_00897158 GLOBAL_AT(int, 0x00897158)
#define _DAT_0089715c GLOBAL_AT(int, 0x0089715c)
#define _DAT_00897160 GLOBAL_AT(int, 0x00897160)
#define _DAT_00897164 GLOBAL_AT(int, 0x00897164)
#define _DAT_00897168 GLOBAL_AT(int, 0x00897168)
#define _DAT_0089716c GLOBAL_AT(int, 0x0089716c)
#define _DAT_00897170 GLOBAL_AT(int, 0x00897170)
#define _DAT_00897174 GLOBAL_AT(int, 0x00897174)
#define _DAT_00897178 GLOBAL_AT(int, 0x00897178)
#define _DAT_0089717c GLOBAL_AT(int, 0x0089717c)
#define _DAT_00897180 GLOBAL_AT(int, 0x00897180)
#define _DAT_00897184 GLOBAL_AT(int, 0x00897184)
#define _DAT_00897188 GLOBAL_AT(int, 0x00897188)
#define _DAT_0089718c GLOBAL_AT(int, 0x0089718c)
#define _DAT_00897190 GLOBAL_AT(int, 0x00897190)
#define _DAT_00897194 GLOBAL_AT(int, 0x00897194)
#define _DAT_00897198 GLOBAL_AT(int, 0x00897198)
#define _DAT_0089719c GLOBAL_AT(int, 0x0089719c)
#define _DAT_008971a0 GLOBAL_AT(int, 0x008971a0)
#define _DAT_008971a4 GLOBAL_AT(int, 0x008971a4)
#define _DAT_008971a8 GLOBAL_AT(int, 0x008971a8)
#define _DAT_008971ac GLOBAL_AT(int, 0x008971ac)
#define _DAT_008971b0 GLOBAL_AT(int, 0x008971b0)
#define _DAT_008971b4 GLOBAL_AT(int, 0x008971b4)
#define _DAT_008971b8 GLOBAL_AT(int, 0x008971b8)
#define _DAT_008971bc GLOBAL_AT(int, 0x008971bc)
#define _DAT_008971c0 GLOBAL_AT(int, 0x008971c0)
#define _DAT_008971c4 GLOBAL_AT(int, 0x008971c4)
#define _DAT_008971c8 GLOBAL_AT(int, 0x008971c8)
#define _DAT_008971cc GLOBAL_AT(int, 0x008971cc)
#define _DAT_008971d0 GLOBAL_AT(int, 0x008971d0)
#define _DAT_008971d4 GLOBAL_AT(int, 0x008971d4)
#define _DAT_008971d8 GLOBAL_AT(int, 0x008971d8)
#define _DAT_008971dc GLOBAL_AT(int, 0x008971dc)
#define _DAT_008971e0 GLOBAL_AT(int, 0x008971e0)
#define _DAT_008971e4 GLOBAL_AT(int, 0x008971e4)
#define _DAT_008971e8 GLOBAL_AT(int, 0x008971e8)
#define _DAT_008971ec GLOBAL_AT(int, 0x008971ec)
#define _DAT_008971f0 GLOBAL_AT(int, 0x008971f0)
#define _DAT_008971f4 GLOBAL_AT(int, 0x008971f4)
#define _DAT_008971f8 GLOBAL_AT(int, 0x008971f8)
#define _DAT_008971fc GLOBAL_AT(int, 0x008971fc)
#define _DAT_00897200 GLOBAL_AT(int, 0x00897200)
#define _DAT_00897204 GLOBAL_AT(int, 0x00897204)
#define _DAT_00897208 GLOBAL_AT(int, 0x00897208)
#define _DAT_0089720c GLOBAL_AT(int, 0x0089720c)
#define _DAT_00897210 GLOBAL_AT(int, 0x00897210)
#define _DAT_00897214 GLOBAL_AT(int, 0x00897214)
#define _DAT_00897218 GLOBAL_AT(int, 0x00897218)
#define _DAT_0089721c GLOBAL_AT(int, 0x0089721c)
#define _DAT_00897220 GLOBAL_AT(int, 0x00897220)
#define _DAT_00897224 GLOBAL_AT(int, 0x00897224)
#define _DAT_00897228 GLOBAL_AT(int, 0x00897228)
#define _DAT_0089722c GLOBAL_AT(int, 0x0089722c)
#define _DAT_00897230 GLOBAL_AT(int, 0x00897230)
#define _DAT_00897234 GLOBAL_AT(int, 0x00897234)
#define _DAT_00897238 GLOBAL_AT(int, 0x00897238)
#define _DAT_0089723c GLOBAL_AT(int, 0x0089723c)
#define _DAT_00897240 GLOBAL_AT(int, 0x00897240)
#define _DAT_00897244 GLOBAL_AT(int, 0x00897244)
#define _DAT_00897248 GLOBAL_AT(int, 0x00897248)
#define _DAT_0089724c GLOBAL_AT(int, 0x0089724c)
#define _DAT_00897250 GLOBAL_AT(int, 0x00897250)
#define _DAT_00897254 GLOBAL_AT(int, 0x00897254)
#define _DAT_00897258 GLOBAL_AT(int, 0x00897258)
#define _DAT_0089725c GLOBAL_AT(int, 0x0089725c)
#define _DAT_00897260 GLOBAL_AT(int, 0x00897260)
#define _DAT_00897264 GLOBAL_AT(int, 0x00897264)
#define _DAT_00897268 GLOBAL_AT(int, 0x00897268)
#define _DAT_0089726c GLOBAL_AT(int, 0x0089726c)
#define _DAT_00897270 GLOBAL_AT(int, 0x00897270)
#define _DAT_00897274 GLOBAL_AT(int, 0x00897274)
#define _DAT_00897278 GLOBAL_AT(int, 0x00897278)
#define _DAT_0089727c GLOBAL_AT(int, 0x0089727c)
#define _DAT_00897280 GLOBAL_AT(int, 0x00897280)
#define _DAT_00897284 GLOBAL_AT(int, 0x00897284)
#define _DAT_00897288 GLOBAL_AT(int, 0x00897288)
#define _DAT_0089728c GLOBAL_AT(int, 0x0089728c)
#define _DAT_00897290 GLOBAL_AT(int, 0x00897290)
#define _DAT_00897294 GLOBAL_AT(int, 0x00897294)
#define _DAT_00897298 GLOBAL_AT(int, 0x00897298)
#define _DAT_0089729c GLOBAL_AT(int, 0x0089729c)
#define _DAT_008972a0 GLOBAL_AT(int, 0x008972a0)
#define _DAT_008972a4 GLOBAL_AT(int, 0x008972a4)
#define _DAT_008972a8 GLOBAL_AT(int, 0x008972a8)
#define _DAT_008972ac GLOBAL_AT(int, 0x008972ac)
#define _DAT_008972b0 GLOBAL_AT(int, 0x008972b0)
#define _DAT_008972b4 GLOBAL_AT(int, 0x008972b4)
#define _DAT_008972b8 GLOBAL_AT(int, 0x008972b8)
#define _DAT_008972bc GLOBAL_AT(int, 0x008972bc)
#define _DAT_008972c0 GLOBAL_AT(int, 0x008972c0)
#define _DAT_008972c4 GLOBAL_AT(int, 0x008972c4)
#define _DAT_008972c8 GLOBAL_AT(int, 0x008972c8)
#define _DAT_008972cc GLOBAL_AT(int, 0x008972cc)
#define _DAT_008972d0 GLOBAL_AT(int, 0x008972d0)
#define _DAT_008972d4 GLOBAL_AT(int, 0x008972d4)
#define _DAT_008972d8 GLOBAL_AT(int, 0x008972d8)
#define _DAT_008972dc GLOBAL_AT(int, 0x008972dc)
#define _DAT_008972e0 GLOBAL_AT(int, 0x008972e0)
#define _DAT_008972e4 GLOBAL_AT(int, 0x008972e4)
#define _DAT_008972e8 GLOBAL_AT(int, 0x008972e8)
#define _DAT_008972ec GLOBAL_AT(int, 0x008972ec)
#define _DAT_008972f0 GLOBAL_AT(int, 0x008972f0)
#define _DAT_008972f4 GLOBAL_AT(int, 0x008972f4)
#define _DAT_008972f8 GLOBAL_AT(int, 0x008972f8)
#define _DAT_008972fc GLOBAL_AT(int, 0x008972fc)
#define _DAT_00897300 GLOBAL_AT(int, 0x00897300)
#define _DAT_00897304 GLOBAL_AT(int, 0x00897304)
#define _DAT_00897308 GLOBAL_AT(int, 0x00897308)
#define _DAT_0089730c GLOBAL_AT(int, 0x0089730c)
#define _DAT_00897310 GLOBAL_AT(int, 0x00897310)
#define _DAT_00897314 GLOBAL_AT(int, 0x00897314)
#define _DAT_00897318 GLOBAL_AT(int, 0x00897318)
#define _DAT_0089731c GLOBAL_AT(int, 0x0089731c)
#define _DAT_00897320 GLOBAL_AT(int, 0x00897320)
#define _DAT_00897324 GLOBAL_AT(int, 0x00897324)
#define _DAT_00897328 GLOBAL_AT(int, 0x00897328)
#define _DAT_0089732c GLOBAL_AT(int, 0x0089732c)
#define _DAT_00897330 GLOBAL_AT(int, 0x00897330)
#define _DAT_00897334 GLOBAL_AT(int, 0x00897334)
#define _DAT_00897338 GLOBAL_AT(int, 0x00897338)
#define _DAT_0089733c GLOBAL_AT(int, 0x0089733c)
#define _DAT_00897340 GLOBAL_AT(int, 0x00897340)
#define _DAT_00897344 GLOBAL_AT(int, 0x00897344)
#define _DAT_00897348 GLOBAL_AT(int, 0x00897348)
#define _DAT_0089734c GLOBAL_AT(int, 0x0089734c)
#define _DAT_00897350 GLOBAL_AT(int, 0x00897350)
#define _DAT_00897354 GLOBAL_AT(int, 0x00897354)
#define _DAT_00897358 GLOBAL_AT(int, 0x00897358)
#define _DAT_0089735c GLOBAL_AT(int, 0x0089735c)
#define _DAT_00897360 GLOBAL_AT(int, 0x00897360)
#define _DAT_00897364 GLOBAL_AT(int, 0x00897364)
#define _DAT_00897368 GLOBAL_AT(int, 0x00897368)
#define _DAT_0089736c GLOBAL_AT(int, 0x0089736c)
#define _DAT_00897370 GLOBAL_AT(int, 0x00897370)
#define _DAT_00897374 GLOBAL_AT(int, 0x00897374)
#define _DAT_00897378 GLOBAL_AT(int, 0x00897378)
#define _DAT_0089737c GLOBAL_AT(int, 0x0089737c)
#define _DAT_00897380 GLOBAL_AT(int, 0x00897380)
#define _DAT_00897384 GLOBAL_AT(int, 0x00897384)
#define _DAT_00897388 GLOBAL_AT(int, 0x00897388)
#define _DAT_0089738c GLOBAL_AT(int, 0x0089738c)
#define _DAT_00897390 GLOBAL_AT(int, 0x00897390)
#define _DAT_00897394 GLOBAL_AT(int, 0x00897394)
#define _DAT_00897398 GLOBAL_AT(int, 0x00897398)
#define _DAT_0089739c GLOBAL_AT(int, 0x0089739c)
#define _DAT_008973a0 GLOBAL_AT(int, 0x008973a0)
#define _DAT_008973a4 GLOBAL_AT(int, 0x008973a4)
#define _DAT_008973a8 GLOBAL_AT(int, 0x008973a8)
#define _DAT_008973ac GLOBAL_AT(int, 0x008973ac)
#define _DAT_008973b0 GLOBAL_AT(int, 0x008973b0)
#define _DAT_008973b4 GLOBAL_AT(int, 0x008973b4)
#define _DAT_008973b8 GLOBAL_AT(int, 0x008973b8)
#define _DAT_008973bc GLOBAL_AT(int, 0x008973bc)
#define _DAT_008973c0 GLOBAL_AT(int, 0x008973c0)
#define _DAT_008973c4 GLOBAL_AT(int, 0x008973c4)
#define _DAT_008973c8 GLOBAL_AT(int, 0x008973c8)
#define _DAT_008973cc GLOBAL_AT(int, 0x008973cc)
#define _DAT_008973d0 GLOBAL_AT(int, 0x008973d0)
#define _DAT_008973d4 GLOBAL_AT(int, 0x008973d4)
#define _DAT_008973d8 GLOBAL_AT(int, 0x008973d8)
#define _DAT_008973dc GLOBAL_AT(int, 0x008973dc)
#define _DAT_008973e0 GLOBAL_AT(int, 0x008973e0)
#define _DAT_008973e4 GLOBAL_AT(int, 0x008973e4)
#define _DAT_008973e8 GLOBAL_AT(int, 0x008973e8)
#define _DAT_008973ec GLOBAL_AT(int, 0x008973ec)
#define _DAT_008973f0 GLOBAL_AT(int, 0x008973f0)
#define _DAT_008973f4 GLOBAL_AT(int, 0x008973f4)
#define _DAT_008973f8 GLOBAL_AT(int, 0x008973f8)
#define _DAT_008973fc GLOBAL_AT(int, 0x008973fc)
#define _DAT_00897400 GLOBAL_AT(int, 0x00897400)
#define _DAT_00897404 GLOBAL_AT(int, 0x00897404)
#define _DAT_00897408 GLOBAL_AT(int, 0x00897408)
#define _DAT_0089740c GLOBAL_AT(int, 0x0089740c)
#define _DAT_00897410 GLOBAL_AT(int, 0x00897410)
#define DAT_0063f52c GLOBAL_AT(int, 0x0063f52c)
#define _DAT_00897414 GLOBAL_AT(int, 0x00897414)
#define _DAT_00897418 GLOBAL_AT(int, 0x00897418)
#define _DAT_0089741c GLOBAL_AT(int, 0x0089741c)
#define _DAT_00897420 GLOBAL_AT(int, 0x00897420)
#define _DAT_00897424 GLOBAL_AT(int, 0x00897424)
#define _DAT_00897428 GLOBAL_AT(int, 0x00897428)
#define _DAT_0089742c GLOBAL_AT(int, 0x0089742c)
#define _DAT_00897430 GLOBAL_AT(int, 0x00897430)
#define DAT_0063f4fc GLOBAL_AT(int, 0x0063f4fc)
#define _DAT_00897434 GLOBAL_AT(int, 0x00897434)
#define _DAT_00897438 GLOBAL_AT(int, 0x00897438)
#define _DAT_0089743c GLOBAL_AT(int, 0x0089743c)
#define _DAT_00897440 GLOBAL_AT(int, 0x00897440)
#define _DAT_00897444 GLOBAL_AT(int, 0x00897444)
#define _DAT_00897448 GLOBAL_AT(int, 0x00897448)
#define _DAT_0089744c GLOBAL_AT(int, 0x0089744c)
#define _DAT_00897450 GLOBAL_AT(int, 0x00897450)
#define _DAT_00897454 GLOBAL_AT(int, 0x00897454)
#define _DAT_00897458 GLOBAL_AT(int, 0x00897458)
#define _DAT_0089745c GLOBAL_AT(int, 0x0089745c)
#define _DAT_00897460 GLOBAL_AT(int, 0x00897460)
#define _DAT_00897464 GLOBAL_AT(int, 0x00897464)
#define _DAT_00897468 GLOBAL_AT(int, 0x00897468)
#define _DAT_0089746c GLOBAL_AT(int, 0x0089746c)
#define _DAT_00897470 GLOBAL_AT(int, 0x00897470)
#define _DAT_00897474 GLOBAL_AT(int, 0x00897474)
#define _DAT_00897478 GLOBAL_AT(int, 0x00897478)
#define _DAT_0089747c GLOBAL_AT(int, 0x0089747c)
#define _DAT_00897480 GLOBAL_AT(int, 0x00897480)
#define _DAT_00897484 GLOBAL_AT(int, 0x00897484)
#define _DAT_00897488 GLOBAL_AT(int, 0x00897488)
#define _DAT_0089748c GLOBAL_AT(int, 0x0089748c)
#define _DAT_00897490 GLOBAL_AT(int, 0x00897490)
#define _DAT_00897494 GLOBAL_AT(int, 0x00897494)
#define _DAT_00897498 GLOBAL_AT(int, 0x00897498)
#define _DAT_0089749c GLOBAL_AT(int, 0x0089749c)
#define _DAT_008974a0 GLOBAL_AT(int, 0x008974a0)
#define _DAT_008974a4 GLOBAL_AT(int, 0x008974a4)
#define _DAT_008974a8 GLOBAL_AT(int, 0x008974a8)
#define _DAT_008974ac GLOBAL_AT(int, 0x008974ac)
#define _DAT_008974b0 GLOBAL_AT(int, 0x008974b0)
#define _DAT_008974b4 GLOBAL_AT(int, 0x008974b4)
#define _DAT_008974b8 GLOBAL_AT(int, 0x008974b8)
#define _DAT_008974bc GLOBAL_AT(int, 0x008974bc)
#define _DAT_008974c0 GLOBAL_AT(int, 0x008974c0)
#define _DAT_008974c4 GLOBAL_AT(int, 0x008974c4)
#define _DAT_008974c8 GLOBAL_AT(int, 0x008974c8)
#define _DAT_008974cc GLOBAL_AT(int, 0x008974cc)
#define _DAT_008974d0 GLOBAL_AT(int, 0x008974d0)
#define _DAT_008974d4 GLOBAL_AT(int, 0x008974d4)
#define _DAT_008974d8 GLOBAL_AT(int, 0x008974d8)
#define _DAT_008974dc GLOBAL_AT(int, 0x008974dc)
#define _DAT_008974e0 GLOBAL_AT(int, 0x008974e0)
#define _DAT_008974e4 GLOBAL_AT(int, 0x008974e4)
#define _DAT_008974e8 GLOBAL_AT(int, 0x008974e8)
#define _DAT_008974ec GLOBAL_AT(int, 0x008974ec)
#define _DAT_008974f0 GLOBAL_AT(int, 0x008974f0)
#define _DAT_008974f4 GLOBAL_AT(int, 0x008974f4)
#define _DAT_008974f8 GLOBAL_AT(int, 0x008974f8)
#define _DAT_008974fc GLOBAL_AT(int, 0x008974fc)
#define _DAT_00897500 GLOBAL_AT(int, 0x00897500)
#define _DAT_00897504 GLOBAL_AT(int, 0x00897504)
#define _DAT_00897508 GLOBAL_AT(int, 0x00897508)
#define _DAT_0089750c GLOBAL_AT(int, 0x0089750c)
#define _DAT_00897510 GLOBAL_AT(int, 0x00897510)
#define _DAT_00897514 GLOBAL_AT(int, 0x00897514)
#define _DAT_00897518 GLOBAL_AT(int, 0x00897518)
#define _DAT_0089751c GLOBAL_AT(int, 0x0089751c)
#define _DAT_00897520 GLOBAL_AT(int, 0x00897520)
#define _DAT_00897524 GLOBAL_AT(int, 0x00897524)
#define _DAT_00897528 GLOBAL_AT(int, 0x00897528)
#define _DAT_0089752c GLOBAL_AT(int, 0x0089752c)
#define _DAT_00897530 GLOBAL_AT(int, 0x00897530)
#define _DAT_00897534 GLOBAL_AT(int, 0x00897534)
#define DAT_00897538 GLOBAL_AT(int, 0x00897538)
#define DAT_00897548 GLOBAL_AT(int, 0x00897548)
#define DAT_00897558 GLOBAL_AT(int, 0x00897558)
#define DAT_00897568 GLOBAL_AT(int, 0x00897568)
#define DAT_00897578 GLOBAL_AT(int, 0x00897578)
#define DAT_00897588 GLOBAL_AT(int, 0x00897588)
#define DAT_00897598 GLOBAL_AT(int, 0x00897598)
#define DAT_008975a8 GLOBAL_AT(int, 0x008975a8)
#define DAT_008975b8 GLOBAL_AT(int, 0x008975b8)
#define DAT_008975c8 GLOBAL_AT(int, 0x008975c8)
#define DAT_008975d8 GLOBAL_AT(int, 0x008975d8)
#define DAT_008975e8 GLOBAL_AT(int, 0x008975e8)
#define DAT_008975f8 GLOBAL_AT(int, 0x008975f8)
#define DAT_00897608 GLOBAL_AT(int, 0x00897608)
#define DAT_00897618 GLOBAL_AT(int, 0x00897618)
#define DAT_00897628 GLOBAL_AT(int, 0x00897628)
#define DAT_00897638 GLOBAL_AT(int, 0x00897638)
#define DAT_00897648 GLOBAL_AT(int, 0x00897648)
#define DAT_00897658 GLOBAL_AT(int, 0x00897658)
#define DAT_00897668 GLOBAL_AT(int, 0x00897668)
#define DAT_00897678 GLOBAL_AT(int, 0x00897678)
#define DAT_00897688 GLOBAL_AT(int, 0x00897688)
#define DAT_00897698 GLOBAL_AT(int, 0x00897698)
#define DAT_008976a8 GLOBAL_AT(int, 0x008976a8)
#define DAT_0063f3c8 GLOBAL_AT(int, 0x0063f3c8)
#define DAT_008976b8 GLOBAL_AT(int, 0x008976b8)
#define DAT_008976c8 GLOBAL_AT(int, 0x008976c8)
#define DAT_008976d8 GLOBAL_AT(int, 0x008976d8)
#define DAT_008976e8 GLOBAL_AT(int, 0x008976e8)
#define DAT_008976f8 GLOBAL_AT(int, 0x008976f8)
#define DAT_00897708 GLOBAL_AT(int, 0x00897708)
#define DAT_0063f378 GLOBAL_AT(int, 0x0063f378)
#define DAT_00897718 GLOBAL_AT(int, 0x00897718)
#define DAT_00897728 GLOBAL_AT(int, 0x00897728)
#define DAT_00897738 GLOBAL_AT(int, 0x00897738)
#define DAT_00897748 GLOBAL_AT(int, 0x00897748)
#define DAT_00897758 GLOBAL_AT(int, 0x00897758)
#define DAT_00897768 GLOBAL_AT(int, 0x00897768)
#define DAT_00897778 GLOBAL_AT(int, 0x00897778)
#define DAT_00897788 GLOBAL_AT(int, 0x00897788)
#define DAT_00897798 GLOBAL_AT(int, 0x00897798)
#define DAT_008977a8 GLOBAL_AT(int, 0x008977a8)
#define DAT_008977b8 GLOBAL_AT(int, 0x008977b8)
#define DAT_008977c8 GLOBAL_AT(int, 0x008977c8)
#define DAT_008977d8 GLOBAL_AT(int, 0x008977d8)
#define DAT_008977e8 GLOBAL_AT(int, 0x008977e8)
#define DAT_008977f8 GLOBAL_AT(int, 0x008977f8)
#define DAT_00897808 GLOBAL_AT(int, 0x00897808)
#define DAT_00897818 GLOBAL_AT(int, 0x00897818)
#define DAT_00897828 GLOBAL_AT(int, 0x00897828)
#define DAT_00897838 GLOBAL_AT(int, 0x00897838)
#define DAT_00897848 GLOBAL_AT(int, 0x00897848)
#define DAT_00897858 GLOBAL_AT(int, 0x00897858)
#define DAT_00897868 GLOBAL_AT(int, 0x00897868)
#define DAT_00897878 GLOBAL_AT(int, 0x00897878)
#define DAT_00897888 GLOBAL_AT(int, 0x00897888)
#define DAT_00897898 GLOBAL_AT(int, 0x00897898)
#define DAT_008978a8 GLOBAL_AT(int, 0x008978a8)
#define DAT_008978b8 GLOBAL_AT(int, 0x008978b8)
#define DAT_008978c8 GLOBAL_AT(int, 0x008978c8)
#define DAT_008978d8 GLOBAL_AT(int, 0x008978d8)
#define DAT_008978e8 GLOBAL_AT(int, 0x008978e8)
#define DAT_008978f8 GLOBAL_AT(int, 0x008978f8)
#define DAT_00897908 GLOBAL_AT(int, 0x00897908)
#define DAT_00897918 GLOBAL_AT(int, 0x00897918)
#define DAT_00897928 GLOBAL_AT(int, 0x00897928)
#define DAT_00897938 GLOBAL_AT(int, 0x00897938)
#define DAT_00897948 GLOBAL_AT(int, 0x00897948)
#define DAT_00897958 GLOBAL_AT(int, 0x00897958)
#define DAT_00897968 GLOBAL_AT(int, 0x00897968)
#define DAT_00897978 GLOBAL_AT(int, 0x00897978)
#define DAT_00897988 GLOBAL_AT(int, 0x00897988)
#define DAT_00897998 GLOBAL_AT(int, 0x00897998)
#define DAT_008979a8 GLOBAL_AT(int, 0x008979a8)
#define DAT_008979b8 GLOBAL_AT(int, 0x008979b8)
#define DAT_008979c8 GLOBAL_AT(int, 0x008979c8)
#define DAT_008979d8 GLOBAL_AT(int, 0x008979d8)
#define DAT_008979e8 GLOBAL_AT(int, 0x008979e8)
#define DAT_008979f8 GLOBAL_AT(int, 0x008979f8)
#define DAT_00897a08 GLOBAL_AT(int, 0x00897a08)
#define DAT_00897a18 GLOBAL_AT(int, 0x00897a18)
#define DAT_00897a28 GLOBAL_AT(int, 0x00897a28)
#define DAT_00897a38 GLOBAL_AT(int, 0x00897a38)
#define DAT_00897a48 GLOBAL_AT(int, 0x00897a48)
#define DAT_00897a58 GLOBAL_AT(int, 0x00897a58)
#define DAT_00897a68 GLOBAL_AT(int, 0x00897a68)
#define DAT_00897a78 GLOBAL_AT(int, 0x00897a78)
#define s_Richard_Smith_0063fa5c ((char*)0x0063fa5c)
#define s_Arif_Sinan__Arthur_Long__William_0063f224 ((char*)0x0063f224)
#define s_Mark_Pitcher_0063f998 ((char*)0x0063f998)
#define s_Project_Manager_0063ef70 ((char*)0x0063ef70)
#define s_Chris_Sur__Michael_Shamid_deen__K_0063f1f8 ((char*)0x0063f1f8)
#define s_Frank_Heissat_0063f5b8 ((char*)0x0063f5b8)
#define s_Stuart_Gillam_0063fa8c ((char*)0x0063fa8c)
#define s_David_Cathro_0063f9f4 ((char*)0x0063f9f4)
#define s_Neil_Maguire_0063f924 ((char*)0x0063f924)
#define s_Jay_Hartley_0063f478 ((char*)0x0063f478)
#define s_Mike_Pawley_and_everyone_on_GGDe_0063f78c ((char*)0x0063f78c)
#define s_System_Administrator_0063f654 ((char*)0x0063f654)
#define s_Gregory_Eche_0063f4ec ((char*)0x0063f4ec)
#define s_Cecelia_Hernandez_0063f2a8 ((char*)0x0063f2a8)
#define s_Wayne_Adkin_0063f450 ((char*)0x0063f450)
#define s_Elton_Broadhead_0063f440 ((char*)0x0063f440)
#define s_Chris_Greatbatch_0063f498 ((char*)0x0063f498)
#define s_Patty__L_Rivas__K_Edwards__S__Be_0063f0e0 ((char*)0x0063f0e0)
#define s_Special_thanks_0063f624 ((char*)0x0063f624)
#define s_Dave_T_Brown_0063f340 ((char*)0x0063f340)
#define s_Jan_Svarovsky_0063fb14 ((char*)0x0063fb14)
#define s_Fabrice__Grand_Fromage__Drevon__D_0063f5f0 ((char*)0x0063f5f0)
#define s_Nathan_McCree___Gabriel_Wetz_0063f8cc ((char*)0x0063f8cc)
#define s_Christophe_Chabal_0063f50c ((char*)0x0063f50c)
#define s_Joy_Schneer_0063f29c ((char*)0x0063f29c)
#define s_Operations_Manager_0063f6e8 ((char*)0x0063f6e8)
#define s_Glenn_Corpes_0063fad4 ((char*)0x0063fad4)
#define s_Steve_Ackrich_0063f2ec ((char*)0x0063f2ec)
#define s_Tom_Richardson_0063f330 ((char*)0x0063f330)
#define s_Emmanuel_Cholley_0063f568 ((char*)0x0063f568)
#define s_Edmund_Perryman_0063f988 ((char*)0x0063f988)
#define s_Amanda_Mealing_0063f884 ((char*)0x0063f884)
#define s_Sylviane_Pivot_Chossat_0063f41c ((char*)0x0063f41c)
#define s_Kristine_Keever_0063f2bc ((char*)0x0063f2bc)
#define s_John_Treece_Birch_0063fa78 ((char*)0x0063fa78)
#define s_Guillaume_Fournier_0063f6d4 ((char*)0x0063f6d4)
#define s_Chris_Young_0063fa04 ((char*)0x0063fa04)
#define s_Nicolas__The_Dwarf__Poissenot_0063f69c ((char*)0x0063f69c)
#define s_Caroline_Fauchille_0063f364 ((char*)0x0063f364)
#define s_Mike_McCarthy_0063f9d4 ((char*)0x0063f9d4)
#define s_Oliver_Green_0063f598 ((char*)0x0063f598)
#define s_Mark_Feldman_0063fa4c ((char*)0x0063fa4c)
#define s_Wiebke_Vallentin_0063f27c ((char*)0x0063f27c)
#define s_Jeremy_Elford_0063fa30 ((char*)0x0063fa30)
#define s_Matt_Frary_0063f290 ((char*)0x0063f290)
#define s_Minh_Tadang_0063f6fc ((char*)0x0063f6fc)
#define s_Michael_Shamsid_Deen__Jeff_Kelm__0063f120 ((char*)0x0063f120)
#define s_Matt_Taylor_0063fa40 ((char*)0x0063fa40)
#define s_Chuck_Nunez__Jeff_Loney__Donny_C_0063f1a8 ((char*)0x0063f1a8)
#define s_Cindy_Church_0063f5a8 ((char*)0x0063f5a8)
#define s_Xbox_Test_0063f270 ((char*)0x0063f270)
#define s_Helen_Hinchcliffe_0063f25c ((char*)0x0063f25c)
#define s_Ben_Carter_0063fa6c ((char*)0x0063fa6c)
#define s_Maud_Favier_0063f400 ((char*)0x0063f400)
#define s_Weronika_Larsson_0063f3dc ((char*)0x0063f3dc)
#define s_Alex_Cave_0063f9c8 ((char*)0x0063f9c8)
#define s_Michael_Dove_0063f9a8 ((char*)0x0063f9a8)
#define s_Jody_Hindle_0063f520 ((char*)0x0063f520)
#define s_Emilie_Ballivy_0063f38c ((char*)0x0063f38c)
#define s_Malek_Agha_0063f71c ((char*)0x0063f71c)
#define s_Sarah_Bennett_0063f40c ((char*)0x0063f40c)
#define s_Rob_Lunt_0063f4ac ((char*)0x0063f4ac)
#define s_Mike_Man__Andy_Trowers__Ben_Boar_0063f80c ((char*)0x0063f80c)
#define s_Christian_Bradley_0063f954 ((char*)0x0063f954)
#define s_Joel_Kemp_0063f974 ((char*)0x0063f974)
#define s_M_Gilmartin__Sunnyvale_QA__D_Cla_0063f0b4 ((char*)0x0063f0b4)
#define s_Synthesis_Interference_0063f3b0 ((char*)0x0063f3b0)
#define s_Babel_Media_Ltd__0063f39c ((char*)0x0063f39c)
#define s_Jeremy_Longley_0063faf4 ((char*)0x0063faf4)
#define s_Copyright__C__1997_2003_by_RAD_G_0063f748 ((char*)0x0063f748)
#define s_Production_Manager_0063f708 ((char*)0x0063f708)
#define s_Fuat__Fut__Kaygisiz_0063f688 ((char*)0x0063f688)
#define s_Jean_Marcel_Nicolai_0063f4d8 ((char*)0x0063f4d8)
#define s_G_Marquez__T_Hess__Kirby__J_Koro_0063f07c ((char*)0x0063f07c)
#define s_PC_Version_Test_0063faac ((char*)0x0063faac)
#define s_Nathan_McCree_0063f8ec ((char*)0x0063f8ec)
#define s_Nick_McMahon_0063f9e4 ((char*)0x0063f9e4)
#define s_Fabien_Lauton_0063f53c ((char*)0x0063f53c)
#define s_Dominique_Morel_0063f57c ((char*)0x0063f57c)
#define s_Chris_Hill_0063f968 ((char*)0x0063f968)
#define s_Dylan_Murray_0063fa10 ((char*)0x0063fa10)
#define s_Judi_Spiers_0063f5e4 ((char*)0x0063f5e4)
#define s_Andrew_Lemat_0063f24c ((char*)0x0063f24c)
#define s_Matt_Kemp_0063f8c0 ((char*)0x0063f8c0)
#define s_Yves__DarkZagor__Zagatti_0063f66c ((char*)0x0063f66c)
#define s_Kate_Kerrigan_0063f9b8 ((char*)0x0063f9b8)
#define s_Jim_Thompson_0063fb04 ((char*)0x0063fb04)
#define s_Tze_Lim_of_Subliminal_Influence_0063f934 ((char*)0x0063f934)
#define s_Ivan_Davies_0063f5d8 ((char*)0x0063f5d8)
#define s_Uses_Bink_Video__0063f778 ((char*)0x0063f778)
#define s_Stephane__Steffdemon__Benard_0063f634 ((char*)0x0063f634)
#define s_Sean_Chapman_0063f874 ((char*)0x0063f874)
#define s_Stef_Reali_0063f46c ((char*)0x0063f46c)
#define s_Alex_Trowers_0063fa9c ((char*)0x0063fa9c)
#define s_Gabriel_Wetz_0063f8b0 ((char*)0x0063f8b0)
#define s_RelQ___International_Testing_SA_0063f728 ((char*)0x0063f728)
#define s_Larry_Sparks_0063f5c8 ((char*)0x0063f5c8)
#define s_Olivier_Robin_0063f4b8 ((char*)0x0063f4b8)
#define s_Sam_Attenborough_0063f484 ((char*)0x0063f484)
#define s_Steve_Allison_0063f310 ((char*)0x0063f310)
#define s_Pepe_Jauregui_0063f1dc ((char*)0x0063f1dc)
#define s_Jenny_Graham__Philip_Elford__Oli_0063f7b0 ((char*)0x0063f7b0)
#define s_Si_Handby__Martin_Griffiths__Mor_0063f7dc ((char*)0x0063f7dc)
#define s_Jorge_Oseguera_0063f110 ((char*)0x0063f110)
#define s_William_Jaulain_0063f558 ((char*)0x0063f558)
#define s_Lewis_Glover_0063f4c8 ((char*)0x0063f4c8)
#define s_Rob_Brown_0063f894 ((char*)0x0063f894)
#define s_Rebecka_Pernered_0063f350 ((char*)0x0063f350)
#define s_Jean_Raymond_0063f320 ((char*)0x0063f320)
#define s_David_Gaines_0063f2dc ((char*)0x0063f2dc)
#define s_PS2_Test_0063f1ec ((char*)0x0063f1ec)
#define s_Julien__Nemo__Chabrot_0063f6bc ((char*)0x0063f6bc)
#define s_Ian_Whitaker_0063f45c ((char*)0x0063f45c)
#define s_and_Mucky_Foot_for_cardid___0063f830 ((char*)0x0063f830)
#define s_Lynn_Daniel_0063f58c ((char*)0x0063f58c)
#define s_Sam_Hindle_0063f434 ((char*)0x0063f434)
#define s_Ron_Ong_0063f980 ((char*)0x0063f980)
#define s_PC_Version_Programming_0063fabc ((char*)0x0063fabc)
#define s_Nathan_McCree_Music_Production_L_0063f8fc ((char*)0x0063f8fc)
#define s_Les_Edgar__John_Cook__Alison_Bea_0063f84c ((char*)0x0063f84c)
#define s_Testers_0063ec8c ((char*)0x0063ec8c)
#define s_Larry_Fukuoka_0063f2cc ((char*)0x0063f2cc)
#define s_Diane_Delaye_0063f3f0 ((char*)0x0063f3f0)
#define s_Corey_Eiland__Kory_O__Daniels__K_0063f17c ((char*)0x0063f17c)
#define s_Darran_Thomas_0063fae4 ((char*)0x0063fae4)
#define s_Yan_Schied_0063f54c ((char*)0x0063f54c)
#define s_Jean_Philippe_Agati_0063f2fc ((char*)0x0063f2fc)
#define s_Wilfredo_Dimas_0063f1cc ((char*)0x0063f1cc)
#define s_Mark_Florentino__Renee_Barber__T_0063f150 ((char*)0x0063f150)
#define s_Brad_Lavelle_0063f8a0 ((char*)0x0063f8a0)
#define s_Fabien_Roset_0063f3cc ((char*)0x0063f3cc)
#define s_Neil_Gartell_0063fa20 ((char*)0x0063fa20)
typedef uint32_t (BEA_THISCALL* FUN_00519ff0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00519ff0_t> FUN_00519ff0 = {(FUN_00519ff0_t)0x00519ff0};
typedef uint32_t (BEA_THISCALL* FUN_0051a010_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0051a010_t> FUN_0051a010 = {(FUN_0051a010_t)0x0051a010};

static uint32_t BEA_CDECL ap_00518bf0(void)
{
  DAT_00896ca8 = 2;
  DAT_00896cac = 0;
  DAT_00896cb0 = 0;
  DAT_00896cb4 = 0;
  DAT_00896cb8 = 2;
  DAT_00896cbc = 1;
  DAT_00896cc0 = 0;
  DAT_00896cc4 = 1;
  _DAT_00896cc8 = 2;
  _DAT_00896ccc = 0xffffffff;
  _DAT_00896cd0 = s_Jeremy_Longley_0063faf4;
  DAT_00896cd4 = 2;
  _DAT_00896cd8 = 2;
  _DAT_00896cdc = 2;
  _DAT_00896ce0 = 0;
  _DAT_00896ce4 = 1;
  _DAT_00896ce8 = 2;
  _DAT_00896cec = 0xffffffff;
  _DAT_00896cf0 = s_Darran_Thomas_0063fae4;
  _DAT_00896cf4 = 2;
  _DAT_00896cf8 = 2;
  _DAT_00896cfc = 3;
  _DAT_00896d00 = 0;
  _DAT_00896d04 = 1;
  _DAT_00896d08 = 2;
  _DAT_00896d0c = 0xffffffff;
  _DAT_00896d10 = s_Glenn_Corpes_0063fad4;
  _DAT_00896d14 = 2;
  _DAT_00896d18 = 1;
  _DAT_00896d1c = 0xffffffff;
  _DAT_00896d20 = s_PC_Version_Programming_0063fabc;
  _DAT_00896d24 = 1;
  _DAT_00896d28 = 1;
  _DAT_00896d2c = 0xffffffff;
  _DAT_00896d30 = s_Jan_Svarovsky_0063fb14;
  _DAT_00896d34 = 2;
  _DAT_00896d38 = 1;
  _DAT_00896d3c = 0xffffffff;
  _DAT_00896d40 = s_PC_Version_Test_0063faac;
  _DAT_00896d44 = 1;
  _DAT_00896d48 = 1;
  _DAT_00896d4c = 0xffffffff;
  _DAT_00896d50 = s_Jim_Thompson_0063fb04;
  _DAT_00896d54 = 2;
  _DAT_00896d58 = 2;
  _DAT_00896d5c = 4;
  _DAT_00896d60 = 0;
  _DAT_00896d64 = 1;
  _DAT_00896d68 = 2;
  _DAT_00896d6c = 0xffffffff;
  _DAT_00896d70 = s_Alex_Trowers_0063fa9c;
  _DAT_00896d74 = 2;
  _DAT_00896d78 = 2;
  _DAT_00896d7c = 5;
  _DAT_00896d80 = 0;
  _DAT_00896d84 = 1;
  _DAT_00896d88 = 2;
  _DAT_00896d8c = 0xffffffff;
  _DAT_00896d90 = s_Jim_Thompson_0063fb04;
  _DAT_00896d94 = 2;
  _DAT_00896d98 = 2;
  _DAT_00896d9c = 6;
  _DAT_00896da0 = 0;
  _DAT_00896da4 = 1;
  _DAT_00896da8 = 2;
  _DAT_00896dac = 0xffffffff;
  _DAT_00896db0 = s_Stuart_Gillam_0063fa8c;
  _DAT_00896db4 = 2;
  _DAT_00896db8 = 2;
  _DAT_00896dbc = 7;
  _DAT_00896dc0 = 0;
  _DAT_00896dc4 = 1;
  _DAT_00896dc8 = 2;
  _DAT_00896dcc = 0xffffffff;
  _DAT_00896dd0 = s_Glenn_Corpes_0063fad4;
  _DAT_00896dd4 = 2;
  _DAT_00896dd8 = 2;
  _DAT_00896ddc = 0xffffffff;
  _DAT_00896de0 = s_John_Treece_Birch_0063fa78;
  _DAT_00896de4 = 2;
  _DAT_00896de8 = 2;
  _DAT_00896dec = 0xffffffff;
  _DAT_00896df0 = s_Ben_Carter_0063fa6c;
  _DAT_00896df4 = 2;
  _DAT_00896df8 = 2;
  _DAT_00896dfc = 0xffffffff;
  _DAT_00896e00 = s_Richard_Smith_0063fa5c;
  _DAT_00896e04 = 2;
  _DAT_00896e08 = 2;
  _DAT_00896e0c = 0xffffffff;
  _DAT_00896e10 = s_Jeremy_Longley_0063faf4;
  _DAT_00896e14 = 2;
  _DAT_00896e18 = 2;
  _DAT_00896e1c = 8;
  _DAT_00896e20 = 0;
  _DAT_00896e24 = 1;
  _DAT_00896e28 = 2;
  _DAT_00896e2c = 0xffffffff;
  _DAT_00896e30 = s_Mark_Feldman_0063fa4c;
  _DAT_00896e34 = 2;
  _DAT_00896e38 = 2;
  _DAT_00896e3c = 0xffffffff;
  _DAT_00896e40 = s_Jan_Svarovsky_0063fb14;
  _DAT_00896e44 = 2;
  _DAT_00896e48 = 2;
  _DAT_00896e4c = 0xffffffff;
  _DAT_00896e50 = s_Matt_Taylor_0063fa40;
  _DAT_00896e54 = 2;
  _DAT_00896e58 = 2;
  _DAT_00896e5c = 9;
  _DAT_00896e60 = 0;
  _DAT_00896e64 = 1;
  _DAT_00896e68 = 2;
  _DAT_00896e6c = 0xffffffff;
  _DAT_00896e70 = s_Jeremy_Elford_0063fa30;
  _DAT_00896e74 = 2;
  _DAT_00896e78 = 2;
  _DAT_00896e7c = 10;
  _DAT_00896e80 = 0;
  _DAT_00896e84 = 1;
  _DAT_00896e88 = 2;
  _DAT_00896e8c = 0xffffffff;
  _DAT_00896e90 = s_Darran_Thomas_0063fae4;
  _DAT_00896e94 = 2;
  _DAT_00896e98 = 2;
  _DAT_00896e9c = 0xffffffff;
  _DAT_00896ea0 = s_Neil_Gartell_0063fa20;
  _DAT_00896ea4 = 2;
  _DAT_00896ea8 = 2;
  _DAT_00896eac = 0xffffffff;
  _DAT_00896eb0 = s_Dylan_Murray_0063fa10;
  _DAT_00896eb4 = 2;
  _DAT_00896eb8 = 2;
  _DAT_00896ebc = 0xffffffff;
  _DAT_00896ec0 = s_Chris_Young_0063fa04;
  _DAT_00896ec4 = 2;
  _DAT_00896ec8 = 2;
  _DAT_00896ecc = 0xffffffff;
  _DAT_00896ed0 = s_David_Cathro_0063f9f4;
  _DAT_00896ed4 = 2;
  _DAT_00896ed8 = 2;
  _DAT_00896edc = 0xffffffff;
  _DAT_00896ee0 = s_Nick_McMahon_0063f9e4;
  _DAT_00896ee4 = 2;
  _DAT_00896ee8 = 2;
  _DAT_00896eec = 0xffffffff;
  _DAT_00896ef0 = s_Mike_McCarthy_0063f9d4;
  _DAT_00896ef4 = 2;
  _DAT_00896ef8 = 2;
  _DAT_00896efc = 0xffffffff;
  _DAT_00896f00 = s_Alex_Cave_0063f9c8;
  _DAT_00896f04 = 2;
  _DAT_00896f08 = 2;
  _DAT_00896f0c = 0xffffffff;
  _DAT_00896f10 = s_Kate_Kerrigan_0063f9b8;
  _DAT_00896f14 = 2;
  _DAT_00896f18 = 2;
  _DAT_00896f1c = 0xffffffff;
  _DAT_00896f20 = s_Michael_Dove_0063f9a8;
  _DAT_00896f24 = 2;
  _DAT_00896f28 = 2;
  _DAT_00896f2c = 0xb;
  _DAT_00896f30 = 0;
  _DAT_00896f34 = 1;
  _DAT_00896f38 = 2;
  _DAT_00896f3c = 0xffffffff;
  _DAT_00896f40 = s_Mark_Pitcher_0063f998;
  _DAT_00896f44 = 2;
  _DAT_00896f48 = 2;
  _DAT_00896f4c = 0xffffffff;
  _DAT_00896f50 = s_Edmund_Perryman_0063f988;
  _DAT_00896f54 = 2;
  _DAT_00896f58 = 2;
  _DAT_00896f5c = 0xffffffff;
  _DAT_00896f60 = s_Ron_Ong_0063f980;
  _DAT_00896f64 = 2;
  _DAT_00896f68 = 2;
  _DAT_00896f6c = 0xffffffff;
  _DAT_00896f70 = s_Joel_Kemp_0063f974;
  _DAT_00896f74 = 2;
  _DAT_00896f78 = 2;
  _DAT_00896f7c = 0xffffffff;
  _DAT_00896f80 = s_Chris_Hill_0063f968;
  _DAT_00896f84 = 2;
  _DAT_00896f88 = 2;
  _DAT_00896f8c = 0xffffffff;
  _DAT_00896f90 = s_Christian_Bradley_0063f954;
  _DAT_00896f94 = 2;
  _DAT_00896f98 = 2;
  _DAT_00896f9c = 0xc;
  _DAT_00896fa0 = 0;
  _DAT_00896fa4 = 1;
  _DAT_00896fa8 = 2;
  _DAT_00896fac = 0xffffffff;
  _DAT_00896fb0 = s_Tze_Lim_of_Subliminal_Influence_0063f934;
  _DAT_00896fb4 = 2;
  _DAT_00896fb8 = 2;
  _DAT_00896fbc = 0xd;
  _DAT_00896fc0 = 0;
  _DAT_00896fc4 = 1;
  _DAT_00896fc8 = 2;
  _DAT_00896fcc = 0xffffffff;
  _DAT_00896fd0 = s_Neil_Maguire_0063f924;
  _DAT_00896fd4 = 2;
  _DAT_00896fd8 = 2;
  _DAT_00896fdc = 0xe;
  _DAT_00896fe0 = 0;
  _DAT_00896fe4 = 1;
  _DAT_00896fe8 = 2;
  _DAT_00896fec = 0xffffffff;
  _DAT_00896ff0 = s_Nathan_McCree_Music_Production_L_0063f8fc;
  _DAT_00896ff4 = 2;
  _DAT_00896ff8 = 2;
  _DAT_00896ffc = 0xf;
  _DAT_00897000 = 0;
  _DAT_00897004 = 1;
  _DAT_00897008 = 2;
  _DAT_0089700c = 0xffffffff;
  _DAT_00897010 = s_Nathan_McCree_0063f8ec;
  _DAT_00897014 = 2;
  _DAT_00897018 = 2;
  _DAT_0089701c = 0x10;
  _DAT_00897020 = 0;
  _DAT_00897024 = 1;
  _DAT_00897028 = 2;
  _DAT_0089702c = 0xffffffff;
  _DAT_00897030 = s_Nathan_McCree___Gabriel_Wetz_0063f8cc;
  _DAT_00897034 = 2;
  _DAT_00897038 = 2;
  _DAT_0089703c = 0x46;
  _DAT_00897040 = 0;
  _DAT_00897044 = 1;
  _DAT_00897048 = 2;
  _DAT_0089704c = 0xffffffff;
  _DAT_00897050 = s_Matt_Kemp_0063f8c0;
  _DAT_00897054 = 2;
  _DAT_00897058 = 2;
  _DAT_0089705c = 0x11;
  _DAT_00897060 = 0;
  _DAT_00897064 = 1;
  _DAT_00897068 = 2;
  _DAT_0089706c = 0xffffffff;
  _DAT_00897070 = s_Gabriel_Wetz_0063f8b0;
  _DAT_00897074 = 2;
  _DAT_00897078 = 2;
  _DAT_0089707c = 0x12;
  _DAT_00897080 = 0;
  _DAT_00897084 = 1;
  _DAT_00897088 = 2;
  _DAT_0089708c = 0xffffffff;
  _DAT_00897090 = s_Brad_Lavelle_0063f8a0;
  _DAT_00897094 = 2;
  _DAT_00897098 = 2;
  _DAT_0089709c = 0xffffffff;
  _DAT_008970a0 = s_Rob_Brown_0063f894;
  _DAT_008970a4 = 2;
  _DAT_008970a8 = 2;
  _DAT_008970ac = 0xffffffff;
  _DAT_008970b0 = s_Amanda_Mealing_0063f884;
  _DAT_008970b4 = 2;
  _DAT_008970b8 = 2;
  _DAT_008970bc = 0xffffffff;
  _DAT_008970c0 = s_Sean_Chapman_0063f874;
  _DAT_008970c4 = 2;
  _DAT_008970c8 = 2;
  _DAT_008970cc = 0x13;
  _DAT_008970d0 = 0;
  _DAT_008970d4 = 1;
  _DAT_008970d8 = 2;
  _DAT_008970dc = 0xffffffff;
  _DAT_008970e0 = s_Les_Edgar__John_Cook__Alison_Bea_0063f84c;
  _DAT_008970e4 = 2;
  _DAT_008970e8 = 2;
  _DAT_008970ec = 0xffffffff;
  _DAT_008970f0 = s_and_Mucky_Foot_for_cardid___0063f830;
  _DAT_008970f4 = 2;
  _DAT_008970f8 = 2;
  _DAT_008970fc = 0x14;
  _DAT_00897100 = 0;
  _DAT_00897104 = 1;
  _DAT_00897108 = 2;
  _DAT_0089710c = 0xffffffff;
  _DAT_00897110 = s_Mike_Man__Andy_Trowers__Ben_Boar_0063f80c;
  _DAT_00897114 = 2;
  _DAT_00897118 = 2;
  _DAT_0089711c = 0xffffffff;
  _DAT_00897120 = s_Si_Handby__Martin_Griffiths__Mor_0063f7dc;
  _DAT_00897124 = 2;
  _DAT_00897128 = 2;
  _DAT_0089712c = 0xffffffff;
  _DAT_00897130 = s_Jenny_Graham__Philip_Elford__Oli_0063f7b0;
  _DAT_00897134 = 2;
  _DAT_00897138 = 2;
  _DAT_0089713c = 0xffffffff;
  _DAT_00897140 = s_Mike_Pawley_and_everyone_on_GGDe_0063f78c;
  _DAT_00897144 = 2;
  _DAT_00897148 = 2;
  _DAT_0089714c = 0xffffffff;
  _DAT_00897150 = s_Uses_Bink_Video__0063f778;
  _DAT_00897154 = 1;
  _DAT_00897158 = 2;
  _DAT_0089715c = 0xffffffff;
  _DAT_00897160 = s_Copyright__C__1997_2003_by_RAD_G_0063f748;
  _DAT_00897164 = 1;
  _DAT_00897168 = 1;
  _DAT_0089716c = 0xffffffff;
  _DAT_00897170 = s_RelQ___International_Testing_SA_0063f728;
  _DAT_00897174 = 0;
  _DAT_00897178 = 1;
  _DAT_0089717c = 0;
  _DAT_00897180 = s_Project_Manager_0063ef70;
  _DAT_00897184 = 1;
  _DAT_00897188 = 1;
  _DAT_0089718c = 0xffffffff;
  _DAT_00897190 = s_Malek_Agha_0063f71c;
  _DAT_00897194 = 2;
  _DAT_00897198 = 1;
  _DAT_0089719c = 0;
  _DAT_008971a0 = s_Production_Manager_0063f708;
  _DAT_008971a4 = 1;
  _DAT_008971a8 = 1;
  _DAT_008971ac = 0xffffffff;
  _DAT_008971b0 = s_Minh_Tadang_0063f6fc;
  _DAT_008971b4 = 2;
  _DAT_008971b8 = 1;
  _DAT_008971bc = 0;
  _DAT_008971c0 = s_Operations_Manager_0063f6e8;
  _DAT_008971c4 = 1;
  _DAT_008971c8 = 1;
  _DAT_008971cc = 0xffffffff;
  _DAT_008971d0 = s_Guillaume_Fournier_0063f6d4;
  _DAT_008971d4 = 2;
  _DAT_008971d8 = 1;
  _DAT_008971dc = 0;
  _DAT_008971e0 = s_Testers_0063ec8c;
  _DAT_008971e4 = 1;
  _DAT_008971e8 = 1;
  _DAT_008971ec = 0xffffffff;
  _DAT_008971f0 = s_Julien__Nemo__Chabrot_0063f6bc;
  _DAT_008971f4 = 2;
  _DAT_008971f8 = 1;
  _DAT_008971fc = 0xffffffff;
  _DAT_00897200 = s_Nicolas__The_Dwarf__Poissenot_0063f69c;
  _DAT_00897204 = 2;
  _DAT_00897208 = 1;
  _DAT_0089720c = 0xffffffff;
  _DAT_00897210 = s_Fuat__Fut__Kaygisiz_0063f688;
  _DAT_00897214 = 2;
  _DAT_00897218 = 1;
  _DAT_0089721c = 0xffffffff;
  _DAT_00897220 = s_Yves__DarkZagor__Zagatti_0063f66c;
  _DAT_00897224 = 2;
  _DAT_00897228 = 1;
  _DAT_0089722c = 0;
  _DAT_00897230 = s_System_Administrator_0063f654;
  _DAT_00897234 = 1;
  _DAT_00897238 = 1;
  _DAT_0089723c = 0xffffffff;
  _DAT_00897240 = s_Stephane__Steffdemon__Benard_0063f634;
  _DAT_00897244 = 2;
  _DAT_00897248 = 1;
  _DAT_0089724c = 0;
  _DAT_00897250 = s_Special_thanks_0063f624;
  _DAT_00897254 = 1;
  _DAT_00897258 = 1;
  _DAT_0089725c = 0xffffffff;
  _DAT_00897260 = s_Fabrice__Grand_Fromage__Drevon__D_0063f5f0;
  _DAT_00897264 = 2;
  _DAT_00897268 = 2;
  _DAT_0089726c = 0x15;
  _DAT_00897270 = 0;
  _DAT_00897274 = 0;
  _DAT_00897278 = 2;
  _DAT_0089727c = 0x16;
  _DAT_00897280 = 0;
  _DAT_00897284 = 1;
  _DAT_00897288 = 2;
  _DAT_0089728c = 0xffffffff;
  _DAT_00897290 = s_Judi_Spiers_0063f5e4;
  _DAT_00897294 = 2;
  _DAT_00897298 = 2;
  _DAT_0089729c = 0x17;
  _DAT_008972a0 = 0;
  _DAT_008972a4 = 1;
  _DAT_008972a8 = 2;
  _DAT_008972ac = 0xffffffff;
  _DAT_008972b0 = s_Ivan_Davies_0063f5d8;
  _DAT_008972b4 = 2;
  _DAT_008972b8 = 2;
  _DAT_008972bc = 0x18;
  _DAT_008972c0 = 0;
  _DAT_008972c4 = 0;
  _DAT_008972c8 = 2;
  _DAT_008972cc = 0x19;
  _DAT_008972d0 = 0;
  _DAT_008972d4 = 1;
  _DAT_008972d8 = 2;
  _DAT_008972dc = 0xffffffff;
  _DAT_008972e0 = s_Larry_Sparks_0063f5c8;
  _DAT_008972e4 = 2;
  _DAT_008972e8 = 2;
  _DAT_008972ec = 0x1a;
  _DAT_008972f0 = 0;
  _DAT_008972f4 = 1;
  _DAT_008972f8 = 2;
  _DAT_008972fc = 0xffffffff;
  _DAT_00897300 = s_Frank_Heissat_0063f5b8;
  _DAT_00897304 = 2;
  _DAT_00897308 = 2;
  _DAT_0089730c = 0x1b;
  _DAT_00897310 = 0;
  _DAT_00897314 = 1;
  _DAT_00897318 = 2;
  _DAT_0089731c = 0xffffffff;
  _DAT_00897320 = s_Cindy_Church_0063f5a8;
  _DAT_00897324 = 2;
  _DAT_00897328 = 2;
  _DAT_0089732c = 0x1c;
  _DAT_00897330 = 0;
  _DAT_00897334 = 1;
  _DAT_00897338 = 2;
  _DAT_0089733c = 0xffffffff;
  _DAT_00897340 = s_Oliver_Green_0063f598;
  _DAT_00897344 = 2;
  _DAT_00897348 = 2;
  _DAT_0089734c = 0x1d;
  _DAT_00897350 = 0;
  _DAT_00897354 = 1;
  _DAT_00897358 = 2;
  _DAT_0089735c = 0xffffffff;
  _DAT_00897360 = s_Lynn_Daniel_0063f58c;
  _DAT_00897364 = 2;
  _DAT_00897368 = 2;
  _DAT_0089736c = 0x1e;
  _DAT_00897370 = 0;
  _DAT_00897374 = 1;
  _DAT_00897378 = 2;
  _DAT_0089737c = 0x1f;
  _DAT_00897380 = 0;
  _DAT_00897384 = 1;
  _DAT_00897388 = 2;
  _DAT_0089738c = 0xffffffff;
  _DAT_00897390 = s_Dominique_Morel_0063f57c;
  _DAT_00897394 = 2;
  _DAT_00897398 = 2;
  _DAT_0089739c = 0x20;
  _DAT_008973a0 = 0;
  _DAT_008973a4 = 1;
  _DAT_008973a8 = 2;
  _DAT_008973ac = 0xffffffff;
  _DAT_008973b0 = s_Emmanuel_Cholley_0063f568;
  _DAT_008973b4 = 2;
  _DAT_008973b8 = 2;
  _DAT_008973bc = 0x21;
  _DAT_008973c0 = 0;
  _DAT_008973c4 = 1;
  _DAT_008973c8 = 2;
  _DAT_008973cc = 0xffffffff;
  _DAT_008973d0 = s_William_Jaulain_0063f558;
  _DAT_008973d4 = 2;
  _DAT_008973d8 = 2;
  _DAT_008973dc = 0xffffffff;
  _DAT_008973e0 = s_Yan_Schied_0063f54c;
  _DAT_008973e4 = 2;
  _DAT_008973e8 = 2;
  _DAT_008973ec = 0x22;
  _DAT_008973f0 = 0;
  _DAT_008973f4 = 1;
  _DAT_008973f8 = 2;
  _DAT_008973fc = 0xffffffff;
  _DAT_00897400 = s_Fabien_Lauton_0063f53c;
  _DAT_00897404 = 2;
  _DAT_00897408 = 2;
  _DAT_0089740c = 0xffffffff;
  _DAT_00897410 = &DAT_0063f52c;
  _DAT_00897414 = 2;
  _DAT_00897418 = 2;
  _DAT_0089741c = 0xffffffff;
  _DAT_00897420 = s_Christophe_Chabal_0063f50c;
  _DAT_00897424 = 2;
  _DAT_00897428 = 2;
  _DAT_0089742c = 0xffffffff;
  _DAT_00897430 = &DAT_0063f4fc;
  _DAT_00897434 = 2;
  _DAT_00897438 = 2;
  _DAT_0089743c = 0xffffffff;
  _DAT_00897440 = s_Gregory_Eche_0063f4ec;
  _DAT_00897444 = 2;
  _DAT_00897448 = 2;
  _DAT_0089744c = 0x23;
  _DAT_00897450 = 0;
  _DAT_00897454 = 0;
  _DAT_00897458 = 2;
  _DAT_0089745c = 0x24;
  _DAT_00897460 = 0;
  _DAT_00897464 = 1;
  _DAT_00897468 = 2;
  _DAT_0089746c = 0xffffffff;
  _DAT_00897470 = s_Jean_Marcel_Nicolai_0063f4d8;
  _DAT_00897474 = 2;
  _DAT_00897478 = 2;
  _DAT_0089747c = 0x25;
  _DAT_00897480 = 0;
  _DAT_00897484 = 1;
  _DAT_00897488 = 2;
  _DAT_0089748c = 0xffffffff;
  _DAT_00897490 = s_Lewis_Glover_0063f4c8;
  _DAT_00897494 = 2;
  _DAT_00897498 = 2;
  _DAT_0089749c = 0x26;
  _DAT_008974a0 = 0;
  _DAT_008974a4 = 1;
  _DAT_008974a8 = 2;
  _DAT_008974ac = 0xffffffff;
  _DAT_008974b0 = s_Olivier_Robin_0063f4b8;
  _DAT_008974b4 = 2;
  _DAT_008974b8 = 2;
  _DAT_008974bc = 0x27;
  _DAT_008974c0 = 0;
  _DAT_008974c4 = 0;
  _DAT_008974c8 = 2;
  _DAT_008974cc = 0x28;
  _DAT_008974d0 = 0;
  _DAT_008974d4 = 1;
  _DAT_008974d8 = 2;
  _DAT_008974dc = 0xffffffff;
  _DAT_008974e0 = s_Rob_Lunt_0063f4ac;
  _DAT_008974e4 = 2;
  _DAT_008974e8 = 2;
  _DAT_008974ec = 0x29;
  _DAT_008974f0 = 0;
  _DAT_008974f4 = 1;
  _DAT_008974f8 = 2;
  _DAT_008974fc = 0xffffffff;
  _DAT_00897500 = s_Chris_Greatbatch_0063f498;
  _DAT_00897504 = 2;
  _DAT_00897508 = 2;
  _DAT_0089750c = 0x2a;
  _DAT_00897510 = 0;
  _DAT_00897514 = 1;
  _DAT_00897518 = 2;
  _DAT_0089751c = 0xffffffff;
  _DAT_00897520 = s_Sam_Attenborough_0063f484;
  _DAT_00897524 = 2;
  _DAT_00897528 = 2;
  _DAT_0089752c = 0x2b;
  _DAT_00897530 = 0;
  _DAT_00897534 = 1;
  FUN_0051a010(bea_arg(&DAT_00897538), bea_arg(2), bea_arg(s_Jody_Hindle_0063f520), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897548), bea_arg(2), bea_arg(0x2c), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897558), bea_arg(2), bea_arg(s_Jay_Hartley_0063f478), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897568), bea_arg(2), bea_arg(s_Stef_Reali_0063f46c), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897578), bea_arg(2), bea_arg(s_Ian_Whitaker_0063f45c), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897588), bea_arg(2), bea_arg(s_Wayne_Adkin_0063f450), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897598), bea_arg(2), bea_arg(s_Elton_Broadhead_0063f440), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_008975a8), bea_arg(2), bea_arg(0x45), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_008975b8), bea_arg(2), bea_arg(s_Sam_Hindle_0063f434), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_008975c8), bea_arg(2), bea_arg(0x2d), bea_arg(0));
  FUN_00519ff0(bea_arg(&DAT_008975d8), bea_arg(2), bea_arg(0x2e), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_008975e8), bea_arg(2), bea_arg(s_Sylviane_Pivot_Chossat_0063f41c), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_008975f8), bea_arg(2), bea_arg(s_Sarah_Bennett_0063f40c), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897608), bea_arg(2), bea_arg(0x2f), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897618), bea_arg(2), bea_arg(s_Sylviane_Pivot_Chossat_0063f41c), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897628), bea_arg(2), bea_arg(0x30), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897638), bea_arg(2), bea_arg(s_Maud_Favier_0063f400), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897648), bea_arg(2), bea_arg(s_Sarah_Bennett_0063f40c), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897658), bea_arg(2), bea_arg(s_Diane_Delaye_0063f3f0), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897668), bea_arg(2), bea_arg(s_Weronika_Larsson_0063f3dc), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897678), bea_arg(2), bea_arg(0x31), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897688), bea_arg(2), bea_arg(s_Fabien_Roset_0063f3cc), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897698), bea_arg(2), bea_arg(0x32), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_008976a8), bea_arg(2), bea_arg(&DAT_0063f3c8), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_008976b8), bea_arg(2), bea_arg(s_Synthesis_Interference_0063f3b0), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_008976c8), bea_arg(2), bea_arg(0x33), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_008976d8), bea_arg(2), bea_arg(s_Babel_Media_Ltd__0063f39c), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_008976e8), bea_arg(2), bea_arg(0x34), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_008976f8), bea_arg(2), bea_arg(s_Emilie_Ballivy_0063f38c), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897708), bea_arg(2), bea_arg(&DAT_0063f378), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897718), bea_arg(2), bea_arg(s_Caroline_Fauchille_0063f364), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897728), bea_arg(2), bea_arg(s_Rebecka_Pernered_0063f350), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897738), bea_arg(2), bea_arg(0x35), bea_arg(0));
  FUN_00519ff0(bea_arg(&DAT_00897748), bea_arg(2), bea_arg(0x36), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897758), bea_arg(2), bea_arg(s_Dave_T_Brown_0063f340), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897768), bea_arg(2), bea_arg(0x37), bea_arg(1));
  FUN_00519ff0(bea_arg(&DAT_00897778), bea_arg(2), bea_arg(0x38), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897788), bea_arg(2), bea_arg(s_Tom_Richardson_0063f330), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897798), bea_arg(2), bea_arg(0x39), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_008977a8), bea_arg(2), bea_arg(s_Jean_Raymond_0063f320), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_008977b8), bea_arg(2), bea_arg(0x3a), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_008977c8), bea_arg(2), bea_arg(s_Steve_Allison_0063f310), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_008977d8), bea_arg(2), bea_arg(0x3b), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_008977e8), bea_arg(2), bea_arg(s_Jean_Philippe_Agati_0063f2fc), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_008977f8), bea_arg(2), bea_arg(0x3c), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897808), bea_arg(2), bea_arg(s_Steve_Ackrich_0063f2ec), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897818), bea_arg(2), bea_arg(0x3d), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897828), bea_arg(2), bea_arg(s_David_Gaines_0063f2dc), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897838), bea_arg(2), bea_arg(0x3e), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897848), bea_arg(2), bea_arg(s_Larry_Fukuoka_0063f2cc), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897858), bea_arg(2), bea_arg(0x3f), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897868), bea_arg(2), bea_arg(s_Kristine_Keever_0063f2bc), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897878), bea_arg(2), bea_arg(0x40), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897888), bea_arg(2), bea_arg(s_Cecelia_Hernandez_0063f2a8), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897898), bea_arg(2), bea_arg(0x41), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_008978a8), bea_arg(2), bea_arg(s_Joy_Schneer_0063f29c), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_008978b8), bea_arg(2), bea_arg(0x42), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_008978c8), bea_arg(2), bea_arg(s_Matt_Frary_0063f290), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_008978d8), bea_arg(2), bea_arg(0x43), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_008978e8), bea_arg(2), bea_arg(s_Wiebke_Vallentin_0063f27c), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_008978f8), bea_arg(1), bea_arg(s_Xbox_Test_0063f270), bea_arg(0));
  FUN_00519ff0(bea_arg(&DAT_00897908), bea_arg(2), bea_arg(0x2a), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897918), bea_arg(2), bea_arg(s_Helen_Hinchcliffe_0063f25c), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897928), bea_arg(2), bea_arg(0x2b), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897938), bea_arg(2), bea_arg(s_Andrew_Lemat_0063f24c), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897948), bea_arg(2), bea_arg(0x2c), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897958), bea_arg(2), bea_arg(s_Arif_Sinan__Arthur_Long__William_0063f224), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897968), bea_arg(2), bea_arg(s_Chris_Sur__Michael_Shamid_deen__K_0063f1f8), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897978), bea_arg(1), bea_arg(s_PS2_Test_0063f1ec), bea_arg(0));
  FUN_00519ff0(bea_arg(&DAT_00897988), bea_arg(3), bea_arg(0x2a), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897998), bea_arg(3), bea_arg(s_Pepe_Jauregui_0063f1dc), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_008979a8), bea_arg(3), bea_arg(0x2b), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_008979b8), bea_arg(3), bea_arg(s_Wilfredo_Dimas_0063f1cc), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_008979c8), bea_arg(3), bea_arg(100), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_008979d8), bea_arg(3), bea_arg(s_Chuck_Nunez__Jeff_Loney__Donny_C_0063f1a8), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_008979e8), bea_arg(3), bea_arg(0x2c), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_008979f8), bea_arg(3), bea_arg(s_Corey_Eiland__Kory_O__Daniels__K_0063f17c), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897a08), bea_arg(3), bea_arg(s_Mark_Florentino__Renee_Barber__T_0063f150), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897a18), bea_arg(3), bea_arg(s_Michael_Shamsid_Deen__Jeff_Kelm__0063f120), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897a28), bea_arg(3), bea_arg(s_Jorge_Oseguera_0063f110), bea_arg(2));
  FUN_00519ff0(bea_arg(&DAT_00897a38), bea_arg(2), bea_arg(0x44), bea_arg(1));
  FUN_0051a010(bea_arg(&DAT_00897a48), bea_arg(2), bea_arg(s_Patty__L_Rivas__K_Edwards__S__Be_0063f0e0), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897a58), bea_arg(2), bea_arg(s_M_Gilmartin__Sunnyvale_QA__D_Cla_0063f0b4), bea_arg(2));
  FUN_0051a010(bea_arg(&DAT_00897a68), bea_arg(2), bea_arg(s_G_Marquez__T_Hess__Kirby__J_Koro_0063f07c), bea_arg(2));
  return FUN_00519ff0(bea_arg(&DAT_00897a78), bea_arg(3), bea_arg(0), bea_arg(3));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00518bf0, ap_00518bf0));
