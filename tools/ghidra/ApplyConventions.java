// ApplyConventions.java - set calling conventions and stack-argument counts
// computed by tools/conventions.py (ghidra_out/conventions.csv) so that the
// decompiler shows `this` for __thiscall functions and prints call sites with
// the right number of arguments.
//   rows: address,convention,argc,uses_ecx,ret_pop
//@category BEA

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.Undefined4DataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.List;

public class ApplyConventions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File csv = new File(args.length > 0 ? args[0] : "ghidra_out/conventions.csv");
        int done = 0, resized = 0, missing = 0;
        try (BufferedReader r = new BufferedReader(new FileReader(csv))) {
            String line;
            while ((line = r.readLine()) != null) {
                if (line.startsWith("address") || line.isBlank()) continue;
                String[] p = line.split(",");
                Address a = toAddr(Long.parseLong(p[0], 16));
                String conv = p[1];
                int argc = Integer.parseInt(p[2]);
                Function f = getFunctionAt(a);
                if (f == null) { missing++; continue; }
                boolean thiscall = conv.equals("__thiscall");
                // existing non-auto parameters (drop `this` if Ghidra already made it an auto-param)
                List<Variable> params = new ArrayList<>();
                int have = 0;
                for (Parameter q : f.getParameters()) {
                    if (q.isAutoParameter()) continue;
                    have++;
                }
                boolean keep = have == argc;
                if (keep) {
                    for (Parameter q : f.getParameters()) {
                        if (q.isAutoParameter()) continue;
                        params.add(new ParameterImpl(q.getName(), q.getDataType(), currentProgram));
                    }
                } else {
                    DataType u4 = Undefined4DataType.dataType;
                    for (int k = 0; k < argc; k++) {
                        params.add(new ParameterImpl("param_" + (k + 1), u4, currentProgram));
                    }
                    resized++;
                }
                try {
                    f.updateFunction(conv, f.getReturn(), params,
                            FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, true, SourceType.USER_DEFINED);
                    done++;
                } catch (Exception e) {
                    printerr("ApplyConventions: " + a + " " + e.getMessage());
                }
            }
        }
        println("ApplyConventions: " + done + " functions updated (" + resized + " resized, " + missing + " missing)");
    }
}
