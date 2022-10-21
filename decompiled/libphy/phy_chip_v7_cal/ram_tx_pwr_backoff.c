/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_cal.o -> ram_tx_pwr_backoff
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Unknown calling convention */

S16 ram_tx_pwr_backoff(U8 *target_pwr,bool *linear_flag)

{
  S16 SVar1;
  int in_a3;
  int in_a4;
  u8 target_power_low;
  S8 bb_atten_low;
  S16 target_pwr_edb;
  
  FUN_0001299c();
  SVar1 = FUN_00012764(*(undefined4 *)(in_a3 + 0x44),*(undefined8 *)(in_a3 + 0xc0),
                       *(undefined8 *)(in_a4 + 0x80));
  return SVar1;
}

