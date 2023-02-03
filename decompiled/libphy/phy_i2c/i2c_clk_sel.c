/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_i2c.o -> i2c_clk_sel
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_clk_sel(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0x7c) << 4;
  uVar1 = param_1 >> 1 & 0x3f;
  _DAT_600ad824 = _DAT_600ad824 & 0xfffff800 | uVar2 | uVar1;
  _DAT_600ad828 = _DAT_600ad828 & 0xfffff800 | uVar2 | uVar1;
  _DAT_600ad82c = uVar1 | _DAT_600ad82c & 0xfffff800 | uVar2;
  return;
}

