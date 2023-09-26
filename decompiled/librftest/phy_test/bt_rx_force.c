/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> bt_rx_force
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_rx_force(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = 0x3000;
  }
  _DAT_600a0910 = _DAT_600a0910 & 0xffffcfff | uVar1;
  ets_delay_us(1);
  if (param_1 == 0) {
    _DAT_600a28a0 = _DAT_600a28a0 & 0x3fffffff;
    ets_delay_us(10);
    _DAT_600a0910 = _DAT_600a0910 & 0xfffffcff | 0x200;
    ets_delay_us(1);
    _DAT_600a0910 = _DAT_600a0910 | 0x300;
    ets_delay_us(1);
    _DAT_600a0910 = _DAT_600a0910 & 0xfffffcff;
  }
  else {
    _DAT_600a28a0 = _DAT_600a28a0 | 0xc0000000;
    ets_delay_us(10);
    _DAT_600a0910 = _DAT_600a0910 & 0xfffffcff | 0x200;
    ets_delay_us(1);
    _DAT_600a0910 = _DAT_600a0910 | 0x300;
  }
  ets_delay_us(1);
  return;
}

