/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_ana.o -> set_chan_freq_hw_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void set_chan_freq_hw_init(S8 tx_freq_offset,S8 rx_freq_offset)

{
  undefined8 uVar1;
  int unaff_s1;
  uint in_a5;
  undefined8 unaff_fs1;
  undefined8 in_fa3;
  U8 i2c_rd_en [11];
  U8 i2c_data_rx [11];
  U8 i2c_data_tx [11];
  U8 i2c_addr_rx [11];
  U8 i2c_addr [11];
  U8 i2c_block [11];
  U8 i2c_mst [11];
  
  *(undefined8 *)(in_a5 + 0x7c) = in_fa3;
  uVar1 = uRam00000008;
  if ((in_a5 & 0xff) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(unaff_s1 + 4) = unaff_fs1;
  *(undefined8 *)(unaff_s1 + 4) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

