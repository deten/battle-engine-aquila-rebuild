# Evidence: the Fenrir's render orientation on level 741, 7.8 to 9.6 s

The values asked for in the PR #2 discussion: the Fenrir's old orientation, current orientation and fraction for each
render frame around the 9.45 s contact, from the original and from Onslaught CE on Windows.

Made by replaying `../unit-hit-third-normal/tapes/741r.tape` on the fixed-step clock in the Steam retail `BEA.exe`
(SHA-256 `74154bfae14ddc8ecb87a0766f5bc381c7b7f1ab334ed7a753040eda1e1e7750`) with my test harness, and in two Windows
builds of Onslaught CE `main` at c0cac7a (0.1.14), built in WSL2 and run on physical Windows 11 hardware: one with only
my local replay support (the fixed-step clock and the per-read mouse lines), one with that and my 26 rounding fixes.

## Result

All three agree bit for bit on every row: the old orientation, the orientation, the fraction and the blended result,
for every render frame from 7.8 to 9.6 s (probe frames 288 to 398). On Windows the Fenrir's render orientation is the
same as the original's through the 9.45 s contact.

## Files

- `original.ro`, `ce_0.1.14.ro`, `ce_0.1.14_with_fixes.ro`: one line per render frame (calls in the same frame with the
  same values are one line):
  `RO <event time> <render frame> <thing number> - <fraction> <old orientation 9> <orientation 9> <result 9>`, floats
  as the hex bits of 32-bit floats, matrices row by row. The Fenrir is thing 6 in this numbering.
- `original_by_probe_frame.txt`: the same rows from the original in decimal (`%.9g`, which reads back to the same
  float), with the probe frame (`P`, the numbering of the probe files, loading frames included) first. Probe frame 387
  is event time 9.45 s.

## How it was traced

- The original: a hook on `CActor::GetRenderOrientation` (0x401c50) logs, after the call, `mOldOrientation` (+0x9c),
  `mOrientation` (+0x3c), `CActor::GetFractionTime` (0x401b50, called again; it only reads) and the returned matrix,
  for the Fenrir. The call arrives on the object's `IRenderableThing` part at +8 (vtable 0x5e03b8), so the actor is
  `this - 8`.
- CE: a local patch applied after all of CE's own prints the same fields at the end of `CActor::GetRenderOrientation`
  for the thing number given.
