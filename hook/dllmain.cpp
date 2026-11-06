// zlib.dll proxy + hook loader for Battle Engine Aquila.
//
// BEA.exe imports zlib.dll ordinals 9 (compress) and 63 (uncompress) and nothing
// else, so this DLL is loaded by the Windows loader before WinMain runs.  It
// forwards those two calls to the original DLL (renamed zlib_real.dll by
// tools/install_hook.sh) and installs the function replacements registered
// under src/ (see src/bea/hooks.h).

#include <windows.h>
#include <stdio.h>
#include "bea/hooks.h"

extern "C" {

typedef int (*zlib_fn)(unsigned char*, unsigned long*, const unsigned char*, unsigned long);

static HMODULE g_real = nullptr;
static zlib_fn g_compress = nullptr;
static zlib_fn g_uncompress = nullptr;

static void load_real_zlib()
{
    if (g_real) return;
    g_real = LoadLibraryA("zlib_real.dll");
    if (!g_real) {
        bea_log("FATAL: zlib_real.dll not found (rename the original zlib.dll to zlib_real.dll)");
        MessageBoxA(nullptr, "zlib_real.dll not found next to BEA.exe.\n"
                             "Rename the original zlib.dll to zlib_real.dll.",
                    "BEA hook", MB_ICONERROR);
        ExitProcess(1);
    }
    g_compress = reinterpret_cast<zlib_fn>(reinterpret_cast<void*>(GetProcAddress(g_real, (LPCSTR)9)));
    g_uncompress = reinterpret_cast<zlib_fn>(reinterpret_cast<void*>(GetProcAddress(g_real, (LPCSTR)63)));
    bea_log("zlib_real.dll loaded: compress=%p uncompress=%p", (void*)g_compress, (void*)g_uncompress);
}

__declspec(dllexport) int compress(unsigned char* dest, unsigned long* destLen,
                                   const unsigned char* source, unsigned long sourceLen)
{
    load_real_zlib();
    return g_compress(dest, destLen, source, sourceLen);
}

__declspec(dllexport) int uncompress(unsigned char* dest, unsigned long* destLen,
                                     const unsigned char* source, unsigned long sourceLen)
{
    load_real_zlib();
    return g_uncompress(dest, destLen, source, sourceLen);
}

} // extern "C"

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(instance);
        bea_log_open();
        bea_log("=== BEA hook DLL attached (pid %lu) ===", GetCurrentProcessId());
        bea_install_crash_logger();
        bea_install_hooks();
        bea_install_exit_logger();
        bea_install_harness();
        bea_start_watchdog();
    } else if (reason == DLL_PROCESS_DETACH) {
        bea_shadow_report();
        bea_log("=== BEA hook DLL detached ===");
        bea_log_close();
    }
    return TRUE;
}
