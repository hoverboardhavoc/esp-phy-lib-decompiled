/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> meas_tone_pwr_db
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int meas_tone_pwr_db(undefined1 param_1,int param_2)

{
  start_tx_tone_step(1,param_1,0,0,0);
  get_tone_sar_dout(2);
  get_tone_sar_dout(2);
  get_tone_sar_dout(2);
  get_tone_sar_dout(2);
  stop_tx_tone(1);
  return (int)(short)((((param_2 << 0x12) >> 0x10) + 4) / 8);
}

