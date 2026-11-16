# Evidence: the unset third contact normal in `CUnit::Hit` (levels 720 and 741)

Supporting files for the "It happens in real play" note in onslaught-preservation's
`mechanics/unit-damage-and-contact.md`. Everything here was made by replaying my own recorded play in the Steam retail
`BEA.exe` (SHA-256 `74154bfae14ddc8ecb87a0766f5bc381c7b7f1ab334ed7a753040eda1e1e7750`) with my test harness on its
fixed-step clock, with none of my rebuilt functions active, and in Onslaught CE 0.1.13 built from its tag with the
same clock. Numbers are written as the hex bits of
32-bit floats.

## Files

- `tapes/720r.tape`, `tapes/741r.tape`: the recorded input (keys, mouse and cursor by frame), in Onslaught CE's tape-2
  format. They replay as played only on the fixed-step clock.
- `runs/<level>_original_run_v1.probes` and `..._v4.probes`: two full replays of each level in the original, made days
  apart. Every 50 frames, `P <frame> <name> <hex>`: EVN event count, FT frame time, SC score, RNG the C runtime's
  random state, POS the player's position, LVL level state, LIFE the player's life, EVT the event manager's time.
  The two runs of each level agree on every line they share; v4 runs on past the end of the level.
- `traces/<level>_original_hit.txt` and `<level>_ce_hit.txt`: each `CUnit::Hit` call that has a collision report,
  in the original and in CE. `HIT <time> <unit number> <contact count> <normal 0 x y z> <normal 1 x y z>
  <normal 2 x y z>`. The 741 files cover 9.4 to 42.7 s; the 720 files cover the contact at 0.05 s.
- `traces/741r_original_declare.txt`: each call to the Battle Engine's `DeclareOnObject` (`O`) and `DeclareOnGround`
  (`G`) in the original from 42.0 to 42.7 s, with the return address of the caller. `004fcd9f` and `004fcda9` are inside
  `CUnit::Hit`.

## Where to look

- 741, time `422a999a` (42.65 s), units 6 and 24, contact count 2: the original's normal 2 is
  `3f63e344 bee943ea 00000000` (0.89, -0.46, 0); CE's is near zero. Only the original then declares the Battle Engine
  standing from `CUnit::Hit`. Units 6 and 24 touch with two contacts nine times from 30.35 s to 42.65 s, and the original has
  this same normal 2 each time; other two-contact reports in the run have other values.
- 720, time `3d4ccccd` (0.05 s), contact count 2: the original's normal 2 is (-0.78, -0.63, -0.04); CE's is
  (5, 0, -20).

`SHA256SUMS` lists every file's hash.
