/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> force_rx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void force_rx_gain(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (param_1 & 1) << 0x17;
  if (param_3 != 0) {
    phy_dis_hw_set_freq();
    _DAT_600af4b4 = param_3 & param_1 & 1 | _DAT_600af4b4 & 0xfffffffe;
    bt_rx_force();
    _DAT_600a2840 = _DAT_600a2840 & 0x7fffff | param_2 << 0x18 | uVar1;
    ets_delay_us(100);
    phy_en_hw_set_freq();
    return;
  }
  _DAT_600a702c = _DAT_600a702c & 0x7fffff | param_2 << 0x18 | uVar1;
  return;
}

