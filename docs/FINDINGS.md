# What testing found out about the original game

These came out of comparing the rebuild with the original game, run by run. Addresses are in the retail Windows `BEA.exe` (SHA-256 starting `74154bfae14d`). They may help anyone checking a port, a decompilation or a remake against the original.

## Where the original game depends on real time

With a fixed game clock (every frame exactly 1/60 s of game time), most of the game repeats itself exactly. A few things still followed the real clock, so two runs of the same recording could end differently. Each now has a switch in `src/bea/platform/test_harness.cpp`:

1. **Background loading.** The streaming worker thread runs jobs started at 0x528d50, and the main thread carries on while the job runs. When the result lands depends on real time. `BEA_SYNCJOBS=1` makes the main thread wait for each job. The Bink movie open (0x5412e0) goes through the same worker.
2. **Sound.** Mission scripts wait for a voice line to finish (DirectSound `GetStatus`) and streams refill by the play cursor (`GetCurrentPosition`). Both run on the sound card's clock, so with sound on a level could end a few seconds differently each run. `BEA_SOUNDCLOCK=1` reports each sound buffer's position and status from game time (its size, byte rate, Play, Stop, SetFrequency).
3. **Movies.** The game asks Bink's `BinkWait` whether the next frame is due (0x541d30), and Bink answers from real time. `BEA_VIDEOCLOCK=1` makes frame *k* due *k* / frame rate game seconds after the first `BinkWait`. The start-up movies play in a loop of their own where game time only moves per shown frame, so there a frame is given when asked repeatedly at the same game time.
4. **The frame-rate meter.** `FpsTimer::Update` (0x423720) measures the frame rate from the real clock and keeps a smoothed value, and game code scales by 60 divided by that value: 0x4b82b0, 0x4b93f0, 0x4714c0 and 0x48f620 (through 0x515950). At 60 fps this didn't change any outcome in our tests; at 30 fps it did, in the original too. `BEA_FPSCLOCK=1` makes it report the fixed rate.
5. **Our own harness, two small ones.** The fixed clock adds a tiny step per read so a wait inside one frame still ends; that count was shared between threads, so the sound and loading threads' polling moved the main thread's clock. And the win/lose moment was noticed by a polling thread up to about 16 frames late. `BEA_FPSCLOCK=1` also fixes both.

With all of these on, the original repeated itself exactly with sound on, with movies on, and at 30, 60 and 144 fps.

## Bugs and quirks in the original

- **Reading memory it never wrote ("stale stack").** In a few places the original reads stack memory before writing it, so the result depends on whatever code ran before at that depth. Any rebuild with different stack frames changes the result.
  - `CUnit` contact handling (0x4fcc30) always adds three contacts, even when there are only two; the third is leftover memory.
  - The loader 0x50b9c0 copies a partly unset temporary into a heap block that a guide is later built in, and 0x445250 leaves its field +0x70 unset. That field decides when the level 3.11 dive bomber attacks; in the original it happens to be 0.
  - 0x4fc4e0 copies `[entry esp-0x44]` into an output vector's fourth value.
- **Comparisons with NaN.** The original's x87 compares (`fcomp; fnstsw; test ah,...`) treat an invalid number (NaN) differently from plain C++ comparisons compiled by another compiler: `test ah,0x40` counts NaN as equal, `test ah,1` counts it as less. A rebuild compiled with a different compiler must keep that. It mattered at 0x411b70 (level 4.22 with sound on).
- **Floating-point order.** Many sums are added in a different order in the machine code than a decompiler shows, and the rounding differs. About 50 functions needed their sums reordered to match exactly.
- **Fullscreen on our Windows 11 PC** (RTX 5080; not checked on other setups). The device is lost at the first `Present`, even with the window in front. The loop at 0x512630 then keeps calling `TestCooperativeLevel` with `Sleep(100)` and never calls `Reset` when it returns `D3DERR_DEVICENOTRESET`, so it hangs on a white window with the D3D framework's File/Capture menu. Doing the normal D3D9 recovery there fixes it; the framework already has it as `Resize3DEnvironment` (0x52b760: release, `Reset`, restore).
- **Windowed mode** always uses a 640x480 back buffer, whatever the video options say; `-forcewindowed` only works when a dev byte (0x662f3e) is set.

## How we found these

Mostly with three tools, all in `tools/`:

- `behaviour_bisect.py`: when a level ends differently, it switches rebuilt functions back to the original in halves until one function alone explains the difference.
- `fuzz_check.py`: runs the original function and the rebuilt one side by side in an emulator (Unicorn) on made-up inputs and reports the first difference.
- `step_test.py` and `fmv_test.py`: the original and the rebuild side by side at other frame rates or with movies on, the original run twice so that its own variation shows. If the original doesn't repeat itself, the difference is in the setup, not the rebuild.
