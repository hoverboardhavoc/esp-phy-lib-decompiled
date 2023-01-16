/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libbtbb -> bt_bb_v2.o -> set_gauss_coeff_1m
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_gauss_coeff_1m(void)

{
  _DAT_600a20e0 = _DAT_600a20e0 & 3 | 0x428b8;
  _DAT_600a20e4 = _DAT_600a20e4 & 3 | 0x4db1ec60;
  _DAT_600a20e8 = _DAT_600a20e8 & 0x3ff | 0x9cd9c000;
  _DAT_600a20ec = _DAT_600a20ec & 0x3ff | 0xec5f1c00;
  return;
}

