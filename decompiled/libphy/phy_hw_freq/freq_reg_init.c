/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_hw_freq.o -> freq_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void freq_reg_init(uint param_1,int param_2)

{
  _DAT_600a00c0 = ((param_2 << 4 | param_1) & 0xff) << 0x11 | _DAT_600a00c0 & 0xda01bfff | 0x2000000
  ;
  _DAT_600a00c8 = 0x33000492;
  _DAT_600a00cc = 0x49836e40;
  return;
}

