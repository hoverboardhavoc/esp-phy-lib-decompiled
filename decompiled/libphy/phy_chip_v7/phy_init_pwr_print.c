/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> phy_init_pwr_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void phy_init_pwr_print(void)

{
  undefined4 unaff_retaddr;
  int in_t1;
  int unaff_s1;
  int in_a4;
  int in_a5;
  undefined4 unaff_s8;
  undefined8 unaff_fs1;
  undefined8 in_fa2;
  undefined4 in_stack_0000004c;
  
  *(undefined8 *)(in_a5 + 0x7c) = unaff_fs1;
  if (unaff_s1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(in_a5 + 0x3c) = in_fa2;
  if (in_a4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  custom3.rd.rs1.rs2(unaff_retaddr,unaff_s8);
  *(undefined4 *)(in_t1 + -0x4e0) = in_stack_0000004c;
  FUN_000155dc(uRam00000078);
  _DAT_00000322 = gp;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

