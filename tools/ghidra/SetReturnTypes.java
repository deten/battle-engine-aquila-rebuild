// SetReturnTypes.java - give a 4-byte return type to functions that Ghidra
// declared void although their callers read EAX after the call (the
// tools/autoport.py skip "void but EAX live at ret (other)").  With the return
// type set, the decompiler itself works out the EAX value on every return
// path (`return iVar1;`), which the transformer cannot do from a void body.
// List: tools/ret_overrides.txt (one hex address per line, '#' comments).
//@category BEA
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.Undefined4DataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;

public class SetReturnTypes extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File list = new File(args.length > 0 ? args[0] : "tools/ret_overrides.txt");
        int done = 0, missing = 0, kept = 0;
        try (BufferedReader r = new BufferedReader(new FileReader(list))) {
            String line;
            while ((line = r.readLine()) != null) {
                line = line.split("#")[0].trim();
                if (line.isEmpty()) continue;
                Address a = toAddr(Long.parseLong(line.split("\\s+")[0], 16));
                Function f = getFunctionAt(a);
                if (f == null) { missing++; continue; }
                if (f.getReturnType().getLength() == 4) { kept++; continue; }
                f.setReturnType(Undefined4DataType.dataType, SourceType.USER_DEFINED);
                done++;
            }
        }
        println("SetReturnTypes: " + done + " set, " + kept + " already 4 bytes, " + missing + " missing");
    }
}
