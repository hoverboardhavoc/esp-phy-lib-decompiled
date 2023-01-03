/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_pwdet.o -> pwdet_reg_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pwdet_reg_init_new(void)

{
  _DAT_600a0818 = 0xf0f0fff;
  _DAT_600a081c = 0xff0f40;
  _DAT_600a0820 = 0xaaaa;
  _DAT_600a0810 = _DAT_600a0810 & 0xff8ff00f | 0x200380;
  _DAT_600a0814 = _DAT_600a0814 & 0xffffff00 | 8;
  _DAT_6000e000 = _DAT_6000e000 | 0x20000000;
  _DAT_600b1054 = _DAT_600b1054 & 0x1fffffff;
  return;
}

