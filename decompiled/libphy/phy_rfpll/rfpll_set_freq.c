/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rfpll.o -> rfpll_set_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfpll_set_freq(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  
  iVar1 = (param_2 + param_1 * 0x400) * 2 + -0x200000;
  param_3[2] = (char)((uint)iVar1 >> 0x10);
  param_3[1] = (char)((uint)iVar1 >> 8);
  *param_3 = (char)iVar1;
  return;
}

