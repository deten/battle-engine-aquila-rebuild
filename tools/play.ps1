# Play the game with the ports, in a window (from the main menu).
#   powershell -ExecutionPolicy Bypass -File tools/play.ps1 [-Original] [-Level 300] [-Scale 2]
# A plain BEA.exe start goes fullscreen; on this machine its D3D device was
# lost at the first frame and the game waited forever on a black screen
# (2026-10-23).  This runs it windowed through the test harness's recording
# mode instead: a normal focused window (2x by default), real-time speed,
# sound on; the window fills the screen (-Scale fit, or 2/3/4) and can be
# resized or maximised.  The input is written to bea_scratch\recordings\play_<time>.rec
# (harmless; replayable).  -Original disables every port; -Level starts a
# level directly instead of the menu.
param([switch]$Original, [switch]$Repro, [string]$Level = "", [string]$Scale = "fit")
$root = Split-Path -Parent (Split-Path -Parent $MyInvocation.MyCommand.Path)
$game = Join-Path $root "Battle Engine Aquila"
$dir = "$(Join-Path $PSScriptRoot "..\testdata")\recordings"
New-Item -ItemType Directory -Force -Path $dir | Out-Null
$dis = Join-Path $game "bea_hook_disable8.txt"
if ($Original) { Copy-Item "$(Join-Path $PSScriptRoot "..\testdata")\all_hooks_now.txt" $dis -Force } elseif (Test-Path $dis) { Remove-Item $dis -Force }
# the person's own settings (moved aside by every test run: tools/smoke_test.ps1);
# -Repro plays with the defaults, as the tests do
$prof = "$(Join-Path $PSScriptRoot "..\testdata")\user_profile\defaultoptions.bea"
$opts = Join-Path $game "defaultoptions.bea"
if ($Repro) { if (Test-Path $opts) { Move-Item $opts $prof -Force } } elseif (Test-Path $prof) { Copy-Item $prof $opts -Force }
# the mark tells smoke_test.ps1 the options file is the person's to keep, not a test's to delete
if (-not $Repro) { Set-Content -Path (Join-Path $game "defaultoptions.player") -Value "play.ps1" }
$psi = New-Object System.Diagnostics.ProcessStartInfo
$psi.FileName = Join-Path $game "BEA.exe"
# -Repro: no sound and no intro movies, so the recording replays exactly (both run on real time)
$psi.Arguments = "-forcewindowed" + $(if ($Repro) { " -skipfmv -nosound" } else { "" }) + $(if ($Level -ne "") { $(if ($Repro) { "" } else { " -skipfmv" }) + " -level $Level" } else { "" })
$psi.WorkingDirectory = $game
$psi.UseShellExecute = $false
$psi.EnvironmentVariables["BEA_INSTANCE"] = "8"
$psi.EnvironmentVariables["BEA_FIXEDSTEP"] = "0.016667"
$psi.EnvironmentVariables["BEA_RECORD"] = Join-Path $dir ("play_{0}.rec" -f (Get-Date -Format "yyyyMMdd_HHmmss"))
$psi.EnvironmentVariables["BEA_RECORD_SCALE"] = $Scale
# keep the previous session's log beside its recording before this launch
# overwrites it (the log names the recording it was written with)
$prev = Join-Path $game "bea_hook8.log"
if (Test-Path $prev) {
    $m = Select-String -Path $prev -Pattern "recording input to (.+\.rec)" | Select-Object -First 1
    if ($m) { Copy-Item $prev ($m.Matches[0].Groups[1].Value -replace '\.rec$', '.log') -Force -ErrorAction SilentlyContinue }
}
$p = [System.Diagnostics.Process]::Start($psi)
Write-Output ("started {0} (pid {1}); log: {2}" -f $(if ($Original) { "the original game" } else { "the game with the ports" }), $p.Id, (Join-Path $game "bea_hook8.log"))
