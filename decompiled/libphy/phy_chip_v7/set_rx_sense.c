/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> set_rx_sense
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void set_rx_sense(sint8 sense_thr)

{
  undefined3 unaff_00002009;
  undefined1 *puVar1;
  undefined4 in_t0;
  undefined4 uVar2;
  undefined4 *in_a0;
  int in_a5;
  undefined8 in_ft5;
  undefined8 in_fa5;
  
  puVar1 = (undefined1 *)CONCAT31(unaff_00002009,sense_thr);
  uVar2 = *in_a0;
  *(undefined8 *)(in_a5 + 0x3c) = in_fa5;
  *(undefined8 *)(puVar1 + 0x80) = in_ft5;
  custom2.rd.rs1.rs2(in_t0,puVar1);
  *(undefined4 *)uVar2 = uVar2;
  if (puVar1 == (undefined1 *)0xfffffde4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00012ff8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

