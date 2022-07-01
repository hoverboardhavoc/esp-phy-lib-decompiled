/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
 * Source: libphy -> phy_reg.o -> ram_open_i2c_xpd
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_open_i2c_xpd(void)

{
  _DAT_6000802c = _DAT_6000802c & 0x7ffffff;
  _DAT_60008000 = _DAT_60008000 & 0xffffff7f;
  ets_delay_us(10);
  _DAT_6000802c = _DAT_6000802c | 0xf8000000;
  _DAT_60008000 = _DAT_60008000 | 0x80;
  return;
}

