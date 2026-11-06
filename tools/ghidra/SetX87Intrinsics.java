// SetX87Intrinsics.java - signatures with x87 register storage for the VC6 CRT
// intrinsics that take their operands on the FPU stack, so the decompiler
// shows them (`FUN_0055e3ea()` hid both operands of _CIfmod; 35 game
// functions were refused for it, NOTES A1-15).
//   rows: address,name,nargs   (ST0 is the first operand, ST1 the second;
//                               the result is float10 in ST0)
//   analyzeHeadless ... -postScript SetX87Intrinsics.java <csv>
//@category BEA

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.Float10DataType;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.ReturnParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.listing.VariableStorage;
import ghidra.program.model.symbol.SourceType;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.List;

public class SetX87Intrinsics extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File csv = new File(args.length > 0 ? args[0] : "tools/x87_intrinsics.csv");
        int done = 0;
        try (BufferedReader r = new BufferedReader(new FileReader(csv))) {
            String line;
            while ((line = r.readLine()) != null) {
                if (line.startsWith("address") || line.isBlank() || line.startsWith("#")) continue;
                String[] p = line.split(",");
                Address a = toAddr(Long.parseLong(p[0].trim(), 16));
                String name = p[1].trim();
                int nargs = Integer.parseInt(p[2].trim());
                Function f = getFunctionAt(a);
                if (f == null) { printerr("SetX87Intrinsics: no function at " + a); continue; }
                List<Variable> params = new ArrayList<>();
                for (int k = 0; k < nargs; k++) {
                    Register st = currentProgram.getRegister("ST" + k);
                    params.add(new ParameterImpl("x" + (k + 1), Float10DataType.dataType,
                            new VariableStorage(currentProgram, st), currentProgram));
                }
                Register st0 = currentProgram.getRegister("ST0");
                ReturnParameterImpl ret = new ReturnParameterImpl(Float10DataType.dataType,
                        new VariableStorage(currentProgram, st0), currentProgram);
                f.setName(name, SourceType.USER_DEFINED);
                f.updateFunction("__cdecl", ret, params, FunctionUpdateType.CUSTOM_STORAGE, true, SourceType.USER_DEFINED);
                done++;
            }
        }
        println("SetX87Intrinsics: " + done + " functions given x87 operand storage");
    }
}
