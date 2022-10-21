/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> ram_set_pbus_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ram_set_pbus_mem(void)

{
  uint table_txon_bt [5];
  uint table_txon [5];
  uint table_rxon_bt [4];
  uint table_rxon [4];
  uint table_txoff_bt [2];
  uint table_rxoff_bt [2];
  uint table_paoff [2];
  uint table_paon [2];
  uint table_txoff [2];
  uint table_rxoff [2];
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

