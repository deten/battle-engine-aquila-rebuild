# Battle Engine Aquila rebuild

> **Disclaimer:** this is an unofficial fan project. It is not affiliated with or endorsed by Lost Toys, the game's publishers or the current rights holders. *Battle Engine Aquila* and related names are trademarks of their respective owners and are used here only to say which game this works with.

> **Pre-source snapshot:** everything I did before I knew the game's source code had been released is preserved, unchanged, at the tag **[pre-source-2026-11-05](https://github.com/deten/battle-engine-aquila-rebuild/tree/pre-source-2026-11-05)**. Anything added to this repository after that may use the released source or onslaught-decomp as a reference, and says so.

A rebuild of the PC game *Battle Engine Aquila* (Lost Toys, 2003) that runs inside the original game. Each of the game's functions was rewritten as C++ and swapped in one at a time, and every swap was tested against the original game until it behaved the same.

**This repository contains no game files.** You need your own copy of the game (the Windows `BEA.exe`, SHA-256 starting `74154bfae14d`).

## Where this came from

All of this work was done from the game's machine code alone, with Ghidra and a lot of testing, before I knew that the game's source code had been released. It is a snapshot from 2026-11-05. Function names are therefore Ghidra-style (`FUN_00447120`, `CDropship::vslot66`) and not the developers' real names.

If you want the real source, see Stuart Gillam's GPL release ([stuart73/Onslaught](https://github.com/stuart73/Onslaught)) and the byte-matching decompilation built from it ([dlprentice/onslaught-decomp](https://github.com/dlprentice/onslaught-decomp)). What this repository adds is mostly the **testing**: a way to make the original game repeat itself exactly, recorded playthroughs to replay, and the bugs and quirks that testing turned up.

## Status

- 4,464 of the 4,473 functions Ghidra found in the game's code are replaced (99.8%), and the game plays normally with all of them on.
- Ghidra missed another 942 small functions (about 96 KB), which I only learned later by comparing with onslaught-decomp's function list. Nothing calls them directly, so Ghidra never saw them as functions: 785 are start-up and shut-down code that sets up and cleans up the game's global objects, 110 are mission-script commands (`Damage`, `AddScore`, `SetVelocity`...) that missions reach through a table, 25 are developer console commands, and the rest are callbacks and small helpers. They still run as the original game's code. Counting them, about 82% of the game's functions and 90% of its code are replaced.
- 102 level tests (recorded playthroughs and AI-only levels) and 47 menu tours all match the original game.
- With the test switches below, the original game repeats itself exactly with sound on, with movies on, and at 30, 60 and 144 fps, and the rebuild matches it there too (one screenshot in one multiplayer tour with movies on is the only known exception).
- About 90% of the rebuilt functions behaved like the original on the first try; about 6% needed fixing, mostly how values are passed between functions and the order floating-point numbers are added in.

## What is in here

| Folder | What it is |
|---|---|
| `src/`, `hook/`, `third_party/`, `CMakeLists.txt` | The rebuild: a `zlib.dll` that the game loads, which swaps the original functions for the rebuilt ones (with [MinHook](https://github.com/TsudaKageyu/minhook)). `src/bea/direct` and `src/bea/verified` are rewritten functions; `src/bea/lifted` are instruction-by-instruction copies used where an exact match mattered more than readability. |
| `src/bea/platform/test_harness.cpp` | The test harness, built into the same DLL: a fixed game clock, replays of recorded input, screenshots, and the switches below. |
| `tools/` | Test drivers (level tests, menu tours, the full test run), the bisect tools that find which function causes a difference, the offline and made-up-input checkers, and the porting tools. |
| `testdata/` | The recordings (inputs only), the expected outcome of each test, and which functions each test runs. See `testdata/README.md`. |
| `docs/FINDINGS.md` | What testing found out about the original game: where it leaks real time, and its bugs. Probably the most useful page for other projects. |
| `NOTES.md` | The full working notes, in order. Long. |
| `ghidra_out/` | Tables exported from Ghidra (functions, calls, classes, vtables). The full decompiler output and the game's text are not included; `tools/ghidra/ExportAll.java` regenerates them from your own copy. |

## Building

On Windows with MSYS2's 32-bit MinGW toolchain (`mingw32`), CMake and Ninja:

```
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

In your game folder, rename the game's `zlib.dll` to `zlib_real.dll` and copy `build/zlib.dll` next to `BEA.exe`. The game then starts with the rebuilt functions. `tools/play.ps1` starts it for playing; `bea_hook.log` in the game folder lists what was swapped in.

## Running the tests

The tools expect the game in `Battle Engine Aquila/` next to this README (a second copy in `game2/` lets two builds run side by side), and they use `testdata/` for recordings and results (set `BEA_SCRATCH` and `BEA_GAMEDIR` to use other folders). Python 3 with `capstone`, `pefile` and `unicorn` is needed.

- `python -I tools/full_gate.py`: every level test and menu tour, compared with the original (about an hour and a quarter with four game windows).
- `python -I tools/full_gate.py --quick auto`: only the tests that run changed functions, plus a few canaries.
- `python -I tools/behaviour_bisect.py --level 311 --expect "OUTCOME@TIME"`: finds which rebuilt function changes a level's outcome.
- The menu tours that load a game use the saved game in `testdata/user_profile/savegames_backup`; every tour run starts from it again.

## Test switches

Set as environment variables before starting the game (the test tools set the usual ones):

| Switch | What it does |
|---|---|
| `BEA_FIXEDSTEP=0.016667` | Every frame lasts exactly this long in game time, whatever the PC does. |
| `BEA_REPLAY=<file>` / `BEA_RECORD=<file>` | Replay or record the player's input, frame by frame. |
| `BEA_HOOKS_OFF=1` | Run the original game with the harness but no rebuilt functions (the comparison run). |
| `BEA_SYNCJOBS=1` | The background loading thread finishes each job before the game goes on. |
| `BEA_SOUNDCLOCK=1` | Sound buffers report their play position on game time (voice lines end on game time). |
| `BEA_VIDEOCLOCK=1` | Bink movies advance on game time. |
| `BEA_FPSCLOCK=1` | The game's frame-rate meter reports the fixed rate, clock reads are counted per thread, and the win/lose moment is taken on the exact frame. |
| `BEA_WITH_SOUND=1`, `BEA_WITH_FMV=1` | Test runs with sound or movies on (they are off by default). |

## License

This project is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version. It is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See [LICENSE](LICENSE) for the full text.

Created by deten. If you use any of this, please credit this project.
In short: anyone may use, change and share this work, as long as they keep the credit to this project and share their own changes under the same license.

MinHook (`third_party/minhook`) keeps its own BSD 2-Clause license.
