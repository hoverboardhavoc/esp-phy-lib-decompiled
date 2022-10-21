/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> phy_get_rx_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

sint16 phy_get_rx_freq(u8 rate,u32 bb_info)

{
  undefined4 unaff_retaddr;
  undefined3 unaff_00002009;
  int in_t1;
  int in_a4;
  undefined4 unaff_s8;
  
  custom3.rd.rs1.rs2(unaff_retaddr,unaff_s8);
  *(undefined4 *)(in_t1 + -0x4e0) = *(undefined4 *)(CONCAT31(unaff_00002009,rate) + 0x4c);
  FUN_000155dc(*(undefined8 *)(in_a4 + 0x78));
  _DAT_00000322 = bb_info;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

