# Record a person playing one level, for replay by the test loop.
# Without sound (-nosound): a radio message lasts as long as its voice line
# plays in real time, so a real-time recording and a full-speed replay
# diverged within a minute (2026-10-23 self-test: 9% of the frame at clock
# 55); with -nosound the recording and two replays are pixel-identical.
#   powershell -ExecutionPolicy Bypass -File tools/record_level.ps1 -Level 300
# -Level menu starts at the title screen instead (a multiplayer game is chosen in
# the menus; 2026-11-01): the saved games are first reset to the kept copy, as
# every replay from the menu starts, and the file is menu_<n>.rec.
# The unmodified game runs (every port disabled) under the fixed clock, paced
# to real time, in a 640x480 window that takes the focus as usual.  Play the
# level to its end (won or lost); the game closes by itself at the outcome
# (or close it when done).  The input goes to
# testdata\recordings\level_<n>.rec (BEA_RECORD, test_harness.cpp);
# BEA_REPLAY=<that file> with tools/smoke_test.ps1 plays it back.
# Background jobs run synchronously (BEA_SYNCJOBS=1, 2026-10-29): recordings
# made before replayed differently from the playthrough (the streaming worker's
# results landed at real-time-dependent moments).  -Cheat: no damage, no
# ammunition use, no overheating (BEA_CHEAT=1).  Register the recording in
# SCRATCH/replays.json with "sync": true (and "cheat": true) so its replays
# use the same switches.  -Label word: added to the file name (menu_laser.rec).
param(
    [string]$Level = "300",
    [string]$Out = "",
    [string]$Step = "0.016667",
    [string]$Scale = "2",
    [string]$Label = "",
    [switch]$Goodies,
    [switch]$AllMaps,
    [switch]$KeepGoing,
    [switch]$Cheat
)
$root = Split-Path -Parent (Split-Path -Parent $MyInvocation.MyCommand.Path)
$game = Join-Path $root "Battle Engine Aquila"
$dir = "$(Join-Path $PSScriptRoot "..\testdata")\recordings"
New-Item -ItemType Directory -Force -Path $dir | Out-Null
if ($Out -eq "") {
    # a second attempt at a level gets its own file (level 742 was played twice
    # on 2026-10-27 and the second recording replaced the first)
    $stem = if ($Level -eq "menu") { "menu" } else { "level_{0}" -f $Level }
    # -Label: a word in the file name (menu_sniper.rec: the Battle Engine the person picked)
    if ($Label -ne "") { $stem = "{0}_{1}" -f $stem, $Label }
    $Out = Join-Path $dir ("{0}.rec" -f $stem)
    $n = 2
    while (Test-Path $Out) { $Out = Join-Path $dir ("{0}_{1}.rec" -f $stem, $n); $n++ }
}
# every port off: record against the original game
$hooks = "$(Join-Path $PSScriptRoot "..\testdata")\all_hooks_now.txt"
if (-not (Test-Path $hooks)) { Write-Output "no $hooks (run a full test first)"; exit 1 }
Copy-Item $hooks (Join-Path $game "bea_hook_disable9.txt") -Force
$log = Join-Path $game "bea_hook9.log"
if (Test-Path $log) { Remove-Item $log -Force }
# the options the game starts with (bindings, invert switches) shape the playthrough:
# keep a copy beside the recording for its replays (behaviour_bisect.run, 2026-11-01)
$opts = Join-Path $game "defaultoptions.bea"
if (Test-Path $opts) { Copy-Item $opts ($Out -replace '\.rec$', '.options') -Force }
$psi = New-Object System.Diagnostics.ProcessStartInfo
$psi.FileName = Join-Path $game "BEA.exe"
if ($Level -eq "menu") {
    # the saved games every menu replay starts from (tools/menu_test.py restore_saves)
    $saves = Join-Path $game "savegames"
    $keep = "$(Join-Path $PSScriptRoot "..\testdata")\user_profile\savegames_backup"
    if (Test-Path $keep) {
        $kept = @(Get-ChildItem $keep | ForEach-Object { $_.Name })
        Get-ChildItem $saves -ErrorAction SilentlyContinue | Where-Object { $kept -notcontains $_.Name } | Remove-Item -Force
        Get-ChildItem $keep | ForEach-Object { Copy-Item $_.FullName (Join-Path $saves $_.Name) -Force }
    }
    $psi.Arguments = "-forcewindowed -skipfmv -nosound"
} else {
    $psi.Arguments = "-forcewindowed -skipfmv -nosound -level $Level"
}
$psi.WorkingDirectory = $game
$psi.UseShellExecute = $false
$psi.EnvironmentVariables["BEA_INSTANCE"] = "9"
# every port off whatever the list file says (hooks.cpp BEA_HOOKS_OFF)
$psi.EnvironmentVariables["BEA_HOOKS_OFF"] = "1"
$psi.EnvironmentVariables["BEA_FIXEDSTEP"] = $Step
$psi.EnvironmentVariables["BEA_RECORD"] = $Out
# -KeepGoing: the game is not closed at the level's outcome, so the person can play on into
# what follows a win (debriefing, end credits after 7.41/8.00); they close it themselves
if (-not $KeepGoing) { $psi.EnvironmentVariables["BEA_ENDEXIT"] = "1" }
$psi.EnvironmentVariables["BEA_RECORD_SCALE"] = $Scale   # shown 2x (1280x960); the game still renders 640x480
$psi.EnvironmentVariables["BEA_SYNCJOBS"] = "1"
# a checkpoint (player position, health, rand() seed) every 10 frames, for
# tools/replay_check.py to find the first frame a replay parts from the playthrough
$psi.EnvironmentVariables["BEA_INPUTSYNC"] = "10"
# multiplayer: the keyboard and the mouse drive player 1 alone (test_harness.cpp)
if ($Level -eq "menu") { $psi.EnvironmentVariables["BEA_MP_ONEPLAYER"] = "1" }
# -Goodies: every goodie unlocked (BEA_GOODIES=3, test_harness.cpp): bonus levels and locked maps
# -AllMaps: the multiplayer screen's locked maps open (BEA_MPMAPS=1: levels 741 and 800 shown completed)
if ($AllMaps) { $psi.EnvironmentVariables["BEA_MPMAPS"] = "1"; Write-Output "All multiplayer maps open." }
if ($Goodies) { $psi.EnvironmentVariables["BEA_GOODIES"] = "3"; Write-Output "Goodies on: everything unlocked." }
if ($Cheat) { $psi.EnvironmentVariables["BEA_CHEAT"] = "1"; Write-Output "Cheat on: no damage, unlimited ammunition, no overheating." }
if ($Level -eq "menu") {
    Write-Output ("The game opens at the title screen: click through to your game, play, then quit and close the window. Recording to {0}" -f $Out)
} else {
    Write-Output ("Level {0}: the game opens in a window; play the level to its end. Recording to {1}" -f $Level, $Out)
}
$p = [System.Diagnostics.Process]::Start($psi)
$p.WaitForExit()
Remove-Item (Join-Path $game "bea_hook_disable9.txt") -Force -ErrorAction SilentlyContinue
$outcome = Select-String -Path $log -Pattern "outcome: [A-Z]" -ErrorAction SilentlyContinue | Select-Object -Last 1
$lines = (Get-Content $Out -ErrorAction SilentlyContinue | Measure-Object -Line).Lines
Write-Output ("Done: {0} input lines recorded. {1}" -f $lines, ($(if ($outcome) { $outcome.Line } else { "no outcome logged (closed before the end)" })))
Copy-Item $log ($Out -replace '\.rec$', '.log') -Force -ErrorAction SilentlyContinue
