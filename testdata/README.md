# Test data

Everything here is input and expected results; no game files.

- `recordings/*.rec`: recorded playthroughs, one line per input event (keys, mouse, frame numbers). A test replays one with `BEA_REPLAY` under the fixed clock, and the game plays out the same way every time.
- `recordings/*.log`: one line from the run each recording was made in (the mouse invert settings at the time), which the replay needs.
- `recordings/*.options`, `*.bea`: the game's settings file a recording was made with (controls and options only).
- `replays.json`: which recording each level test plays, and the switches it was recorded with (`sync`: made with `BEA_SYNCJOBS=1`; `cheat`: made with an invulnerability cheat; `endclock`: how long to run).
- `baseline.json`: the expected result of every level test, as `outcome@game time` from the original game (for example `Firebase was destroyed@200.0`).
- `menu_baseline.json`: for each menu tour, the hash of each screenshot the original game drew (the screenshots themselves are not included).
- `tolerances.json`: tests allowed a small difference (only where the original itself varies).
- `level_coverage.json`, `tour_coverage.json`: which game functions each test runs, for the quick test run.
- `user_profile/savegames_backup/`: the saved game the Load Game tours start from (copied into the game's save folder before each tour), and `user_profile/defaultoptions.bea`, the settings file test runs start from.

The menu tour scripts themselves are in `tools/menu_scripts/`.
