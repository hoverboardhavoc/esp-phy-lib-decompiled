/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_ana.o -> freq_i2c_data_write
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void freq_i2c_data_write(void)

{
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [24];
  undefined1 auStack_1c [24];
  
  freq_get_i2c_data(auStack_70,auStack_64,auStack_58,auStack_1c,auStack_40,auStack_4c,auStack_34,0xc
                   );
  freq_i2c_write_set(auStack_70,auStack_64,auStack_58,auStack_1c,auStack_40,auStack_4c,auStack_34,
                     0xc);
  return;
}

