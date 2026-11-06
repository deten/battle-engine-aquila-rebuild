// auto-ported from 00441740_FUN_00441740.c (FUN_00441740, 349 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: cdecl varargs (obj, fmt, ...): 0x55e38c is vsprintf(buf, fmt, va) (FILE count 0x7fffffff, _output(f, [ebp+0xc], [ebp+0x10]); crt_sigs' "_snprintf" is wrong), called with the address of the third stack argument (lea eax,[esp+0x2c8] at 0x44174a) = va_start after fmt; 0x40c640 is an empty cdecl (bare ret); fopen 0x55e490, fprintf 0x55e520(fp, buf), fclose 0x55e4a3, 0x4d6240(dst, src, 0x50); name check reads str[strlen-5] (0x4417be); +0x9e8 gets the clock's bits by mov, the table slot by fld/fstp (0x441875-0x44188d); EAX returned as left (0x406014 passes it on): idx*0x50 after a write, else 0
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#include <stdarg.h>

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define PTR_s_c__setuphistory_txt_006283e8 GLOBAL_AT(char*, 0x006283e8)
typedef int (BEA_CDECL* FUN_0055e38c_t)(char *, const char *, void *);     // vsprintf
static const bea_guard<FUN_0055e38c_t> FUN_0055e38c = {(FUN_0055e38c_t)0x0055e38c};
typedef void (BEA_CDECL* FUN_0040c640_t)(const void *);                   // empty (ret)
static const bea_guard<FUN_0040c640_t> FUN_0040c640 = {(FUN_0040c640_t)0x0040c640};
typedef void * (BEA_CDECL* FUN_0055e490_t)(const char *, const char *);   // fopen
static const bea_guard<FUN_0055e490_t> FUN_0055e490 = {(FUN_0055e490_t)0x0055e490};
typedef int (BEA_CDECL* FUN_0055e520_t)(void *, const char *);            // fprintf(fp, buf) without further args
static const bea_guard<FUN_0055e520_t> FUN_0055e520 = {(FUN_0055e520_t)0x0055e520};
typedef int (BEA_CDECL* FUN_0055e4a3_t)(void *);                          // fclose
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};
typedef void (BEA_CDECL* FUN_004d6240_t)(void *, const void *, uint32_t);
static const bea_guard<FUN_004d6240_t> FUN_004d6240 = {(FUN_004d6240_t)0x004d6240};

static uint32_t BEA_CDECL ap_00441740(int param_1, const char *param_2, ...)
{
  char local_2bc[700];
  va_list va;
  va_start(va, param_2);
  FUN_0055e38c(local_2bc, param_2, (void *)va);
  va_end(va);
  FUN_0040c640(local_2bc);
  FUN_0040c640((const void *)0x00622d9c);
  if (*(int *)(param_1 + 0x9ec) != 0) {
    void *fp;
    if (*(char *)(param_1 + 8) == '\0') {
      fp = FUN_0055e490(*(const char **)(param_1 + 4), (const char *)0x0062842c);
      if (fp == 0) {
        const char *s = *(const char **)(param_1 + 4);
        if (s[strlen(s) - 5] == 'p') {
          *(char **)(param_1 + 4) = PTR_s_c__setuphistory_txt_006283e8;
          fp = FUN_0055e490(PTR_s_c__setuphistory_txt_006283e8, (const char *)0x0062842c);
        }
      }
      *(uint8_t *)(param_1 + 8) = 1;
    }
    else {
      fp = FUN_0055e490(*(const char **)(param_1 + 4), (const char *)0x00628428);
    }
    if (fp != 0) {
      FUN_0055e520(fp, local_2bc);
      FUN_0055e520(fp, (const char *)0x00622d9c);
      FUN_0055e4a3(fp);
      int n = *(int *)(param_1 + 0x9e4) + 1;
      *(int *)(param_1 + 0x9e4) = n;
      if (0x1d < n) {
        *(int *)(param_1 + 0x9e4) = 0;
      }
      FUN_004d6240((void *)(uintptr_t)(*(int *)(param_1 + 0x9e4) * 0x50 + 9 + param_1), local_2bc, 0x50);
      *(uint8_t *)(*(int *)(param_1 + 0x9e4) * 0x50 + 0x58 + param_1) = 0;
      *(uint32_t *)(param_1 + 0x9e8) = GLOBAL_AT(uint32_t, 0x00672fd0);
      *(float *)(param_1 + 0x96c + *(int *)(param_1 + 0x9e4) * 4) = DAT_00672fd0;
      return (uint32_t)(*(int *)(param_1 + 0x9e4) * 0x50);         // eax = idx*0x50 (0x44186a)
    }
  }
  return 0;                                                       // eax = 0 on every other path
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00441740, ap_00441740));
