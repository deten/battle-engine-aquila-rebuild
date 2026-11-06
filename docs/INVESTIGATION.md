# Battle Engine Aquila (PC, 2003) — Phase 0 investigation

Target: `Battle Engine Aquila/BEA.exe` (2,506,752 bytes, identical to `BEA.exe.orig`).
Developer Lost Toys Ltd, internal codename **ONSLAUGHT2** (every assert string
carries `C:\dev\ONSLAUGHT2\<file>.cpp`). Publisher strings: Infogrames / Encore.

All Ghidra output is in `ghidra_out/` (see §9 for the file list). Assumptions made
during this phase are in `NOTES.md` (entries A0-1 … A0-7).

---

## 1. Compiler and toolchain fingerprint

| Property | Value |
|---|---|
| Format | PE32, i386, 4 sections, subsystem GUI (2), image base 0x400000 |
| PE timestamp | 0x3ED21313 = **2003-05-26 13:13:55 UTC** |
| Linker version (optional header) | **6.0** (Microsoft LINK 6.x) |
| Entry point | 0x560181, standard VC6 CRT `mainCRTStartup` → `WinMain` at **0x512130** |
| CRT | statically linked VC6 CRT (`R60xx` runtime-error strings, `__MSVCRT_HEAP_SELECT`, `_CxxThrowException`-free; SEH via `__local_unwind2`) |
| Exception handling | C++ EH frames are present (`ExceptionList` push/pop in almost every method), RTTI enabled (`/GR`) |
| Debug info | none (no CodeView/PDB directory, no `.debug$` data); only assert file/line strings survive |

**Rich header** (compiler/tool IDs embedded by the linker) — the authoritative
toolchain evidence:

| prodid | tool | build | objects |
|---|---|---|---|
| 0x000b Utc12_CPP | **VC++ 6.0 C++ compiler** | 8966 | 464 |
| 0x000a Utc12_C | VC++ 6.0 C compiler | 8047 / 8966 / 8447 | 167 + 3 + 2 |
| 0x000e Masm613 / 0x0012 Masm614 | MASM 6.13 / 6.14 | 7299 / 8444 | 42 + 6 |
| 0x001d Utc13_CPP / 0x001c Utc13_C | **VC++ 7.0 (VS.NET 2002)** | 9178 | 111 + 3 |
| 0x0019 Implib700 | VC7 import libs | 9466 / 9210 | 8 |
| 0x0001 Import0 | import thunks | — | 253 |
| 0x0004 Linker600 / 0x0013 Linker512 | link.exe | 8447 / 8034 | — |
| 0x0006 Cvtres500 | resource compiler | 1735 | 1 |

Interpretation: **the game itself was compiled with Visual C++ 6.0 SP5/SP6 and linked
with its linker** (`6.0` in the PE header, Utc12 dominates with 630 objects). The 114
VC7-compiled objects are the **statically linked D3DX9 library** from the
DirectX 9.0 SDK (December 2002), which Microsoft built with VC7 — the exe contains
the D3DX9 shader assembler ("D3DX9 Shader Assembler", "D3DX9 Shader Compiler",
`Direct3DShaderValidatorCreate9`, `d3d9d.dll`). The 48 MASM objects are the CRT's
and D3DX's hand-written assembly (e.g. `__ftol`, `__aulldiv`, SIMD paths), not game code.

Consequences for re-implementation:
* `__thiscall` everywhere (ECX = this), `__cdecl` free functions, `__stdcall` for
  Win32 callbacks. Ghidra reports most functions as `unknown` convention — Phase 1
  hooks must pick the convention from the prologue (`in_ECX` use ⇒ thiscall).
* VC6 does not do NRVO or inline much at `/O2`; the decompiled code maps back to
  source fairly directly. Float math is x87 (`fld/fstp`) with VC6's `__ftol`
  truncation; keep `float` (not `double`) and avoid `-ffast-math` in GCC.
* Struct layouts follow MSVC: vtable pointer at offset 0 (and at the MI sub-object
  offset), `#pragma pack` default 8. GCC's MS-compatible layout for single and
  multiple inheritance is identical for the shapes used here (no virtual bases found).

## 2. Imported DLLs and APIs

Import directory (14 DLLs, 227 symbols; full list with call sites in
`ghidra_out/imports.txt`):

| DLL | # | Purpose / notable entries |
|---|---|---|
| KERNEL32 | 112 | CRT support; file I/O (`CreateFileA/W`, `ReadFile`, `SetFilePointer`, `FindFirstFileA`), memory-mapped files (`CreateFileMappingA`, `MapViewOfFile` — used for the async cache), threads/events/mutex (`CreateThread`×3 sites, `WaitForSingleObject`), timing (`QueryPerformanceCounter/Frequency`, `Sleep`), `CreateProcessA` |
| USER32 | 37 | window class/create/proc, `PeekMessageA`/`GetMessageA` pump, dialogs (`DialogBoxParamA`, 5 RT_DIALOG resources: the D3D settings dialog), cursor, menu |
| GDI32 | 16 | `CreateFontA`, `ExtTextOutA`, `CreateDIBSection`, `GetDIBits` — font rasterising into textures (`DXFont.cpp`) |
| ADVAPI32 | 5 | registry read/write (`RegCreateKeyExA` …) |
| WINMM | 10 | `timeGetTime`; `mmio*` WAV reading (`wavread.cpp`) |
| **d3d9.dll** | 1 | `Direct3DCreate9` (call site 0x5BE622, inside the D3DX/SDK-framework code) |
| **DINPUT8.dll** | 1 | `DirectInput8Create` (0x5D04E0) — keyboard, mouse, joystick |
| **DSOUND.dll** | 2 | ordinals 2 and 11 = `DirectSoundEnumerateA`, `DirectSoundCreate8` |
| AVIFIL32 | 1 | `AVIStreamWrite` — debug movie capture only |
| VERSION | 3 | reads its own version resource in `WinMain` |
| binkw32.dll | 12 | Bink video playback (FMV, briefings, front-end backdrop) |
| ogg.dll / vorbis.dll | 11 / 13 | Ogg Vorbis decode (music, speech) |
| zlib.dll | 2 | ordinals 9/63 = `compress`/`uncompress` (archive loading); a second zlib 1.1.4 `inflate` is also **statically** linked (via libpng) |

No DirectPlay, WinSock, DirectMusic, or DirectShow imports — "multiplayer" in this
build is split-screen only (`cg_horizontalsplitscreen`, `cg_interleavedsplitscreen`).

## 3. Middleware and third-party code inside the binary

| Library | Evidence | Where |
|---|---|---|
| **D3DX9** (static, Dec 2002 SDK) | shader assembler/validator strings 0x5EA300–0x5F4400, `D3DXAssembleShader failed for %s!`, VC7 Rich entries | code ≈ 0x5BE000–0x5D7000 (`FUN_005be628`, 46 KB, is the SDK framework/validator entry), rdata 0x5EA000+ |
| **DX SDK sample framework** (`d3dapp.cpp`-style `CD3DApplication`) | RTTI class `CD3DApplication` → `PCLTShell`; strings "D3D8 Application", `Direct3DCreate8 succeeded.` (stale DX8-era text, the code calls `Direct3DCreate9`); DXUtil_Timer-style timer at 0x423650 | 0x5280A0–0x52D000 region (`FUN_005290a0` = Create/Run) |
| **libjpeg** (IJG 6b, "Copyright (C) 1998, Thomas G. Lane") | full IJG message table 0x5ED618–0x5EE8xx | code preceding 0x5BE000 |
| **libpng** + static **zlib 1.1.4** | "Incompatible libpng version…", "inflate 1.1.4 Copyright 1995-2002 Mark Adler" | same region |
| **Bink 1.5v** (RAD Game Tools) | `binkw32.dll` imports, `CBinkOpenThread` class | dynamic |
| **Ogg/Vorbis** (libogg/libvorbis 2002 DLLs) | imports; `COggFileRead`, `COggLoader` | dynamic |
| Win32 error-name table | ~2,500 `ERROR_*`, `DDERR_*`, `D3DXERR_*`, `DMUS_E_*`, `DPNERR_*`, `VFW_E_*` strings 0x5F4400–0x60C000 | DX SDK `dxerr9` static lib (error-code-to-string), **not** evidence of DirectMusic/DirectPlay use |

**Not present:** RenderWare, Havok, Miles, FMOD, Granny, Lua, SpeedTree. The engine
is entirely in-house: renderer, physics, animation, particle system, mission-script
VM, memory manager, archive system.

In-house engine subsystems (from source-file names and RTTI):

| Subsystem | Source files (from asserts) | Key classes |
|---|---|---|
| Shell / app | `ltshell.cpp`, `PCPlatform.cpp`, `Platform.cpp`, `engine.cpp` | `PCLTShell`, `CDXEngine`, `CEngine` |
| Renderer | `DX*.cpp` (Landscape, MeshVB, Texture, Shadows, Trees, Snow, Clouds, Imposter, Font, FMV, Surf, Palletizer, PatchManager, KempyCube), `vbuffer.cpp`, `ibuffer.cpp`, `FastVB.cpp`, `VertexShader.cpp`, `PolyBucket.cpp`, `StaticShadows.cpp`, `gcgamut.cpp` | `CDXLandscape`, `CDXMeshVB`, `CDXTexture`, `CDXWater`, `CVertexShader`, `CVBuffer`, `CIBuffer`, `DeviceObject` (lost-device reset) |
| Meshes/animation | `mesh.cpp`, `MeshPart.cpp`, `MeshRenderer.cpp`, `rtmesh.cpp`, `meshpose.h`, `chunker.cpp`, `TokenArchive.cpp` | `CRTMesh`, `CNamedMesh`, `CAnimation` |
| World | `world.cpp`, `HeightField.cpp`, `LandscapeTexture.cpp`, `landscapeib.cpp`, `maptex.cpp`, `mapwho.cpp`, `WorldMeshList.cpp`, `tree.cpp`, `triangulate.cpp`, `InfluenceMap.cpp`, `WaypointManager.cpp` | `CLandscape`, `CTree`, `CInfluenceMap`, `CWaypointPath` |
| Game objects | `thing.cpp`, `Unit.cpp`, `Mech.cpp`, `BattleEngine.cpp`, `Plane.cpp`, `Boat.cpp`, `Bomber.cpp`, `Carrier.cpp`, `Dropship.cpp`, `Infantry.cpp`, `Building.cpp`, `HiveBoss.cpp`, `GillM.cpp`, `Warspite.cpp`, `Tentacle.cpp`, `Sentinel.cpp`, `Mine.cpp`, `Missile.cpp`, `Round.cpp`, `Cannon.cpp`, `damage.cpp`, `SpawnerThng.cpp`, `Squad*.cpp` | `CThing` hierarchy (§5) |
| Physics/data definitions | `CPhysicsScript.cpp`, `CPhysicsScriptStatements.cpp`, `WorldPhysicsManager.cpp`, `BattleEngineConfigurations.cpp`, `BattleEngineDataManager.cpp` | `CPhysicsScriptStatement` + ~250 `CUnit*/CWeapon*/CRound*/CExplosion*` statement classes — a declarative stat-definition language parsed from `default physics.dat` |
| Motion controllers | `MCMech.cpp`, `MCBuggy.cpp`, `MCTentacle.cpp`, `DestructableSegmentsController.cpp` | `CMotionController` → `CMCMech`, `CMCBattleEngine`, `CMCBuggy`, … |
| AI | `*AI` classes, `Carver.cpp`, `DiveBomber.cpp`, `GroundAttackAircraft.cpp` | `CUnitAI` → 17 subclasses, `CGuide` → 20 guide classes |
| Mission script VM | `MissionScript\AsmInstruction.cpp`, `DataType.cpp`, `EventFunction.cpp`, `IScript.cpp`, `ScriptEventNB.cpp`, `ScriptObjectCode.cpp`, `Symtab.cpp` | `CVM`, `CAsmInstruction` → 27 `CInstructionOP_*`, `CMissionScriptObjectCode`, `IScript`, `CDataType` → 6 types |
| Front end / HUD | `FrontEnd.cpp`, `FEP*.cpp` (18 pages), `Hud.cpp`, `MenuItem.cpp`, `PauseMenu.cpp`, `text.cpp`, `bytesprite.cpp`, `console.cpp` | `CFrontEndPage` → 18 `CFEP*`, `CMenuItem`, `CConsoleMenu` |
| Particles | `ParticleDescriptor.cpp`, `ParticleManager.cpp`, `ParticleSet.cpp`, `DXParticleTexture.cpp` | `CParticleDescriptor` → `CPD*` (Emitter, Mover, Trail, Timeline, …) |
| Audio | `SoundManager.cpp`, `pcsoundmanager.cpp`, `Music.cpp`, `wavread.cpp`, `mixermap.cpp` | `CSample`→`CPCSample`, `CHWSound`, `CPCMusic`, `C3DSoundMethod`, `CBaseWaveFileRead` |
| Camera/cutscene | `Camera.cpp`, `Cutscene.cpp`, `RTCutscene.cpp` | `CCamera` → 8 cameras |
| Memory / containers | `MemoryManager.cpp`, `flexarray.cpp`, `Array.h`, `SPtrSet.cpp`, `oids.cpp` | debug-new with file/line: `FUN_005490e0(size, tag, file, line)` has 387 call sites, `FUN_00549220` (delete) 465 |
| Streaming | `XBOXAsyncCache.cpp`, `ResourceAccumulator.cpp`, `imageloader.cpp`, `tgaloader.cpp`, `texture.cpp` | `CXBOXAsyncCache` (name kept from the Xbox version; PC build uses memory-mapped files) |

## 4. Copy protection and anti-analysis

**None.** Checks performed:
* Section table is the plain VC6 layout (`.text .rdata .data .rsrc`), no extra
  sections, no section with entropy > 6.7, raw sizes match virtual sizes except
  for the 3.7 MB BSS in `.data`.
* No SafeDisc (`stxt371`, `.txt2`, `secdrv`), SecuROM (`.cms_t`, `.securom`),
  StarForce, or Armadillo markers; no `IsDebuggerPresent`, no TLS callbacks,
  no self-decrypting entry stub (entry is the standard CRT prologue
  `55 8B EC 6A FF 68 … 64 A1 00 00 00 00`).
* All 227 imports are resolved by name/ordinal in a normal IAT; no `GetProcAddress`
  trickery beyond the CRT's own.

The binary is directly analysable and patchable. The 2015 `BEA.exe.patched`
(widescreen patch: 191 changed bytes, FOV constants moved to code caves at
0x5D7DB5–0x5D7FFD) demonstrates that in-place patching works.

## 5. Language and object model

**C++ throughout**, with full MSVC RTTI. Recovered by `tools/rtti_dump.py`:

| Count | What |
|---|---|
| 667 | type descriptors (`.?AV…@@`) |
| 656 | classes with a complete-object locator (i.e. instantiable or with a vtable) |
| 733 | vtables (classes with multiple inheritance have one per base sub-object) |
| 11,777 | vtable slots, resolving to **2,127 distinct virtual functions** |
| 11 | classes using multiple inheritance (all interface-style, no virtual bases) |

Full data: `ghidra_out/rtti_hierarchy.txt` (indented tree),
`ghidra_out/rtti_classes.csv`, `ghidra_out/vtables.txt` (every slot with its
function), `ghidra_out/vtable_slots_by_function.csv`.

Root interfaces and the game-object spine:

```
IListener
└─ CMonitor                       (observer/notification base used by almost everything)
   ├─ IAudibleThing
   │  └─ CThing  (+ IRenderableThing)          size ~ 0x2e9x bytes, 120 virtual slots
   │     ├─ CComplexThing
   │     │  ├─ CActor
   │     │  │  ├─ CUnit
   │     │  │  │  ├─ CBattleEngine                      (the player mech)
   │     │  │  │  ├─ CGroundUnit → CMech{CGillM,CThunderHead,CWarspite}, CBoat, CCannon,
   │     │  │  │  │                 CGroundVehicle, CInfantryUnit, CMine, CSentinel, CWarspiteDome
   │     │  │  │  ├─ CAirUnit → CBigAirUnit{CBomber, CCarrier→CFenrir, CDropship}
   │     │  │  │  │             CSmallAirUnit{CCarver, CDiveBomber, CGroundAttackAircraft, CPlane}
   │     │  │  │  ├─ CBuilding, CSimpleBuilding, CComponent{CGillMHead,CTentacle},
   │     │  │  │  └─ CHiveBoss, CPod, CRadar, CSubmarine
   │     │  │  ├─ CRound → CMissile ; CRocket ; CShell ; CFeature ; CEscapePod
   │     │  │  └─ CNamedMesh → CBuildingNamedMesh
   │     │  ├─ CAnimal, CCutscene, CDebris, CExplosion, CHazard, CInfluenceNode,
   │     │  ├─ CLevelScriptThing, CSafeSide, CSpawnerThing, CSpawnPoint, CSphereTrigger,
   │     │  └─ CSquad{CNormalSquad,CRelaxedSquad}, CStart, CWingmanStart
   │     ├─ CTree
   │     └─ CWaypoint
   ├─ CUnitAI → 17 AI classes ; CGuide → 20 guide classes (steering targets)
   ├─ CVM (script VM), CMessage
   └─ IController → CGame→CDXGame, CFrontEnd→CDXFrontEnd, CFMV→CDXFMV,
                    CPlayer, CGameMenu{CPauseMenu, CMessageLog, …}
DeviceObject   (mixed into CDXTexture, CDXMeshVB, CDXLandscape, CDXWater, CDXFrontEndVideo
                — objects that must survive D3D device loss)
CD3DApplication → PCLTShell           (DX SDK framework; owns window, device, main loop)
CEngine → CDXEngine                   (renderer/engine singleton)
CPhysicsScriptStatement → ~250 leaf statement classes (unit/weapon/round/explosion/spawner stats)
CAsmInstruction → 27 CInstructionOP_* (mission-script bytecode)
CFrontEndPage → 18 CFEP* pages ; CMenuItem → 8 ; CCamera → 8 ; CParticleDescriptor → 13 CPD*
CTweak → CTweakFLOAT, CTweakSLONG      (the `cardid.txt` per-GPU tweak table)
```

Naming convention: `C` prefix for classes, `I` for interfaces, `CDX*` for the
Direct3D implementation of an abstract `C*` (e.g. `CTexture`/`CDXTexture`,
`CLandscape`/`CDXLandscape`, `CFrontEnd`/`CDXFrontEnd`). This split is the
original authors' own platform abstraction (Xbox vs PC) and is exactly the seam
Phase 2 will use.

## 6. Asset and archive formats in the game folder

692 MB, 5,520 files. Formats, from the headers and the loader strings:

| Ext | Count | Format | Notes |
|---|---|---|---|
| `.aya` | 1,361 | **Lost Toys archive**: sequence of `{u32 csize; zlib}` records, each inflating to ≤ 1 MiB; payload is a tag tree `{char[4] tag; u32 size; data}` | `data/resources/<level>_res_PC.aya` (per-level bundle: `LVLR TARG AYAD TEXT×n MESH×n IMPS LNDS SURF ERES SSHD WRES`), `resources/meshes/*.msh.aya` (`CMSH CMST MSHT MESP CAMD BBOX CEMT`, with `VBUF/IBUF/PBKT` poly buckets), `resources/textures/mustbe_*.aya` (raw texture, name encodes D3DFORMAT e.g. `(0)A8R8G8B8`), `goodie_NN_res_PC.aya`. Writer: `chunker.cpp`/`TokenArchive.cpp`. |
| `.vid` | 66 | **Bink** (`BIKi`) | briefings `PC_<level>_exact.vid`, front-end `FEBack128.vid` |
| `.ogg` | 3,057 | Ogg Vorbis | music (10 masters, 38 MB) and per-language speech (`sounds/<lang>/MessageBox/`) |
| `.xap` | 5 | **sound pack** `PCXP`, u32 count, entries `PSMP` + 64-byte name + header + compressed PCM (looks like IMA/Xbox ADPCM) | one per language, 5.4 MB each; index in text `sounds.sfx` |
| `.sfx` | 1 | text sample list (`# SFX sample list`, id/name/params) | |
| `.msl` | 733 | **mission script source** (C-like: `vars…end_vars`, `init()`, `event("…")`, `#include`) compiled at load by the in-exe compiler (`Symtab.cpp`, `AsmInstruction.cpp`) to stack-VM bytecode | `data/MissionScripts/level<NNN>/*.msl`, shared `onsldef.msl` |
| `.stf` / `.txt` | 96 / 134 | text-ID header (`#define NAME id`, generated by TextConvert.cpp) and per-level English text | |
| `.dat` | 9 | `language/<lang>.dat`: hashed string table (header `-69, 3, 2571 entries`), `default physics.dat` (version 18, length-prefixed named records, read by `CPhysicsScript`), `battle engine configurations.dat`, `WorldHeaders.dat` (referenced, not shipped — level data lives in `.aya`) | |
| `.par` | 3 | text `ParticleSystemEd_File_(C)2000_Lost_Toys_Ltd`, 140 descriptors | |
| `.raw` | 1 | `Dial.raw` 8 KiB index-colour bitmap for the HUD dial | |
| `.bea` / `.bes` | 1 / 2 | `defaultoptions.bea` and save games: fixed 10,004-byte record, magic `0x4BD1` | |
| `.tga` | 1 | `textures/splash.tga`; all other TGAs referenced by name (`hud\v2\*.tga`, `FrontEnd\v3\*.tga`) are inside the `.aya` bundles | |
| `cardid.txt` | 1 | per-GPU vendor/device tweak table (Tom Forsyth / Jan Svarovsky, StarTopia heritage) | |

Runtime side files: `setuphistory.txt` (D3D adapter/caps log), `c:\debug.log`,
`autoexec.con` (console script), `grabs\scr%.4d.tga` (screenshots), registry key
under `Software\…` for options.

Command-line switches found: `-forcewindowed -skipfmv -nosound -nomusic
-showdebugtrace -traceconsole -soundbuffers -dxtntextures -playabledemo
-level -timeout -cardid -defaultoptionsname -getversion -autoconfigtest
-findbadwater -findgoodwater -testeur`. An in-game console exists with
`cg_*`, `g_*`, `snd_*` variables (105 names) and `show/set/bind/exec` commands.
`-forcewindowed -skipfmv -level N` will make Phase 1 iteration fast.

## 7. Main loop, timing and frame-rate assumptions

Call chain from the entry point (all addresses are in `ghidra_out/decompiled.c`):

```
0x560181  mainCRTStartup (VC6 CRT)
└─ 0x512130  WinMain                         ltshell.cpp:741  — reads version resource, SystemParametersInfo,
   │                                          sets 32 MB heap ("Init game with %d bytes"), loads defaultoptions.bea
   ├─ 0x5290a0  CD3DApplication::Create       (DX SDK d3dapp.cpp, vslot11): Direct3DCreate9, BuildDeviceList,
   │            RegisterClass/CreateWindowExA, Initialize3DEnvironment (0x52af00), DXUtil_Timer(START)
   ├─ 0x4efb10  CEngine::Init                 engine.cpp — platform init, FMV, sound, splash/logo FMVs,
   │                                          console ("Console initialised"), default.msh, loading screen
   ├─ 0x4f0330  CEngine::MainLoop             alternates:
   │     ├─ 0x4684d0  FrontEnd::Run(mode)     → returns level id (or -1 quit, -3 attract/FMV, -0x45 credits)
   │     └─ 0x46e240  CGame::Run(level)       game.cpp — loads "game resources", registers console vars
   │           └─ 0x46dc30  CGame::RunLevel   — load, "Post Load %d", autoexec.con, wait-for-start,
   │                 └─ loop { 0x46eee0 CGame::Frame } until state != 0
   ├─ 0x4f00e0  CEngine::Shutdown, 0x52c430 CD3DApplication::Cleanup
   └─ return msg.wParam
```

**`CGame::Frame` (0x46eee0) is the frame loop.** It implements a fixed-step
simulation with interpolated rendering, using these `CGame` fields:

| offset | meaning | notes |
|---|---|---|
| `+0x3a0` | `lastTickTime` (s) | advanced by exactly `frameLength` per tick |
| `+0x3a8` | `frameLength` (s) | **default 0.05 f = 20 Hz** (set in the constructor, line 86397 of `decompiled.c`); exposed as console var `g_framelength` "Game frame/tick length (seconds)" |
| `+0x398`, `+0x39c` | render time (now) | two copies: one frozen while paused (`+0x2c`), one live |
| `+0x3ac`, `+0x3b0` | interpolation fractions | `(now − lastTick) / frameLength`, clamped to [0, 1] |

Per frame:
1. `0x523db0` (platform poll) and `0x515880` (shell Run iteration: `PeekMessageA`/`GetMessageA`
   pump at 0x512490, `TestCooperativeLevel`, device reset via `0x52bb80` on
   `D3DERR_DEVICENOTRESET`, DirectInput `GetDeviceState` for up to 4 devices at 0x513370).
2. `0x46e910` (simulation tick dispatcher) then `0x4e1b20`, `0x4bb530` (sound/music update).
3. **Inner loop:** `do { 0x46e460 CGame::Tick(i); 0x4d2580 Platform::EndFrame(1); } while (now − lastTick < frameLength)` —
   i.e. it renders (with the interpolation fraction) as many times as fit inside one
   game tick, then advances `lastTick += frameLength`. If the frame took longer than
   `1.3 × frameLength` the clock is snapped to `now` (no spiral of death, but the game
   slows down below 20 FPS rather than skipping ticks). `Tick` scales time by a
   hard-coded `* 20.0` (= 1/0.05), so **changing `g_framelength` without changing
   that constant alters game speed** — preserve both.
4. `Platform::EndFrame` → `0x5158f0`: updates the FPS timer object (`0x423720`,
   EMA `fps = 0.75·fps + 0.25·measured`, floor 1 FPS), then `0x441b80` and `0x512630`
   (D3D `Present`, vsync honoured per `FORCE_VSYNC`/`CVSync` option).

Time sources:
* `0x5159e0` **Platform::GetTime()** — `QueryPerformanceCounter` relative to the first
  call, divided by `(frequency × timeScale)`; falls back to `timeGetTime() × 0.001`.
  Returns `float` (x87 `float10` internally, stored as 32-bit float — ~1 ms
  resolution after a few hours of uptime; keep this behaviour for now).
* `0x52cd20` **DXUtil_Timer(cmd)** — the verbatim DX SDK helper (RESET/START/STOP/
  ADVANCE/GETABSOLUTETIME/GETAPPTIME/GETELAPSEDTIME), used only by the SDK framework.
* `0x423650/0x423680/0x423720` — a small FPS-statistics class (QPC with `timeGetTime` fallback).

Frame-rate assumptions baked into the code: 20 Hz game logic; rendering uncapped
except by vsync; the console strings " %2.2f FPS", ", (fixed rate gc) %2.2f FPS"
and "FPS : %2.2f" belong to the debug overlay. No `Sleep`-based limiter was found in
the game loop (the 11 `Sleep` call sites are in loader threads and the SDK framework).

## 8. Code map and size

Ghidra (after the RTTI fix-up pass) defines **7,376 functions**, 7,054 of them
decompiled (322 are thunks/externals), covering 1.36 MB of the 1.93 MB `.text`
section. Median function is 67 bytes; 2,085 functions are ≤ 32 bytes (accessors,
stubs, destructor thunks) and only 86 exceed 2 KB.

| Address range | Functions | What | Origin |
|---|---|---|---|
| 0x401000 – 0x55A420 | ≈ 4,480 | **Game and engine code** (every assert names `ONSLAUGHT2\*.cpp`), including the DX SDK framework at 0x528000–0x52D040 and the mission-script VM at 0x52D100+ | Lost Toys (VC6) |
| 0x55D988 – 0x579B00 | ≈ 600 | VC6 CRT (`_malloc`, `_strncmp`, `__ftol`, `__aulldiv`, `_rand`, stdio, locale, SEH) — 47 identified by Ghidra FID | Microsoft |
| 0x579BD5 – 0x5BE000 | ≈ 770 | **D3DX9 static library**: core (`Software\Microsoft\Direct3D` registry probe at 0x579BD5), shader assembler, texture loaders with the embedded libjpeg / libpng / zlib 1.1.4 | Microsoft (VC7) |
| 0x5BE000 – 0x5D7000 | ≈ 1,200 | D3DX continued: `FUN_005be628` (46 KB, the shader validator), `dxerr9` error tables, small helpers | Microsoft (VC7) |
| 0x5D7000 – 0x5D7FFD | — | C++ EH unwind funclets for the game code, then zero padding (the 2015 patch's code caves live here) | linker |

The reference binary for Phase 1 is therefore ~4,500 functions / ~1.0 MB of real
game code; the rest is library code that will be **replaced wholesale** (CRT → MinGW
CRT, D3DX → not needed once the renderer is ours) rather than decompiled.

Most-called helpers (good first hook targets because they are small, leaf, and
exercised constantly):

| Address | Callers | Role (from arguments and strings) |
|---|---|---|
| 0x449d40 | 584 | string/array helper (likely `CString`-style ctor) |
| 0x5490e0 | 387 | `operator new(size, tag, file, line)` — MemoryManager.cpp debug allocator |
| 0x549220 | 465 | `operator delete` |
| 0x42f220 → 0x4e5c60 | 149 | thunk to a math helper |
| 0x441740 | 147 | `DebugLog::printf(logfile, fmt, …)` |
| 0x44b1d0 | 135 | vector/matrix helper |
| 0x401000 | 87 | first function in the image, 1-line accessor |

1,218 functions have no callees at all (pure leaf functions) — the Phase 1 pool.

Symbol quality: 2,127 virtual functions carry `Class::vslotN` names from the RTTI
pass; 1,271 CRT/import names come from Ghidra FID; the remaining ~4,000 are
`FUN_xxxxxxxx` and will be named as they are understood (see NOTES A0-3 for the
caveat on shared stubs).

## 9. Ghidra output (`ghidra_out/`)

Produced by `tools/ghidra/ExportAll.java` after two headless passes
(`tools/ghidra/ApplyRtti.java` fixes up the 1,429 virtual functions auto-analysis
missed; see NOTES A0-3). Re-run with:

```
set JAVA_HOME=C:\Program Files\Eclipse Adoptium\jdk-21.0.12.101-hotspot
C:\tools\ghidra_12.1.4_PUBLIC\support\analyzeHeadless.bat C:\tools\ghidra_proj BEA ^
   -import "Battle Engine Aquila\BEA.exe" -overwrite -scriptPath tools\ghidra ^
   -postScript ApplyRtti.java ghidra_out\rtti_symbols.csv -postScript ExportAll.java ghidra_out
```

Later passes: `tools/ghidra_pass.cmd N` (run from cmd.exe or PowerShell)
re-applies `ghidra_out/conventions.csv` (from `tools/conventions.py`, with
`tools/conv_overrides.csv`) and re-exports; pass 4 (2026-10-18) took about
three minutes with `-noanalysis` and fixed the callers of `Random::Next`
and 55 functions misdetected as thiscall (NOTES A1-8 rule 19).

| File | Content |
|---|---|
| `decompiled.c` | every function, decompiled, in address order |
| `per_function/<addr>_<name>.c` | the same, one file per function |
| `functions.csv` | address, name, namespace, size, caller/callee counts, flags, prototype |
| `calls.csv` | call-graph edges |
| `imports.txt` | each import with every call site |
| `strings.txt` | defined strings with reference counts |
| `vtables.txt`, `vtable_slots_by_function.csv` | vtable → slot → function and the reverse map |
| `rtti_hierarchy.txt`, `rtti_classes.csv`, `rtti_symbols.csv` | class tree, per-vtable metadata, symbols applied to Ghidra |
| `headless.log`, `headless_pass2.log` | analysis logs |

## 10. Recommended plan

### Toolchain (installed and verified in Phase 0)

| Tool | Location | Verified |
|---|---|---|
| Ghidra 12.1.4 + Temurin JDK 21 | `C:\tools\ghidra_12.1.4_PUBLIC`, `C:\Program Files\Eclipse Adoptium\jdk-21.0.12.101-hotspot` | two headless passes completed |
| MSYS2 MinGW-w64 **i686** GCC 16.2.0, CMake, Ninja, SDL2 | `C:\msys64\mingw32` (run via `MSYSTEM=MINGW32 bash -lc …`, or put `C:\msys64\mingw32\bin` on PATH) | built a 32-bit `__stdcall`-exporting DLL (`probe.dll`, machine 0x14c) |
| Python 3.12 + pefile | existing | all `tools/*.py` |

### Phase 1 — incremental replacement inside `BEA.exe`

Injection: a 32-bit `bea_hook.dll` loaded by **import-table proxying** — the
cleanest option here is a replacement `binkw32.dll` (12 exports, all forwarded to
the renamed real DLL `binkw32_real.dll`; `BinkOpen` is called early) or `zlib.dll`
(only 2 ordinals: 9 and 63). Avoid proxying `d3d9.dll`: my HUD-fix proxy
already occupies that slot and the game creates the device late. No code patch of
`BEA.exe` is needed, so the original file stays byte-identical and the game folder
is restored by deleting two files.

Hooking: inline trampolines (5-byte `jmp` at function entry; MinHook or a 60-line
hand-rolled x86 patcher is enough because every VC6 function starts with a standard
prologue or an `mov`/`push`). Each replaced function is written in C/C++ with the
MSVC calling convention: `__thiscall` methods become `__fastcall(this, edx_dummy, …)`
on GCC or `__attribute__((thiscall))` (GCC supports `thiscall` on i686 natively).
Struct access goes through recovered offsets (`this+0x3a8`) in a header until
the struct is fully recovered.

Order of attack, chosen from the data above:
1. **Leaf helpers with strings or obvious maths** (0x449d40, 0x44b1d0, the 0x4e5c60
   math family, `CBSpline`, `flexarray`, `CString`) — ~1,200 pure leaf functions.
2. **Memory manager** (0x5490e0 / 0x549220 and MemoryManager.cpp): replacing these
   first lets every later replacement allocate through our own heap and makes leaks
   visible.
3. **Console, DebugLog, TokenArchive/chunker, imageloader/tgaloader, wavread** — self-contained
   subsystems with text I/O that can be verified by diffing logs.
4. **Mission-script compiler and VM** (`Symtab`, `AsmInstruction`, 27 opcodes, 6
   `CDataType`s) — a closed system testable against the 733 shipped `.msl` files.
5. **Physics-script statements** (~250 tiny `CUnit*/CWeapon*/…` classes) — mechanical.
6. **Game objects** bottom-up: `CThing` → `CComplexThing` → `CActor` → `CUnit` and its
   AI/guide/motion-controller triads, one unit type at a time (test each with `-level N`).
7. **Front end** pages, HUD, cameras, particles.
8. Leave the `CDX*` renderer, `pcsoundmanager`, `PCController`/DirectInput and
   `PCLTShell`/`CD3DApplication` for Phase 2.

Testing after every commit: launch with `-forcewindowed -skipfmv -level 100`
(tutorial) and `-level 200`, compare `c:\debug.log` / `setuphistory.txt` against a
baseline, and keep a 60-second scripted play-through. `docs/PROGRESS.md` tracks
`replaced / 4,480` game functions (library code is excluded from the denominator).

### Phase 1 tooling added after the first batches (status 2026-10-16)

Three generators replace whole families mechanically (`tools/gen_statements.py`,
`tools/gen_trivial.py`, `tools/gen_dtors.py`), and an auto-port pipeline
handles self-contained functions without a human reading them:
`tools/conventions.py` + `tools/ghidra/ApplyConventions.java` give Ghidra the
real calling conventions, `tools/candidates.py` computes the transitively
call-safe set, `tools/autoport.py` turns Ghidra's C into C++ with a *shadow
stub* (port and original run side by side, results compared in-process),
`tools/bisect.py` finds hooks that crash or hang the game, and
`tools/promote.py` turns ports with enough agreeing calls into real
replacements. Details and caveats: NOTES.md A1-7 and A1-8; progress in
docs/PROGRESS.md.

### Phase 2 — platform layer

The original code already has the seam: abstract `CTexture/CLandscape/CMeshVB/
CWater/CFrontEndVideo/CEngine/CGame/CFrontEnd/CFMV/CMusic` with `CDX*`/`CPC*`
implementations, `Platform.cpp`/`PCPlatform.cpp`, `pcsoundmanager.cpp`,
`PCController`. `platform.h` should mirror that split:

| Area | Original | Replacement |
|---|---|---|
| Window, events, timing | `CD3DApplication`/`PCLTShell`, `Platform::GetTime` (QPC) | SDL2 window + `SDL_GetPerformanceCounter`, same float-seconds semantics |
| Input | DirectInput8, 4 devices, `GetDeviceState` 0x110-byte buffers | SDL2 keyboard/mouse/game-controller |
| Audio | DirectSound8, 3D voices (`C3DSoundMethod`), Ogg via DLLs, Bink audio | SDL2 audio + a software mixer, stb_vorbis/libvorbis |
| Video | Bink (`binkw32.dll`) | keep Bink on Windows via the real DLL initially; FFmpeg or skip FMV on Linux (`-skipfmv` already exists) |
| Graphics | D3D9 fixed-function + vs_1_1 vertex shaders (assembled at runtime by D3DX — the shader source strings are in the exe), `DeviceObject` reset protocol | **Recommended backend: OpenGL 3.3 core** (desktop + Linux in one go, vs_1_1 maps 1:1 to GLSL, fixed-function state is small); keep a thin D3D9 path only until the GL path is complete. Vulkan/bgfx is overkill for 2003-era draw counts. |
| File I/O | `CreateFileA`, memory-mapped async cache, `FindFirstFileA` | `SDL_RWops`/stdio, case-insensitive path resolver for Linux |
| Config | registry + `defaultoptions.bea` | INI/`.bea` only |

### Phase 3 — standalone

Once `CDX*`, `PCLTShell`, the DirectInput/DirectSound managers and the SDK
framework are replaced, nothing calls into the original image. Build the
standalone exe from the same sources, drop the hook loader, replace the VC6 CRT
dependencies (`__ftol` truncation semantics, `rand()` LCG if gameplay uses it) with
explicit equivalents, and finish naming/struct recovery subsystem by subsystem.
File-format docs for `.aya`, `.msh.aya`, `.xap`, `.dat` and `.bea/.bes` go in
`docs/formats/` as each loader is replaced.

### Risks and open questions

* **Floating point:** x87 80-bit intermediates in VC6 vs SSE in GCC. Build the hook
  DLL with `-mfpmath=387 -ffloat-store -fno-fast-math` and keep `float` widths until
  Phase 3 proves it safe (NOTES A0-4).
* **Shared stubs** are mis-attributed by the vslot naming (NOTES A0-3).
* **D3DX runtime shader assembly** must be reproduced — extract the vs_1_1 source
  strings (0x5E58xx region, e.g. `max r8.x, r8.xxxx, c94`) into files in Phase 2.
* **`.xap` ADPCM codec** is not yet identified (Xbox-style ADPCM is likely).
* **Save-game compatibility:** `.bes` is a raw 10,004-byte struct dump; keep the
  layout bit-exact.
