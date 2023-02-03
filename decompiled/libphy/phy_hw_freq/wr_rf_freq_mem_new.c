/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_hw_freq.o -> wr_rf_freq_mem_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wr_rf_freq_mem_new(int param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = get_freq_mem_param(2);
  uVar1 = param_1 * (uVar1 >> 8 & 0xff) + (uVar1 >> 0x10 & 0xff) & 0xffff;
  freq_i2c_mem_write_new(uVar1,*param_2,7);
  _DAT_600a00d0 = param_2[1] | 0x7000000;
  _DAT_600a00c0 = (uVar1 + 3 & 0x3ff) << 4 | _DAT_600a00c0 & 0xffff400f;
  return;
}

