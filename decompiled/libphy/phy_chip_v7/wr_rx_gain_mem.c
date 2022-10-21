/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> wr_rx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void wr_rx_gain_mem(bool bt_mode,bool rfbb_dc_upd_only,uint8 *rx_gain_swp,uint32 *rxrf_dc,
                   uint32 *rxbb_dc,uint32 *chan_dc,uint8 table_num,uint32 *rx_gain_table)

{
  undefined3 unaff_00002009;
  undefined3 rfbb_dc_upd_only_1;
  int unaff_s0;
  undefined4 in_a3;
  undefined8 in_fa1;
  uint16 bbgain_m [5];
  uint8 upd_num;
  uint8 addr_offset;
  
  *(undefined4 *)(CONCAT31(unaff_00002009,bt_mode) + 0x80) = in_a3;
  *(undefined8 *)(unaff_s0 + 0x18) = in_fa1;
  _rfbb_dc_upd_only = _rfbb_dc_upd_only + 0xb;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

