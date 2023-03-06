/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_hw_freq.o -> set_chan_freq_hw_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_chan_freq_hw_init(void)

{
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [48];
  
  freq_reg_init();
  get_rf_freq_init_new(0x55,0);
  freq_get_i2c_data(auStack_58,auStack_4c,auStack_40,auStack_34,9);
  freq_i2c_write_set_new(auStack_58,auStack_4c,auStack_40,auStack_34,9);
  return;
}

