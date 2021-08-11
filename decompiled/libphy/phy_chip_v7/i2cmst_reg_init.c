/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> i2cmst_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2cmst_reg_init(void)

{
  _DAT_6000e040 = _DAT_6000e040 & 0xfffff9ff | 0x440;
  _DAT_6000e054 = _DAT_6000e054 & 0xffff0000 | 0xf0f;
  _DAT_6000e058 = _DAT_6000e058 & 0xff00ff00 | 0x20000f;
  _DAT_6000e060 = _DAT_6000e060 & 0xff0000e7 | 0xf0000;
  _DAT_6000e05c = _DAT_6000e05c & 0xffff0000 | 0xaaaa;
  _DAT_6000e050 = _DAT_6000e050 & 0xffffffe3 | 0x18;
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xdf00ffff | 0x41200000;
  _DAT_6000e048 = _DAT_6000e048 & 0xfffe000f | 0x1ff50;
  _DAT_6000e150 = _DAT_6000e150 & 0x8fffffff;
  _DAT_6000e130 = _DAT_6000e130 | 1;
  return;
}

