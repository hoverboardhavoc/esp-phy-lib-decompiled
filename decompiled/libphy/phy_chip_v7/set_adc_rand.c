/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> set_adc_rand
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_adc_rand(int param_1)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_1c = 0x1000100;
  local_20 = 0x1000100;
  if (param_1 == 0) {
    pbus_xpd_rx_off();
    pbus_workmode();
    set_rxclk_en(0);
    set_txclk_en(0);
  }
  else {
    set_rxclk_en(1);
    set_txclk_en(1);
    _DAT_60008034 = _DAT_60008034 | 0xf8000000;
    _DAT_60006110 = _DAT_60006110 | 0x1000000;
    pbus_debugmode();
    uStack_18 = 0x1000100;
    uStack_14 = 0x1000100;
    pbus_set_dco(&uStack_18);
    pbus_xpd_rx_on(0);
    pbus_force_test(0,1,0);
    pbus_rx_dco_cal(0x1000,&local_20,0);
  }
  return;
}

