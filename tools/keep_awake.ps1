# Keep the machine running, display included, while long test loops are
# active.  Letting the display sleep (2026-10-20 morning) did not work on this
# laptop: display off means Modern Standby, and the D3D9 devices of the test
# games are lost (DEVICE LOST, frames stop), so 2-3 levels per soak went
# untested.  The user dims the screen by hand instead.
#
# This is a Modern Standby (S0 low-power idle) laptop: once the display turns
# off the system enters standby and, after the fixed timeout, hibernates.
# SetThreadExecutionState(ES_SYSTEM_REQUIRED) alone did not stop that
# (2026-10-18 00:48 standby, 01:48 hibernate, helper alive), so this helper
# also holds a PowerRequestExecutionRequired power request, which is the
# mechanism Modern Standby honours for "keep running with the screen off".
# Verify with an elevated `powercfg /requests` (EXECUTION: ... keep_awake).
# pid is written to %TEMP%\bea_keep_awake.pid; stop with taskkill /PID <pid>.
#
# -NoDisplay: hold only the system (no sleep, no hibernate) and let the screen
# turn off.  The user wants the machine never to sleep or hibernate while work
# goes on, and the screen held on only while test games actually play
# (2026-10-23); between game phases this mode runs instead.
param([switch]$NoDisplay)
$code = @"
using System;
using System.Runtime.InteropServices;
public static class Win32Power {
    [DllImport("kernel32.dll")] public static extern uint SetThreadExecutionState(uint esFlags);
    [StructLayout(LayoutKind.Sequential)] public struct REASON_CONTEXT {
        public uint Version; public uint Flags; public IntPtr SimpleReasonString;
    }
    [DllImport("kernel32.dll", SetLastError = true)] public static extern IntPtr PowerCreateRequest(ref REASON_CONTEXT ctx);
    [DllImport("kernel32.dll", SetLastError = true)] public static extern bool PowerSetRequest(IntPtr req, int type);
}
"@
Add-Type -TypeDefinition $code
$pidfile = Join-Path $env:TEMP "bea_keep_awake.pid"
Set-Content -Path $pidfile -Value $PID
$ctx = New-Object Win32Power+REASON_CONTEXT
$ctx.Version = 0            # POWER_REQUEST_CONTEXT_VERSION
$ctx.Flags = 1              # POWER_REQUEST_CONTEXT_SIMPLE_STRING
$ctx.SimpleReasonString = [Runtime.InteropServices.Marshal]::StringToHGlobalUni("BEA hook test loop (tools/keep_awake.ps1)")
$req = [Win32Power]::PowerCreateRequest([ref]$ctx)
if ($req -ne [IntPtr]::Zero) {
    # POWER_REQUEST_TYPE: 0 = DisplayRequired, 1 = SystemRequired
    if (-not $NoDisplay) { [void][Win32Power]::PowerSetRequest($req, 0) }   # PowerRequestDisplayRequired (no standby, games keep rendering)
    [void][Win32Power]::PowerSetRequest($req, 1)   # PowerRequestSystemRequired
    [void][Win32Power]::PowerSetRequest($req, 3)   # PowerRequestExecutionRequired (Modern Standby)
}
# ES_CONTINUOUS | ES_SYSTEM_REQUIRED, plus ES_DISPLAY_REQUIRED unless -NoDisplay
# (0x80000003 / 0x80000001; PS 5.1 parses a hex literal that large as a negative int32)
$state = if ($NoDisplay) { [uint32]2147483649 } else { [uint32]2147483651 }
while ($true) {
    [void][Win32Power]::SetThreadExecutionState($state)
    Start-Sleep -Seconds 60
}
