/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> set_chan_freq_hw_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_chan_freq_hw_init(void)

{
  get_rf_freq_init();
  if (-1 < (int)(_DAT_000130fc << 0x12)) {
    freq_i2c_data_write();
    _DAT_6003509c = _DAT_6003509c & 0xffff | 0xc800000;
    _DAT_000130fc = _DAT_000130fc | 0x2000;
  }
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xdfffffff | 0x41000000;
  return;
}

