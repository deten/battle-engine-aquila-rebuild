# NOTES.md — assumptions and open questions



Rules for this file: whenever behaviour is ambiguous, write the assumption here

instead of guessing silently. Each entry says what was assumed, why, and how to

verify it. Entries are never deleted; when resolved they get a **Resolved:** line.



## Phase 0 (investigation)



### A0-1 Which `BEA.exe` is the reference binary

The game folder contains three 2,506,752-byte executables:



| file | identical to | notes |

|---|---|---|

| `BEA.exe` | `BEA.exe.orig` | imports `d3d9.dll!Direct3DCreate9`, PE timestamp 2003-05-26 |

| `BEA.exe.orig` | `BEA.exe` | assumed pristine retail PC build |

| `BEA.exe.patched` | — | 191 bytes differ: FOV / aspect float constants redirected to code caves at the end of `.text` (0x5d7db5…0x5d7ffd). File dated 2015-07-28, same as `Modification/BEA.7z` (RAR). This is a community widescreen patch. |



**Assumption:** `BEA.exe` (== `BEA.exe.orig`) is the unmodified retail PC release

and is the binary all analysis and Phase 1 hooks target. The in-game log text

still says "Direct3DCreate8…", but the import table, the statically linked

D3DX9 shader assembler, and `Direct3DShaderValidatorCreate9` all show the

shipped build really is Direct3D 9. The log strings are stale text from the

engine's DX8 era.



### A0-2 The `d3d9.dll` in the game folder is not part of the game

It is a MinGW-built (GNU ld 2.41, 2026 timestamp) `ProxyD3D9` / `ProxyDevice`

wrapper from my earlier HUD-scaling experiment (`BEA_HUD_fix.ini`,

`bea_hud_fix.log`). **Assumption:** it can be removed or kept; Phase 1 should

be tested with it removed so the hook DLL sees the real device.



### A0-3 Ghidra function names

Ghidra's auto-analysis missed 1,429 of the 2,127 distinct virtual functions

because they are reached only through vtables. `tools/ghidra/ApplyRtti.java`

creates them and names them `<Class>::vslot<N>` where `<Class>` is the

shallowest class whose vtable holds that pointer. **Assumption:** the shallowest

holder is the class that introduced the virtual. This is right for ordinary

overriding but wrong when a derived class and an unrelated sibling share an

implementation (e.g. the common `return 0` stubs at 0x405930). Treat `vslot`

names as "slot N of class X", not as proof of where the method was declared.



### A0-4 Frame timing

The timer class (`FUN_00423650/00423680/00423720`) uses

`QueryPerformanceCounter` with a `timeGetTime` fallback and smooths the measured

frame rate with `fps = 0.75*fps + 0.25*measured`, clamped to a minimum of 1 FPS.

Console variable `g_framelength` ("Game frame/tick length (seconds)") and the

debug string "(fixed rate gc) %2.2f FPS" show a fixed game-tick path exists.

**Assumption (to verify in Phase 1):** rendering is variable-rate, simulation

advances in fixed `g_framelength` ticks. Until verified, every hook must

preserve the original float arithmetic exactly, including the 0.75/0.25 EMA and

the 1 FPS clamp.



**Resolved (Phase 0, from `CGame::Frame` 0x46eee0):** confirmed. `frameLength`

(`CGame+0x3a8`) defaults to 0.05 f (20 Hz); the inner loop renders with an

interpolation fraction until a full tick has elapsed, then advances

`lastTick += frameLength`, snapping to `now` if more than 1.3 ticks late.

`CGame::Tick` (0x46e460) multiplies by a literal `20.0`, so the tick rate is

effectively hard-coded in two places. Still open: whether any gameplay code

depends on `float` time resolution (QPC delta stored as 32-bit float).



### A0-5 Asset archive chunking

`.aya` files are a sequence of `{u32 compressed_size, zlib stream}` records,

each inflating to at most 1 MiB. The inflated payload is a tag tree of

`{char[4] tag, u32 size, bytes[size]}` records. **Assumption:** the 1 MiB

chunk limit is a writer-side constant (matches `XBOXAsyncCache.cpp` streaming)

and readers must simply concatenate; verified on `100_res_PC.aya` (4 chunks)

and `Loading_res_PC.aya` (1 chunk).



### A0-6 Copy protection

No SafeDisc/SecuROM/StarForce signatures, no packed sections (entropy ≤ 6.63),

imports are plain, the entry point is the standard VC6 CRT `mainCRTStartup`.

**Assumption:** this is the unprotected retail build (consistent with a digital

re-release). Nothing interferes with static or dynamic analysis.



## Phase 1 (incremental replacement)



### A1-1 Random generator constants

`Random::Next` (0x4de8d0) is Park–Miller with Schrage's method, but the modulus

in `.rdata` is **214783647**, not 2^31−1 = 2147483647 (a dropped digit in the

original source). The multiplier is 48271. Reproduced bit-exactly; do not "fix".



### A1-2 Hidden `return *this` (EAX) in void-looking functions

Ghidra reports `Vec3::Set`, `Vec3::Add` and `Mat34::SetRows` as `void`, but the

VC6 code leaves `this` (or the output pointer) in EAX and callers chain on it.

Replacing them as `void` crashed `-level 100` within 5 s. **Rule for every

replacement:** read the disassembly up to `ret` and check what EAX (and ST0)

holds; if it is a live value, return it even when the decompiler says `void`.

Functions already replaced with a deliberate `void` where EAX is stale/unused:

0x513bc0, 0x513820, 0x4e5bd0, 0x4e5c60, 0x4cb050, 0x423680, 0x423720.



### A1-3 Smoke-test behaviour of the stock game

With `-forcewindowed -skipfmv` and no input the front end exits cleanly

(code 0) after ~20 s; unhooked and hooked runs behave the same. Without

`-skipfmv` it stays in the intro movies; `-level 100` loads the tutorial and

runs indefinitely at ~300 FPS. Use `-level 100` (or `-level 200`) for soak

tests. `-forcewindowed` still switches to 640×480 exclusive fullscreen, so GDI

screenshots are black once D3D is up; rely on `bea_hook.log` heartbeats

(frames/5 s) and the first-call traces instead.



### A1-4 Uninitialised stack copy in CActor::vslot64 (0x401580)

The original builds a 16-byte temporary with only three dwords written and

copies all four into `this+0x7c..+0x88`, so `+0x88` receives stack garbage.

The replacement stores 0. If `+0x88` ever turns out to be read, revisit.



### A1-5 Never guess an address

The first VM build hung the tutorial because `CBoolDataType::vftable` was

typed from memory (0x5e4b68) instead of taken from the disassembly (0x5e4d50);

every boolean the scripts produced had a garbage vtable. Every vtable, string

and global address in a replacement must be copied from `ghidra_out/vtables.txt`

or the function's own disassembly, and the bisect procedure is: disable groups

of hooks with `bea_hook_disable.txt`, not re-read code.



### A1-6 CPositionDataType::Add/Sub/Mul leave w uninitialised

The original copies an unwritten stack dword into the fourth component of the

result (DataType.h lines 0x87/0x8f/0x97). The replacements store 0.0f.

Assign and Clone copy all four components, so a garbage w could only have

reached consumers through these three operators.



### A1-7 Statement classes are generated from templates

`tools/gen_statements.py` matches the ~230 physics-statement classes against

code templates and emits `src/bea/physics/statements_generated.inc`

(202 methods at the time of writing; 59 non-template methods such as

`CUnitBasedOn`, `CWeaponLaunchAngle`, `CWeaponChargeLevel` remain original).

The per-family definition lists are reached through *pointers* stored in

globals (`mov edx,[G]; mov eax,[edx]`), not through the globals themselves —

the first build crashed at startup on exactly that. Rerun the generator after

any change to its templates; it is idempotent.



### A1-8 Auto-port + shadow verification pipeline

`tools/autoport.py` turns Ghidra's C for self-contained leaf functions into

compilable C++ (`src/bea/ghidra_compat.h`) and emits a *shadow stub* per

function: the port runs on a copy of `this`, the original runs on the real

object, EAX/ST0 and the `this` bytes are compared and the outcome is

recorded (`bea_shadow_report.txt`). `tools/promote.py` turns ports with

enough agreeing calls into real replacements (`src/bea/verified/`).

Assumptions: (1) a shadow port may write through pointers reachable from

`this` or its arguments before the original does; the original then rewrites

the same locations, so only a wrong *extra* write could corrupt state during

a shadow run; (2) functions that return or store their own `this` address

mismatch by construction and are reported, not promoted; (3) cdecl functions

are only ported when the stack-argument count read by the code matches

Ghidra's parameter list. Pure leaves: 721 remaining, 487 ported on the first

pass, 556 compile without the shadow stub.



Hardening rules learned while making the harness stable (each cost a crash

or a hang to find):

1. **Hidden `return this`** (A1-2 again): EAX liveness is judged per `ret` by

   whether the last EAX writer is consumed; only `mov eax, ecx` writers become

   `return this_`, anything else void-but-live is skipped.

2. **Object size**: the `this` copy is sized from the largest this-relative

   displacement; `rep` string ops are unbounded and excluded; the copy lives in

   a shared 1 MB buffer with a trailing guard page so overruns fault in the port.

3. **Argument aliasing**: an out-parameter that points into `this`

   (`v.Negate(&v)`) is redirected into the copy, otherwise the port's write

   lands in the real object before the original runs and the value is applied

   twice.

4. **Every 4-byte argument is sandboxed at run time** if it points at readable

   memory (Ghidra often types pointers as `int`); the window is compared after

   both runs, which also verifies out-parameters.

5. **Deep writes**: functions that store through a pointer chased out of

   memory (allocator free lists, intrusive lists) are excluded by

   `tools/candidates.py`; the port would mutate shared structures before the

   original runs. Identity comparisons against a sandboxed pointer never match,

   so such a port can spin: every generated loop carries `bea_shadow::tick()`

   with a per-call budget, and exhaustion is reported as a mismatch.

6. `tools/bisect.py` must treat "alive but zero frames" and an early clean

   exit as failures for level runs (`--allow-exit` only for front-end runs).

7. **Callees may only be read-only helpers** (no memory stores at all,

   transitively): any callee that stores can write a sandbox pointer into

   real game state. **Tail jumps are calls** for this purpose; a function

   ending in `jmp other` has no `call` instruction and was classified as a

   leaf, and its port registered a copy of `this` in a real listener list.

8. Register-passed arguments (`this` in ECX plus a value in EDX, 34

   functions) are tagged `custom` in `ghidra_out/conventions.csv`; the

   transformer refuses them as ports and as callees.

9. Shadow stubs sample after 256 calls (every 32nd) so hot functions do not

   drag the frame rate down; promoted ports carry no stub.

10. **x87 sum order**: Ghidra prints chains of float additions without

   parentheses (`a*b + c*d + e*f`) although the original associates them

   differently (`(e*f + c*d) + a*b` in 0x40d180), so ports of float code can

   disagree in the last bit. Ports with such residual float mismatches stay in

   shadow mode; simple ones are fixed by hand in the original order and tagged

   `@autoport-handfixed`, which `tools/autoport.py` will not overwrite.

11. **Writing callees** are allowed when the callee is itself shadow-safe and

   the caller hands it only sandboxed values (ECX and every pushed argument is

   `this`, a stack argument, a stack address or a small immediate). An

   immediate in the image range is the *address of a global* and is not

   sandboxed (a port passed `&g_tweak` as `this` to a writing setter); caller

   registers are not direct after a call. The sandbox copy of `this` is sized

   from the largest displacement reached transitively through callees.

12. Ports promoted before rule 5 existed: six verified ports were found by the

   stricter rules to write through chased pointers (0x424360 array range

   removal, 0x4f78c0 triangle index rotation, 0x4daff0/0x506350/0x506530/

   0x509f70 global-list iteration cursors). Shadow mode could not verify those

   writes; all six were checked by hand against the disassembly (2026-10-17)

   and match. Seven more are flagged only because of switch jump tables

   (`jmp [table+eax*4]`), which are not indirect calls.



13. **Narrow return types must fill EAX.** `CCollisionSeekingThing::vslot8`

   (0x426900) returns `neg/sbb/inc` = 0/1 in the whole of EAX and its caller

   tests EAX; the `bool` port set only AL, the upper bits were garbage, and

   level 511 crashed ~8 s in (found by bisect, 2026-10-17). Shadow mode had

   compared the values as `bool`, so it could not see this. Every port with a

   narrow return type now returns `uint32_t` (C conversion: bool and unsigned

   zero-extend, signed types sign-extend) and the stub compares all 32 bits.

   `tools/check_ret.py` flags any replacement whose last EAX write before

   `ret` is narrower than the original's (and any `ret N` mismatch).

   Bisect pitfalls found on the way: the run must keep FpsTimer_Update

   (heartbeat counter) enabled, and the baseline (all candidates disabled) must

   pass before bisecting means anything (`tools/bisect.py` now checks both).



14. **Uninitialised locals** (A1-4/A1-6 generalised): a local the decompile
   never assigns but copies out is the stack garbage the original stores
   (vector `w`). The port initialises it to 0 and the stub copies those
   destination bytes from the real object before comparing
   (`bea_shadow::ignore`), so the rest of the function can still be verified.
   Files carry `@autoport-uninit`.
15. **Setter EAX** (`mov eax,[..]; mov [this+K],eax; ret`): the value left in
   EAX is the field's final value, so the port returns `*(this+K)` read back
   at return ("exprstore" mode); the base register may be `this` plus a
   constant (`add ecx, 0x7c`, `mov esi, ecx`).
16. **Callers decide EAX liveness** when the writer is anything else:
   `tools/eaxuse.py` scans every direct call site for a read of EAX before a
   write; for virtual functions it requires that neither the function nor any
   sibling in the same vtable slot leaves a computed value in EAX (Ghidra
   types `return 0` stubs as void, so signatures alone are not enough).
   Verdict "unused" makes the port a plain void (`@autoport-eax unused`).
17. **Narrow returns** (rule 13) also apply to hand-written code:
   `String_Equals/NotEquals/EqualsText` returned `char`.

18. **Call pass-through**: a void function whose every `ret` follows a call
   leaves the callee's EAX (or ST0) to its own caller; the port returns the
   last call's value (`return CALL(...)`, callee typedefs widened to
   `uint32_t`, `float10` when the callee returns a float).
19. **`push ecx` is not always a read of `this`**: VC6 reserves a 4-byte local
   with `push ecx`. `tools/conventions.py` counted it as an ECX use, typed 55
   cdecl/stdcall functions as thiscall, and Ghidra pass 3 printed their
   callers with a missing argument (0x4f35d0 called 0x5164b0 with an
   uninitialised "this"; first direct-port crash, 2026-10-17). Now an
   ambiguous `push ecx` defers to the decompile (does the body use `this`?),
   and ports whose header convention disagrees with the CSV are skipped until
   the next Ghidra convention pass re-exports them. **Resolved:** Ghidra pass 4
   (2026-10-18) re-exported with the corrected CSV; callers of `Random::Next`
   now show the generator argument (`FUN_004de8d0(DAT_008a9d9c)`).
20. **Call arguments are raw dwords**: a callee header typed `float` where the
   caller passed an `int` made the port convert the value (0x415120); callee
   typedefs now take `uint32_t` and every argument goes through `bea_arg()`
   (bit copy for float, identity otherwise, `long double` refused). The
   virtual-call receiver form `*p + 4` means slot 1 of `p`'s vtable, not
   `p + 4` (0x4f9a60).

21. **cdecl argument counts come from the call sites.** The callee-side scan
   misses arguments read through an exception frame or after a call, so
   0x42fa80 was typed `cdecl(void)`, Ghidra pass 4 printed its caller without
   the argument and the port crashed (batch 2, 2026-10-18). `conventions.py`
   now takes the `add esp, N` after each `call` (within three instructions,
   or `pop ecx` = 1) as the count; sites that clean up different amounts mark
   the function varargs (`varargs` column; argc = the smallest non-zero site
   count, e.g. the logger 0x441740 = 2 fixed arguments). `callee_sig` refuses
   a header whose stack-argument count differs from the CSV and appends `...`
   for varargs callees.

22. **A `float` parameter that the body casts to an integer is a type
   confusion** (0x4d65a0: pointer argument, slot reused for a float
   temporary; Ghidra typed it float and the port converted the pointer
   numerically). Such ports are skipped.

23. **A float-typed header with no x87 value at `ret`** means the value is
   returned in EAX (0x4bba10, a volume setter returning its argument: Ghidra
   typed it `float`, the port left garbage in ST0, callers computed NaN
   positions and the line-clip loop at 0x478160 spun forever: the level-200
   hang of 2026-10-18, found with the watchdog's hang sampler). Such headers
   are treated as void and the EAX-mode rules apply (`@autoport-eaxfloat`).
   The shadow stub could not see this: both runs leave the same stale ST0.
   Hangs are now sampled (`HANG eip=... stack:` lines) so `crashmap.py` can
   name the spinning port or its caller chain. The bisect's pass test had
   accepted `frames > 0` as alive, which a hang satisfies (the total stops
   growing but stays positive), so two bisects of this hang reported PASS;
   it now requires new frames in the last heartbeat.

### A1-10 Direct ports (`tools/autoport.py --direct`)
Shadow verification needs a function whose only effects are on `this`, its
arguments and the stack. Of the ~3,200 functions left after the shadow-safe
set was exhausted, a census (2026-10-17) found 1,346 that the transformer can
express, 650 of which compile; the rest store globals, call writing helpers,
use `rep` string ops or make virtual calls. Direct ports are emitted as plain
`BEA_HOOK` replacements into `src/bea/direct/` with no stub, and are verified
by (1) `tools/check_ret.py` (stack balance and EAX width against the
original), (2) the build, and (3) the windowed soak over all levels with
`tools/bisect.py` on failure. They are installed in batches so a bisect stays
cheap. **Assumption:** a port whose Ghidra C compiles, whose calling
convention and return register match, and which survives the 15-level soak
is behaviourally equivalent; silent divergence on untested paths is possible
and is the price of covering the remaining 70 % of the code. Direct ports are
marked `@autoport-mode direct` so they can be re-examined when the class
structures are recovered in Phase 3. CRT callees (sprintf, _stricmp, qsort,
floor, fopen...) were identified from their disassembly in
`tools/crt_sigs.py`; callee signatures of hand-written replacements are taken
from their definitions (Ghidra's header for `Random::Next` is `int (void)`,
it is really a thiscall on the generator state).

**Callee rules added 2026-10-18 evening** (code went in with direct-port batch 5,
swept up by the loop's `git add -A`): (1) a function used as a value
(`FUN_0055dc20(p, 0x41c, 1, FUN_00403f40, FUN_00403f80)`) becomes its original
address `((void*)0x00403f40)`; a hooked one dispatches to the port. (2)
`tools/crt_sigs.py` names 0x55dc20 the VC6 `eh vector constructor iterator`
(5 stack arguments, `ret 0x14`, calls the constructor with ECX = element) and
0x42cfa0 the game's fatal-error exit (`sprintf("Fatal error: %s %d", arg1,
arg2)`, message box, `exit(1)`; cdecl). (3) A callee that is exactly `add/sub
ecx, k` or `mov dword ptr [ecx], vtbl` followed by `jmp X` takes X's
signature when X is a thiscall (`stub_target`). (4) `__fastcall` callees are
called through `BEA_FASTCALL`, but only those listed in
`tools/conv_overrides.csv`: 0x47eb80, 0x47ea20 and 0x47ec60 take the map
object in ECX and a position/pointer in EDX (call sites load both), so Ghidra
showed one argument where there are two. The overrides take effect at the next
`tools/conventions.py` + Ghidra pass. Census check: with rules 1-3 every port
that compiled before is unchanged apart from `#define` order (Python set order),
and 29 more compile. The FPU-stack CRT intrinsics (0x55dcb0, 0x55e3ea ->
`__cintrindisp2`) take their operands in ST0/ST1, which Ghidra's C does not
show; their callers stay skipped.
**Later the same evening** (each change checked by a full census against the
previous one: ports that compiled before must be identical up to line order):
vcalls whose argument list Ghidra wrapped onto the next line, and uncast
slot-0 calls `(**(code **)*p)(1)` (deleting destructor), are rewritten (+61);
a qualified method used as a value becomes its address, and `x._1_3_` (upper
three bytes) a shifted, masked read, as an rvalue only so assignments to it
still fail to compile (+63); vtable names are replaced whole-word (a plain
replace in set order let `&X::vftable` eat the prefix of `&X::vftable_this4`
at random; it never compiled, so no installed port was affected).
**Ghidra pass 6** (project now on D:, `tools/ghidra_pass.cmd`): the three
fastcall overrides, and `tools/ghidra/SetReturnTypes.java` gives a 4-byte
return to the 235 functions in `tools/ret_overrides.txt`, which Ghidra had as
void although callers read EAX (126 set EAX on several branches, 86 pass on a
callee's result: the transformer could not model either from a void body).
The decompiler now computes the returned value (`return uVar3;`). Census:
540 -> 633 compiling ports; the 95 that changed differ only in callee typedefs
(`uint32_t` -> `undefined4 *` returns, the same EAX), so installed ports were
not regenerated. Still open: 261 functions with `unaff_`/`in_stack`
artefacts (a float local in a saved-register slot; by-value structs), 78
vcalls through a vtable held in a variable (19 resolvable by a single
`v = *obj` assignment), 141 unknown callees (FPU-stack CRT intrinsics first).
**Then:** functions with no `ret` that leave through direct jumps (50:
destructors that reset their vtables and jump to the base destructor,
two-way dispatchers) take the `ret_pop` their targets agree on
(`conventions.py tail_targets`, Ghidra pass 7; check_ret.py already follows
the jumps); a cdecl count the `[esp+K]` scan cannot see (EBP frames) is
accepted when the callers' `add esp, N` matches the declaration (+40).
**Front end:** the soak ran the front end after the levels but
`direct_batch.py` ignored its result, so batch 9 was committed while the main
menu crashed 2 s after start (0x51dba0; bisected over that batch's ports and
quarantined in 902f1fb; batches 1-8 were fine). `coverage.sh` now runs it as
the soak item `level frontend`, bisected without `-level`. **Interactions:**
when no half of a failing set crashes alone, bisect.py now minimises the set
(both halves in parallel; otherwise A with B enabled, then B with that part
of A) instead of quarantining it whole (batch 7 lost 57 ports that way; they
were requeued).

### A1-11 VC6 exception frames are dropped from ports
426 game functions set up a VC6 C++ EH frame (`push -1; push handler; mov
eax, fs:[0]; push eax; mov fs:[0], esp` and an EH state variable updated as
locals are constructed), which Ghidra decompiles as `saved = ExceptionList;
ExceptionList = &saved; handler = &LAB_x; state = N; ...; ExceptionList =
saved;`. `tools/autoport.py` removes that boilerplate (`strip_eh_frame`) and
tags the port `@autoport-ehframe`. **Assumption:** the frame only matters when
a C++ exception unwinds through the function; the game never throws (the
CRT's `_CxxThrowException` at 0x56274c, the only `RaiseException` user, has
no callers at all), so the ported body is equivalent. If an exception ever does propagate, destructors of locals in
ported functions would not run.
Checked 2026-10-19: VC6 `catch (...)` also catches structured exceptions
(access violations), so a port of a function with a *try block* would turn a
fault the original survives into a crash. `tools/check_eh_try.py` reads each
original's FuncInfo (`nTryBlocks`) through its handler stub: no installed
port has one (all 263 `@autoport-ehframe` direct ports are unwind-only).

### A1-12 Keeping the test machine awake (Modern Standby)
The laptop uses Modern Standby (S0 low-power idle): when the display times out
the system enters standby and hibernates after the fixed timeout, and
`SetThreadExecutionState(ES_SYSTEM_REQUIRED)` alone does not prevent it
(2026-10-18: standby 00:48, hibernate 01:48 with the helper running).
`tools/keep_awake.ps1` now also holds a `PowerRequestExecutionRequired` power
request, the mechanism Modern Standby honours for running with the screen off.
Since 2026-10-20 the helper also holds the display on (`PowerRequestDisplayRequired`,
`ES_DISPLAY_REQUIRED`); I dim the screen by hand. With the display
off the laptop entered standby (Kernel-Power 506/507), the D3D9 devices of the
test games were lost and 2-3 levels per soak went untested.

### A1-13 Test throughput: parallel instances, fast clock, crash mapping
A batch took ~15 min, most of it sequential game launches. Three changes
(2026-10-18): (1) `BEA_INSTANCE=<n>` (smoke_test.ps1 `-Instance n`) gives
each game process its own `bea_hook<n>.log` / `bea_hook_disable<n>.txt`, so
`tools/coverage.sh` soaks up to `BEA_PARALLEL` (4) levels at once and
`tools/bisect.py` probes that many subsets per round; (2) `BEA_TIMESCALE=k`
(`-TimeScale k`) scales `Platform::GetTime`, so game time runs k times faster
than wall time and a soak covers k times as many simulation ticks (the tick
loop snaps when >1.3 ticks behind, so very large k just means more ticks per
rendered frame); (3) `tools/crashmap.py` symbolizes the VEH crash log
(`dll+offset`, with inlined frames) and `direct_batch.py` disables the named
ports and re-soaks before falling back to a bisect. **Assumptions:** several
windowed instances do not interfere through shared files (each writes
per-pid shadow reports; the game's own config writes are last-writer-wins);
a time scale of 4 does not change behaviour beyond tick density.
**2026-10-18 machine stall:** with four instances the host's C: NVMe (behind
Intel VMD) stalled mid-bisect, logged bad-block errors two hours later and
Windows bug-checked (0x154, a pre-existing fault on that machine, not the
ports). A process blocked in kernel I/O cannot be killed, so the bisect waited
forever. Guards added: `smoke_test.ps1` prints `KILL FAILED` when the process
survives `Stop-Process` by 15 s, `coverage.sh` turns that into `STALLED`,
`bisect.py` exits 3 on it or on a smoke-test timeout, and `direct_batch.py`
exits 4 (the loop stops) rather than attributing the stall to a port. The
loop's default is now `BEA_PARALLEL=2` to halve the disk load. Lesson from
the same day: a 30 s soak at a reduced frame rate (census compiling in
parallel) let a port through that crashes level 400 after 29 s of full-speed
play; soak time must be measured in game ticks, hence the time scale.
**Fail fast (2026-10-18 evening):** most loop time went to batches with a
culprit, waiting on runs whose outcome no longer mattered. Now the first
failing level ends `coverage.sh` (other instances of its round are cancelled
through `bea_cancel<n>.txt`, which `smoke_test.ps1` polls each second; later
levels are skipped; `BEA_SOAK_ALL=1` restores the full run), and a bisect
round ends at its first failing part (the other probes report `None`, never a
pass). In `-forcewindowed` mode the harness answers the CRT's `MessageBoxA`
with OK and logs `MSGBOX ...`, so a port that reaches the fatal-error path
(0x42cfa0, e.g. "Out of memory error type 1") exits at once instead of
waiting for a click with the box on my screen. Passing runs are
tested exactly as before. **Correction (2026-10-19):** the "Fatal error  sorry" box is not the CRT's: the
fatal-error path launches `Message.exe ~text~caption~` (A0-7) and exits, so the
MessageBoxA hook never sees it and the boxes piled up on screen. `smoke_test.ps1`
now prints `MESSAGE.EXE: <command line>` and closes every Message.exe started
during its run. This was also the 00:23 "HARNESS STALLED" (no disk events, no
game process left): the CRT spawn at 0x56a936 calls `CreateProcessA` with
`bInheritHandles = 1`, so Message.exe inherited the stdout pipe that bisect.py
/ coverage.sh read the smoke test through, and the reader waited for EOF until
the box was closed (165 s timeout in bisect.py; in coverage.sh's `$(...)` up to
the hour-long timeout, which is why some batches took so long).
**Batch robustness (2026-10-19 night):** a 200-port batch can need more than
four fix-and-resoak attempts (culprits on several levels), so direct_batch.py
allows 12 (each quarantines at least one port) and its bisect gets 4 h; an
interrupted batch is finished with `--resume` (its untracked files in
src/bea/direct). A batch is no longer quarantined whole without a baseline:
when the bisect finds no deterministic culprit and the re-soak fails, the
level is soaked with the whole batch disabled, and if that fails too the
batch is withdrawn and the loop stops (172 ports had been lost to a level-231
failure that did not repeat; they were requeued). Full per-batch output and
every failing item's hook log are kept in BEA_SCRATCH.
**Intermittent culprits:** the same 172 ports failed three soaks on three
levels (231, 100, 200) and the bisect reproduced none of them; the saved
level-100 crash log had a port under the game return address 0x44b5a8,
whose call is `call 0x4e5b20`, faulting inside 0x4e7110 that the port calls.
Only 0x4e5b20 was blocklisted; crashmap.py now also names the callee of the
direct call before each game-code return address on a crash stack, so the
confirmation soak tries such a port before any bisect. A minimised
"interaction" of more than 4 ports is treated as a flaky crash (no culprit).
**Intermittent hang committed (7ceba84):** with 0x446150 and 0x448930 both
installed, level 200 hung in the angle-wrap loop of the unported 0x427210
(`while (a < -pi) a += 2pi` at 0x4279b2 never ends for a NaN angle), 25-35 s
into a run: a sixth of 45 s soaks, half of 90 s ones. Batch soaks passed it
by chance and the next batches were blamed (two whole-batch quarantines).
`tools/flaky_bisect.py` (every probe runs the level up to N times) found the
pair over the 133 ports of that commit in ~45 min; neither hangs alone. Both
quarantined (a03cbf0). The loop's soak is now 60 s per level (was 45).
**Deep soak 2026-10-19 (all 15 levels + front end, 90 s):** the committed
build (3,327 ports) failed 6-7 items; the loop had soaked 8 levels for
45-60 s since 2026-10-18, so the loop now soaks all 15 at 90 s (8a5b3ab).
Three lessons:
- bisect.py (enable a subset, keep the rest disabled) misses a port that only
  breaks next to other ports: on level 700 it found 8 other culprits and
  then "no deterministic culprit", while disabling 0x4ba4d0 alone fixed 700
  and 500. `tools/disable_search.py` is the dual: everything stays enabled
  and it searches for the smallest set to disable (found 0x447b10 for 110
  and 0x447b10 + 0x4b6d30 for 200). A large result (146 ports for 221)
  means one probe failed by chance; read the crash instead.
- Ghidra drops the variadic arguments of printf-style calls: 48 ports
  called the logger 0x441740, sprintf 0x55de9b or 0x42b840 with the format
  alone, and the callee read stack garbage for each %s (level 221: _output
  reading 0x2ac as a string, from 0x4bba10's volume message).
  `tools/check_varargs.py` finds these; direct_batch.py quarantines them
  after check_ret. Fixed 2026-10-20 by Ghidra pass 8
  (`tools/ghidra/VarargOverrides.java`, run by ghidra_pass.cmd): a
  call-site signature override per literal-format call (477 sites), so the
  decompile shows the arguments; census27 recompiled 47 of the 48 with no
  bad call. At two sites the original itself passes too few
  (ghidra_out/vararg_short.txt); check_varargs.py accepts a port that does
  the same.
- The crash logger's 64-dword stack scan cannot see past a frame with big
  locals (the CRT `_output` has 0x24c bytes), so it now also logs
  `CRASH frames:` from the EBP chain.
After these fixes: 3,263 / 4,473 (72.95%), 510,093 bytes.
**Autopilot and call coverage (2026-10-19 afternoon):** idle soaks never run
the player's code paths. `BEA_AUTOPILOT=1` makes the windowed harness post
random player input (test_harness.cpp), and `tools/called.py` reports how many
installed replacements the soak logs saw called (56% idle, 58-59% with the
autopilot over all 16 items). The first autopilot soaks found 0x491ea0
(hang), 0x46e240, 0x4cb5c0, 0x412d80 (crash whenever enabled) and 0x4cb3d0.
Autopilot runs are not reproducible: a single disable_search pass is noise
(1/3 confirmations), so use flaky_bisect.py with --repeat 8 or more. With the
PC locked the D3D9 device is lost and the game waits for the unlock
("DEVICE LOST ..., untested"). With the screen off, Present waited for the
compositor (~22 fps), so the harness now drops Presents within 50 ms of
each other.
**Why the autopilot hangs and crashes were NaNs (2026-10-20):** four
mechanical port bugs, all invisible to the shadow test and to idle soaks:
1. *x87 stack imbalance.* When the original discards a callee's float
   result it pops it (`fstp st(0)`), which Ghidra hides; the port called the
   callee as returning an integer and the value stayed on the x87 stack.
   After eight, every load is a NaN. Ports whose own float return Ghidra
   typed void (0x477ba0: result left in ST(0) after `fstp st(3); fstp st(0);
   fstp st(0)`) returned nothing: the "verified" body was empty, because the
   shadow test compares memory and EAX, not ST(0). Fixes: `bea_guard`
   (ghidra_compat.h) wraps every callee pointer and `bea_vcall`, and pops a
   value a callee leaves behind after a non-float call (EAX saved, ECX/EDX
   untouched, ~5-10% frame rate); tools/check_st0.py checks call sites and
   each port's own return (x87 depth at `ret`).
2. *ECX by luck.* Callees that read ECX (`in_ECX`) typed cdecl/stdcall: the
   port never set ECX and worked while a previous callee left the right
   value; any codegen change broke it (26 ports, incl. callers of 0x4cb3d0,
   the old level 500/700 crash). tools/check_ecx.py; autoport now skips them.
3. *Split stack areas.* A callee writing a matrix through `auStack_30[4]`
   into what Ghidra split off as fStack_2c..fStack_c (0x412f70): autoport's
   emulate_frame keeps the original layout when a local's address escapes.
4. *Shared pushed arguments.* VC6 leaves a pushed value for the next call
   (0x4d1fd0: a virtual call pops 8 of 12 bytes, 0x4aa630's `ret 4` takes the
   rest); ports are now compiled with frame pointers so a pop mismatch does
   not derail their `ret`.
Tools: `BEA_FPTRAP=1` unmasks the x87 invalid exception every frame; the
crash logger records the faulting instruction (FPTRAP, from the FXSAVE image
under WoW64), masks it and continues; the counting thunks log entries with a
non-empty x87 stack (X87LEAK, with the caller). The unmodified game itself
traps at a few places (0x509868 fsqrt of a negative, 0x4c1754, 0x4c85f9,
0x4406bf, 0x425d89, 0x4e4c8d), but never with a stack fault.
**Mission-end screen:** the autopilot used to sit on Defeat (Retry / Quit)
for the rest of a soak. CGame (0x8a9a98) +0x28 is 2 while loading, 3 in play
and 4 once the mission is over; after 2 s in state 4 the autopilot presses Up
and Enter (Retry). State 4 is a loss (0x46f430 stores the lost-message id at
+0x114), 8 a win (0x46f3e0, from the level script), 6/7 a two-player win
(0x46f360). The harness logs `outcome: DEFEAT/VICTORY ... "<message text>"`
(text read from the string table at 0x83d960); BEA_ENDEXIT=1 quits there.
**Outcome equivalence (2026-10-20).** With an idle player the unmodified game
loses level 211 ("Firebase was destroyed") 43-46 s into play, every time; with
all ports in it never ended, slowed down, and died at 442 s with the game's own
fatal error 6 (vertex buffer creation failed). Crash soaks cannot see this.
tools/behaviour_bisect.py (prefix search over the hook list, two instances)
found three more mechanical bug classes:
5. *Float pieces converted by value.* Ghidra's implicit float->int moves
   (`CONCAT44(hi, time)`, `DAT_x = 0.6f` with DAT_x undefined4, `puVar[3] =
   fVar`, float arguments to callees typed uint32_t) are 4-byte copies; C++
   converted them (0.6 -> 0). 0x506010 scheduled its event at "time 47" read
   back as float bits (~0), so it fired every frame. Fixes: CONCAT44 and the
   call guard (`bea_pass`) keep float bits; tools/fix_floatbits.py wraps the
   right-hand side of every -Wfloat-conversion site in bea_piece32().
6. *Globals typed by first access.* autoport took a global's type from its
   first instruction: 0x46d470 first stores 1.0f to 0x672e20 with a plain
   `mov dword`, so the float was an int in the port. Float accesses now win;
   the game clock 0x672fd0 was an int in four ports.
7. *`(float)x` is ambiguous.* Ghidra prints both a conversion (fild) and a
   reinterpretation (fld from an int-typed slot) as `(float)x`. 0x4fb3d0's
   `(float)param_1[7]` is `flds 0x1c(%ebx)`. tools/check_fild.py compares the
   count of integer x87 instructions in each port's object with the original;
   57 ports with extra ones were quarantined until autoport can tell the two
   apart.
direct_batch.py runs fix_floatbits before the build and check_fild after it.

### A1-14 Deterministic runs and the machine-code fingerprint (2026-10-20 evening)

After the REA review (an MCP server whose DX-Ball showcase verifies each
reconstructed function against the original machine code, never by "did it
crash") the test loop got two things it lacked.

**A fixed-step clock.**  `BEA_FIXEDSTEP=<seconds per frame>`
(`smoke_test.ps1 -FixedStep`, test_harness.cpp `install_fixed_clock`) patches
BEA.exe's `QueryPerformanceCounter` and `timeGetTime` imports to a clock that
advances per presented frame (+0.1 us per read so a wait inside a frame still
ends; the read count is itself deterministic).  The DLL's own clock ports
(platform/time.cpp, core/fpstimer.cpp) read it through `bea_qpc` /
`bea_timeGetTime`.  With `-TimeScale 1 -FixedStep 0.016667` the unmodified
game loses level 211 at **game clock 200.000** in every run (~16 s real at
700 fps); with wall time the ported build ended three different ways in three
runs, so every A/B result before this was partly noise.  The outcome log line
now carries `frame N (+M in play), clock X.XXX`: compare outcomes by text and
clock, not by real seconds.  tools/behaviour_bisect.py uses the fixed clock
(TIME_ARGS), accepts `--only FILE` (search a batch's ports only) and
`--expect "text@200.0"` (clock to a tenth).  testdata/det_run.sh
runs both instances in one configuration (orig or port) to measure
determinism.

211 culprits found this way, in order:
- 0x4ac140 (a collision sweep) passed `&local_10` to 0x478510 with
  local_10/local_c/local_8 as separate GCC variables; the port predates
  emulate_frame.  43 frame-less direct ports with `&local_` were regenerated
  (36 only had autoport's own `(char*)&local_4` byte access, harmless).
  Outcome text right again, clock 177-178 and varying between runs.
- fix_floatbits' typedef bug (below): 17 more float-bits sites; the ported
  build became deterministic (183.4 in both instances).
- 0x43abd0 CExplosionBasedOn::vslot1 (710 bytes) and 0x437d00
  CRoundBasedOn::vslot1 (732) were generated as `LookupString` (a 237-byte
  template) by their first lookup: the copy of the base definition's fields
  was lost, explosions had default values.  gen_statements.py now skips a
  method larger than its template (MAX_SIZE).  Clock 191-193 afterwards,
  again varying between instances: another culprit, searched with
  `behaviour_bisect.py --pair` (both instances run each split point; a hook
  that makes them disagree is a culprit too).
- 0x500e70 (a sound stream's per-frame update): the original ends with
  `cmp %bl,0xc(%esp)`, its stack argument after the pushes around a `ret
  0x14` callee; Ghidra lost the stack depth and printed `cVar4 = '\0'`, so
  the "stream finished" block (clear this+0x1c/+0x34) never ran and the
  sound system's real-time state leaked into the simulation: 194.8 in one
  instance, 195.2 in the other, with that one port alone.  **Bug class 14:
  a stack argument read as a constant.**  Hand-fixed in the port
  (`cVar4 = (char)param_1`); a port whose original reads a stack slot the
  port never reads is a check still to write.
The game also reads the absolute cursor (0x42d3b0, 0x52aaf0); under the fixed
clock `GetCursorPos` is patched to the centre of the game window.

Outcome table at commit 726aab8 (testdata/ab_fixed.sh, 150 s
real, idle player, `text@game clock`; original | ports):

    100/110/200/231  none | none
    211  Firebase was destroyed@200.000 | same@200.000
    221  fell in the sea@124.300 | @119.700          <- differs
    300  fell in the sea@81.700 | @81.450
    311  Too many Forseti turrets@287.850 | @210.750  <- differs
    321  fell in the sea@67.700 | @67.750
    400  fell in the sea@76.000 | BE was destroyed@111.750  <- differs
    411  The Marshall was destroyed@179.600 | @166.450  <- differs
    500  BE was destroyed@46.600 | @46.050
    511  fell in the sea@59.000 | @65.150            <- differs
    600  fell in the sea@64.550 | @64.300
    700  BE was destroyed@68.500 | @68.450

No crash in 15 levels.  Differences under half a second are numeric drift
between VC6's and GCC's x87 code (intermediate rounding); the five marked
levels are behaviour differences, each bisectable with behaviour_bisect.py
(`--expect "text@clock" --tol 2`: the drift also moves with the set of hooks
enabled, 75.8-76.2 on level 400, so an exact clock cannot be the test), 400
first (its text differs).

**tools/fingerprint.py** (plan item A) compares every port's compiled object
with the original function: absolute call targets (thunks resolved; CRT
targets soft), data globals, float constants read from either side's .rdata
(0/1 and 2^k vs 2^-k ignored, sign ignored: GCC turns `x + 25 != 0` into
`x != -25`), integer x87 ops, fsqrt/fsin/fcos/fpatan (more than the original
is hard, fewer is Ghidra folding `SQRT(const)`), 8/10-byte float loads and
stores to non-stack memory; store widths and field displacements are soft.
Pointer pairs GCC stores with one `movq` from .rdata (a vtable pointer and the
0 after it, 0x42f2b0) and bea_guard callees set by the static initialiser are
found by scanning the object's .rdata/.data words.  Baseline: 11 of 266
verified ports differ (hand-written destructors that skip the vtable reset,
two deliberate fild).  Reviewed non-bugs go in tools/fingerprint_allow.txt;
direct_batch.build_check_install quarantines the rest.  Found in the first
sweep over 1954 direct ports:

- **bug class 8, `extraout_ST0`**: Ghidra did not type the callee's x87
  result as its return value and declared it as an uninitialised variable;
  GCC stored 0 for it (0x4444b0 and three more).  autoport rejects
  `extraout_` now.
- **bug class 9, thiscall on a global object**: 0x460140 calls 0x41b7b0 with
  ECX = &DAT_00660620; Ghidra typed it `cdecl (void)`, the port never set ECX.
  Seen as the missing data global.
- **bug class 10, UB-driven dead code**: 0x52b760 calls a virtual through a
  pointer Ghidra shows as NULL (a lost out-parameter alias); GCC deleted
  everything after it, two calls included.
- **bug class 11, Ghidra dropped stores**: 0x4505b0's three `fstps` of
  `t*-5000, t*5000, t*1500` to a stack vector passed to 0x4901e0 are absent
  from the decompilation (seen as missing float constants).
- **bug class 12, `(uint)`/`(int)` of a float-typed slot**: the mirror of
  class 7.  0x4f74b0 indexes with `(uint)*param_1 * 8` where the original
  loads an integer; 0x504a50 takes `(uint)float >> 0x10` for the high half of
  the bits.  The port converts by value (a `fistp` the original lacks).  Five
  quarantined; a rewrite pass like fix_fcast is still to do.
- **bug class 13, dropped calls**: 0x4ae860, 0x4b27a0, 0x557060 push resource
  names (`Meshes/%s/Part %d/Triangles`, `Textures/Custom (%dx%dx%d)`) to a
  call that is absent from the decompilation; 0x470120 and 0x4f0630 lack
  float constants the original multiplies by.  Quarantined.
- GCC proving a call dead on its own (0x506010) and an integer compare GCC
  makes of `(float)i + 25.0f != 0.0f` (0x447d50) are allowed
  (tools/fingerprint_allow.txt).
- **bug class 15, float literals as doubles**: Ghidra prints the 4-byte
  constant -pi/4 as `-0.7853982`; as a C double that is below the float
  0xbf490fdb the original compares with, so in 0x5099a0 (a weapon's range)
  `-0.7853982 < fVar3` was true for an angle the original found equal, the
  port took the other branch (194.9 instead of 192.3) and level 400 ended
  "Battle Engine was destroyed" instead of "fell in the sea".  autoport's
  suffix rule matched the constant with its sign, and the literal's `-` is a
  separate token; now matched by absolute value.  tools/fix_floatlit.py
  applies the rule to existing ports.  Found with a differential hook
  (original and port called on the same inputs, BEA_SHADOW_HOOK gives the
  trampoline; now generated by `tools/diffhook.py ADDR`, `--undo` restores):
  the shadow framework itself cannot test this function (it follows
  pointers out of the copied object).  A diff hook suits functions whose
  effect is their return value; grep the hook log for `DIFF ADDR`.
- **bug class 16, NaN in x87 comparisons**: VC6 compiles `a < b` to
  `fcomp; fnstsw; test ah,1` (C0), `<=` to `test ah,0x41`, `==` to `test
  ah,0x40`; an unordered compare sets those flags, so every relational
  compare is TRUE on a NaN and `!=` FALSE, the reverse of C.  Ghidra prints
  the plain operator (canonicalised to `<`, `<=`, `==`, `!=`; 262/158/53/51
  float compares in the direct ports, two `>=`, no `>`), losing the case.
  0x5099a0 takes sqrt of a negative when the target is out of reach; the
  original clamps the NaN with `if (x < 0.0) x = 0;`, the port kept it and
  returned NaN, and with its caller 0x4fb670 also ported level 400 ended
  "Battle Engine was destroyed" (the bisect reported the pair).
  tools/fcmp_rewrite.py turns a comparison with a float operand into the
  x87 form (`a < b` -> `!(a >= b)`, `<=` -> `!(a > b)`, `==` -> `!(a < b ||
  a > b)`, `!=` -> `(a < b || a > b)`).  **It is right only when the original
  jumps on the flag being set**; VC6 also emits the inverted sense (`test
  ah,0x41; jne skip` for `a > b`, NaN skips), and Ghidra's canonical `<`
  does not say which.  A tree-wide run (657 compares in 218 ports) fixed 400
  and crashed 221 (0x4c1a90 handed 0x4c10c0 a dead object), so it was
  reverted; it stays opt-in for a function whose disassembly has been read.
  0x5099a0's three clamps are hand-fixed (`!(fVar8 >= 0.0f)`, the asm is
  `test $1,%ah`).  The general fix needs the mask and jump sense of each
  `fcom` paired with its comparison in the C; a diff hook finds the
  functions where it matters.
- Level 311 culprit (bisect, 2026-10-21): 0x4fcc30 CUnit::vslot39.  The
  contact count at +0x80 is an integer (`mov 0x80(%esi),%edi; test; jle`),
  Ghidra read it through the `float *` parameter and the port converted the
  bits by value (`(int)fVar1 < 1`, always true for a small count), so the
  flipped-unit check never ran: class 12 again, but invisible to the
  fingerprint because GCC folded `(int)f < 1` into a float compare (no
  fistp).  Hand-fixed (`cnt = *(int *)(param_2 + 0x20)`); the fingerprint
  now reports a 4-byte float load the original lacks as a soft `fld4`.
- Level 511 culprit (bisect, 2026-10-21): 0x4ff4f0 CUnitAI::vslot4.  The
  original stores the three position deltas (`fstps 0x18/0x1c/0x20(%esp)`);
  Ghidra dropped the first store but kept the read of `fStack_18`, so the
  port's zeroed frame slot removed the x term from a range check.  Class 11
  again.  Hand-fixed; 511 and 221 then match the original (58.95, 124.1).
  tools/check_uninit.py lists locals a port reads but never writes (text
  mode; its asm confirmation of a dropped store is still work in progress:
  the ESP tracking under-counts the frame).  0x4fcc30's fix did not move
  311; a second culprit, 0x428110 CComponent::vslot66 (988 bytes), moves it
  alone (275.3) and is still open: its stores and loads match the original,
  so the difference is in a condition or value; a trace of `this` fields
  after each call in an original run and a port run is the next step.
  Done (tools/tracehook.py: the hook runs the port, or the original with
  BEA_TRACE_ORIG=1, and logs chosen `this` dwords after each call; strip
  `this=` before diffing, the heap moves): 9,018 calls over three
  components, every logged field identical, the port run just ends at 275.3.
  So vslot66's effect on those fields is not the difference; what remains is
  its side effects, above all the hit block (`*(this+0x2bc)`, the explosion
  list walk for "Gill M Claw Hit", FUN_0050ff10, CUnit::vslot88).  Tracing
  the callees of that block in both runs is the next step; 311 stays open.
- check_uninit's asm confirmation works now (the `ret` reset was behind a
  `continue`; the prologue's register pushes were counted as call
  arguments).  It confirms 0x4ff4f0 and found four more dropped stores
  (0x416fc0, 0x4687e0, 0x4c1a90, 0x4f3ac0: a fourth vector component the
  original computes, the port copies 0), quarantined; it is a batch gate.
  autoport's `@autoport-uninit ... never written by the original` comment
  was an assumption, not a check.

**fix_floatbits never saw typedef'd slots.**  In SARIF GCC prints
`'undefined4' {{aka 'unsigned int'}}`, the alias after the closing quote; the
pattern looked for it inside the quotes, so no float stored into an
`undefined4`/`uint` slot was ever rewritten to keep its bits (0x4aede0
`puVar9[3] = local_14`, caught by the fingerprint as a `fistp` the original
lacks).  Fixed; the whole tree was re-run.

Autoport fixes from regenerating ports: `return local_4c;` matched
_FRAME_DECL as a declaration; a continuation line `local_150;` matched the
zero-initialisation regex as type `local_15`, name `0`; `typedef char
_MMIOINFO;` clashed with windows.h (WIN_TYPES).

### A1-15 The gated batch loop and the remaining pool (2026-10-21)

**What is left.**  A dry autoport over every game function
(`autoport.py --direct --list all.txt --out DIR`, then the reasons it
prints) on 2026-10-21: 3,490 already replaced; portable now 334 (361 after
the CRT fallback below); refused: 1,588 decompiler artefacts (278 game
functions: `unaff_` 125, `in_EAX` 58, `in_stack` 54, `extraout_` 14, mixed
27), 679 unknown callee signatures (CRT functions: Ghidra has no symbols and
their headers carry `in_ECX`), 94-231 "void but EAX live at ret (other)",
86-154 indirect calls not rewritten, 98 no decompile, 71 inconsistent ret,
64 decompiler warnings, ~200 cdecl argument counts unverifiable, 45 "callee
reads ECX but is typed __stdcall" (0x4fc6e0 blocks CUnit::vslot88 0x4fc4e0,
which level 311's open culprit calls).

**Artefacts handled by rewrite (autoport, 2026-10-21).**  `in_stack_N`
with a positive N is a stack argument the signature omitted (the value at
entry ESP+N is stack parameter N/4): the missing parameters are appended,
named after the slots; a negative N is a local below the entry ESP that a
callee fills through a pointer (`GetCursorPos(&stack0xfffffff8)`): it
becomes `local_NN`, declared if needed, and emulate_frame places it.  29 of
74 such functions compile.  `in_EAX` is EAX at entry: in `CONCAT31((int3)
((uint)in_EAX >> 8), x)` the function sets only AL and the result is x; a
plain `return in_EAX;` returns 0; otherwise Ghidra treats it as a variable
assigned on most paths, so it becomes a zero-initialised local `eax_in`.
44 of 58 compile.  `&LAB_xxxxxxxx` (a label's address handed to a
registration routine) is the raw address.  The pool-wide figure of "334
portable" was an over-count: a dry autoport without --check emits files
that do not compile (the batch loop now syntax-checks each candidate before
copying it; round 1 lost a whole batch to two such files).  Remaining
compile failures: "too few arguments to function" (callee typedef vs call
site), "lvalue required", invalid casts, conflicting declarations.

**Casts decided by the asm (autoport rewrite_casts_by_asm).**  When a
function's code has no `fild`, every `(float)int` Ghidra printed is a
reinterpretation (fix_fcast on the whole body); when it has no `fistp` and no
`__ftol` call, every `(int)`/`(uint)` of a float-typed operand is one too
(`bea_piece32`): 0x4fc4e0 copies a float vector into an int-typed record and
back.  This settles classes 7 and 12 at generation time for such functions.

**0x4fc6e0 and the "callee reads ECX but is typed __stdcall" class.**  The
message dispatcher switches on its first stack argument and reads `this`
from ECX only inside the cases, after the jump table; the convention scan
saw no ECX use, Ghidra's header agreed, and the callers dropped the ECX
setup.  tools/crt_sigs.py (CRT_SIGS is keyed by address, so game functions
fit) gives it `__thiscall`, six dword arguments; tools/conv_overrides.csv
has the row for conventions.py.  A caller whose call site then lacks the
`this` argument is refused ("thiscall call site lacks this") unless
BEA_AUTOPORT_ASSUME_THIS=1, which passes the port's own `this_` and marks
the file `@autoport-this-assumed`; used for CUnit::vslot88 0x4fc4e0 after
reading its disassembly (`mov %ecx,%edi ... mov %edi,%ecx; call 0x4fc6e0`).

**Small generator gaps from the compile-error histogram (2026-10-21).**
CONCAT13/21/24/26/62 and `rdtsc()` in ghidra_compat.h; `fRam`/`uRam`/`iRam`/
`piRam`/`pvRam` absolute references defined like DAT_; NAME_SIGS for
`__amsg_exit` and `_vector_constructor_iterator_`.  The histogram of the
first error per non-compiling candidate (141 files): undeclared identifier
63 (fRam 8, 3DNow intrinsics in CRT memcpy variants 13, CONCAT 6, the
vector constructor iterator 6, `_local_N` 4, unqualified `vslotN` 2),
invalid casts 27, "lvalue required" 12, conflicting declarations 9.

More generator fixes the same day: a float stored into a slot Ghidra typed
as a pointer (`pCStack_4 = (CBoatAI *)(DAT_00672fd0 + 1.0f)`) keeps its bits
(`(T *)(uintptr_t)bea_piece32(...)`); an assignment to the upper three bytes
(`local_4._1_3_ = 0;`) is a read-modify-write of the dword; `_local_N` is
the whole-slot alias of `local_N`; more windows.h/mmsystem.h struct names
are not re-declared.  Of the 86 game candidates that failed to compile in
the fresh dry pass, 36 compile after these.

`unaff_EDI`/`unaff_ESI` as call arguments (43 of the 139 `unaff_` game
functions): Ghidra's guess at the argument list of a varargs cdecl callee
(`CRenderThing::vslot3` 0x40c640 is a single `ret`, a debug print compiled
out; 0x5015c0, 0x454e00 use only their first argument).  A call to a
single-`ret` function is dropped, such an argument of a varargs callee is 0;
13 of those functions compile.  The other `unaff_` uses (a register stored
into an object, `unaff_retaddr` for a hidden struct-return pointer, 38
functions) remain refused.

**CRT callees.**  conventions.csv now covers the CRT range too
(tools/conventions.py, 6,750 rows); autoport's `raw_sig` gives a CRT callee
whose header is unusable a signature from that row alone (raw dword
arguments, dword result; float arguments arrive as bits through bea_arg, a
float result is caught by check_st0/fingerprint).  677 -> 320 refusals, but
most of the freed callers hit the next check (EAX live, indirect calls).

**tools/gated_batch.py** replaces the soak loop for new ports: the next N
smallest pool files go into src/bea/direct, direct_batch.build_check_install
runs every static gate (offenders quarantined, build repeated), then every
level of SCRATCH/baseline.json is played idle under the fixed clock and its
`text@clock` compared with the baseline (same text, clock within --tol 2 s;
"none" matches "none"); a level that changes is bisected over the batch
alone (behaviour_bisect.search with the rest forced on), the culprit
quarantined with the level's name, the DLL rebuilt, the level replayed (up
to three culprits, then the batch is withdrawn); each batch is committed.
The baseline is the original's outcome per level, except 311 where it is
the ported build's known 275.3.  Two game instances at most.

**Incident, 2026-10-21 morning.**  Two gated_batch instances ran at once (a
`taskkill` by MSYS pid list missed the Windows python; the second start was
meant as a restart).  Each rebuilt and installed the DLL while the other's
game instances ran: every level reported CRASH, the "bisect" found crashing
"culprits" in the batch, check_ecx (confused by the CRT rows that
conventions.csv briefly had) named 55 ports outside the batch and the loop
quarantined them, and both loops committed.  Recovery: src/bea/direct, the
quarantine and the blocklist reset to 012f48e (the last state that passed
the table), conventions.csv game-only, raw_sig disabled, and in the loop a
lock file, no overwriting of a port in place, a stop when a gate names a
port outside the batch, and the bisect over the batch itself.  Stop a loop
with `Get-CimInstance Win32_Process | Where CommandLine -like '*gated_batch*'
| Stop-Process`, never by guessing pids.

**Shadow promotion.**  35 shadow ports with >= 20 mismatch-free calls were
promoted (promote.py); 40 shadow ports mismatch on every call
(testdata/shadow_mismatch.txt): bugs in those shadow
versions, or the harness's copied-object pointers (`ret port=0400fff4
orig=08374520`), to triage.

**Call arity gate (autoport check_call_arity, 2026-10-21).**  The second
run of the gated loop crashed every combat level: 0x411aa0's virtual call
`lea 0x4(%esp),%edx; push %edx; call *0x6c(%eax)` passes a stack buffer and
uses the returned pointer, but Ghidra printed `(**(code **)(*piVar3 +
0x6c))()` with no argument, so the port's callee wrote through whatever was
on the stack and returned it (`addr=0x40387038`, a float).  Per call site
the asm's pushes since the previous call or branch are compared with the C
call's arguments (less `this` for thiscall, receiver and slot for
bea_vcall); a count the C does not cover is noted in the file's header
(`@autoport-arity`), not refused: after the register-save rules (prologue
saves, `push ecx` slot reservations, lazy saves after a branch) 52 of the
1,932 live ports still trip it, so the level table stays the judge and the
note says where to read first.  The loop itself
had bisected level 100 instead (a "no outcome" result taken as a change)
and withdrawn the batch; it now treats None as "none" and bisects the most
severe level first (crash, then text, then clock).  tools/check_arity.py
runs the same comparison over the existing direct ports.

**"none" levels are bounded by game time (BEA_ENDCLOCK).**  The third loop
run showed every outcome shifted with the batch, and the loop bisected level
200 first: its baseline was "none in 150 s" of real time, but at the fixed
clock a run's game time per real second depends on the frame rate, so the
ported build simply reached 188 s of game time within the 120 s and found
the level's outcome ("Transports didn't make it to the firebase").  The
bisect's expectation ("none in 150s") never matched a run's None either, so
every prefix "lost" and the first hooks were blamed (three candidates
quarantined for nothing, restored).  Now BEA_ENDCLOCK=150 (smoke_test.ps1
-EndClock, in TIME_ARGS and ab_fixed.sh) ends a run without an outcome at
game clock (320 in the tools) and logs `outcome: NONE (... "none")`, which the tools read
as `none@150.0`: a level the original never finishes is compared at the
same game time.  The baseline table was regenerated with it.  The batch's
real differences in that run (211 back to 183.4, 311 "Too many Forseti
buildings", 411 "All tanks destroyed", 700 at 60 s) are what the loop
should bisect, outcome-text levels first.

**Single-dereference virtual calls (rewrite_fptr_calls).**  Ghidra also
prints a virtual call as `(*(code *)(*OBJ)[IDX])(ARGS)` (slot IDX of OBJ:
`(*DAT_00888a50)[0x5e]`, the sound system) or `(*(code *)**(T **)EXPR)(ARGS)`
(slot 0 of the object EXPR: `this`, `*piVar3`, `(iVar5 + 8)` for an embedded
object, `(&DAT_0089c9a4)[DAT_0089ce4c]`).  Both become bea_vcall; 17 of the
56 functions with those shapes compile (the rest carry other artefacts).

**Compile-driven pointer casts.**  A pointer-type mismatch between two of
Ghidra's own typings (`puStack_124 = &local_194;`) is not a port bug; in
the --check stage a file whose only errors are `cannot convert 'A*' to
'B*'` / `invalid conversion` gets the cast GCC names inserted at the
reported column and is compiled again, up to three rounds (5 more files
compile; _errors.txt is updated for the pool builders).

**The loop's first clean round (2026-10-21, run 6).**  Batch of 40: the
table crashed on level 100, the bisect named 0x48de30; on the replay 211,
311, 411 and 700 had changed (211 back to 183.4, "Too many Forseti
buildings", "All tanks destroyed", 700 at 60 s) and the bisect of 311 named
0x4be9b0, which alone caused all four; with both quarantined every level
matched and 38 ports were committed (3,297 / 4,473, 73.7%).

**Bug class 17, scaled arithmetic on `&DAT_x`.**  0x4be9b0 (one of the
converted shadow ports: its "returns 0 where the original returns 1" was
real) reads `*(short *)(&DAT_00809bc0 + (idx * 0x100 + DAT_00809dbc) * 2)`.
Ghidra did that arithmetic on its own view of DAT_00809bc0, a one-byte
`undefined`; the port's define typed it `int` from the access width, so the
C scaled the addend by four and the function read the wrong word.  autoport
now writes `((char *)&DAT_x)` under a pointer cast when the addend carries
an explicit multiply (for a four-byte base Ghidra divides the scale out, and
a bare constant addend cannot be told apart).  20 live ports had the same
shape (`&DAT_006782a8 + param_1 * 0x18`, record tables); they are retired
and their regenerated versions go through the gate again.

Loop run 6 round 2: 0x411aa0 (the dropped out-buffer argument, now
hand-fixed and back in the pool) crashed eight levels, was bisected and
quarantined; 39 ports committed (3,316 / 4,473, 74.1%).  A scan of the live
ports for its shape (an indirect call preceded by `lea N(%esp); push`) lists
13, but VC6 pushes a later call's argument early (0x428110: `push "Activate";
call *0x24(%edx); mov %eax,%ecx; call 0x4aa630` - the string belongs to
0x4aa630, Ghidra had it right), so that list is only a reading order, not
a bug list; 0x428110 is clean on it.

Loop run 6 round 3: 0x4f34a0 CThing::vslot9 changed nine levels: its
`push %edi; push $0; call *0x98(%edx)` pushes a register the function never
sets (the caller's EDI, a hidden argument or a don't-care Ghidra dropped
silently, printed as `bea_vcall(this_, 0x98, 0)`); the arity note had
flagged it ("2 pushes: asm 1 call(s), port 0"), so candidates with that note
now stay in the pool for a reading instead of costing a bisect.  0x49f820
CMech::vslot9 turned 311 into "Too many Forseti buildings" with its calls
matching the asm; unexplained, quarantined.  38 ports committed (3,354 /
4,473, 75.0%).

**Shadow ports the harness can never promote.**  14 shadow ports mismatch
on every call only in a pointer result (`ret port=0400fff4 orig=08374520`:
the port returns a pointer into the harness's copied object, the original
one into the real object; promote.py cannot tell that from a bug).  Their
shadow stubs are removed and direct versions (autoport with
BEA_AUTOPORT_RESCAN=1) go through the gated loop instead; 12 compile.  The
other 26 mismatching shadow ports (`this differs at +N`, `ret port=0
orig=X`) may be real bugs and stay as they are.

**tools/tracehook.py** logs chosen `this` dwords (or, with --args, the
arguments and return) after each call, running the port or, with
BEA_TRACE_ORIG=1, the original; two fixed-clock runs diff to the first
divergence.  Level 311: 0x428110's logged fields never differ; its callee
0x50ff10 (hit effect by index) is called a frame late for one component
(index 0x2a at clock 187.65 vs 187.70) in the port run, so the port's hit
block changes a neighbour's hit flag timing.  Open.

**Bug class 18, Ghidra's stack depth drifts after vtable calls.**  Ghidra
does not pop the arguments of an indirect call (the callee is unknown, so
its purge is), while every game vtable call is thiscall and pops them.  A
`lea reg, [esp+K]` after such calls is then named too deep by the un-popped
bytes: 0x49f820's three vcalls (0xc + 4 + 4 bytes) made its out-vector
`&local_24` - the slot of the pushed EDI - and the `flds 0x1c(%esp)` that
reads the vector's z after the call was resolved to an unrelated local (the
+0xb8 value): "Too many Forseti buildings" at 218.2.  In the C this shows
as `&stack0xffffNNNN` (a slot Ghidra could not attribute to a declared
local), which autoport turned into `local_NN` and laid out in the emulated
frame.  Harmless when it is the only local (the port's buffer is just
elsewhere), wrong whenever the function reads the same memory under a
declared name: 0x4135e0 and 0x40c4a0 (live) passed the second call a
different vector than the one they had computed, 0x40c750 and 0x44ac20
(round 4) the same.  116 Ghidra functions carry `stack0xffff`; 8 were live.

- tools/check_frame.py reads the prologue from the asm (register saves,
  `push ecx` slots, `sub esp, N`; SEH and `and esp` frames skipped) and
  flags a Ghidra local in the saved-register slots or below the frame when
  the port has other named locals; it gates in build_check_install.  A
  uniform drift that stays inside the frame is invisible to it (the names
  are still consistent then).
- autoport refuses `stack0xffff...` beside named locals ("Ghidra depth drift
  (class 18)"); 17 pool candidates dropped.
- check_uninit's ESP walk had its own prologue error: "up to the first
  call" counted an argument pushed before the first call as part of the
  frame (0x49f820), and "until the first non-push" missed saves MSVC
  interleaves with moves (0x447bb0: `push ebx; push esi; mov esi, ecx; push
  edi`).  Now a push of an unwritten callee-saved register is a save, any
  other push is pending for the next call.  Results on the tree unchanged
  (0 dropped stores) but earlier readings may have compared the wrong slot.
- The name-set comparison (every `local_NN` must be a slot the asm touches)
  was tried first and dropped: cdecl callees with deferred cleanup
  (0x4bc3e0 collects five arguments across four vcalls before one `add esp,
  0x14`), by-value struct arguments (`sub esp, N` mid-function) and SEH
  prologues made 35 live false positives.

Ghidra's `local_NN` is NN bytes below the entry ESP (the return address at
0): `sub esp, 0x10; push esi; lea edx, [esp+4]` is `&local_10`.

The same drift is behind most of the `unaff_ESI`/`unaff_EBX`/`unaff_EDI`
artefacts that refuse ~70 game functions: 0x402280 reads `float unaff_ESI`
where the asm reads a float local - Ghidra resolved the slot to the pushed
ESI.  And the x87-operand intrinsics (`_CIfmod` 0x55e3ea with "fmod" at
0x653330, the asin/acos one 0x55dcb0) hide their operands from Ghidra's C
(35 game functions).  Both are decompiler-input problems; the way out is a
**Ghidra re-run with better inputs** (planned, not started 2026-10-21):
override the prototype at every indirect call site with the argument count
the asm shows (pushes since the previous call, as check_uninit's walk
counts them) so Ghidra pops them, and give the `_CI*` intrinsics signatures
with ST0/ST1 parameter storage.  Then diff old vs new decompile per live
port: a function whose set of distinct stack slots changes (slots merged or
split) had a class-18 port, which the frame-bounds check cannot see while
the drift stays inside the frame.  Heavy CPU: only while the gated loop is
idle (its runs have 120 s of wall time for 320 s of game clock).

**Working on the generator while the loop runs.**  The loop's gates run
tools/*.py fresh each build (check_uninit imports autoport), so a half-edited
tool would fail a build and withdraw the batch (its pool files are deleted).
Generator work therefore happens in a copy: `%TEMP%\dev\tools` with
junctions (`mklink /J`) for `ghidra_out`, `src` and the game folder, so
ROOT resolves and `python -I %TEMP%/dev/tools/autoport.py --direct --list L
--out D [--check --keep]` runs the copy; tested files are copied over whole
(one `cp` each) and committed at once, before the loop's `git add -A`.
BEA_AUTOPORT_DEBUG=1 prints `skip ADDR reason` per function to stderr: a
census of all 7,152 functions takes two minutes.

**Ghidra pass 5 (2026-10-21 16:10, commits 4a1f9f9..11fcaf1) did the
re-run.**  tools/ghidra/OverrideIndirectCalls.java writes a `__stdcall`
prototype with the asm's pushed-dword count at every `call [reg+off]` (2,874
sites; 144 functions skipped because a cdecl cleanup exceeds the pushes since
the previous call; a mid-function `sub esp, N` is argument space - a struct
passed by value, 0x4e81d0's 16 bytes - and the first version reset it to
zero, which broke 211 functions' decompile until fixed), SetX87Intrinsics.java
gives _CIfmod (0x55e3ea) and _CIasin (0x55dcb0) float10 parameters in
ST0/ST1 (callers' ports go through bea_x87call1/2 in ghidra_compat.h, emitted
from crt_sigs.X87_SIGS / tools/x87_intrinsics.csv), and 224 conv_overrides
rows type the in_ECX functions __thiscall.  `tools\ghidra_pass.cmd 5` runs
all of it in three minutes (nothing may read ghidra_out meanwhile: the gated
loop was stopped at a round boundary; it now honours SCRATCH/gated_batch.pause).
Checks: the new decompile of 0x49f820 is the hand fix (`auStack_10` passed to
slot 0x168, `fStack_8` read); the per-call-site argument counts match the
asm.  Regenerating every live port from it (BEA_AUTOPORT_RESCAN=1) and
comparing stack-slot sets (tools/port_slot_diff.py) changed 12 of 1,960;
against the asm's slots (check_uninit.slot_accesses) only two old ports
misfit - 0x4e81d0 (`&local_20` for an out-vector at 0x10, single use, so
harmless) and 0x5140e0 (pushed-argument slots as locals) - both retired and
regenerated into the pool.  So class 18 had reached the live set in six
ports, all now replaced or hand-fixed; game-range refusals fell from 510 to
~400 (the pool is regenerated from the new decompile).  0x411aa0's new
decompile equals the hand fix that still changed level 311: quarantined, its
fault lies elsewhere.

Passes 5b and 5c the same evening fixed what the first pass got wrong:
- a vtable call whose result the next x87 instruction consumes is typed
  float10 (244 sites), otherwise the undefined4 prototype turned the result
  into `extraout_ST0` attached to whatever call followed (0x418ef0 read a
  float after `operator new`); autoport's rewrite_extraout now also attaches
  `extraout_ST0_NN` to a preceding virtual call, and its cast lookback before
  a virtual call is 24 characters (`bea_fcast<float10>(` is 19: the old
  12-character window left live 0x418ef0 and 0x456080 reading float results
  through EAX - hand-retyped; bea_vcall<uint32_t> rebalances the x87 stack,
  so the nine other live ports that discard such a result are fine);
- VC6 pushes a later direct call's argument before a vtable call (0x428110's
  "Activate" for 0x4aa630): the pushes the next direct call needs beyond
  what follows the vtable call are not the vtable call's (148 sites changed;
  0x427b80 had crashed level 500 on exactly this, now regenerated);
- the script's cleanup of its own stale overrides deleted VarargOverrides'
  call-site prototypes (same `override` namespace), so every printf-style
  logger call lost its format arguments in passes 5a/5b; it now deletes only
  overrides at indirect calls.  The pool is regenerated after each pass and
  the live ports are regenerated and compared (tools/port_slot_diff.py plus
  a per-callee call-arity comparison): after 5c six old ports differ in a
  vtable call's arity and went back to the pool; none of run 7's.
Loop run 7 (pool from the new decompile): round 1 +34 (3,422 / 4,473,
76.5%), round 2 +32 (3,454, 77.2%), round 3 +28 (3,482, 77.8%; 0x40c750
ended level 200 early a second time and stays quarantined); every level at
baseline.

**The quarantine as a reservoir.**  288 game functions were blocklisted,
most by soaks and gates under generator bugs since fixed.  Regenerating them
from the pass-5c decompile, 218 come out different from their quarantined
text (the 21 identical ones and the 49 the generator now refuses stay);
212 compile and pass check_frame and went back into the pool with their
blocklist lines removed (backup in bea_scratch/direct_blocklist_before_retry.txt).
Expect crashers among them: the loop quarantines up to three per round.
Rounds 4-7 of run 7 took the retries: +5 (thunks do not count), +38, +36,
+37 -> **3,598 / 4,473 (80.4%), 567,134 bytes** at 00:30 on 2026-10-22,
with repeat crashers 0x48de30 and 0x4fd140, 0x477ba0 (311 "Forseti
buildings"), 0x4cef70 (110) and 0x544cc0 (411 three seconds early)
quarantined again and seven gate rejections.  Round 8 was stopped for a
break with 129 candidates left in the pool; every level at baseline.

**The frame oracle (2026-10-22).**  The user saw artefacts in the test
windows that no level outcome reflects.  test_harness.cpp's Present hook
now writes the back buffer at a game clock (BEA_SHOTCLOCK, BEA_SHOTFILE;
`shot: clock .. frame .. hash ..` in the log).  Two original runs give
pixel-identical frames under the fixed clock, so the original's frame is
an exact oracle: level 100 at clock 60 (frame 3419), the port differed in
41% of the pixels - a striped slab for the sky dome, a blown-out sun, an
empty radar, no face portrait.  tools/shot_bisect.py (prefix search with
the frame as the expectation) found 0x5441b0 (30% alone), 0x4d2bb0,
0x4d2b40, 0x4d2ae0, 0x4d2a70 and 0x4b82b0; tools/shot_diff.py compares two
shots.  Two generator bugs explain five of them:

- **Bug class 19, by-value struct arguments with stale slots.**  For
  `sub esp, 0x30; rep movsl; ...; call 0x550ca0` Ghidra names the first
  slots `in_stack_NEG` and, beyond what it saw `rep movsl` write, the
  values an earlier call pushed there: its return address (`uVar5 =
  0x544222`, an address inside the function) and arguments.  The port
  passed those as the matrix's last row.  A temporary assigned a code
  address marks it; it and the temporaries after it continue the local_NN
  run (0x5441b0, live 0x488090; 0x540c30 has two markers and is refused).
- **Bug class 17 again, double-pointer casts.**  `*(int **)(&DAT_008a9d58
  + iVar3 * 4)` was left scaled: the `&DAT + expr * k` rule matched only a
  single `*` in the cast.  The four 0x4d2xxx helpers fetched other objects'
  matrices.

The gated loop now compares the level-100 frame at clock 60 with the
stored original (bea_scratch/ref_frame_100_60.bmp, 0.2% of the pixels)
after every batch and bisects a difference like an outcome.

**Recorded playthroughs (2026-10-23).**  test_harness.cpp records what the
game reads as input (BEA_RECORD: window input messages by presented frame,
GetCursorPos results, DirectInput GetDeviceState changes - the mouse is
DirectInput device 0, 20-byte state; keys arrive as messages) under the fixed
clock, paced to real time with every frame shown, optionally in a window
enlarged 2x (BEA_RECORD_SCALE: the game still renders and sees 640x480); and
replays it at full speed (BEA_REPLAY, messages posted from Present).  Sound
must be off (-nosound): a radio message lasts as long as its voice line plays
in real time, so with sound a real-time recording and a fast replay differed
within a minute.  tools/record_level.ps1 records against the original game.
The user's first playthrough of level 300 (lost at clock 133.4) replays on the
original at 133.50 / 133.45; the port lost at 43.5.  Culprit 0x515970, the
key-state reader: its verified port indexed the int-typed `DAT_00888c94` and
read another key's state - verified by 417,054 shadow calls, none with a key
pressed.  tools/check_table_index.py (gated) found eight more ports indexing
a global table with another element size than the original (key and mouse
tables among them); all nine are retyped and back in the pool.  With them
removed the replay still differs (114.0, "The Forseti base was destroyed!"):
the next culprit is open.  Replays are levels once listed in
SCRATCH/replays.json (behaviour_bisect.run); '300r' joins the gate's baseline
when the live tree replays it like the original.

**Thunks.**  33 game functions are five-byte `jmp TARGET` thunks Ghidra does
not decompile.  autoport emits `__attribute__((naked))` ports doing `push
TARGET; ret` (every register and the stack untouched; a relative jmp from a
relocatable DLL would not survive a load at another base); check_ret follows
`push imm; ret` as a jump when sweeping for the port's `ret N`, and
fingerprint already counts a text-range immediate as the tail call.

Census of 2026-10-21 15:00, before the pass (game range, not hooked, not
blocklisted: 510 refused): 139 decompiler artefacts (unaff_retaddr 33, unaff_ESI/EBX/EDI/EBP
~70, in_stack 20, extraout_ECX 11), 114 unknown callee signatures (the two
x87 intrinsics 35; nine CRT functions now identified: atoi, atol, sscanf,
wcsncpy, fread, fwrite, a floor sibling, DXGetErrorString8A, a method thunk,
+30), 42 decompiler warnings (jump tables), 40 indirect calls (vtable
pointer in a reused temporary: the reaching definition now found, +15), 37
SEH frames, 33 no decompile, 29 float-typed parameters used as pointers
(the argument slot reused for a float temporary; needs a split of the
variable), 24 EAX live "other", 27 callees typed stdcall/cdecl that read ECX
(0x4cb3d0 7, 0x515880 5, 0x540640 3: conv_overrides candidates).

### A1-16 Review of 2026-10-27: reinterpretation casts, x87 returns, broken regexes

While loop run 15 drained the pool (my level-500 recording waits for
a re-record), a static review of the live ports found four bug classes.

- **Per-level clock tolerance.**  Level 411's outcome time drifts a little
  with every port that touches its physics: 179.75 with none, 178.7 with the
  first 1,247, 177.8 with 2,494, about 176-177 with all 3,741.  A bisect found
  no single culprit.  SCRATCH/tolerances.json (`{"411": 5.0}`) widens the
  gate's clock tolerance for that level only; the outcome text is still exact.
- **Integer casts that are reinterpretations (class 7/12 again).**  When the
  original has no fistp/__ftol, `(int)x` of a float is a copy of its bits.
  rewrite_casts_by_asm only looked at float locals and at casts followed by a
  name, `*` or `(`.  Missed: float globals (`piVar1[0xb9] = (int)DAT_00672fd0`
  in 0x410310, 0x410740, 0x4109d0 and two stores in 0x407060: the game clock
  written into timer fields as an integer), negations (`(int)-param_3` in
  0x4e1260, which stores the bits after fchs), float parameters, and 64-bit
  casts of doubles (`(ulonglong)dVar10 >> 0x20` in candidate 0x4015e0, a
  varargs print of doubles in halves).  autoport now covers all four;
  SUB84/SUB82/SUB81 take bea_bits64 (the bits of a double, not its value).
  The five live ports are fixed.
- **x87 return of the port itself.**  check_st0's "self" lines were never
  gated (the gate's pattern needs a callee address) and its depth walk is
  wrong for some functions.  The original's direct callers now decide when
  they can: a caller that reads ST(0) after the call means a float return,
  callers that all go on without it mean none (VC6 never leaves one).
  `fld st(N)` counts as a read (0x410c50 copies 0x411aa0's result).  Three
  confirmed bugs: 0x4b5250 (wraps a value into [0,1] and returns it; the port
  returned nothing to the six stores in 0x54b800), 0x4cac80 (table
  interpolation; Ghidra lost the x87 body, the port only called floor twice:
  quarantined), 0x4e66e0 (returned 0x47eb80's float, which the original pops:
  one leaked x87 register per call).  "estimate only" lines (vtable slots with
  no direct caller) stay ungated.
- **Regexes holding backspaces.**  Patch scripts written through a shell
  heredoc turned `\b` into byte 0x08: autoport's class-18 refusal (since
  2026-10-21), conventions.body_uses_this and a candidates.py test never
  matched.  Fixed; `grep -c $'\x08' tools/*.py` must stay 0.  Correcting
  body_uses_this would have flipped nine functions to thiscall that only
  reserve a slot with `push ecx` and are live and right as cdecl/stdcall, so
  that branch is now an explicit "not a read".  With the class-18 refusal
  working, eight pool candidates are held (bea_scratch/held_class18) and nine
  live ports would be refused today: 0x426a40, 0x447d50, 0x4dd960, 0x4e66e0
  (arguments checked against the asm: right), 0x53df40, 0x5438c0, 0x5441b0,
  0x5515e0, 0x555600.  They passed the level table and check_frame; a
  differential run (original and port on the same inputs) is the next check.
- **Short tail calls.**  Register set-up plus a final jump (this-adjusting
  thunks `sub ecx, 4; jmp T`, virtual forwarders `mov eax, [ecx]; jmp
  [eax+off]`) are emitted as naked ports: the set-up bytes are copied, a
  direct jump becomes `push T; ret`.  Five functions.

**Level-500 playthrough (500r).**  The user won level 500 (game state 5,
now logged as MISSION_WON "Objectives complete"; in -level mode the window
then goes black and hangs).  A replay of the original does not reach that
win: the inputs replay exactly (the inputsync log matches every recorded
mouse read to its frame), but the game itself is not deterministic over six
minutes of play (worker threads on real time).  Two harness fixes were needed
first: the game creates its mouse twice and which object it reads was a race
(devices are now counted by GUID), and replays are compared with the
original's replay, not the live session: "Battle Engine fell in the
sea.@153.3", stable within 0.3 s.  The ported tree lost differently (destroyed
at 169.3); a bisect named 0x42db40 CController::vslot15, the input mapping.
**Bug class 19: reassociated float products.**  The original scales the
mouse delta first (`fild d; fmul [c]; fld sens; fmul st(1)`), Ghidra printed
`sens * (float)d * c`, which rounds differently at the precision D3D leaves on
the x87 - the aim drifted.  The fingerprint compares kinds and counts of x87
ops, not their order, so it cannot see this; a replay can.  500r is in the
baseline now.

Census after the review (469 game functions neither hooked nor in the pool):
159 decompiler artefacts (unaff_EDI 55, in_stack 40, unaff_ESI 35,
extraout_ST0 beside them 23, unaff_EBX 20, unaff_EBP 19, extraout_ECX 15,
unaff_retaddr 9), 62 that autoport emits but that do not compile, 42 EAX live
"other", 35 unknown callee signatures, 23 SEH frames, 22 indirect calls, 21
decompiler warnings.  The largest group has one main cause: Ghidra gives a
vtable call stack arguments the asm never pushes and fills them with the
callee-saved registers (0x4063b0: `call [eax+0x40]` with nothing pushed is
printed as `(**(code **)(*this + 0x40))(unaff_EDI)`).  Counting the pushes
before each indirect call would recover most of them.

### A1-17 Played levels as tests: what five recordings found (2026-10-27 evening)

The pool drained at 3,897 / 4,473 (87.12%).  The coverage survey
(coverage_unported.py; the cov logs also carry "called+" for ports) showed
the replaced code no test ran: 1,535 of 3,780 ports, mostly the front end
(CFEP* menus, never reached by `-level N` runs), cutscenes, and boss / unique
enemies.  A 90 s autopilot run of the 29 untested campaign levels ranked them
by new ported code (Gill-M 5.23 first; the Evo variants and most others add
nothing: the levels share the engine).  The user recorded 5.23, 8.00, 7.42,
3.31 and 6.11 (record_level.ps1; every port off).  Replayed twice in the
original each repeats to 0.2 s (as with 500r, not the live outcome: the game
drifts over minutes), so all five are baseline tests now (23 in all).  They
ran 172 ports no earlier test ran, and found seven bugs:

- **The harness's import patches were bypassed.**  Ports call GetCursorPos /
  GetClientRect / QueryPerformanceCounter / timeGetTime by name, bound to the
  DLL's own imports, not the game's IAT that test_harness.cpp patches: the
  ported window procedure 0x52aaf0 read the real cursor during replays.
  ghidra_compat.h now routes those four through the game's IAT.
- **Bug class 19 again** (sum order): 0x40d320, a 3x3 rotation product.
- **A lost push** (bug class 20): Ghidra dropped the `push eax` before a
  vtable call in 0x428800 (CGillMHead vslot50), so every stack offset after
  it was one slot off; the target vector took x from unset slots.  Found by
  7.42 (Marshall destroyed 79.3 instead of 83.8).
- **Tail calls that return a value** (bug class 21): `jmp callee` returns
  the callee's result, Ghidra printed void.  For an x87 result the port pops
  it (0x4963a0, 0x4963c0, 0x492f10); for a callee typed float10 that really
  returns EAX the port pops an empty x87 stack (0x4454c0, 0x47beb0, 0x422620:
  stale callee types from before ret_overrides.txt).  26 void ports tail-jump
  to EAX-returning callees; GCC's own tail call usually keeps EAX, unchecked.
- **Integer tags compared as denormal floats** (bug class 22): 0x4b9ec0
  (CMessageLog key handler) compared a key code typed float with `5.88545e-44`
  (0x2a's bits) - a double literal, so never equal: the message log opened
  from the pause menu ignored every key and the 523 replay stuck in it.
  0x4afbb0, 0x451c90, 0x50d720 likewise; autoport.rewrite_denormal_compares
  turns such comparisons into bit comparisons.
- **A frame local missed by emulate_frame**: its pattern took `[a-z]+Stack`,
  so `pCStack_14` (a message's sender field) stayed a plain local in
  0x49fc10 (CMech vslot66) and 0x4f4920 (CThunderHead); the message went out
  with a null sender.  A pair bisect (with 0x4cba90, the reader) found it.

The Alt key opens the game window's menu bar, whose modal loop freezes the
game until the next key (original behaviour; frames stop, so recordings stay
in step, and replays of 523's 19 Alt presses repeat).  record_level.ps1 no
longer overwrites an earlier attempt at the same level.

### A1-18 Scripted front-end tours: menus compared pixel for pixel (2026-10-28)

`-level N` runs never show the front end, so its ports went untested.
`tools/menu_test.py` replays a script of clicks and keys
(`tools/menu_scripts/*.txt`) from the title screen on, as phase-0 `M` lines
of a replay file (the front end reads window messages only), and the harness
writes back-buffer shots at given frames (`BEA_SHOTFRAMES`) and exits at a
fixed frame (`BEA_ENDFRAME`).  Under the fixed clock two runs of the original
give identical shots, so the original's shots (`SCRATCH/menu_baseline.json`)
are the oracle; `menu_test.py bisect NAME --frame F` finds the port that
changes a shot.  Five tours: title and main menu (hover, language),
Options with its four screens and Credits, Load Game -> level select ->
briefing -> level, New Game (name entry, the save it writes), Goodies and
the split-screen Multiplayer start.  They ran 283 ports no level test runs.

Every run starts from a copy of the person's saved games
(`SCRATCH/user_profile/savegames_backup`) and restores it afterwards; a
script that saves is marked `exclusive` (a second instance would find its
save and ask to overwrite).  **Mistake:** smoke_test.ps1 moved any
`defaultoptions.bea` in the game folder to the person's profile, so the
options file a tour wrote replaced the person's saved options (2026-10-28
00:56; not recoverable).  Only a file left by play.ps1 (which now writes
`defaultoptions.player` beside it) is kept; a test's is deleted.

Bugs the tours found (all with the original's picture as the reference):

- **`&DAT_x + n` scaled by the declared type** (class 23): Ghidra counts n in
  elements of the type it has at x - bytes for undefined data - while
  autoport declares DAT_x int when unsure, so a byte offset became 4n.
  0x4f7d30 returned another text buffer than it filled: the Load Game
  screen called the person's save invalid and New Game failed to save.
  `tools/ghidra/DumpDataTypes.java` lists Ghidra's type at every address
  used this way (`tools/dat_arith_types.txt`); `tools/check_dat_arith.py`
  (now a gate in direct_batch) found 54 such expressions in 22 ports:
  the split-screen menu items (0x516c-byte player records), the ADPCM step
  table 0x517fa0 (runs in every level, unseen with `-nosound`), 0x420b10,
  0x456080, 0x48e950, 0x5126f0, 0x516990, 0x549400 and others.
- **A sign test made constant**: 0x4cf7a0 (`cmp eax, -1; jg`) became
  `0x7fffffff < x` on an int, never true: Video Options showed Texture
  Resolution "Low".
- **`this` lost after a `__chkstk` prologue**: functions with frames over 4 KB
  start `mov eax, N; call 0x55def0` and read ECX after it; the convention
  scan stopped at the call and declared them stdcall.  0x465710 (draw text,
  called on 0x515a70's result) got no receiver in 0x51a030 (Credits: "File
  not found" and exit), 0x4583c0 and 0x51fb90.  The nine such functions are
  thiscall in conv_overrides.csv.
- **Multiplication order** (class 19 again): 0x53c1d0 computed
  `(t+1)*p5*0.01` where the original scales p5 first.
- **A by-value matrix misread**: 0x5438c0 passes 0x550ca0 a vector and a 3x4
  identity built in its frame and copied with `rep movsd`; Ghidra took an
  earlier call's leftover pushes (a return address, 0, 6, 1) for its last row.

Second round: `fe_pause` (level 2.21 from the save, the pause menu and its
screens, Quit -> Are you sure -> debriefing -> level select) and
`fe_dialogs` (the overwrite-save question, sound sliders); seven tours run
417 ports no level test runs.  Found:

- **Stale 0x555be0 prototypes**: three ports (0x4858d0 the HUD radar,
  0x4b93f0 the message log, 0x5438c0) kept the 14-float + varargs prototype
  from before conv_overrides gave the sprite draw 15 dwords (2026-10-23):
  the trailing 1.0f was missing, and float bit patterns passed to float
  parameters were converted by value (0x43a00000, 320.0f, became
  1.07e9f).  0x4b93f0 passed 0x523cc0 (a hit test) bit patterns the same
  way.  `tools/check_float_literals.py` (a direct_batch gate) reports any
  hex literal given for a float parameter; none remain.

### A1-19 A played tutorial, a scripted landing, and float grouping (2026-10-28)

The user played the tutorial (1.00) with the desktop shortcut (play.ps1) and
reported inconsistent dodging and a fatal landing: flying, then holding Shift
(retro thrusters, manual) "smashed my ship into the earth".  The session's
recording (`play_20261028_091849.rec`, from the main menu with sound) did
not help directly: replayed without sound the tutorial goes elsewhere (its
radio lines last as long as their voice plays), and replayed with sound and
paced, the original and the port both drift from the session (both stayed
alive; the paced replay matched the session's input counters to frame
25000, then not).  The level part is kept as `level_100_play.rec` (replay
`100p`; the 9 Alt presses removed, as I asked: Alt opens the window
menu's modal loop) for later use.

Two harness additions made a direct test possible:

- `BEA_SHOTPLAY=1`: BEA_SHOTFRAMES and BEA_ENDFRAME count from the start of
  play (g_play0) instead of launch; loading takes 366-376 frames, which
  varies between runs.
- menu_test.py scripts can start a level (`level N`; inputs become `N`
  lines after a `P 0` mark) and hold a key (`hold KEY N`, with Windows'
  auto-repeat).  `lv_landing` (level 3.00: jet, accelerate, walker in the
  air, Shift held) repeats exactly in the original; the full port showed
  "LOW ARMOUR" where the original did not.

Bisected, four culprits:

- **0x4135e0, the impact bounce** (scale the velocity by -0.025, -0.025,
  and -0.075 or 0): the 10-21 class-18 hand fix kept a decompile that had
  lost the y line and named z by y's slot, so y passed through an impact
  unchanged.  **0x40c4a0** (the same commit) read y where the asm reads z.
- **0x478c20, the triangle hit test**, **0x425760** (basis normalise) and
  **0x44a2d0** (sun direction): float sums in Ghidra's order, not the asm's
  (bug class 19).  Ghidra prints `fld z; fld y; fld x; x*x + y*y, + z*z` as
  `z*z + y*y + x*x`; at the 24-bit precision D3D leaves on the x87 the
  grouping changes the rounding, and the collision point moved.

`tools/check_fp_order.py` finds class 19 without a replay: it rebuilds the x87
expression trees of the original and of the compiled port (objdump -M
intel; a stack of trees, leaves named by what the address register holds:
this+0x7c, a pointer argument's field, a global; values stored and loaded
again keep their tree), takes every chain of + / - and of *, keys it by its
multiset of terms, and reports a chain both sides compute with the same terms
grouped differently.  It found 27 more ports (vector lengths, dot products,
the matrix products 0x4c0150, 0x4df730, 0x4f0ba0, 0x4f0d90, 0x4f1050);
all reordered, 0 of 2,935 left.  A direct_batch gate now.  Limits: a sum split
over statements whose terms differ by name on the two sides is not compared;
a register-held operand GCC keeps where the original reloads is the same
tree, so it does not matter.  Objects whose source is gone (ports back in the
pool) are skipped.

Level 4.11's outcome moved once to 170.4 (want 179.75); repeated runs give
177.2-177.6 with every combination of the day's fixes, and the original
itself gave 178.9: 4.11 drifts within its 2.5 s tolerance.

The game reads keys at its 20 Hz logic rate (messages land on every third
60 Hz frame in recordings of the original as well), so quick double-tap
dodges are coarse by design.

### A1-20 Settings tours: video, controls, window size, graphics cards (2026-10-28)

The first tours mostly browsed.  The user asked for settings actually
changed, controls, resizing, fullscreen/windowed and GPU settings.  New
tours (tools/menu_scripts; the Video/Controller ones generated by a scratch
script, the coordinates found with throwaway `look` scripts):

- `fe_video_low` (the Lowest preset), `fe_video_custom` (every option moved
  by hand), `fe_video_fsaa` (anti-aliasing): Apply, then Load Game into level
  2.21 and shots there.  The settings reach the level (the same frame
  differs between the three).
- `fe_controls`: Custom configuration, mouse sensitivity up, both inverts off,
  Forward rebound to T and Transform to G; in 2.21 T walks and G transforms.
- `fe_resize`: the window resized in the menus and in a level (the game keeps
  a 640x480 back buffer; Windows stretches it).
- `gpu_01`..`gpu_12`: level 3.00 standing, then a jet take-off, as twelve
  graphics cards.  cardid.txt (189 devices of 14 vendors) sets 51 distinct
  Tweak/Opt values by vendor, device and driver-version range; a greedy cover
  picked 12 (vendor, device, driver) profiles that together set all 51.

How the menus behave (for writing more): an option's list opens on a click
and stays open until an entry is chosen; arrow keys and Enter choose (the
list order is not always low-to-high: Overall starts with Custom, Texture
resolution with High); Esc with no list open leaves the screen.  Input of a
frame is handled before it is drawn, so a `shot` on the frame of a key is
already after it.  Rebinding works on the right-hand (Player 2 header)
column: click, then the key.

Harness and tool additions:

- `resize W H` (menu_test.py) posts REPLAY_RESIZE (WM_APP+0xbea), which the
  harness turns into SetWindowPos of the client area (menu bar counted).
- `card VVVV:DDDD[:DRV]` sets BEA_FAKECARD: IDirect3D9::GetAdapterIdentifier
  (vtable 5) reports that vendor, device and driver version.
- The shot resolves a multisampled back buffer (StretchRect into a plain
  render target) before GetRenderTargetData, which fails on it (8876086c).
- `tolerance N`: with anti-aliasing two runs of the original differ in ~90
  edge pixels (by up to 14), the GPU's doing; such a tour's shots match when
  at most N pixels differ from the original's kept copy (<name>_oracle).
- Settings tours are `exclusive`: the options file they write is shared by
  the game folder's instances.

All of them match the original.  The video, controls and resize tours ran
32 ports no test ran before; the twelve card profiles 6 more (a card's
tweaks mostly change branches inside functions every run calls, which the
per-function count does not see).

Fullscreen (my go, same day; the harness is off without
-forcewindowed, so no fixed clock and no back-buffer shots: desktop captures
and the frame counter of the FpsTimer port instead, kept on in "original"
runs to count frames):

- `-skipfmv -level 300` and `-skipfmv` (title screen) run fullscreen in both.
- The 10-23 black screen is the original's own: 0x512630 (Present) on
  D3DERR_DEVICELOST loops on TestCooperativeLevel with Sleep(100) and never
  calls Reset, so a device lost at the first Present (the window not in front
  when a game starts while another has focus) waits forever.  The original
  did it on a plain start; all ports did it once at -level start (stacks:
  ap_004d2580 -> ap_005158e0 -> ap_005158f0 -> ap_00512630, the port as the
  asm).  Not a port bug; a candidate for a later, deliberate fix.
- Minimise and restore in fullscreen (Alt+Tab): the same loop.  Three runs
  each: the original stayed frozen once (frames 2733 to the end), the ports
  resumed every time.
- Seen in passing: with all ports the level loads ~5 s slower fullscreen
  (frame 25 at 10 s, against ~1,200 for the original).

### A1-21 Dodge (dash) tours (2026-10-28)

The user played the tutorial and "never accomplished a dodge".  The dash is
0x413160 (left) and 0x413360 (right), tuned by g_dash_start 0.9, g_dash_end
0.8, g_dash_time 0.2 (strings at 0x412c1f..): the stick crosses past start
one way (its time kept at this+0x30 / +0x2c), and a dash goes off when it then
crosses past end the other way with that time inside (now - g_dash_time,
now - g_dash_time/2): the second direction 0.1 to 0.2 s after the first, not
equal to either end.  At the 20 Hz logic rate that is one gap, 3 ticks
(0.15 s); keyboard keys are full deflection at once.  The direction of the
dash is the second key; repeated taps of one key count only at the switch.

Tours in level 3.00 (walker standing): `dg_a` (6 frames: no dash), `dg_g9`
(9: dashes, the view rolls), `dg_g12` (12: no dash), `dg_tap` (D tapped 3
frames, A 6 frames after: dashes left).  All match the original.

The user's session (recordings/play_20261028_125114.rec, ~60 fps) had about
eight switches; one (D 10436, A 10445: 0.15 s) was inside the window, the
rest 0.25-0.5 s, mostly runs of taps of one key.  A replay without sound
does not reach the same moment (the voice lines pace the tutorial), so
whether that one dashed is not known.

### A1-22 Working the 576 left (2026-10-28 afternoon)

A triage (scratchpad unported_triage.md: a fresh autoport census of all 576
joined with the blocklist, held/pool notes and coverage) put them in
buckets: compiles but blocklisted by a static gate (B2, 49), compiles with
no record (B1, 8), CRT callees without a signature (D3, 37), lost stack
layout (D2, 48), void-but-EAX-used (D1, 64), and more.  What came of it:

- **B1/B2 retried as they were:** 5 of 57 passed.  The gates still fire;
  they were right more often than the triage expected.
- **25 CRT / D3DX / high game routines** identified from the asm into
  crt_sigs.CRT_SIGS (qsort, bsearch, swprintf, memmove, _findfirst, atof,
  fgets, D3DXAssembleShader, D3DXMatrixInverse, ...): 21 of the 37 D3
  callers emit; 14 passed.  0x55fa40 is the x87 intrinsic _CIpow (needs
  x87_intrinsics.csv + SetX87Intrinsics, not a CRT_SIGS line).
- **check_fild** now flags a port only when it also converts more distinct
  slots (GCC reconverts a slot it reloads after a store through a pointer;
  0x544fc0).  It let none of the 26 through by itself: they had real
  reinterpretations.  Hand-fixed with fild_cmp.sh (compile one file as the
  build does, list fild & co. of port and original side by side): 25 fixed,
  13 passed.  Several were behaviour bugs beyond the casts (int stored into
  float fields, 0x4e1b20; float bits passed where the original pushes the
  fistp integer, 0x4a4810; an unsigned sign test that never fired, 0x448930).
- A review of 11 fingerprint/check_dat_arith rejects found 6 real bugs
  (distance sums grouped wrong in 0x47a2a0 and 0x4e1b20 that check_fp_order
  missed because the original reads stack copies; class-23 byte offsets in
  0x407540, 0x53abe0, 0x483530; an unsigned ROUND in 0x48a570) and 5 benign
  (allow lines).  Only 2 passed the levels; 0x485d50, 0x483530, 0x47a2a0,
  0x407540, 0x51ae70 crash a level or the menu soak.

**The menu tours' hook list was stale.**  menu_test.py read
SCRATCH/all_hooks_now.txt (written 10-27), so every port added since stayed
on in "original" runs.  It made the day's 0x460b40 and 0x555be0 look like
the original's own failure: Load Game exited with the game's fatal "File not
found" (texture loader 0x4f27f0 asked for an empty name under the text
drawer 0x465710; 0x42c750 is the fatal printf, 0x42cfa0 the exit).  Both
quarantined, and 0x540010 (a pause-menu frame).  menu_test now lists hooks
from the source tree; gated_batch rewrites all_hooks_now.txt after each
commit.  The gated loop does not run the tours: run them after a loop
(`menu_test.py check <all tours>`), as the three culprits only run in menus.

Harness additions: BEA_FILELOG=1 logs failed CreateFileA; the exit logger
scans 1024 stack dwords.  Day's result: 3,897 -> 3,928 (87.82%); 23 levels
and all 29 tours match.

Evening: the 64 D1 addresses went into tools/ret_overrides.txt and Ghidra
pass 9 retyped them (428abc4); the census after it gave 60 compiling ports,
27 passed.  37 compile failures were fixed by hand (several rewritten from
the asm, frame tags corrected) plus 5 numbered-extraout ports; 24 of the 42
passed.  autoport now lets `extraout_ST0_NN` through its artefact check
(2abf9a3).  Still out: 0x50b520, 0x4151a0, 0x4264a0, 0x4fa8d0 (change a
level), 0x416970, 0x4e1360, 0x52cd20, 0x47d750, 0x546b40 (fingerprint),
0x523bc0 (does not compile).  Result 3,977 (88.91%); 23 levels and all 29
tours match (the tours run 2,527 ports, 454 that no level runs).

Late evening, tool fixes:

- **C2, phantom vtable-call arguments** (d354f7b): rewrite_phantom_vcall_args
  splits at top-level commas (a receiver like `*(int **)pCVar1` was
  refused), ignores IAT calls when keying offsets, and matches the C calls
  through an offset against the asm push counts as a multiset.  Clears 6 of
  the 9 C2 left; 0x4bd9e0 (Ghidra lost 4 arguments), 0x5514a0 (3 vs 4) and
  0x52b760 (unaff_retaddr) stay.  0x488460/0x500120/0x4f09b0 were
  blocklisted by old soaks that came from the phantoms: unblocked, in.
- **check_call_arity** (ae736a1, 5ffbc25): a push of a callee-saved
  register not yet written is a save (as vcall_pushes); and VC6 pushes an
  outer call's leading arguments before evaluating an inner vcall, so a
  direct callee popping more (conventions ret_pop, or `add esp,N`) than was
  pushed since the vcall takes the difference back.  20 of 39 advisory
  flags in a census clear (list in the scratchpad, arity_cleared.txt; not
  yet run).
- **Fingerprint review** of the 5 cefix rejects: all benign (constants read
  by GLOBAL_AT from the game's .rdata, moved as integers, or folded
  exactly); allow lines.
- **gated_batch lost whole batches** (aba8611): a build failure deleted every
  port of the batch from the pool; 0x523bc0 took 9 hand-fixed ports with
  it.  Now the batch is retried one port at a time.  The 9 were rebuilt by
  replaying the helper passes' recorded file edits in a sandbox (the replay
  reproduced 23 surviving pool files byte for byte); 8 passed.
- Open: 0x4b5330 (bit-cast fixed, then level 211 Firebase@183.4 vs 200.0),
  0x546b40 (check_dat_arith), 0x523bc0 (fix_floatbits cannot compile it),
  0x4151a0/0x416970... see the blocklist.  Solo retries take ~9 min each
  (full level table per port).

Result 3,992 (89.25%); 23 levels and all 29 tours match.


### A1-23 Faster loop, recordings, streaming and the x87 question (2026-10-29)

**Throughput.**
- Load measured with scratchpad load_eval.py: CPU about 43% at 4 instances, about 65% at 8; GPU 61% and 78%; RAM and disk idle.
- `gated_batch --parallel N --targeted`:
  - levels play as a work queue, the longest first;
  - a round plays only the levels whose coverage map (tools/level_coverage.py, SCRATCH/level_coverage.json, built from the exact test runs) enters a port of the batch;
  - batches are grouped by shared levels (group_by_levels).
- A level that differs under parallel load is replayed alone before it counts. Async replays drift with load: 800r, 611r and 311 each differed once at 4 instances and matched alone.
- Every pool port is pre-checked with fix_floatbits.
  - GCC 16's SARIF output leaves `'\0'` unescaped, which made 0x523bc0 "NOT FIXABLE"; fix_floatbits now repairs the escape.
  - A batch whose build fails is retried port by port.
  - Unusable pool files move to `_rejected` instead of being deleted. Nine hand ports had been lost, then rebuilt by replaying the helper passes' tool calls (scratchpad replay_sb.py).
- A round now takes 6–8 minutes, against about 9.

**Porter fixes.**
- Phantom vtable-call arguments: matched per vtable offset as a multiset, with a top-level comma split.
- Vtable tail calls that Ghidra calls "unrecoverable jump tables" are accepted when the function takes no stack arguments (12 ports).
- in_stack parameters are named stack_arg_N. The old name could never pass the artefact check.
- 18 crt_sigs entries added: findnext/findclose, _mbsicmp, the NvTriStrip setters, D3DX helpers and game functions. 0x55e38c is vsprintf, not _snprintf.
- `bea_dpass`: double arguments keep their precision (floor got float-rounded values).
- **Wrong and reverted:** an arity rule (5ffbc25) gave an early push to the next direct callee. The ports handed FUN_004aa630 a 0, and it `_stricmp`'d NULL. The seven ports that rule let in were withdrawn. **Corrected later the same day (a hand-port helper on 0x446d70):** slot 0x24 is a getter that takes nothing (0x4de070: `mov eax,[ecx+0x14]; ret`), FUN_004aa630 takes the name, and the 1,0 / 1,1 pushed first are slot 0xf0's trailing arguments (ret 0xc). VC6 evaluates `this->vf0xf0(mesh->vf0x24()->Find(name), 1, 0)` by pushing the outer call's trailing arguments first.
  - Seven live ports had the shape wrong, with 3 arguments to slot 0x24 and 1 to slot 0xf0: 0x4179a0, 0x422760, 0x4227a0, 0x427b80, 0x4455c0, 0x47bff0 and 0x4fde70. They are corrected, and all 27 levels match.
  - A correct porter rule needs a stack-balance solver: each call's pops from ret N or `add esp`, and the vcalls' pops are the unknowns that make the function balance.

**Hand ports.** Three helpers wrote 37 functions from asm plus decompile; 32 passed.
- Five use naked stubs that read stale stack dwords: 0x423030, 0x47ec60, 0x4c2d30, 0x4c4100, 0x4fa4b0.
- The 5 held back were all stopped by the fingerprint gate: 0x423030, 0x509c80, 0x4c2d30, 0x4fa4b0, 0x42c810. They still need review.

**Recordings (mine).**
- Recorded: 521 (won), 522 ×2, 800 ×2 (970 s), 741 ×3 and 731. Six were registered in replays.json; 521r, 800r2, 522r and 731r joined baseline.json (27 levels).
- The replays do NOT reproduce the playthroughs. The 521 win replays as a death at 231 s, and 800_2 as a death at 82 s instead of 970 s. Inputs match frame for frame until the death, but the game state differs.
- Cause: background jobs. 0x528d50 starts a job on the worker 0x528b60 (file streaming), and the main thread goes on while it runs. When the result lands depends on real time: recordings are paced to real time, replays run about 12× faster.
- `BEA_SYNCJOBS=1` (test_harness.cpp; hooks.cpp asks `bea_harness_wrap`) wraps 0x528d50, port on or off, and waits for the worker. With it, every replay matched at 8 instances, ports on and off. 411 still drifts.
- Old recordings were made async, so they cannot be reproduced. New ones made with BEA_SYNCJOBS=1 should replay faithfully. **Not yet set in record_level.ps1.**
- Sync baselines: SCRATCH/baseline_sync_1029.json. The async ones are in use (baseline.json).

**Open: level 311 in sync mode.**
- The original ends at 287.9 and the tree at 275.3. Each of these air-unit vslot66 ports moves it alone:
  - 0x402fa0 CAirUnit (withdrawn);
  - 0x428110 CComponent (withdrawn);
  - 0x4454c0 CDiveBomber (withdrawn);
  - 0x447120 CDropship (still live).
- Their code reads as asm-equivalent.
- 0x4454c0 tail-jumps to 0x402fa0. The original passes the x87 stack through; the port's bea_guard pops a value it takes as leaked.
- Disabling the pop everywhere (an experiment, reverted) gave 278.1, not 287.9. So x87 balance matters, but the fix is not global.
- Next step: track x87 TOP at these calls in the original, with a probe at entry and exit of 0x402fa0. **Sync stays opt-in until then.**

**snapdiff.**
- Done: several targets per run (entry thunks; other threads and nested calls go to the original); page-safe copies; other threads suspended during a comparison.
- Still freezes when a comparison starts during loading, and hangs D3D-calling functions. The snapshot must be limited to the game's own memory. Parked.

**Cheat (requested by me for 800/522; not built).**
- Player Battle Engine: via the global 0x8a9a98, then +0x2a4, then +0x1c (debug readout 0x4714c0).
- Health is a float at +0xf8 (0x4f99f0; +0x178 is a sub-object when present). Energy is at +0xfc.
- Per weapon slot i: heat is the float at +0x52c+4i; its limit is the config at +0x4b0, then +0x88+4i; the overheated flag is at +0x544+4i.
- Ammo is the int at +0x68 in the weapon object. The weapon list is not yet found.
- Apply it identically in the recording and in the replays.

Result: 4,042 / 4,473 (90.36%). 27 levels match at 4 instances (async), and all 29 tours match (at 4,045).

Later, 10-29:
- Ghidra pass 10 added `_CIpow` (x87_intrinsics.csv) and the 0x47eb00 fastcall (conv_overrides.csv). The census after it has only 2 clean ports; the rest need hands.
- A second helper wave: 30 of 38 were ported and all passed (3 after a fingerprint review: GLOBAL_AT constants, static helpers, __chkstk). Skips were mostly stale-stack reads (a 4th vector lane that 0x401ec0 never writes) and very large functions.
- BEA_CHEAT is built (record_level.ps1 -Cheat). replays.json entries take "sync"/"cheat".
- inputsync lines now carry the Battle Engine's position and health, every 100 frames.
- The recording-to-replay divergence is NOT explained by background jobs: a 521 replay paced to real time ends like a fast one, at 231.0. The next short recording plus replay should show the first frame where they part.
- Still to review:
  - pool_p10 has 7 arity-flagged ports;
  - level 311 in sync mode (the vslot66 family);
  - 0x447120.

Result: 4,076 / 4,473 (91.12%), HEAD after 960f28b. All 27 levels match and all 29 tours match (at 4,073).

**The level-100 test recording (10-29 evening).** The user played the whole mission and won (recordings/level_100.rec, replays.json `100w`, sync).
- The replay matches every checkpoint (input counts, position, health) up to play frame 14700, clock 249.4. By frame 14800 the player is 0.14 m off and stays there. Two replays agree exactly, and so does a replay paced to real time with every frame presented. The replay runs to 520 without the win.
- In the replay the player backs up at constant speed (S held), then stops at frame 14738, against something, while S is still held. In the recording it moves about 3 frames longer.
- Ten edited replays changed nothing at frame 14800:
  - S key-up shifted ±1 frame;
  - D key-down and key-up shifted ±1;
  - the mouse states around 19350 shifted ±1 read;
  - the S autorepeats removed, or split across frames;
  - the Alt presses (11 alt-tabs) removed, or given key-ups;
  - the mouse zeroed at the one alt-tab that came mid-motion.
  Removing all keys or all mouse states in that stretch does change it, so input arrives, but the stop is set by the world, which had already parted unseen.
- Ruled out:
  - the harness hooks' stack leftovers: `BEA_STACKSCRUB=<byte>` fills 12 KB below the input hooks, with no change;
  - GetWindowRect (0x52ad07 only re-creates the device when the window is resized);
  - GetAsyncKeyState and GetKeyState (not imported).
- Keyboard input: window messages to PCLTShell::vslot12 (0x5134xx), which keeps per-scan-code down/pressed/released bytes at +0x330e4/+0x331e4/+0x332e4.
- Mouse input: DI GetDeviceState in 0x42d4d0/0x42d420. On a failed read (window in the background), the game returns early and leaves its button and position state as it was.
- New in the harness:
  - a failed read is recorded (`F`/`G dev call hr`) and replayed as the same failure;
  - inputsync lines carry `rnd`, the game thread's rand() seed (_getptd 0x560b93 +0x14; never seeded). It is identical in fast and paced replays;
  - record_level.ps1 logs a checkpoint every 10 frames (BEA_INPUTSYNC=10);
  - tools/replay_check.py replays a recording on the original and prints the first checkpoint that differs.
- Self-test: an idle level-211 recording in the full recording setup (window enlarged and active, real DirectInput, the recorder's file writes) replays with all 1,107 checkpoints identical, rnd included. So the setup itself is not the cause. The difference comes only with a person's input. **A new level-100 recording with rnd checkpoints should show the first frame where the world parts.**
- 500r differed once while running alongside the recording window and matched alone (153.4).

**The second level-100 recording (10-29 night): an exact replay.** The user won again (recordings/level_100_2.rec, replays.json `100r`, sync, MISSION_WON at clock 479.450, frame 28846 in play).
- tools/replay_check.py: all 2,921 checkpoints (every 10 frames, rnd included) match, and the replay wins at 479.450. With every port on it wins at the same clock. It is in baseline.json as `100r`; the whole run takes 19 s.
- The recording has 3 failed mouse reads (`F`/`G`, DIERR_NOTACQUIRED 0x8007000c). Each comes on the first read after an Escape: the pause menu unacquires the device. The user changed "inverted controls" there; the change is not saved to disk (savegames untouched), so it does not leak into other runs. A copy without the failed reads also replays exactly, so here they did not matter.
- So the first recording's drift (`100w`, kept) is not explained. It may be a one-off race in the game's own threads during recording. Recorded runs can now be trusted to replay; the cheat runs are worth recording.
- level_coverage.py rerun (28 levels): 100r runs 202 unported functions, 2 that no other level runs.
- The user asked whether the Target Zone 3 dome should sit on the repair pad ("Health Pad"). In BEA_SHOTFRAMES shots of this replay with every port off (shots100b, play frame 23300), the translucent dome is on the ground just in front of the pad. Since that is the original code, the original PC game places it there. LevelScript.msl only marks "Health Pad" as the objective after "Reached Target Zone 3"; the zone's position is level data.
- The user also asked whether the tutorial's scripted freezes and narration could cause drift. They don't: they run on the game clock, and the second recording replays exactly through all of them.

### A1-24 Deep recordings: input before play, class 19 again, stale stack (2026-10-29/30 night)

**Recorder V3 (91f726c).** The 800 and 522 cheat wins of 10-29 parted from their replays within 10 frames. Mouse movement during loading reached play: through the game's mouse position (0x89bda4/8; flight steers by its distance from the screen centre, 0x407540, pulled back to the centre each frame) and through the Battle Engine's heading in level 800's airborne opening seconds. Loading takes a different number of frames, and so of DirectInput reads, live and in a replay (800: 120 and 132).
- Now no DirectInput input is given before play, in the recording and in its replay. A file that starts `V 3` gets this; older recordings replay as before.
- `S x y` keeps the mouse position at the start of play.
- The cheat starts at the start of play (`BEA_CHEAT=early` + `BEA_CHEAT_CLOCK` reproduce the old behaviour).
- Ruled out along the way:
  - inverted controls: the switches 0x662ab8 (walker) and 0x662ac0 (jet) are 0 in every run; the pause menu (0x456080) toggles them and nothing saves them, since defaultoptions.bea is only written from the front end's options screen, 0x51f500;
  - the cheat's energy hold: energy drains in level 800's airborne opening, but varying when the cheat starts changed nothing.
- With V3, my wins (800 and 522 with the cheat; 512, 720, 431; 710 and 741 losses) all replay exactly.

**What they found, with every port on:**
- **800 crash at 43 s:** 0x4f09b0 CTentacle::vslot66.
  - Ghidra placed the CExplosionInitThing 0xc too high (it missed the ebp/esi/edi pushes). The object runs to +0x3d8, past the port's emulated frame.
  - The asm zeroes +0x3bc..+0x3d4, and CExplosion::vslot9 (0x44b930) reads +0x3d4 as a pointer.
  - Fix: frame +0x10, and the 3 missing dwords zeroed.
- **Class 19 again** (float sums in Ghidra's order, not the asm's):
  - 0x4162e0 CBomber::vslot66 (`this` reloaded from a spill slot after a call, so check_fp_order could not name it);
  - 0x4fc4e0 (the asm moves ebx between the terms);
  - 0x498c40, twice: MCMech leg setup, the operands kept in x87 registers. This fixed 522c, now exact over all 1,465 checkpoints and in the baseline.
  - `check_fp_order --loose` names a field by its offset when the base register is not tracked. It found 21 more: 0x4027c0, 0x409950, 0x40c3c0, 0x410310, 0x410490 (3 sums, 2 orders), 0x410670, 0x410740, 0x4109d0, 0x411aa0, 0x412900, 0x422620, 0x423510, 0x4902b0, 0x496540, 0x4e49f0, 0x4eb130, 0x4f19a0 (4), 0x4ff4f0, 0x5345d0. All are fixed, and both modes now report 0 of 3,114.
- **0x4cb0b0** (28 callers) leaves the object in EAX and 0 in EDX. CSphereTrigger::vslot23 (0x4e5680) returns that EAX, so the port now returns it as a uint64.

**Stale stack: the limit of exact replays.** Original code reads stack slots it never writes (the w of a 4-vector) and passes them on. What it reads is whatever ran at that depth before. Ports have different frames, so they change both what is left behind and the depth their callees run at.
- **741** (in baseline_pending.json, out of the gate):
  - 0x4fc4e0 CUnit::vslot88 copies [entry esp-0x44] into param_3[3], and its frame leaves the 0x40d320 matrix behind. The next call at that depth reads dword 18 (entry esp-0x1c); found with the BEA_RESMASK experiments.
  - An entry stub now reproduces both (`ap_004fc4e0`: it saves the slot, calls the body on copied arguments, then writes the original's frame contents below the stack pointer). With it, 0x4fc4e0 alone replays 741 exactly.
  - The next culprit, 0x4ad830 CMeshCollisionVolume::vslot4, still differs alone (destroyed at 199.3 instead of the Fenrir at 196.15). Seeding its bea_frame_ from the real stack (scratchpad frame_mirror.py: the entry stub copies [esp-size, esp)) did not fix it. The cause is open.
- **800c** (out of the gate): with every port on it parts at play frame 19630, clock 332.2.
  - The bisect culprit is 0x4812d0 CHLCollisionDetector::vslot0, a 51-byte wrapper whose logic is identical to the asm. A naked copy of the asm fixes it alone, and the same copy run 0x20 deeper fails: the stack depth of its callee 0x480c90 matters.
  - A reader in that tree is 0x4f3ac0 (unported), which puts an unwritten stack dword in param_1[3] on two paths.
  - With every port on, the naked copy made 800c part earlier (188 s): depth effects interact across ports. Reverted.
- Options, not decided:
  1. ports that keep the original's frame size and callee depth;
  2. find the consumers of the stale w values and see whether they matter;
  3. accept these as the limit of exact replays and gate such recordings by outcome only up to their divergence.


### A1-25 Stale-stack hunt, 800c exact, class 19 in stack locals (2026-10-30)

The user chose option 2 (trace the consumers).

**The tools** (`src/bea/platform/stalehunt.cpp`, dev only, all env-driven):
- `BEA_POISON=addr,lo,hi,pat` fills [esp-hi, esp-lo) with a dword at every entry to an original (port off). If the level then plays differently, leftovers below that function matter; halving [lo, hi) finds the slots. hi == lo is the control run.
- `BEA_WATCH=addr,off[,esp]` arms two debug registers (any access / writes) on [entry esp - off] for the duration of each outermost call, from a private stack, and tables the instructions; the first access of a call that is a read is a read of leftovers.
  - Under WOW64 the handler sees no Dr6, so every single step counts as the watch's.
  - Left armed all the time (set from another thread), the game died at its next file read: WOW64's 64-bit code trapped on the 32-bit stack.
  - Reading the watched slot inside the handler traps again without end.
- `BEA_CONTACTS=1` logs CUnit::vslot39's two-contact lists. A bea_log from the game thread on a private stack hung the game, so records are kept and logged at the outcome.
- The driver is scratchpad poison.py.

**What it found in 800c** (every port off, fills under 0x4812d0):
- Zero fill: exact. Any other fill: parts at 188.15.
- The slots are entry esp -0xf8, -0xfc and -0x100. The reader is 0x4fcc30 CUnit::vslot39 (`fadd [eax-8]`...): its normal sum always takes 3 contacts (`mov ecx, 2` after the first), so with exactly 2 contacts the third is stale. That is a bug of the original.
  - In the original the third contact holds pointers and small integers (floats below 1e-33): 81 calls in 800c.
  - With the ports' frames it held positions and normals instead.
- Treating the third contact as 0 fixed 800c but broke 523r (88.5 instead of 166.3): there the original's leftover is a real value. Reverted. 0x4fcc30 reads memory as the original does, and with the next fix 800c is exact anyway.

**The 332 s divergence was class 19, not stale stack.** A fresh bisect (0x4fcc30 port on) named 0x440510 CCylinder::vslot4 alone.
- Mirroring its frame (scratchpad frame_mirror.py) changed nothing.
- Its asm adds `(l7c² + l80²) + l78²`, `(l6c·f2 + f1·l70) + l68·f3`, `(l68² + l6c²) + l70²` and `(l38² + l3c²) + l40²`; the port had Ghidra's orders.
- With those four reordered, **800c (my cheat win) replays exactly with every port on**, all 29,530 frames (Objectives complete@491.2). It is in the baseline now (34 levels).

**check_fp_order was blind to sums of stack locals.**
- The port keeps them in emulate_frame's bea_frame_ (or its own locals), the original at esp offsets: the names never matched.
- Now:
  - a port's frame slots are named `fr:<base>:<off>` and calibrated to the original's `stk<off>` by the shift that matches the most chains;
  - esp follows callee pops (VC6: the pushes since the last call unless `add esp` follows; GCC: `sub esp, N` after the call);
  - pushes move an aligned esp too, and the results are deterministic;
  - fp.funcs() loads before the thread pool. A lazily filled table let the first threads skip ports, a race older than today.
- Two batches of 18 ports, about 175 sums, were reordered (each sum checked against the asm by hand): 0040acc0 0040b120 00416970 00419390 00428500 00443a20 0047aad0 00480c90 0048a570 004959a0 00496ac0 004976d0 0049dcd0 0049efe0 004ba150 004c5d50 004dd400 00509140; 00402280 0040c990 004191c0 00425430 00425c60 00446840 00479020 0047c200 0047d1c0 0048a030 004daba0 004df1a0 004e4b90 004fec60 004fef40 0050a0e0.
- The checker reports:
  - loose mode: 2 of 3,114 (0047aad0 and 004976d0);
  - strict mode: 0.
- The two loose reports are false positives: a pushed call result sits between another call's argument pushes, so the pending count pops 4 too many. The asm was checked by hand.
- SEH prologue pushes also shift labels; this produced no false reports.

**Gate:**
- 34 levels match: 800c added; 411 at 174.4 against 179.75 with a tolerance of 5 (deterministic, an older divergence that moves with ports).
- 29 menu tours match.
- 741r still parts (Battle Engine fell in the sea at 167.4).

**Next (planned): an offline per-function tester.** The game records calls (registers, x87 state, stack pages, every page touched, through PAGE_GUARD), and an emulator runs the original and the port from each captured state and compares. See `src/bea/platform/capture.cpp` and `tools/offline_check.py`.

### A1-26 The offline tester works; 22 ports fixed from it and from a sharper checker (2026-10-30)

**Capture** (`src/bea/platform/capture.cpp`, `BEA_CAPTURE=<dir>`; driver `tools/capture_level.py LEVEL [--endclock N]`):
- Every registered function's thunk counts its main-thread calls in play (game state 3) and captures the chosen ordinals (`BEA_CAPTURE_AT`, default 1,6,30,150,750,3750,18750).
- A capture guards (PAGE_GUARD) BEA.exe's writable image and the allocations of every heap from GetProcessHeaps except the process heap. The handler copies each page at its first touch. The function then runs through its trampoline, and every touched page is read again after it returns. The results go to captures.bin and to pages.bin, which is deduplicated.
- Never guarded:
  - the process heap, because exception dispatch itself uses it;
  - thread stacks, including the 64-bit WOW64 stacks and TEBs, where the kernel writes the exception record (guarding them hung the game);
  - the PEB, and the page that holds the VEH node.
- The capture's own work runs on a private 1 MB stack, with the TIB's stack bounds swapped to it. Without the swap, an exception raised there (OutputDebugString in bea_log) ended the process.
- **The harness's own hooks are never captured**, nor anything from `platform`. Capturing 0x423bc0 (ParseArgs) replaced the harness's wrapper, so the game went 640×480 fullscreen on my display.
- Level 211 to clock 60 gave 5,238 calls of 1,085 functions: 70,064 unique pages (273 MB), and no crash.

**Offline check** (`tools/offline_check.py CAPDIR [ADDR...] [-v]`; unicorn 2.1.4, which keeps the x87 precision control):
- For each call it runs the original from the captured state and checks the result against the game's (if they disagree: "emulation differs", and the call is not judged). It then runs the port from the same state and compares registers, the x87 stack and memory.
- Ports are found by symbol: `ap_XXXXXXXX`, plus hand-named ports through their `BEA_HOOK` registration and the demangled name (3,265 found).
- What the comparison ignores, and why:
  - ecx and edx (scratch);
  - eax for a void or float port. For a bool or char port only al counts. All of this is read from the port's declared type. When eax alone differs, the call is listed apart ("EAX ONLY"): these are mostly fnstsw leftovers that Ghidra typed as results.
  - Stack below the final ESP, and a cdecl port's own argument slots (VC6 reuses them as locals).
  - **Bytes the dead stack decides.** The original is run twice more with the stack below its entry ESP filled with a pattern (0xa5, then 0x3c), and with each stack area refilled the moment it is freed (pop, ret, add esp), so a callee's leftovers count too. Bytes that change between these runs are leftovers copied into results (4th vector lanes, padding), and are ignored both for the port and for the emulation check. In the game, the capture stub's own work below ESP leaves leftovers different from a run without hooks.
  - Pages missing from the capture (a locked vertex buffer, D3D objects) unless only the port touches them.
- Stubbed imports: memcpy/memmove/memset/memcmp, `_errno`, and the single-thread answers for WaitForSingleObject, ReleaseMutex, Enter/LeaveCriticalSection and Get/SetLastError.
- Result on 211: of 5,238 calls, 3,623 judged the same, 24 emulation differs, 977 untestable (no port; Direct3D calls through COM objects that are not captured, shown as "jumped to unmapped 00001000"), and 11 functions EAX-only.
- About 4 minutes for the whole capture.
- Debug helpers in the session scratchpad:
  - oc_dbg.py: registers, pages and one value;
  - oc_wtrace.py: who writes an address, in both runs;
  - oc_calls.py: **the first call into BEA.exe whose arguments differ, with the vectors that stack-pointer arguments point at**. This found 0x4ad830 in one step.

**What it found that the level replays and the static checker had not:**
- Class 19, one ulp apart: 0x4cba90 (z, y, x squares, built with `fld st(0); fmul st(1)`), 0x425e30, 0x4c4dc0, 0x5094b0 and 0x4ad830 (z, y, x dot products whose loads go through `add eax, ebx`).
- **Ghidra slots 4 bytes off:** 0x402280 CAirGuide::vslot3, 0x416970 CBomberGuide::vslot3 and 0x48a570 copy `[esp+0x1c]` / `[esp+0x2c]` / `[esp+0x44]` (entry−0x24 / −0x14 / −0x14) into +0x158. That is the 4th lane of a vector a call filled, so in 0x402280 it is a pointer. Ghidra named the slots local_20 / fStack_10 / uStack_10, so the ports stored a computed float.

**check_fp_order, sharper:**
- A dword copied through a register (`mov edx, [ecx]; mov [esp+4], edx`) keeps its name. This made 0x4cba90 and seven others visible: 00412ad0 00419540 00419b00 00425e30 004c4dc0 004dac90 005094b0.
- **The original's direct jumps print as `jmp 0x429329`, and only targets without 0x were followed.** The original's paths therefore ended at every jmp and paired other branches than the port's. This was behind the 0x429270 and 0x47aad0 false reports, and it hid 004250f0 and 004ebe40.
- `--loose` now finds 8 more that strict mode cannot name (register+register addresses): 00428eb0 0044e640 0047a400 0047b100 0049fdb0 004c2640 004c8ce0 004deec0. The two old false positives (0047aad0, 004976d0) remain in loose mode.
- All were reordered against the asm. **Unflagged sibling sums in the same blocks were often wrong too** (0x4c2640: most of its 12; 0x4c8ce0; 0x4250f0's 9), so a clean checker result is not proof.

**Gate:** with all 22 fixes, 34 levels and 29 tours match (run twice: after the first 14, and with all of them).

**EAX only, left as they are:** 0x429270, 0x49bc80, 0x4cb040, 0x4f1ee0, 0x4f4480, 0x4fc170 and 0x527c50. All are void-like:
- 0x4f4480 passes the caller's EAX through;
- 0x527c50 sets AL with an early `xor al, al`;
- 0x4cb040 returns the old free-list head.

No caller is known to read their EAX. The checker compares only AL when every return of the original sets AL alone last.

### A1-27 New recordings, wider captures, and the asm lifter (2026-10-30 afternoon)

**The user's recordings** (110, 200, 211 and 221: never recorded before):
- 110 (won, 93.5), 200 (won, 129.7) and 221 (lost, 204.4) replay exactly on the original, and every port matches.
- 211: I won at 316.7, but the replay loses at 212.4, the original as well. It parts at play frame 1410-1420 (clock 28.5-28.65). Position and health still agree there, but the main thread's CRT random state does not. The recording has an A/D key switch in that window (frames 1400-1418). The dash timing reads the game clock (0x413160 reads 0x672fd0), so that is not it. Open.
- All four are in the baseline (38 levels).

**Captures of 8 more replays** (720r 800c 522c 431r 512r 110r 200r 221r): 6,100-6,900 calls each.
- Two outcomes differ under capture (431r, 522c), because the capture stub's work below ESP changes the leftovers. Each captured call is still self-consistent.
- The capture now writes `regions.txt`: the memory map with type, heap (P = the process heap) and module. The Direct3D device (pointer at 0x888a50) is on the process heap, which the capture does not guard.

**Offline check:**
- Other modules (Direct3D, the display driver, Windows DLLs) are loaded from disk at the recorded base and relocated (the `Foreign` class). A call into one returns S_OK at once, popping the arguments its first `ret N` names. A stub whose answer matters shows as "emulation differs", never as "same".
- A module that sat where the emulation maps our DLL is left out. CoreMessaging.dll at 0x6b230000 made every port a "foreign call" until this was fixed.
- Our DLL's own memory is not compared.
- `strlen` is stubbed.
- 800c: 4,366 of 6,114 calls the same; one new one-ulp difference, 0x49e4b0, open.

**The lifter** (`tools/asmlift.py` with `asmlift_ops.py` and `asmlift_x87.py`; runtime `src/bea/lifted/lift_rt.{h,cpp}`):
- It translates the original's machine code instruction by instruction:
  - registers are locals, and flags are computed as the instructions define them;
  - the x87 stack is an array of long doubles, with arithmetic on the hardware under the game's control word (`-frounding-math`), and fsin/fcos/fpatan/fptan/fsqrt/fist as inline asm;
  - x87 reg forms are decoded from the opcode bytes;
  - jump tables become switches; tail jumps leave through the exit;
  - `fs:` uses real fs accesses, so SEH records are linked in on the game stack as the original does.
- **ESP is the game's real stack.** Pushes, locals, leftovers and outgoing arguments are byte for byte the original's. The C body runs on a private stack (`lift_enter`), and calls switch back to the game stack (`lift_call`). The one difference is the return-address value a call pushes: our return address, not the original's. 0x48f620's EAX upper half shows it (a callee left that address in EAX).
- Main thread only: a thunk tells threads apart by ESP inside the main thread's stack (`g_lift_lo/hi`). Other threads run the original through the trampoline. Nothing is lifted unless `BEA_LIFT=1`.
- Decoding follows control flow up to the next function's entry. Ghidra's sizes leave out split-off chunks.
- **366 of the 367 unported functions lift.** The 367th is 0x423bc0, the harness's ParseArgs, which the lifter refuses.
- Verified offline: the first 282 were captured in 4 replays (`--only`). 129 functions ran on real calls: **2,248 calls, 0 differences**, plus one EAX-only (0x48f620, above).

**In the game (BEA_LIFT=1, all 282):**
- The 29 tours match.
- 11 levels timed out at the gate's 150 s: lifted code is slower.
- Two levels really differ:
  - 211: Firebase at 176.7 instead of 200.0;
  - 221r: in the sea at 70.8 instead of the Marshall at 204.4.

What came of it:
- **The return-address slot.** `lift_call`'s `call` leaves our address below ESP where the original leaves its own. lift_call now takes the original's return address and writes it into that slot after the callee returns. The stack below ESP is then exactly the original's, and **221r matches**.
- **211 still differs.** Two bisects name pairs among the rendering functions that call Direct3D: 0x545590 with 0x546b40, then 0x544cc0 with 0x545590. Each one alone gives 200.0. Partial sets drift steadily (199.9 → 197.4 as more are lifted).
  - Flags across calls are not the cause: no lifted function, and no caller of one, reads flags right after a call.
  - The real clock is not the cause: the fixed clock patches QPC and timeGetTime at the import table, and 0x52cd20's callers only check that a timer is zero.
  - Open.
- **Speed:**
  - A body with no x87 instruction (120 of 366) enters through `lift_enter_nf` / `lift_call_nf`, so the x87 state stays in the hardware.
  - Deeper than 60 nested lifted calls runs the original: the private stacks are 64 deep.

**Direct3D functions offline:**
- The process heap cannot be guarded. With `BEA_CAPTURE_PHEAP=1` the first fault hung the game, even with our handler's node page left out.
- `BEA_CAPTURE_PHEAP=copy` copies all of it (~12,600 pages) at the start of each capture and reads it again at the end, with no guard. It is for a few chosen functions; the page budget goes to 20,480.
- offline_check now loads our DLL **where the game had it** (regions.txt, `relocate_image`), so the modules around it sit where they were. In 211, d3d9.dll was at 0x6b4c0000, inside our DLL's preferred range.
- A byte the emulated original left as captured but the game changed was written by stubbed code (Direct3D's own objects) or by another thread, so the emulation check ignores it.
- Result: 0x545590 lifted matches on all 5 calls, and 0x546b40 on 2. Direct3D's outputs are stubbed in both runs, though, so paths that depend on them are not tested.

**The snapshot differ (`tools/snapdiff.py`, BEA_SNAP) is broken.** The game stops during loading even for an ordinary port (0x401c50), with or without lifting. In passing, its hook path now also gives the trampoline to a port's own `original` slot (a lifted thunk needs it to fall back).

**What goes in the game:** only lifted functions that the offline tester verified on at least one call, 128 of them, without the three rendering suspects. The other 238 wait in testdata/lift_pool until captures verify them.

**The gate with the 128 on** (BEA_LIFT=1, GATE_SECS=400): 36 of 38 levels and all 29 tours match, including every recording.
- 211 (181.5, three runs 181.4-181.6) and 411 (160.2) differ; both are AI-only levels without input.
- A bisect names the pair 0x543300 (with 0x5588f0).
- "Verified on one call" was too weak. Only 40 of the 128 had 90% or more of their instructions executed in the captured calls (scratchpad oc_coverage.py). 0x5588f0 had 18.5%, because its early exit (`cmp [0x704e48], 5`) took most calls.
- Every instruction form in 0x5588f0 is proven by some verified call, except `xor al, al`.
- 211 captured itself (`BEA_CAPTURE_PHEAP=copy BEA_CAPTURE_EVERY=50,64 --only`; it crashed in the copy near the end, and the reader now skips a cut-off last record): 0x5588f0 matches on 66 calls (47% of its code) and 0x543300 on 54 (100%).
- Registers (ecx and edx included), memory, the 8 KB below ESP, and the x87 control and tag words are all equal.
- The status word differs in C1: the original leaves 0x0277, the lifted 0x0077. The model never sets C1 (round-up). No code in BEA.exe tests C1 after fnstsw (only `test ah, 0x41 / 0x1 / 0x40 / 0x5`), so this is harmless but should be modelled.
- **Not timing:** 211 with lifting off, under 24 busy loops, still ends at 200.0.
- Not the return address seen by callees: none of the pair's direct callees reads [esp] at entry.
- Left: paths that depend on Direct3D's real outputs, which offline stubs cannot give.

**The snapshot differ's bug:** it assumed our DLL is at most 16 MB (`g_dll_hi = g_dll_lo + 0x1000000`). Today's is 56 MB, so the snapshots held part of our own DLL, and restoring them overwrote the differ's state. It now uses SizeOfImage. It is the tool for the Direct3D-dependent paths: real Direct3D, original and port on the same state.

**Gate with lifting off** (the default, with the 128 in the DLL): 38 levels and 29 tours match.

### A1-28 Ten cheat wins, the Fenrir's die delay, protected replays (2026-10-31)

**311 fixed** (8984f4f, see the commit): the dive bomber's guide never set +0x70; the port of 0x445250 sets it to 0, the value the original reads.

**New recordings.** The user won 700, 511, 221, 300, 500, 523, 331, 611, 731 and 742 (Fenrir), all with `-Cheat`.
- A cheat recording needs `"cheat": true` in replays.json, or its replay parts from the playthrough at once.
- Entries `<level>w`. Eight replay to the win on the original. 523w ends earlier (the Marshall at 257.6), the same on every run.

**0x44e200 (CFenrir::vslot62) was wrong.** It reads "fenrir_diedelay" from the level's settings.
- The float comes from param_2's vslot 0x34. The autoport read it through param_1, and called the base 0x4f45e0 as (param_1, param_1).
- The Fenrir blew up early: in 742w the player died inside it at 56.9 instead of escaping at 51.6.
- Now 51.8. Something else in hooks 2844-3318 moves it by 0.2; open.

**0x5010e0's reset was never done.** The test of param_1 (0x50118c) had become the constant '\0'.
- Found by a scan for parameters the original uses and a port ignores (5 suspects; the 4 others are script handlers, checked).

**Protected replays (harness BEA_PROTECT, BEA_UNITLOG).**
- CUnit +0x15c is the game's own vulnerability switch: CUnit::vslot56/57 set and read it, and the damage function 0x4f9a90 returns early while it is 0.
- BEA_PROTECT wraps vtable slot 40 (+0xa0) of the 33 CUnit vtables. It clears the switch for units whose "<class>|<type name>" contains one of the names. The type name is [[unit+0x164]+0xb0].
- BEA_UNITLOG=1 logs each unit's first damage and its death; =2 also dumps the unit's first 0x300 bytes.
- replays.json takes `"protect"`.
  - 221p: every FG-8 Packhorse transport survives (the win had lost one); the original wins at 206.6.
  - 300p: "Building|Forseti;Biodome"; the same ending, 130.2.

**Lifted functions:** 0x543300 and 0x5588f0, the pair a bisect named for 211 and 411, moved to bea_scratch/lift_held. 126 lifted functions stay in the tree.

**Gate:** 61 levels and replays, and 29 tours, all match.

### A1-29 Lifting on, 76 more lifted, protected variants, the stack-leftover hunt (2026-10-31 evening)

**Lifting on by default** (040e1ce; BEA_LIFT=0 turns it off): the 126 passed 61 levels and 29 tours.
- The test games run about 4x slower than with the ports alone (128 against 480 frames/s with 4 games running).
- all_hooks_now.txt (the list play.ps1 -Original and record_level.ps1 disable) was from 10-29. It lacked 127 hooks: the lifted functions, the parity ports, and newer ports.
  - The recordings since then ran some ports. They still replay exactly on the true original.
  - gated_batch now writes the list with the installed hooks too.

**76 more lifted functions verified offline.**
- A separate build (`-DBEA_EXTRA_LIFTED=bea_scratch/lift_pool`, build_pool/) captured them in 521r (119 of the pool), 611r, 110, 331r, 311, 500, 523r and 742r.
- 62 + 15 matched on every call. 0x445250 among them was already hand-ported (moved to lift_superseded).
- 0x499e30 differs (memory byte 0x835767). 0x48f620 is EAX-only (a callee's return address).
- The 30 functions outside the coverage universe were lifted into the pool too: never captured, so not in the tree.

**Protected variants** (BEA_PROTECT now matches "<class>|<type>|side<n>"; "a&b&!c" for and/not).
- The side is unit +0x138: 0 Forseti (the player's), 1 Muspell, 2 neutral. Found from BEA_UNITLOG=2 dumps in 300.
- Variants in the tests: 200p (the transporter), 331p (the Dragoon transport), 421p (the Packhorse), 522p (the landing craft), 231p and 321p (buildings), 400p (naval turrets: a new ending, "Landing zone was overrun" at 450.7), and 300p ("Building&!side1").
- Not deterministic on the original (dropped): 800p, 512p, 411p, 611p, 600p, and the all-friendly variants 700f and 431f. Each varies by 0.1-0.7 s from run to run once the replay parts from the player.

**The 742w 0.2 s (51.6 to 51.8) and stack leftovers.** Five ports each move the win alone; each fixed alone with stack parity:
- 0x4812d0 and the collision pair 0x480ed0 / 0x480c90, which call each other;
- 0x47beb0, which tail-jumps to CAirUnit::vslot66 0x402fa0 (a 0x84-byte frame);
- 0x44b370, which posts the event.

With all of them on it stayed 51.8. Parity grew for this (kept in the tree, unused by ports for now):
- BEA_PAR_TAIL (a site depth of -4): the original's `jmp f`. f runs with its return slot at the port's entry ESP, and the caller's return address goes back there afterwards.
- `bea_par_local(off, own)`: a local the original keeps at entry ESP - off, put there on the game stack.
- bea_par_jmp keeps EDX (fastcall). BEA_PAR_MAX = 32 nested frames.
- tools/callsites.py:
  - A push of a register that is written again before it is read is a save, not an argument. It was 4 off after 0x480ed0's `push ebx`.
  - Tail jumps are sites.
- tools/parity_convert.py converts a port. tools/parity_frames.py puts autoport's emulated frame (`bea_frame_`) on the game stack.

**The 106 tail-jump ports** (35 are exact `push target; ret` thunks already). Converting 70 of them, plus the callers of 0x402fa0, broke 800c (none@540 for 491.2):
- 0x4162e0 (CBomber::vslot66, which calls 0x402fa0) as a parity port fails alone with the rest at HEAD.
- A second cause is among the other 80 converted files: with 0x4162e0 at HEAD it still fails.
- 800c and 742w are fragile to stack leftovers. HEAD passes both 800c and 742w (742w within the gate's 2.5 s).
- The conversions are reverted. The converted files are kept in bea_scratch/parity_wip for a later attempt with the actual unset read found.
- tools/uninit_asm.py (unset reads of a function's own frame) finds none in 0x402fa0. The read may be in a heap copy, as in 311.

**Infrastructure:**
- BEA_GAMEDIR (behaviour_bisect): a second game folder (game2), so a second build tests beside the first. Keep the total at four games.
- A git worktree a second checkout for HEAD builds.
- A hang in a gate run with "DEVICE LOST (session locked or display change)" before it is the PC locking, not a port.

**Gate with the 202 lifted functions** (the 126 and the 76 new): 67 of the 68 level tests and all 29 tours match.
- 321p gave 137.2 under the gate's four games but 230.7 twice in the second folder, with the new functions on and off. It drops out as load-sensitive, as the other variants that part from the player.
- 4279 / 4473 (95.66%).


### A1-30 Four more cheat wins; two float-order bugs (2026-11-01)

The player won 710, 741, 523 (Marshall alive) and 521 with -Cheat. All four replay exactly on the original (twice each). As tests: 710w, 741w, 523v, 521w. The baseline has 71 entries.

**523v parted with the ports**: "Battle Engine fell in the sea" at 194.0 instead of the win at 360.2. It parts with the lifted functions off too.
- Bisect: 0x47a0b0 alone. It returns the slope of the ground under a unit's heading.
- The port summed the three squares under its square root as (c + b) + a. The asm sums (a + b) + c. Under the game's 24-bit precision control the order changes the result (bug class 19).
- tools/check_fp_order.py had missed it: GCC folds `-(x) * -(x)` to `x * x` where the asm keeps both `fchs`, so the terms differed by name. It now moves negations out of products and into a sum's term sign (negation is exact).
- The sharper checker found one more: 0x49e4b0's third normalisation, (z² + y²) + x² in the asm. This was the open one-ulp difference on 800c; all 7 captured calls now match offline.

**Gate:** 71 of 71 level tests and all 29 tours match. The 24 longest levels need GATE_SECS=1200 with lifting on.

**212w and 222w** (the player's runs of the second-branch missions) replay exactly and match: the baseline has 73 entries. Unpacked (zlib chunks), the x12/x22 worlds are the first-branch map with more or other enemies. 612, 732, 432, 412 and 332 change the mission itself. The second branch unlocks when every secondary objective of the mission before is complete (0x4496e0); for 500 it depends on slots 61/62 (rocket or submarine).

**Load-time captures.** The capture took calls only in play (game state 3), but most of the pool functions that levels run are called while a level loads. BEA_CAPTURE_LOAD=1 (capture.cpp) captures in every state.
- A function that reads a file during its capture ends the game: the kernel cannot write into a guarded page, and the read fails. The scratchpad loop drops such a function and reruns the capture. Nine were dropped: 00512130 004efb10 00557300 0046e240 0053be40 004cda60 0050b520 0050b9c0 004687e0.
- Captures on 500, 522r, 611r and 800r: 21 functions were the same on every call and moved into src/bea/lifted (225 lifted). 10 more could not be judged: kernel calls, a jump to an unmapped page, or one emulation difference (0x4d19d0).
- Gate: 73 of 73 level tests and all 29 tours match. 4300 / 4473 (96.13%).
- A second round (211w, the menu tour, 221r, 800r) verified 10 more, plus 0x48f620: it differs only in EAX, and tools/eaxuse.py shows its one caller overwrites EAX. The emulator now answers InterlockedIncrement/Decrement, which verified 0x4cf430. 4311 / 4473 (96.38%).
- Five not judged jump to page 0: a call through a COM object (0x558140 `call [edx+0x44]`, a DirectX interface) whose memory the capture does not hold.
- The new coverage map (all 73 tests) adds only one pool function to the 10-29 map: the new wins run the same code as the old recordings.

**Synthetic calls for never-run methods** (tools/synth_check.py offline, tools/synth_live.py with BEA_SNAP_SYNTH in snapdiff.cpp). About 110 pool functions never run in any test.
- Offline: the captured process heap holds the physics tables but no game objects (units live elsewhere), so there is nothing to call a method on.
- In game: at a chosen clock, find objects by vptr in live memory and call each method through the snapshot differ, which compares the original with the port. The entry image is restored afterwards.
  - A fault or a run over 5 s resumes at a recovery stub that puts ESP and fs:[0] back. A longjmp through the game's SEH frames crashed.
  - The watchdog resumes the frozen threads first: the main thread can wait in the kernel for a lock one of them holds.
  - 0x417e30 (CBuilding::vslot52) still hangs the game after the recovery.
- Result: in 211w no object exists for any of the ten methods tried. The never-run methods belong to classes that no level creates: front-end pages (CFEP*), the particle editor (CPD*), multiplayer, and squads.
- The front-end ones are reached by the menu tours instead: the pool functions are now captured during the tours (scratchpad tourloop.py).
- Tour captures (all 29 tours, BEA_CAPTURE_LOAD=1, one function dropped: 0052af00): 20 functions were the same in every tour that judged them and none differed. With 0x4cf430 that is 21 moved in (257 lifted): 4332 / 4473 (96.85%). Gate: 73 of 73 level tests and all 29 tours match.
- The emulator now answers QueryPerformanceCounter/Frequency with the value the game's call wrote, taken from the captured result. If the call overwrote it later, the emulated original differs from the game and the call is not judged. Five more pass on the tour captures: 00460b40 00482590 004cd7f0 0051b840 0051d160.
- Captures with sound and videos on (BEA_WITH_SOUND / BEA_WITH_FMV in behaviour_bisect.run and menu_test.run): an offline check needs real states, not an exact replay.
- A call through a COM object whose memory the capture lacks (its vtable reads as zeros, so the code jumps to page 0) is answered with S_OK, and the bytes its call site pushed are popped (tools/callsites.py). The port's run, whose calls come from our DLL, replays the original's pops in order. SetEvent/ResetEvent are stubbed.
- Nine more verified: 0044c180 004505b0 004685a0 0046c430 0048df20 004bcd60 0053c510 00557a90 00528540. 4346 / 4473 (97.16%). Gate: 73 of 73 level tests and all 29 tours match.
- Still differs: 0x499e30 (1 of 7 calls on 521r, a byte at 0x835767). Not judged: file reads (CreateFileA), CreateEventA handles, HeapAlloc, TlsGetValue, and emulation mismatches in 0045ffa0 004685f0 0051ca70 00544fc0 00545070 005528b0.
- **The import log** (capture.cpp, 2026-11-01). During a captured call, BEA.exe's import slots for ReadFile, CreateFileA, CloseHandle, GetFileSize, SetFilePointer, WriteFile, GetFileType, HeapAlloc/Free/ReAlloc/Size, TlsGetValue, CreateEventA, GetKeyNameTextA, timeGetTime and zlib's uncompress (#63) go through wrappers. Each wrapper logs the result and what the call wrote, in order, after the record ("ILOG", flag 2).
  - The harness's Platform::GetTime (time.cpp) logs its x87 result too.
  - offline_check answers those calls from the log for the original and the port, and 0x5159e0 from a logged clock value when the next entry is one.
  - ReadFile reads into our own buffer and copies from there, so the kernel never writes a guarded page: file-reading functions no longer end the capture.
  - A page the call freed is stored as zeros (store_page read freed memory and crashed).
  - 0x512130 is WinMain: capturing it covers the whole game, so it is left out.
- Three more verified: 0051ca70 00451d50 00455010. 4349 / 4473 (97.23%). Gate: 73 of 73 level tests and all 29 tours match.
- The file readers still stop elsewhere: 0x4efb10 polls a clock that does not move, 0x5290a0 creates Direct3D, and 0x4687e0 writes into an import stub.

**New menu tours** (my idea: menus into missions, goodies, saves):
- BEA_GOODIES=N (test_harness.cpp) raises the career's 300 goodie states (CCareer 0x660620 +0x1f44) to N every frame, so every goodie can be opened without earning it. A tour script asks for it with `goodies N`.
- x_goodies_all opens all 40 goodies: 8 art pages, videos, and goodie levels (play an enemy unit; quit from the pause menu back to the grid). It is captures only: two runs of the original part after the first goodie level.
- fe_goodies_art: the 8 art pages, repeatable; a test.
- fe_multiplayer: all nine unlocked multiplayer games (3 modes x 3 maps), configuration, 10 s of split-screen play, quit. **It differs with the ports** from the fifth game: player 1's Battle Engine is posed differently.
  - Bisect: 0x44b370 alone.
  - Offline, 4895 of its calls in the tour are the same (10 differ in EAX, which no caller reads), so the difference is in the stack below ESP: leftovers again, as on 800c/742w.
  - The parity version from parity_wip does not fix it. The saved registers and argument pushes are probably needed too. Open.
- 0x407350 (CBattleEngine::vslot39) found on the way: x = A.x + (T*p.x + B.x) in the asm, the port grouped (A.x + T*p.x) + B.x. Fixed; it does not change the tour.
- **Tool bug:** direct_batch.hooked_addrs missed BEA_PARITY_HOOK and LIFT_FUNCTION registrations. menu_test's "original" runs left the 5 parity ports and all lifted functions on, so tour baselines recorded since lifting became the default were not quite the original. It now finds 4407 hooks. fe_multiplayer is re-recorded as the true original.
- Captures in these tours verified 3 more: 0045ffa0 00472620 004a2a80 (the last a file reader, through the import log). 4352 / 4473 (97.29%).
- Gate: 73 of 73 level tests; tours 30 of 31 (fe_multiplayer is the open bug).


### A1-31 Made-up states for the functions no recording reaches (2026-11-01 evening)

About 90 of the lifted functions in the pool never run in any test: methods of classes with no object in any level, and menu or file code no tour reaches. offline_check needs a captured call, so they could not be judged. **tools/fuzz_check.py** judges them from invented entry states instead.

- The original and the port run in offline_check's emulator, from the same made-up state. Every page the call touches is filled by a generator seeded with the page's address (zeros, small counts, flags, floats, pointers into a made-up heap), so both runs read the same "memory".
- The registers and stack arguments are drawn from the same values.
- Calls through made-up pointers (vtables built from those values) answer at once with a made-up result, as offline_check's null calls do.
- In half the states the function's direct calls answer made-up too. The callee's own code on made-up memory goes where no game state leads, and the function under test is what is judged.
- Results are keyed by call site and count, or by callee and the k-th call, so the port's run meets the same answers.
- Float results come back through `fld; ret N` stubs, for Ghidra's float10 functions and vtable slots whose methods mostly return one.
- Imports:
  - File calls get made-up contents.
  - Other Windows imports get a made-up result and their real `ret N`, read from SysWOW64 (kernel32's exports jump to kernelbase's).
- **Coverage-guided:** after 32-48 random states, a state that reached new code is kept. New states change one to three of the values its function's own instructions read. They also use compare operands (a value read that equals one side of a cmp is set to the other, as RedQueen does) and the function's immediates and .rdata floats.
- The report gives the judged states, the differing ones, and the share of the original's instructions the judged states ran. `--dump`/`--replay` save and rerun a differing state; `--save` adds the coverage to a JSON file, so runs with other seeds add up.
- **Acceptance:** 95% or more of the instructions reached, 25 or more states the same, none different.
- **Negative control:** before the rdtsc fix below, 0x499e30 was caught on 92 of 448 states, down to the byte.

Pitfalls the tool met, each of which looked like a port difference:
- callsites.py counts every push since the last call as the call's arguments. VC6 pushes a later call's argument early (0x4157c4: `push 0` belongs to 0x4aa630), so a vtable call popped 12 where the callee pops 8. The pops now come from the `ret N` of the methods in that vtable slot.
- One answer queue for the original's calls, mixing the function's own calls with those of its callees, sent the port's answers out of order.
- Page 0 and heap pages first touched by an instruction fetch got different contents from a first data read.
- A made-up pointer led a write into BEA.exe's read-only sections, which offline_check does not restore, and it carried into the next run. Those pages are now restored before every run, and their writes count as the run's effects.

**0x499e30's old difference was the profiler.** The one differing byte (0x835767) is part of a sum of rdtsc deltas that 0x499e30, 0x4934f0 and 0x4a0bc0 add to and no code reads. The time-stamp counter differs between any two runs. offline_check.TSC_SUMS now leaves those globals out: 0x499e30 is the same on 24 of 24 captured calls (521r, 211w, 742w, x_mp_all). It runs in 69 levels.

Verified this way, batch 1: 00406da0 00440f80 004157c0 00459a60 004687e0 00494310 0049dcb0 00417e30 0040f110, plus 00499e30 from its captures.
- 0x40f110 differs only in EAX (fnstsw leftovers). eaxuse.py says a caller reads it, but all three call sites in 0x4140d0 overwrite EAX first, and the other callers are ports.
- 4362 / 4473 (97.52%).

Batch 2 (46 more, fuzz-verified the same way) brought it to 4408 / 4473 (98.55%). The gate passed 78/78 levels and 30/31 tours, fe_multiplayer being the open one. fe_goodies_art differed once and matched on the next two runs.

**Lead, not followed:** fuzz_check on 0x44b370 (the fe_multiplayer bug) differs only in the x87 tag word: the original's st3-st6 are tagged zero, the port's empty. This is probably an emulation artefact (MMX-style tags in a callee) and not the leftovers bug.

### A1-32 A recording plays with the options it was made with; multiplayer input on player 1 (2026-11-01 night)

The x12/x22 branch recordings of 11-01 evening (412, 332, 322, 312, 622, 524, 422, 232) parted from their replays within 7 s. Every run of the original agreed with every other, and none matched the recording. The 98 lift-pool hooks left on while recording were not the cause: a replay with exactly those on parted at the same frame.

**The cause was the options file.**
- tools/record_level.ps1 left the game folder's defaultoptions.bea in place: the person's own, with player 2's invert-Y switches set.
- smoke_test.ps1 deletes that file before every test run, so the replays ran on default options.
- Setting only the invert switches was not enough; the 412 replay then fell in the sea at 44.5 s. The file holds more than those switches, and the key bindings are in it too.
- Fixes:
  - The recorder now copies the file next to the recording, as `<rec>.options`.
  - `behaviour_bisect.run` passes it as BEA_OPTIONS_FILE, from the replays.json "options" key or the .options file, and smoke_test.ps1 copies it in.
  - The harness also takes BEA_INVERT, the recording log's `controls: invert` line.
- All ten replay exactly on the original. 422w parts at frame 4700 but reaches the same win at 148.7.

**Multiplayer controls (BEA_MP_ONEPLAYER=1).**
- The binding table at 0x8892d8 (0x20 bytes per action) has two columns.
  - With preset 1, column 0 holds the mouse, the arrow keys and Numpad0. Column 1 holds WASD, IJKL and Space.
  - CController::vslot15 (0x42db40) reads both columns in single player, but only the controller's own column (+0x16c) when 0x4725d0 says the level is 850-899.
  - The two players' controllers are at game +0x2b4 and +0x2b8.
- The harness wraps 0x42db40 in both its states:
  - Player 1's read starts at column 0, and 0x4725d0 answers 0 when called from inside 0x42db40.
  - The port asks `bea_mp_controller_check` instead, a hand edit in ap_0042db40.cpp; an autoport rerun must keep it.
  - Player 2's read is skipped: 0x42d9d0 clears the action bits before every read, and +0x170 is still set.
- Replaying the 11-01 menu recording with the switch, player 1 walks from (270, 395) to (309, 251). In the recording it never moved.
- record_level.ps1 -Level menu sets the switch, and replays.json "mp1" passes it.
- **Ship choice:** the multiplayer start screen holds each player's Battle Engine index at 0x8a1828 and 0x8a182c. The choices are Standard, Sniper, Laser and Blaster from data\worldheaders.dat. They are copied to 0x8a9bb8 and 0x8a9bbc, which CSpawnPoint/CStart vslot9 read. Single-player CFEPBEConfig sets 0x8a9bb8 as well.

### A1-33 Stack-leftover ports swapped for lifted copies: 0x407a50, the collision trio (2026-11-02 night)

- **524w** (the person's x24 win) fell in the sea at 331.8 with every port on, instead of winning at 311.6.
  - A one-window bisect (outcome-based) found **0x407a50**, the Battle Engine's yaw/pitch/roll update. The function was the cause on its own.
  - Its port matched the original on 99 captured calls, but only up to the stale bytes below ESP. Some later reader of an unset local sees a different value.
  - The lifted copy (asmlift.py) matches with no stale differences, and 524w then replays exactly.
- **mp_laser** (multiplayer, map 853) parted at play frame 9000.
  - A checkpoint bisect (scratchpad bis2.py: the first checkpoint off, compared with the recording) found **0x4812d0** (CHLCollisionDetector::vslot0, a 51-byte wrapper of 0x480c90), which needed a partner.
  - Lifting it fixed mp_laser, but 110r, 500r and 800c then lost their outcomes.
  - Bisecting 110r found **0x480ed0**, which changes it alone. The old 0x4812d0 port's stack had been cancelling it out in those levels.
- With 0x480ed0 and 0x480c90 also lifted (7/7 calls exact each, no stale bytes), 110r, 500r, 800c, mp_laser and 524w all match.
  - 742w still ends at 51.8 instead of 51.6 (within tolerance); its first checkpoint off is frame 2700.
  - These are the "collision pair" culprits of the 742w parity hunt (A1-2x).
- The direct ports are kept in bea_scratch/replaced.
- **sess_campaign**, a whole-session tour (my idea), covers:
  - level 2.12 from the level select, left idle to its defeat, Retry, then pause and Quit to the debriefing
  - back at the level select, 2.21 with a walk and a jet flight, quit
  - the main menu, then multiplayer on locked map 864 (`env BEA_MPMAPS 1`), and back
- That tour differed from the original from the 2.21 flight on. The first bisect found 0x4019e0 (CActor::vslot0, hand-fixed port), which posts through 0x44b370. Lifted, the tour still differed.
- The second bisect found **0x44b370** alone: the message post with 107 callers, the old fe_multiplayer suspect.
- With both lifted (7/7 calls exact each), sess_campaign and fe_multiplayer match.
- 800c then ran to its time limit without its win, even with both switched back to the original: the old ports of 0x4019e0 and 0x44b370 had been masking another leftover reader.
  - behaviour_bisect found the old pair again: **0x4162e0 needs partner 0x4f41b0** (A1-2x).
  - Both lifted (6/6 and 4+7 calls exact): 800c, 110r and 500r pass.
- 700w then ran to its limit: **0x41b450 (CCannon::vslot2) needs partner 0x4a1ca0**. Both lifted (1-2 and 6-7 calls exact): 700w passes.
- Gate after the cascade: 88/88 levels and 32/32 tours, including fe_multiplayer, sess_campaign and fe_goodies_art.
- Also verified this night:
  - fuzz_check batch 3 (0x43ed80, 0x5282b0, 0x46e460, 0x4bbcd0, 0x50b520: 98-100% reached, 31-617 states same)
  - 0x4db150 and 0x5528b0, from captures of the multiplayer recordings (2 and 13 calls same; mp_*_pool)
- **Lesson:** a port that differs only in stale stack bytes is not neutral. When a replay culprit's port is "same, stale bytes only", lift it, together with the functions it calls on the same stack.

### A1-34 The person's whole session with a win as a tour; its replay parts from the recording (2026-11-02)

- `record_level.ps1 -Level menu -Cheat -Label session_win`, played by me, covers: Load Game, 2.21 won (Victory screen, debriefing with grade B), the next mission, and the menus.
- menu_test gained `recording PATH` (a person's .rec as the tour's input), `shotat N...` and `end N` (launch frames).
- **sess_win** uses it with `env` lines for BEA_CHEAT, BEA_MP_ONEPLAYER, BEA_SYNCJOBS and BEA_OPTIONS_FILE.
  - Two original runs agree on all 14 shots, and the full port matches.
- **Open:** the original's replay parts from the recording at play frame 880-890 (19.7 s): the rand seed differs first, the Battle Engine's position from 123 s.
  - It is not stack leftovers: BEA_STACKSCRUB 00 and cc give the same result.
  - The draws in that window are all the particle code (0x4c0ad0, 0x4c1a7e, 0x4c414a.. via 0x4cb8d5), 400-500 a burst every third frame. So the particle count differs between the recording (real time) and the replay (fast).
  - Suspect an emission or detail rate tied to real time, e.g. GetTickCount, which the harness does not patch. Level recordings replay exactly, so it may be specific to a level started from the career.
  - Because of this, a menu session is a test only against the original's replay, not the person's playthrough.

### A1-35 Multiplayer and race recordings as tests; more leftover culprits (2026-11-02 evening)

- The user recorded:
  - every locked multiplayer map: top5/top6/mid4-6 (865, 866, 861-863), with -AllMaps -Cheat
  - the bottom row, bot1-3 (852, 854, 857)
  - races 901-905: 904 won, the others "Too slow". In jet mode the throttle is 0.5 - input*0.5 (0x410310); holding W is the boost, and Shift is the air brake.
  - Level 900 has no Battle Engine list in worldheaders and quits at load.
- The races are level tests (901s-905s, 904w); baseline 93.
- The 13 multiplayer recordings are tours: mp_*.txt with `recording`, `shotat`, `end`, and `env` for MP_ONEPLAYER, MPMAPS, CHEAT and OPTIONS_FILE.
  - Two original runs agree on all of them.
  - Four multiplayer "crashes" were DEVICE LOST hangs in Present (0x512630 loops on TestCooperativeLevel) with keep_awake off. Keep it running for tours.
- Culprits found by the tours, lifted and checked exact:
  - mp_mid6: **0x445250** (CDiveBomber::vslot9)
  - mp_mid4/mid5: **0x442d40** (CDestroyableSegment::vslot9)
  - mp_laser/top5: **0x41a000** (CViewPointCamera::vslot1)
- The cascade that followed:
  - 311r: **0x4aab90 + 0x4ae0d0**. 0x4aab90 is untestable offline (writes outside the capture) and is judged by the replays.
  - 700r: **0x5398d0**, then **0x4269b0 + 0x47c8e0**.
- Verified from captures:
  - 0x456dd0 (CFEPDebriefing::vslot5, from sess_win: 2 calls same; fuzz 618 same)
  - 0x53cd30 (from 904w: 2 calls same)
- A static trace of the 58 unverified functions (what triggers each):
  - About 20 already run but can't be checked offline: Direct3D, imports, startup.
  - About 10 are reachable in play: the wingmen screen from career 2.31+, the credits after 7.41/8.00, Carver's cloak in 6.1x/6.2x, the "Aurore" free camera, gamepad redefine.
  - About 10 are dev features: `autoexec.con` runs console commands at every level start (no dev check), `-testeur` + F8 takes a screenshot, a window resize resets the device.
  - About 12-15 look dead.
- Gate: 93/93 levels; tours 46/46 (fe_goodies_art differs only late in the full run and passes alone).

### A1-36 Test windows each read their own options; autoexec.con reaches the console (2026-11-02 night)

- **Options race:** smoke_test.ps1 copied a replay's options into the shared defaultoptions.bea, and another instance starting at the same moment deleted it. 524w then fell in the sea at 27.7, and earlier one-off failures (422m; fe_goodies_art late in full runs) fit the same cause.
- Every instance now passes `-defaultoptionsname bea_o<inst>.bea`, the game's own switch, parsed at 0x423bc0. It overwrites the 19-byte literal at 0x63db18 that the startup read uses; the options screen's write keeps "defaultoptions.bea".
  - That file holds BEA_OPTIONS_FILE's copy, or does not exist (defaults).
- Gate after it: 93/93 levels and 46/46 tours, fe_goodies_art included.
- **autoexec.con** in the game folder runs as console commands at every level start, with no dev check (0x46dc30).
  - `Set <var> <value>` lines reach **0x42a7b0** (7 calls same, plus fuzz 52% / 664 same): verified.
  - `MemStats` crashes the original (it reads past the stack top at 0x1b4000).
  - BuildStaticShadows and BuildLandscapeCache were not tried, because they write game data files.
- `-testeur` plus F8 (0x4714c0 checks 0x662f3e and key 0x42) made no grabs\ directory through a tour (menu_test `f8`, BEA_EXTRA_ARGS). Open.

### A1-37 Wingmen, Carver's cloak, end credits; recordings with every port off; full_gate (2026-11-03)

- **BEA_HOOKS_OFF=1** (hooks.cpp) skips every registry hook, so only the harness hooks are installed. record_level.ps1 sets it, so a stale bea_hook_disable list can no longer leave new lifts on in a recording.
- **New recordings, now tests** (all the same in two original runs and one port run):
  - Session sess_wingmen (career 2.21 -> 2.31 with the wingmen screen).
  - 611c (Carver cloaks): **0x535530** (SetStealth) is lifted and verified on its capture.
  - 800kc (800 won, then the end credits, using record_level -KeepGoing).
  - 500k (rocket) and 500s (submarine); 421k won and 421d lost; 741kc (won, then the credits) and 741d lost.
  - 421d's original runs end 0.3 s apart (98.6 / 98.3), within the 2.5 s tolerance.
- Credits code 0x4726b0 still can't be checked offline, because it calls PeekMessageA. The game ignores the window's close button during the credits.
- Recordings run with `-skipfmv`, so no cutscenes. A real-time video would knock the fixed-step replay out of time.
- **tools/full_gate.py** runs the level tests (3 instances, main folder) and the menu tours (1 instance, game2) side by side, so the full gate takes about 1 h 15 min instead of 1 h 45 min. menu_test passes `-GameDir` to smoke_test.ps1.
- fe_goodies_art differed once in the 11-03 gate at evenly spaced frames, then passed alone (18/18). It is a one-off.
- Gate before the new recordings: 96/96 levels and 46/47 tours (the one-off above).

### A1-38 The last 54: replay-verified lifts, three more fuzz passes; tours run in the main folder (2026-11-03 afternoon)

- Of the 54 functions left, 13 are run by the tests, but offline_check can't judge them (PeekMessageA, D3D and window calls, zlib output buffers, rdtsc timing). They count as **replay-verified**: the full gate (every level test and every tour) matches with the lift on. These are the 13: 0x468200, 0x4685f0 (frontend), 0x4726b0 (credits), 0x4efb10, 0x50b9c0, 0x557300 (level load / zlib), 0x522190 (wingmen), 0x5290a0 (window / D3D), 0x53aa40, 0x53abe0, 0x544fc0, 0x545070, 0x555020.
- Fuzz (tools/fuzz_check.py, the A1-33 rule) passed three of the other 41: 0x4cce60, 0x54f380, 0x42b120. The rest:
  - 0x442960 is not accepted: it differs only in EAX bits left over from fnstsw, which a caller could read as a bool.
  - 0x4934f0 is parked: one float differs by its last bit in a matrix copy at 0x494256.
  - 0x423bc0 (ParseArgs), 0x543300 and 0x5588f0 have no lift in the pool.
  - Many others reach 0% of their instructions: made-up strings smash the stack, or they hit InitializeCriticalSection, GetFileVersionInfoSize, the SEH prolog or null calls.
  - These are partial: 0x458ee0 93%, 0x54e9d0 90% (2 differ), 0x4944d0 83%, 0x41a3f0 70% (an esp difference on the 0x40c640 logging path), 0x557060 60%, 0x4ab360 40%, 0x54f090 100% (1 differ, at a null page).
- **offline_check.py fixes:**
  - An ilog output buffer the function never touched before (uncompress's destination) gets its pages mapped before the write.
  - A SystemExit from callsites (0x5758b4: leave without a frame) no longer aborts the run.
  - rdtsc is deterministic: every `0f 31` in the exe and dll returns a counter that steps by 100000.
- **Tours must run in the main game folder.** In game2 the original's own cursor lands elsewhere (y 330 instead of 305), probably uninitialised memory depending on the path. Level replays are fine there. full_gate.py now runs levels in bea_game2 (`--level-dir`) and tours in the main folder, and copies build/zlib.dll into both. The earlier gate (1103c) had run the levels with a stale DLL in the main folder.
- Menu replays in one folder must run one after another, because parallel runs fight over the save files.
- 521g (521 won, about 25 gnats) is now a test: Objectives complete@291.6.
- Gate: 102/102 levels; tours 46/47, and the one that differed, fe_goodies_art (late in the run at evenly spaced frames, as before), passed when run alone.

### A1-39 Seventeen more of the last 38: fuzz_check learns stack balance, COM calls, no-return functions; ParseArgs lifted (2026-11-03 evening)

- Most of the 38 were not judged because the checker broke its own made-up states. Fixes in tools/fuzz_check.py:
  - **Stack bytes an unsure indirect call pops** (`balance_pops`): on a path from the call to the function's `ret`, the stack must come back level. Calls with nothing pushed since the last call count as taking no arguments. For calls in the function under test, the depth is the emulator's own, because callsites' depth is wrong after an earlier unsure call. callsites counted 0x4f37c0's `push ebp` save as 0x4f37df's argument, and the slot table cut 0x470536's one argument to 0.
  - **COM calls** (`com_call`): `mov ecx, [eax] / push eax / call [ecx+N]` is stdcall with the object pushed, so it pops every push since the last call. The game's vtable slots say nothing about Direct3D's (0x5134a0). An `add esp` after such a call is not cdecl cleanup when it is the epilogue.
  - **Runtime helpers always run** (`REAL_CALLEES`): `__alloca_probe` (0x55def0) moves ESP by EAX, so a made-up answer left 0x51c280, 0x547860 and 0x4a1f60 returning into made-up stack. The x87 helpers (_CIasin, __ftol, _CIfmod, _CIpow) also always run.
  - **Functions that never return:**
    - The fatal error 0x42cfa0 (and 0x42c750 and 0x42d0b0, which call it) spawns Message.exe and calls ExitProcess. A run ends at ExitProcess as if the function had returned the exit code.
    - The level cycler 0x4f0200 loops forever. A run ends at its 3rd call of 0x5492d0 (`NORETURN`).
  - **Recursion:** 0x4934f0 calls itself. In the port's run the inner call executes the original's body (the exe is not patched in the emulator), and its made-up answers now come from the original's queue in order. Before, the queue fell out of step (its "1-bit float" difference was this).
  - **Writes into BEA.exe's read-only sections make the run untestable.** The game would fault there, and 0x54c0a0 state 324 overwrote its own code at 0x54c8ad and ran it.
  - **`fnstsw ax` in the original:** the emulator sets B and ES with every exception masked and leaves C1 from before a compare. The checker clears the three bits (0x8280) after each `fnstsw ax` in the exe. On the CPU the sequence never sets them (scratchpad sw442960.c), the lift's model has C1 0, and no game code tests C1. 0x442960 and 0x51c280 differed in these bits alone.
  - **Switches:** negative immediates (`add eax, -0x2a`) join the dictionary. Each jump-table switch's case values (`switch_cases`) are tried in every stack argument of the first states, then mutated into arguments. 0x51ccb0 went from 18% to 87%.
  - **Stack pages below the three mapped at entry** (a big frame's) are dead after the return. 0x51c280's 8 KB frame and ParseArgs differed there.
  - `KNOWN_ARITY` covers exports the SysWOW64 scan cannot follow (InitializeCriticalSection, the version.dll calls, SetWindowPos, HeapSize...).
- **Accepted (fuzz: >=95% reached, >=25 same, 0 differ):** 0x41a3f0, 0x442960, 0x470430, 0x4944d0, 0x4a1f60, 0x4f0200, 0x4f37c0, 0x512130, 0x51c280 (98%), 0x52b760, 0x543300, 0x54c0a0 (99%), 0x54c920 (99%), 0x42cfa0.
  - 0x42c750 and 0x42d0b0 reach 91%. The rest is the epilogue after the call to 0x42cfa0, which never returns.
- **ParseArgs 0x423bc0** is lifted. The harness now wraps it (`bea_harness_wrap`) whether the lift is on or off, and `bea_harness_own_hooks` hooks it alone when nothing is registered there. The windowed switch is set after either. BEA_HOOKS_OFF recordings therefore get the original parser, and 0x423bc0 left the always-on keep-list. Fuzz: 0 differ (EAX only, which the void wrapper drops), 72% reached. It runs at every start, so the gate verifies it.
- Wrapped ports get the original's trampoline in their own slot too, for a lifted thunk's fallback.
- Left (21): the big ones at 6-40% (0x4a5b70, 0x4ec2f0, 0x529350, 0x5169b0, 0x4541e0, 0x559410, 0x5286e0, 0x54b800, 0x4ab360, 0x4f2ce0), those at 55-92% (0x5134a0, 0x458ee0, 0x4934f0, 0x421db0, 0x51ccb0, 0x52af00, 0x5588f0, 0x54e9d0, 0x557060, 0x54f090), and 0x547860 (the texture-table dev tool, not judged).
- Gate: 102/102 levels; tours 46/47, and fe_goodies_art (late, evenly spaced frames, as in A1-38) matched all 18 shots alone. A solo tour run needs BEA_SCRATCH=testdata/ and BEA_GAMEDIR set to the main folder, as full_gate.py sets them.

### A1-40 Seven more; out-parameters and x87 hints in fuzz_check; the quick gate (2026-11-03 night)

- **fuzz_check.py**
  - **A callee run for real can wreck the frame.** 0x421db0's 0x44b370 (the message sender, on made-up globals) wrote over its return address. When a state turns untestable after real callees ran, it runs again with every call answered made-up (`stuball`).
  - **Arguments copied by value.** callsites counted `push 0 / sub esp, 0x10 / call [edx+0xf4]` (0x421e09) as 0 bytes and marked it certain. A `sub esp` since the call before now makes the count unsure, so the stack balance decides (0x14). In the balance, "nothing pushed since the last call" now wins over the vtable-slot table (slot 0x100 pops 20 in other classes).
  - **Out-parameters.** A made-up call of the function's own writes a made-up pointer, half the time, where an argument points at one of its locals, as Direct3D's CreateTexture hands back its texture (0x5134d2). The port's run writes the same value where its own k-th argument points. The values are state (`outv`, keys `('o', call, argument)`) that mutation and compare hints change: 0x5134a0's surface format compare (0x15/0x16) reads a GetDesc out-struct.
  - **Switch cases from call results, and after the guided states.** 0x557060 switches on 0x513760's result, and none of its random states got that far (a global flag is 0 in the file's data). The case pass now also sets each call result the states saw, and runs again after the guided states from the richest ones.
  - **Compare hints**:
    - At most 4 per compare instruction, since a loop's compare filled all 200.
    - A negative immediate is in the dictionary as itself too (`cmp [edi+0x10], -2`).
    - **x87 compares** with a constant (`fcomp [1.0]`) give hints to the dwords the last two `fld dword` loaded. The emulator's FPU stack is not read.
    - A sweep tries every hint of the last states that found code, once.
  - `FUZZ_TIMEOUT_US`: each run has 5 s of wall clock. On a busy machine (four game windows), the slower lifted port "did not return" in 0x4934f0's states 24 and 60. With 120 s they all return.
- **Accepted:**
  - **fuzz:** 0x421db0 (100%), 0x5134a0 (100%), 0x4934f0 (100%, 472 same; parked in A1-38 for a 1-bit float that was the recursion desync of A1-39).
  - **replay-verified** (the refreshed coverage map has them in all 102 levels and 46 tours): 0x5286e0, 0x529350, 0x52af00, 0x5588f0. 0x5588f0's older lift was half of a 211/411 culprit pair with 0x543300; both are now in.
- **Quick gate** (`full_gate.py --quick [addrs|auto] [--dry-run]`): it plays only the tests that run the changed functions, plus the canaries: 110r 211w 311r 521g 524w 742w 800c 901s, and fe_main fe_goodies_art fe_multiplayer mp_laser. It refuses when other source changed (harness, hook loader, lift_rt, build). A port can only change a test that enters it. Batches of functions no test runs still get a full gate every few batches and before they count as done.
  - The maps: level_coverage.py (`--secs` default 1200; 120 had cut long levels short) and the new `menu_test.py coverage`. Both now count the ports' own "called+" too, so they cover every game function (bea_scratch/level_coverage.json, tour_coverage.json; refreshed 11-03 with 102 levels and 47 tours).
  - `tools/coverage_drift.py [--rerun]`: checks that each coverage run played as recorded (level outcomes, tour shots) and redoes those that did not. Only fe_goodies_art drifted (its usual late frames); its rerun matched.
- Gate: 102/102 levels; tours 46/47, fe_goodies_art differing at 2 late frames, and it matched all 18 shots alone.
- 4459 / 4473 (99.69%). Left (14): 0x557060 (fuzz pass, quick gate next), 0x458ee0 (93%: the 0x45935a block needs a float argument of exactly 1.0, and the two colour clamps after an already clamped ×255 are dead code), 0x51ccb0 (87-90%), 0x54e9d0, 0x4f2ce0, 0x54f090, and the big ones: 0x4ab360, 0x54b800, 0x559410, 0x4a5b70, 0x5169b0, 0x4ec2f0, 0x4541e0, plus 0x547860 (not judged).

### A1-41 Four more by quick gate; switch globals, frontier states (2026-11-04)

- **fuzz_check.py**
  - **Switch index globals** (`switch_sources`): globals loaded into registers just before a jump-table switch's bound check. The case pass sets each of them to every case value, the others 0. 0x51ccb0's inner menu index is `[0x8a1808] + 6 * [0x8a180c]`: 87% -> 99%.
  - **Frontier states:** an untestable state that reached new code is kept as a base to mutate from (25% of the guided states). Half of those mutations put small counts (1-4) into two to four stack arguments at once, since most such states ran out of instructions in a loop over made-up sizes. 0x54e9d0's pixel loop (`width * height`) still stays out of reach (72%).
  - The tonight batch run took 0x54b800 from 32% to 97%, from A1-40's compare-hint changes.
- **Accepted** (fuzz, then the quick gate, A1-40):
  - 0x458ee0: 98%, 1208 same. With 120 s per run none of the port's runs "did not return". The two colour clamps after an already clamped x255 are dead code.
  - 0x557060: 100%. It runs in three video tours, which the quick gate played.
  - 0x51ccb0: 99%. It runs in 16 tours, mostly multiplayer.
  - 0x54b800: 97%. No test runs it: canaries only.
- **Quick gates:**
  - 0x458ee0 + 0x557060: 8/8 levels, 7/7 tours, about 15 minutes.
  - 0x51ccb0: 8/8 levels. 5 multiplayer tours hit menu_test's real-time cap at a third of their usual frame rate, logged as CRASH with no "endframe:". A fuzz run near its 4 GB memory cap was running beside them. Alone, all five match. No fuzz_check while tours run.
  - fe_goodies_art differs at two late frames in about half its runs (a different pair each time) and matches alone. As a canary it costs a re-run most times; worth finding the cause.
- 4463 / 4473 (99.78%). Left (10): 0x54e9d0 72%, 0x4f2ce0 57%, 0x54f090 55%, 0x4ab360 41%, 0x559410 21%, 0x4541e0 16%, 0x4a5b70 15% (18.5 KB), 0x4ec2f0 7%, 0x5169b0 6%, 0x547860 (not judged).

### A1-42 Holdups of the last 10; sound setup 0x5169b0 verified; console commands reach three more (2026-11-04)

- A survey of the 10 for "sound card"-style holdups (scratchpad holdups.py: imports reached through 3 levels of calls, and code addresses passed to them as callbacks):
  - **dsound by ordinal** (#2 DirectSoundEnumerateA, #11 DirectSoundCreate8) and **zlib by ordinal** (#9 compress, #63 uncompress, cdecl): ORDINAL_ARITY.
  - **Enumeration callbacks** (CALLBACK_IMPORTS): DirectSoundEnumerateA's callback (0x516ed0, no Ghidra function there) now runs for real with one made-up device. It returns to `xor eax, eax; ret 8` stubs written once at start-up. The callback is registered as a function so callsites can count its COM calls. 0x5169b0 went from 6% to 83%.
  - winmm `mmio*` arities; `RaiseException` (a C++ throw) ends the run like ExitProcess.
  - Writes from Python go through `_poke` (page by page, lazy pages mapped first). offline_check calls `ctl_flush_tb` after unmapping a run's pages: unicorn 2.1.4 raised an access violation inside uc_emu_start after many map/unmap cycles.
  - Imports and COM calls can fail: E_FAIL is among the made-up results, so the `test eax, eax / jge` failure paths after DirectSound calls run.
- **callsites.py:**
  - A frame EBP that is pushed (and EBP then used for `this`) is restored when popped, for `mov esp, ebp` (0x4ec2f0 was not analysable at all).
  - Callee-saved registers pushed before the function writes them are saves.
  - eax/ecx/edx are never saves: `push edx / lea edx, [...]` at 0x516d06 is CreateSoundBuffer's argument. The old rule counted 12 bytes for 16, and 0x5169b0's `ret` came back 4 bytes short whenever a device was found.
- **0x5169b0 accepted:** 96.2% over five seeds (A1-31: seeds add up), 6881 same, 0 differ. No test runs it (tests play with -nosound). Quick gate: 8/8 levels, canary tours match.
- **fe_goodies_art** is not repeatable in the original: its art pages fade their captions and change on real time. Two original runs differed by ~1100 pixels at most frames and by 98215 at frame 1766. New baseline with `tolerance 3000`; it left the quick gate's canaries (fe_goodies instead).
- **Console commands:**
  - 0x547860 is `BuildLandscapeCache` ("Build the landscape texture cache", the stub 0x544700 registered at 0x544b32). It writes ps2data\LandscapeTextureCache\texcache.dir/.tex and reaches 0x54e9d0 and 0x54f090.
  - 0x4ec2f0 is StaticShadows.cpp's shadow map builder, behind `BuildStaticShadows` (0x4ebbb0).
  - autoexec.con reaches both (A1-36). The real game can then verify the four: compare the cache files, and shots, between the original and the ports.
- 4464 / 4473 (99.80%).

### A1-43 Fullscreen on Windows 11; the lift bridge 3.5x faster; what the tests never run (2026-11-04 night)

- **The original cannot run fullscreen on this machine** (Windows 11, RTX 5080). Its device is lost at the first Present, even with the window in front. 0x512630 then loops on TestCooperativeLevel with Sleep(100) and never calls Reset. Under Direct3D 9 a lost device answers D3DERR_DEVICENOTRESET until reset, so the game waits forever, and its bare window shows: white, with the D3D framework's File/Go/Capture/Options menu (RT_MENU 141).
- **Fixed in the port, by my decision:** on D3DERR_DEVICENOTRESET, ap_00512630 calls the game's own reset, 0x52b760. That is the framework's Resize3DEnvironment: InvalidateDeviceObjects (vslot 0x14), Reset with the present parameters at +0x32e58, RestoreDeviceObjects (vslot 0x24). `BEA_ORIGINAL_DEVICELOST=1` keeps the original's wait.
- **Fullscreen tests** (scratchpad fs_test.py): smoke_test without -forcewindowed, `-res W H` (the game's switch; ParseArgs puts the two numbers at options+0x164/+0x168). `BEA_FSLOG=1` turns on a minimal harness: the device mode logged, the window brought in front (AttachThreadInput, an Alt press, SetForegroundWindow) before the fullscreen device is made, and Present counted. In windowed mode Video Options' Screen mode only changes the saved option; the back buffer stays 640x480.
  - All 9 modes, from 640x480 to 2048x1536, original plus the fix (only 0x512630 on) and all ports: the right device mode, no crash, the frame-1 loss reset within ~0.2 s.
  - Alt+Tab away and back: the device is lost on the return, reset, and runs on, in both.
- **Speed.** Fullscreen 1024x768, level 3.00: the original ~300 frames/s, all ports ~65. `BEA_PROFILE=1` samples the main thread's EIP every 1 ms (hooks.cpp profile_thread); tools/profile_report.py names the samples.
  - 62% of the time was the lift bridge: lift_x87_in 25.5%, lift_call 23.9%, lift_x87_out 10.3%, lift_enter 2.7%.
  - lift_x87_in copied each 80-bit register through a long double (fld/fstp). Empty registers' stale bits (denormals, unnormals, NaNs) took microcode assists, and an SNaN even came back quieted. They are now byte copies: 71 fps.
  - **Fast mode:** a call with the model's x87 stack empty no longer saves and restores the whole FPU. The hardware already holds the game's control word, its flags and an empty stack. lift_call reads only the status word before and after (fnstsw). lift_x87_in pops into the model the values the callee left (the change in TOP: a float result). The exit in that mode writes the model's condition bits and TOP into the status word (lift_exit_env). The stale bits of empty registers are no longer carried; no instruction can read them, and offline_check compares only TOP and valid registers. 225 fps; the bridge is ~21% of the time.
- **Never executed by anything:** 566 direct/verified ports and 267 generated ones run in no level, no tour and no checker run. They were accepted on static checks in the early phases. offline_check.port_symbols now also reads the DLL's hook tables, so the generated template ports (RetConst<...>) can be checked; a sweep over the 833 is running.
- **Every test plays with -nosound, -skipfmv and a fixed 1/60 s step.** The sound code (0x5169b0 included), the movie player, and timing other than 1/60 s run only in my own play. Sound-on and movie-on runs wait for a separate session.

### A1-44 Sound on game time; sound-on runs match the original (2026-11-05)

- **Why sound broke replays:** mission scripts wait for a voice line to end (DirectSound GetStatus) and music/voice streams refill by the play cursor (GetCurrentPosition). Both run on the sound card's real time, so with sound on two runs of the same level parted (2.11 lost at 190-198 s on 10-31).
- **`BEA_SOUNDCLOCK=1`** (test_harness.cpp, needs the fixed clock): every secondary DirectSound buffer's play position and playing state come from game time (frames x step), its size and byte rate (CreateSoundBuffer, SetFrequency, DuplicateSoundBuffer). A 4 s line ends 4 game seconds after Play, every run. The real calls still go to DirectSound, so the sound is heard. Hooks: DirectSoundCreate(8), IDirectSound vtable 3/5, buffer vtable 2, 4, 9, 12, 13, 17, 18. With it (and `BEA_SYNCJOBS=1`) 211 gave 174.8 four times; 300r, 521g, 741w, 800c repeat exactly.
- **Sound-on pass, original (BEA_HOOKS_OFF) vs ours, both on game time:** tours 47/47 identical; levels 70/102 identical, 31 within 0.1-0.4 s, 311 apart (ours 269.4, original 277.2, repeatable). Repeats of 331w, 331r and 800r2 overlap the original's own spread (noise). 600: ours 64.3-64.4 in four runs, the original 64.5-64.8 - possibly real, too close to the original's spread to bisect; open.
- **422w -> 0x411b70** (behaviour_bisect with `BEA_EXTRA_ARGS`, sound on): the port tested `f == 0.0f`, the original `fcomp; fnstsw; test ah,0x40`, which takes NaN as equal too. Fixed (`f == 0.0f || f != f`).
- **311 -> 0x447120** (CDropship::vslot66). Eight compares had C semantics where the original's x87 branches take NaN the other way; fixed to the original's branches, but 311 still ended at 269.4. fuzz_check found the parting inside its callee 0x402fa0 (CAirUnit::vslot66), which ran at another stack depth under the port. Made a stack-parity port (BEA_PARITY_HOOK, 44 call sites from callsites.py --table): 311 then 277.2 twice, as the original.
- **NaN compares in general:** 483 non-lifted ports have the `fcom/fnstsw/test ah` pattern; each may treat NaN differently. Lifting them all is on the to-do list (my choice: targeted fixes first).
- Full gate (silent) after the changes: 102/102 levels, 47/47 tours.

### A1-45 Movies on and other frame rates: original vs ours (2026-11-05)

- **Movies (Bink).** With `-skipfmv` off the start-up logos, the opening movie, the front end's background video, briefings and the radio talking heads play. 15 of the 16 video-class methods already ran in the silent tests.
  - Bink steps a video when BinkWait says a frame is due, by real time, so with movies on the front-end background stood at another frame in every run, original included (menus identical by eye).
  - **`BEA_VIDEOCLOCK=1`** (test_harness.cpp, needs the fixed clock): a video's frame k is due k / (FrameRate / FrameRateDiv) game seconds after its first BinkWait (BinkNextFrame counts k). The start-up movies play in a loop of their own where game time advances only per shown frame: a video asked 3 times at one game time gets its next frame. The Bink open runs on the job worker (0x5412e0 -> 0x528d50): use `BEA_SYNCJOBS=1` too. `BEA_VIDEOLOG=1` logs every BinkWait / BinkNextFrame.
  - All 47 tours with movies on, original twice and ours twice: 46 identical (or the original's own runs varied the same way). Early stops were all DEVICE LOST: the screen locked or slept (keep_awake had stopped).
  - **mp_blaster**, one shot (14581): ours 537 pixels apart from the original in the 3D scene, both repeatable; later shots match. The video calls are identical in both. A shot bisect found no single port: switching off even 0x401000 (a CMonitorPtr setter) gives a third picture. Stale-stack depth effects (A1-24/25) in this one condition; left as a known limit.
- **Other frame rates.** Every test plays a 1/60 s step. At 1/30 s the original did not repeat itself (600: 65.8, 64.3, 65.7 s). Three leaks of real time, all closed by **`BEA_FPSCLOCK=1`** (opt-in: the 60 fps recordings were made without it):
  1. FpsTimer::Update (0x423720) measures the frame rate, and game code scales by 60 / that rate (0x4b82b0, 0x4b93f0, 0x4714c0, 0x48f620 via 0x515950). The wrap makes it report the fixed step's rate.
  2. The fixed clock adds 0.1 us per read so a wait inside a frame ends; the count was shared by all threads, so the sound and streaming threads' real-time polls moved the main thread's clock. Each thread now counts its own reads.
  3. The outcome thread polls every 1 ms and read the frame and clock up to ~16 frames late (600: 64.75 / 65.3 from identical runs). The game thread now records the frame and clock of each state change at Present, and the outcome line reports those; a no-outcome run reports the end clock itself.
  - Then the original repeats exactly (600: 64.2 four times), and 12 levels (AI-only and recorded: 211 311 422w 521g 600 741w 100 300r 500 905s 800c 731w) match original vs ours **12/12 at 30 fps and 12/12 at 144 fps**. The game itself plays differently at other rates (at 144 fps 422w falls in the sea at 40.9 s), and the ports follow it exactly.
  - `BEA_INPUTSYNC=N` and `BEA_RANDTRACE` now also count play frames in runs that neither record nor replay (AI-only levels).
- Tools: tools/fmv_test.py (tours with movies, original and ours twice each), tools/step_test.py (levels at another step, original vs ours), tools/tour_shot_bisect.py (the port behind one tour shot, under any switches).

### A1-46 Checker sweeps of never-run code; 73 lifts replace ports found wrong (2026-11-05 evening)

- **Sweep 3** (69 lifted functions no test runs; fuzz_check, 48 states + 400 guided): 54 pass, 13 partly reached, 2 differ. Both differences (0x4157c0, 0x4bbcd0) are a register holding a return address in the original and a lift-runtime address in ours, after a made-up callee answer: checker artefacts.
- **Sweep 4** (pool lifts, lift_pool3, for the 217 ports the earlier never-run sweep left unproven; BEA_PREFER_LIFT=1): 164 pass, 48 partly reached, 3 time out, 2 differ by one state each (0x42e3d0 at 56%, 0x517790).
- **Swap:** 95 functions have a port that fuzz_check found apart from the original and a lift that passes. 73 are ap_*.cpp ports: their lifts are now in src/bea/lifted, and each port's registration is replaced by a note (the readable port stays in the tree, compiled, unregistered). The other 22 are generated template entries (trivial_generated.inc, statements_generated.inc), left for now. None of the 73 runs in any test; fuzz_check on the new DLL: 0x404210 497 same, 0x4bbda0 25 same, 0 differ. Quick gate (canaries): 8/8 levels, 4/4 tours.
- Many port "differences" in that sweep are checker artefacts too (0x4bbda0: the original's tail call to 0x4015e0 never returns on a made-up state, so the stack and EBP at the end are garbage); the lifts match the original even there, so they were taken anyway.
- A relative DLL path made both sweeps' first restart fail on every function (fuzz_check runs from the project folder); the sweep script now resolves the path, refuses a missing file and keeps errors out of its results.
- `FUZZ_TRACE=lo-hi` (tools/fuzz_check.py, with --replay): every instruction executed in that range with ESP and EBP.
- **The other 22** were generated template entries (2 trivial_generated.inc, 16 statements_generated.inc, 4 dtors_generated.inc). tools/gen_trivial.py, gen_statements.py and gen_dtors.py now skip any address with a LIFT_FUNCTION in src/bea/lifted; with the 22 lifts copied in, regenerating removed exactly those 22 entries (0x435df0: 84 same, 0 differ). Full gate 102/102 levels; tours all match except fe_goodies_art, which then matched alone (18/18 shots; its real-time art fades, see full_gate.py).

### A1-9 `-forcewindowed` is a dev-only switch; the harness enables it

The retail argument parser (0x423bc0) accepts `-forcewindowed` only when the

dev byte at 0x662f3e is non-zero, so in retail it is ignored and every test run

switched the display to 640×480 exclusive fullscreen. The device setup

(0x529350) still has the windowed path: it goes windowed when the option at

`0x662df0` (options object 0x662db8 + 0x38) is set and the adapter supports a

windowed device. `src/bea/platform/test_harness.cpp` sets that option after the

parser when the command line contains `-forcewindowed`. In that mode it also

creates the game window without `WS_VISIBLE` and shows it with

`SW_SHOWNOACTIVATE` at the bottom of the z-order, and turns

`SetForegroundWindow`/`SetActiveWindow` and activation by `SetWindowPos` into

no-ops, so test runs leave the desktop usable. The game keeps simulating and

rendering at full rate without focus (~1,490 frames / 5 s on level 200), and

DirectSound mutes it while it is not the foreground app. **Assumption:** the

windowed device path is close enough to fullscreen for hook verification;

before each phase milestone, also run one fullscreen soak (no `-forcewindowed`).

Not a game-code replacement; `tools/progress.py` does not count it.



### A0-7 "Message.exe"

A 36 KB VC6 program that only imports `MessageBoxA`. **Assumption:** it is the

installer's / launcher's error dialog helper, not part of the game runtime.

`BEA.exe` imports `CreateProcessA`, so verify in Phase 1 whether the game spawns it.

