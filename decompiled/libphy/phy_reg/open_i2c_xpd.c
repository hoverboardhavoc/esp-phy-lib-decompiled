/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> open_i2c_xpd
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void open_i2c_xpd(void)

{
  uint uVar1;
  
  _DAT_600b00cc = _DAT_600b00cc | 0x10000000;
  uVar1 = _DAT_600b0154 | 0xf0000000;
  if (-1 < (int)(_DAT_600b0154 << 4)) {
    uVar1 = _DAT_600b0154 & 0xfbffffff | 0xfc000000;
  }
  _DAT_600b0154 = uVar1;
  if (-1 < (int)(_DAT_600b0154 << 5)) {
    _DAT_600b0154 = _DAT_600b0154 | 0x4000000;
  }
  return;
}

