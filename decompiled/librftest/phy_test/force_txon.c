/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> force_txon
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void force_txon(int param_1)

{
  _DAT_600a70dc = _DAT_600a70dc & 0xfffeffff;
  if (param_1 == 0) {
    if ((_DAT_600a0910 >> 10 & 3) == 3) {
      _DAT_600a0910 = _DAT_600a0910 & 0xfffff3ff | 0x800;
      ets_delay_us(1);
    }
    _DAT_600a0910 = _DAT_600a0910 & 0xfffff3ff;
    ets_delay_us(1);
    _DAT_600a0910 = _DAT_600a0910 & 0xfffffcff;
  }
  else {
    _DAT_600a0910 = _DAT_600a0910 & 0xfffffcff | 0x200;
    ets_delay_us(1);
    _DAT_600a0910 = _DAT_600a0910 | 0xc00;
  }
  ets_delay_us(1);
  return;
}

