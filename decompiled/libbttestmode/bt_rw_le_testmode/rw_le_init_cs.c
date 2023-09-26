/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_le_init_cs
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void rw_le_init_cs(undefined8 *param_1,int param_2,undefined4 param_3)

{
  undefined4 in_t0;
  undefined4 in_t1;
  undefined4 unaff_s0;
  undefined4 unaff_s8;
  undefined8 unaff_fs0;
  int in_stack_0000004c;
  
  *param_1 = unaff_fs0;
  if (param_2 != 0) {
    custom3.rs1.rs2(param_3,gp);
    custom3.rs1.rs2(unaff_s8,gp);
    custom3.rs1.rs2(0,tp);
    custom3.rs1.rs2(unaff_s0,tp);
    custom3.rs1.rs2(param_3,tp);
    custom3.rs1.rs2(unaff_s8,tp);
    custom3.rs1.rs2(0,in_t0);
    custom3.rs1.rs2(unaff_s0,in_t0);
    custom3.rs1.rs2(param_3,in_t0);
    custom3.rs1.rs2(unaff_s8,in_t0);
    custom3.rs1.rs2(0,in_t1);
    custom3.rs1.rs2(unaff_s8,in_t1);
    custom3.rs1.rs2(0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_stack_0000004c != -0x10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

