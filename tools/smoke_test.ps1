# Launch BEA.exe, let it run for a while, report whether it is still alive,
# then kill it.  Prints the hook log tail.
#   powershell -ExecutionPolicy Bypass -File tools/smoke_test.ps1 [-Seconds 25] [-GameArgs "-forcewindowed -skipfmv"]
#        [-Instance n] [-TimeScale k] [-SaveLog path] [-Shot out.png]
# -Instance n   : run as instance n (BEA_INSTANCE=n): the DLL writes bea_hook<n>.log
#                 and reads bea_hook_disable<n>.txt, so several instances can run at once
# -TimeScale k  : game time runs k times faster than wall time (BEA_TIMESCALE)
# -FixedStep s  : the game clock advances s seconds per frame, whatever the frame rate (BEA_FIXEDSTEP)
# -EndClock c   : a run with no outcome ends at game clock c and logs "none" (BEA_ENDCLOCK)
# -SaveLog path : copy the hook log there afterwards (the next run overwrites it)
# bea_cancel<n>.txt in the game folder ends the run early with "CANCELLED"
# (written by bisect.py / coverage.sh once another instance has failed)
param(
    [int]$Seconds = 25,
    [string]$GameArgs = "-forcewindowed -skipfmv",
    [string]$Shot = "",
    [string]$GameDir = "",
    [string]$Instance = "",
    [string]$TimeScale = "",
    [string]$FixedStep = "",
    [string]$EndClock = "",
    [string]$SaveLog = ""
)
$ErrorActionPreference = "Continue"
$root = Split-Path -Parent (Split-Path -Parent $MyInvocation.MyCommand.Path)
if ($GameDir -eq "") { $GameDir = Join-Path $root "Battle Engine Aquila" }
$exe = Join-Path $GameDir "BEA.exe"
$log = Join-Path $GameDir ("bea_hook" + $Instance + ".log")
if (Test-Path $log) { Remove-Item $log -Force }
$cancel = Join-Path $GameDir ("bea_cancel" + $Instance + ".txt")
if (Test-Path $cancel) { Remove-Item $cancel -Force }

if ($Instance -eq "") { Get-Process BEA -ErrorAction SilentlyContinue | Stop-Process -Force }
# Test runs use the game's default settings.  The options a person saves while
# playing (defaultoptions.bea, written by the main menu) changed how a
# recorded playthrough plays out: level 300's replay fell into the sea at 88.3
# instead of being destroyed at 133.4 (2026-10-27).  Move it to the person's
# profile folder; tools/play.ps1 puts it back for the next session.  Only a
# file left by a play session (play.ps1 leaves defaultoptions.player beside it)
# is the person's: one a test wrote (the scripted Options menu, menu_test.py)
# is deleted, or it would replace the person's copy (it did, 2026-10-28).
$opts = Join-Path $GameDir "defaultoptions.bea"
$mark = Join-Path $GameDir "defaultoptions.player"
if (Test-Path $opts) {
    if (Test-Path $mark) {
        $prof = "$(Join-Path $PSScriptRoot "..\testdata")\user_profile"
        New-Item -ItemType Directory -Force -Path $prof | Out-Null
        try { Move-Item $opts (Join-Path $prof "defaultoptions.bea") -Force -ErrorAction Stop; Remove-Item $mark -Force } catch {}
    } else {
        Remove-Item $opts -Force -ErrorAction SilentlyContinue
    }
}
# BEA_OPTIONS_FILE: the options a recording was made with (record_level.ps1 left the
# game folder's file in place; a replay without it parted within seconds, 2026-11-01)
# Each instance reads its own copy through the game's -defaultoptionsname switch: a copy
# into the shared defaultoptions.bea was deleted by another instance starting at the same
# moment (524w fell in the sea at 27.7 on default options, 2026-11-02).  A run without
# BEA_OPTIONS_FILE names a file that does not exist: the defaults.  The name is written
# over the 19-byte "defaultoptions.bea" literal (0x63db18), so it stays short.
$optName = "bea_o{0}.bea" -f $Instance
$optPath = Join-Path $GameDir $optName
if (Test-Path $optPath) { Remove-Item $optPath -Force -ErrorAction SilentlyContinue }
if ($env:BEA_OPTIONS_FILE -and (Test-Path $env:BEA_OPTIONS_FILE)) { Copy-Item $env:BEA_OPTIONS_FILE $optPath -Force }
$GameArgs = "$GameArgs -defaultoptionsname $optName"
$psi = New-Object System.Diagnostics.ProcessStartInfo
$psi.FileName = $exe
$psi.Arguments = $GameArgs
$psi.WorkingDirectory = $GameDir
$psi.UseShellExecute = $false
if ($Instance -ne "") { $psi.EnvironmentVariables["BEA_INSTANCE"] = $Instance }
if ($TimeScale -ne "") { $psi.EnvironmentVariables["BEA_TIMESCALE"] = $TimeScale }
if ($FixedStep -ne "") { $psi.EnvironmentVariables["BEA_FIXEDSTEP"] = $FixedStep }
if ($EndClock -ne "") { $psi.EnvironmentVariables["BEA_ENDCLOCK"] = $EndClock }
$started = Get-Date
$p = [System.Diagnostics.Process]::Start($psi)
Write-Output ("started pid {0} instance '{1}' with args: {2}" -f $p.Id, $Instance, $GameArgs)
# keep the desktop responsive while tests run
try { $p.PriorityClass = [System.Diagnostics.ProcessPriorityClass]::BelowNormal } catch {}
$alive = $true
$cancelled = $false
for ($i = 0; $i -lt $Seconds; $i++) {
    Start-Sleep -Seconds 1
    if ($p.HasExited) { $alive = $false; break }
    if (Test-Path $cancel) { $cancelled = $true; break }
}
if ($cancelled) {
    Write-Output ("CANCELLED after {0}s (another instance failed)" -f $i)
    Stop-Process -Id $p.Id -Force
    if (-not $p.WaitForExit(15000)) { Write-Output ("KILL FAILED: pid {0} still alive 15s after terminate" -f $p.Id) }
    Remove-Item $cancel -Force -ErrorAction SilentlyContinue
} elseif ($alive) {
    Write-Output ("ALIVE after {0}s" -f $Seconds)
    if ($Shot -ne "") {
        Add-Type -AssemblyName System.Windows.Forms
        Add-Type -AssemblyName System.Drawing
        $b = [System.Windows.Forms.Screen]::PrimaryScreen.Bounds
        $bmp = New-Object System.Drawing.Bitmap $b.Width, $b.Height
        $g = [System.Drawing.Graphics]::FromImage($bmp)
        $g.CopyFromScreen($b.Location, [System.Drawing.Point]::Empty, $b.Size)
        $bmp.Save($Shot, [System.Drawing.Imaging.ImageFormat]::Png)
        $g.Dispose(); $bmp.Dispose()
        Write-Output ("screenshot: {0}" -f $Shot)
    }
    # display mode and window placement (exclusive fullscreen changes the mode)
    Add-Type -Namespace BeaSmoke -Name W -MemberDefinition @"
[StructLayout(LayoutKind.Sequential)] public struct RECT { public int L, T, R, B; }
[DllImport("user32.dll")] public static extern bool GetWindowRect(IntPtr h, out RECT r);
[DllImport("user32.dll")] public static extern int GetSystemMetrics(int i);
[DllImport("user32.dll")] public static extern IntPtr GetForegroundWindow();
"@ -ErrorAction SilentlyContinue
    $gp = Get-Process -Id $p.Id -ErrorAction SilentlyContinue
    if ($gp -and $gp.MainWindowHandle -ne 0) {
        $r = New-Object BeaSmoke.W+RECT
        [void][BeaSmoke.W]::GetWindowRect($gp.MainWindowHandle, [ref]$r)
        $fg = ([BeaSmoke.W]::GetForegroundWindow() -eq $gp.MainWindowHandle)
        Write-Output ("screen {0}x{1}; window rect {2},{3}-{4},{5}; foreground={6}" -f [BeaSmoke.W]::GetSystemMetrics(0), [BeaSmoke.W]::GetSystemMetrics(1), $r.L, $r.T, $r.R, $r.B, $fg)
    }
    Get-Process -Id $p.Id -ErrorAction SilentlyContinue | ForEach-Object { Write-Output ("window: '{0}'" -f $_.MainWindowTitle) }
    Stop-Process -Id $p.Id -Force
    # a process blocked in kernel I/O cannot be terminated; say so instead of
    # letting the caller wait forever (NOTES A1-13, 2026-10-18 disk stall)
    if (-not $p.WaitForExit(15000)) { Write-Output ("KILL FAILED: pid {0} still alive 15s after terminate" -f $p.Id) }
} else {
    Write-Output ("EXITED after {0}s with code {1}" -f $i, $p.ExitCode)
}
Start-Sleep -Milliseconds 300
# On a fatal error the game launches Message.exe ("~text~caption~") to show the
# box and exits; nothing answers it in a test run, so the boxes piled up on the
# user's screen.  Report and close the ones started during this run.
Get-CimInstance Win32_Process -Filter "Name='Message.exe'" -ErrorAction SilentlyContinue |
    Where-Object { $_.CreationDate -ge $started } | ForEach-Object {
        Write-Output ("MESSAGE.EXE: {0}" -f $_.CommandLine)
        Stop-Process -Id $_.ProcessId -Force -ErrorAction SilentlyContinue
    }
if (Test-Path $log) {
    if ($SaveLog -ne "") { Copy-Item $log $SaveLog -Force }
    Write-Output "--- hook log (tail) ---"
    Get-Content $log -Tail 40
} else {
    Write-Output "(no hook log)"
}
