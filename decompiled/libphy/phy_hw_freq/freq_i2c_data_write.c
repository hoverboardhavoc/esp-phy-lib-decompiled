/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_hw_freq.o -> freq_i2c_data_write
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

