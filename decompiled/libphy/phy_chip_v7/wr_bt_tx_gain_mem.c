/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> wr_bt_tx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void wr_bt_tx_gain_mem(uint8 pa_in,uint8 bb_in)

{
  undefined8 *in_a0;
  int in_a3;
  undefined8 unaff_fs0;
  undefined4 in_ft10;
  u16 txdc [4];
  
  *in_a0 = unaff_fs0;
  *(undefined4 *)(in_a3 + 0xfc) = in_ft10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

