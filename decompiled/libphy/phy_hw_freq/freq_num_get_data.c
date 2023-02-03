/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_hw_freq.o -> freq_num_get_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint freq_num_get_data(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  do {
    if (param_1 < param_3) {
      uVar1 = uVar1 | (uint)*(byte *)(param_2 + param_1) << (uVar2 & 0x1f);
    }
    uVar2 = uVar2 + 5;
    param_1 = param_1 + 1;
  } while (uVar2 != 0x1e);
  return uVar1;
}

