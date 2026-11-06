// DumpDataTypes.java - the data type Ghidra has at each listed address, which
// decides how the decompiler's `&DAT_x + n` is scaled: for 1-byte (undefined)
// data n is in bytes, for an undefined4 n counts 4-byte elements.  The ports
// declare DAT_x from its use (tools/autoport.py: int when unsure), so a byte
// offset was scaled by 4 (0x4f7d30's returned buffer, the Load Game screen,
// 2026-10-28).  In: one hex address per line; out: `addr type length` with
// "none 1" where no data is defined (the decompiler then treats it as a byte).
//@category BEA
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.PrintWriter;

public class DumpDataTypes extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        int n = 0;
        try (BufferedReader r = new BufferedReader(new FileReader(new File(args[0])));
             PrintWriter w = new PrintWriter(new File(args[1]))) {
            String line;
            while ((line = r.readLine()) != null) {
                line = line.split("#")[0].trim();
                if (line.isEmpty()) continue;
                Address a = toAddr(Long.parseLong(line, 16));
                Data d = getDataAt(a);
                if (d == null) w.println(line + " none 1");
                else w.println(line + " " + d.getDataType().getName().replace(' ', '_') + " " + d.getLength());
                n++;
            }
        }
        println("DumpDataTypes: " + n + " addresses");
    }
}
