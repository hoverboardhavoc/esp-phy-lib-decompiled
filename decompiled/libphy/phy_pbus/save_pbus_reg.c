/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_pbus.o -> save_pbus_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void save_pbus_reg(void)

{
  _DAT_00011034 = _DAT_600a08e0;
  _DAT_00011038 = _DAT_600a08e4;
  _DAT_0001103c = _DAT_600a08e8;
  _DAT_00011040 = _DAT_600a08ec;
  _DAT_00011044 = _DAT_600a08f0;
  _DAT_00011048 = _DAT_600a08f4;
  return;
}

