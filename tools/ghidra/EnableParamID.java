// EnableParamID.java - pre-script for a Ghidra headless pass that re-runs
// auto-analysis with the "Decompiler Parameter ID" analyzer on (off by
// default), so register-passed arguments and callee-saved register inputs
// that tools/conventions.py cannot model get real storage in the headers.
//   analyzeHeadless <proj> BEA -process BEA.exe -preScript EnableParamID.java
//        -postScript ApplyConventions.java ... -postScript ExportAll.java ...
// (see tools/ghidra_pass.cmd analysis)
import ghidra.app.script.GhidraScript;

public class EnableParamID extends GhidraScript {
    @Override
    public void run() throws Exception {
        setAnalysisOption(currentProgram, "Decompiler Parameter ID", "true");
        setAnalysisOption(currentProgram, "Decompiler Parameter ID.Analysis Decompiler Timeout (sec)", "120");
        setAnalysisOption(currentProgram, "Decompiler Parameter ID.Commit Data Types", "true");
        setAnalysisOption(currentProgram, "Decompiler Parameter ID.Commit Void Return Values", "true");
        println("EnableParamID: Decompiler Parameter ID enabled");
    }
}
