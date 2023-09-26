/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> set_tx_pwr_index
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_tx_pwr_index(void)

{
  byte abStack_14 [16];
  
  phy_get_max_pwr(abStack_14);
  _DAT_600a0410 =
       (0x15 - (uint)abStack_14[0]) * 0x10000 & 0x3f0000 | _DAT_600a0410 & 0xffc0ffff | 0x800000;
  return;
}

