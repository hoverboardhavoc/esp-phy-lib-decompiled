/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_ana.o -> set_chan_freq_hw_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_chan_freq_hw_init(uint param_1,uint param_2)

{
  _DAT_000120e2 = get_bias_ref_code();
  get_rf_freq_init();
  if (-1 < (int)(_DAT_00012124 << 0x12)) {
    freq_i2c_data_write();
    _DAT_6003509c = _DAT_6003509c & 0xffff | 0xc800000;
    _DAT_00012124 = _DAT_00012124 | 0x2000;
  }
  _DAT_6000e0c4 =
       (param_2 & 0xf) << 0x14 | (param_1 & 0xf) << 0x10 | _DAT_6000e0c4 & 0xdf00ffff | 0x41000000;
  return;
}

