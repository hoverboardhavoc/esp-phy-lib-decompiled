/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> nrx_freq_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void nrx_freq_set(int param_1)

{
  uint uVar1;
  
  uVar1 = (0x50 << (DAT_60012390 & 0x1f)) / param_1 & 0xffffff;
  DAT_6001238d = (char)uVar1;
  DAT_6001238e = (char)(uVar1 >> 8);
  DAT_6001238f = (char)(uVar1 >> 0x10);
  return;
}

