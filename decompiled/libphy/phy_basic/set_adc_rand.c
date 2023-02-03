/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_basic.o -> set_adc_rand
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

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

