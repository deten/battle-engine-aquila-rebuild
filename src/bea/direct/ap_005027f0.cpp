// auto-ported from 005027f0_FUN_005027f0.c (FUN_005027f0, 302 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x210: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define s___Shaders__s_vso_0063d090 ((char*)0x0063d090)
#define s_Failed_to_allocate_memory_for_sh_0063d048 ((char*)0x0063d048)
#define s_Could_not_create_shader_from_cod_0063cf3c ((char*)0x0063cf3c)
#define s_Could_not_find_shader_file__s_0063d070 ((char*)0x0063d070)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef char* (BEA_CDECL* FUN_004f7c70_t)(uint32_t);
static const bea_guard<FUN_004f7c70_t> FUN_004f7c70 = {(FUN_004f7c70_t)0x004f7c70};
typedef uint32_t (BEA_THISCALL* FUN_00513ff0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513ff0_t> FUN_00513ff0 = {(FUN_00513ff0_t)0x00513ff0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static int BEA_STDCALL ap_005027f0(char *param_1, undefined4 param_2, undefined4 param_3)
{
  LPCSTR lpFileName;
  HANDLE hHeap;
  LPVOID lpBuffer;
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE pvVar4;

  alignas(16) uint8_t bea_frame_[0x210] = {};   // the original stack frame (emulate_frame)
  DWORD &local_204 = *reinterpret_cast<DWORD *>(bea_frame_ + 0x210 - 0x204);
  undefined1 (&local_200)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x210 - 0x200);
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x210 - 0x100);
  FUN_0055de9b(local_200,s___Shaders__s_vso_0063d090,param_1);
  pvVar4 = (HANDLE)0x0;
  dwFlagsAndAttributes = 0;
  dwCreationDisposition = 3;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  DVar3 = 0;
  DVar2 = 0x80000000;
  lpFileName = (LPCSTR)FUN_004f7c70(bea_arg(local_200));
  pvVar4 = CreateFileA(lpFileName,DVar2,DVar3,lpSecurityAttributes,dwCreationDisposition,
                       dwFlagsAndAttributes,pvVar4);
  if (pvVar4 == (HANDLE)0xffffffff) {
    FUN_0055de9b(local_100,s_Could_not_find_shader_file__s_0063d070,param_1);
    return -0x7fffbffb;
  }
  DVar2 = GetFileSize(pvVar4,(LPDWORD)0x0);
  DVar3 = 8;
  local_204 = DVar2;
  hHeap = GetProcessHeap();
  lpBuffer = HeapAlloc(hHeap,DVar3,DVar2);
  if (lpBuffer == (LPVOID)0x0) {
    FUN_0055de9b(local_100,s_Failed_to_allocate_memory_for_sh_0063d048,param_1);
    return -0x7fffbffb;
  }
  ReadFile(pvVar4,lpBuffer,local_204,&local_204,(LPOVERLAPPED)0x0);
  CloseHandle(pvVar4);
  iVar1 = FUN_00513ff0(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(lpBuffer), bea_arg(param_3), bea_arg(param_2));
  if (iVar1 < 0) {
    CRenderThing__vslot3(s_Could_not_create_shader_from_cod_0063cf3c);
  }
  else {
    iVar1 = 0;
  }
  DVar2 = 0;
  pvVar4 = GetProcessHeap();
  HeapFree(pvVar4,DVar2,lpBuffer);
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005027f0, ap_005027f0));
