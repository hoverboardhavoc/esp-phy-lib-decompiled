/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_hw_freq.o -> freq_i2c_data_write_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void freq_i2c_data_write_new(void)

{
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [56];
  
  freq_get_i2c_data(auStack_60,auStack_54,auStack_48,auStack_3c,0xb);
  freq_i2c_write_set_new(auStack_60,auStack_54,auStack_48,auStack_3c,0xb);
  return;
}

