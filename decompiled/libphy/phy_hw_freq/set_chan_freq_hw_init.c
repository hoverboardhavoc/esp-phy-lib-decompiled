/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_hw_freq.o -> set_chan_freq_hw_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_chan_freq_hw_init(void)

{
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [44];
  
  freq_reg_init();
  get_rf_freq_init_new(0x55,0);
  freq_get_i2c_data(auStack_48,auStack_40,auStack_38,auStack_30,8);
  freq_i2c_write_set_new(auStack_48,auStack_40,auStack_38,auStack_30,8);
  return;
}

