/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_reg.o -> rx_11b_opt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rx_11b_opt(void)

{
  if ((_DAT_600a9814 & 4) != 0) {
    _DAT_600a7044 = _DAT_600a7044 & 0xffffc0ff | 0x3f1a00;
    _DAT_600a7124 = _DAT_600a7124 & 0xffff03f0 | 0x6c03;
    _DAT_600a8004 = _DAT_600a8004 & 0xffff0fff | 0x9000;
    _DAT_600a7104 = _DAT_600a7104 & 0xfffffe00 | 0x1e2;
  }
  return;
}

