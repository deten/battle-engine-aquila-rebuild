@echo off
rem Re-apply tools/conventions.py's calling conventions (ghidra_out/conventions.csv,
rem including tools/conv_overrides.csv) to the Ghidra project, give the functions in
rem tools/ret_overrides.txt a 4-byte return (SetReturnTypes.java), give printf-style
rem calls the arguments their format needs (VarargOverrides.java), and re-export the
rem decompile (ghidra_out/decompiled.c, per_function/, functions.csv...).
rem The project lives on D: (D:\tools\ghidra_proj) since 2026-10-18; the copy in
rem C:\tools\ghidra_proj is stale (NOTES A1-13, disk incident).
rem   tools\ghidra_pass.cmd N            fast: no re-analysis (~3 min)
rem   tools\ghidra_pass.cmd N analysis   re-run auto-analysis with the Decompiler
rem                                      Parameter ID analyzer (tools/ghidra/EnableParamID.java)
rem Run from cmd.exe or PowerShell (& './tools/ghidra_pass.cmd' N); log in
rem ghidra_out\headless_passN.log.  Nothing may read ghidra_out\ while it runs.
set PASS=%1
if "%PASS%"=="" set PASS=4
set MODE=%2
set JAVA_HOME=C:\Program Files\Eclipse Adoptium\jdk-21.0.12.101-hotspot
cd /d "%~dp0.."
if "%MODE%"=="analysis" (
  set PRE=-preScript EnableParamID.java
  set NOA=
) else (
  set PRE=
  set NOA=-noanalysis
)
call C:\tools\ghidra_12.1.4_PUBLIC\support\analyzeHeadless.bat D:\tools\ghidra_proj BEA ^
   -process BEA.exe %NOA% -scriptPath "%CD%\tools\ghidra" %PRE% ^
   -postScript ApplyConventions.java "%CD%\ghidra_out\conventions.csv" ^
   -postScript SetReturnTypes.java "%CD%\tools\ret_overrides.txt" ^
   -postScript VarargOverrides.java "%CD%\ghidra_out\vararg_short.txt" ^
   -postScript SetX87Intrinsics.java "%CD%\tools\x87_intrinsics.csv" ^
   -postScript OverrideIndirectCalls.java "%CD%\ghidra_out" ^
   -postScript ExportAll.java "%CD%\ghidra_out" > "ghidra_out\headless_pass%PASS%.log" 2>&1
echo pass %PASS% finished with code %ERRORLEVEL%
