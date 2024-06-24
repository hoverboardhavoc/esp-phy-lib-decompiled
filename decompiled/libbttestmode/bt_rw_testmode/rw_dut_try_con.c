/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_dut_try_con
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

u32 rw_dut_try_con(u32 ulap,u32 nap,u32 bchl,u32 bchh,u32 freq,u32 freq1,u32 t,u32 *clknos,
                  u32 *bitos,u32 nmin,u32 nmax,u32 *mulap,u32 *mnap)

{
  u32 et_mask;
  u32 ptype;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

