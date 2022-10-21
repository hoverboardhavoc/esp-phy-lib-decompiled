/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> phy_enable_low_rate
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void phy_enable_low_rate(void)

{
  undefined4 in_t0;
  undefined8 *unaff_s0;
  int unaff_s1;
  int in_a0;
  int in_a5;
  undefined4 in_fa1;
  undefined4 in_register_0000305c;
  undefined8 in_fa3;
  undefined4 in_fa4;
  undefined4 in_register_00003074;
  undefined4 *in_stack_0000004c;
  
  *(ulonglong *)(in_a5 + 0x7c) = CONCAT44(in_register_00003074,in_fa4);
  if (in_a0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_s0 = *(undefined8 *)(unaff_s1 + 0x80);
  unaff_s0[8] = in_fa3;
  *in_stack_0000004c = in_fa1;
  unaff_s0[3] = CONCAT44(in_register_0000305c,in_fa1);
  custom0.rs1.rs2(in_t0,in_stack_0000004c);
  *(undefined8 *)(in_stack_0000004c + 0xa2) = in_fa3;
  in_stack_0000004c[0x3f] = in_fa4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

