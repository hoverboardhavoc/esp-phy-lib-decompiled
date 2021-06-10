/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> phy_get_adc_rand
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_get_adc_rand(int param_1)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_30 = 0x1000100;
  uStack_2c = 0x1000100;
  adc_ana_conf_org = fpga_mem_rd(0x60008030);
  if (param_1 == 0) {
    pbus_xpd_rx_off();
    pbus_workmode();
    fpga_mem_wr(0x60008030,adc_ana_conf_org);
    set_rxclk_en(0);
  }
  else {
    set_rxclk_en(1);
    uVar1 = fpga_mem_rd(0x60008030);
    fpga_mem_wr(0x60008030,uVar1 | 0xf8000000);
    uVar1 = fpga_mem_rd(0x600060a0);
    fpga_mem_wr(0x600060a0,uVar1 | 0x1000000);
    pbus_debugmode();
    uStack_28 = 0x1000100;
    uStack_24 = 0x1000100;
    pbus_set_dco(&uStack_28);
    pbus_xpd_rx_on(0);
    pbus_force_test(0,1,0);
    pbus_rx_dco_cal(4000,&local_30,10,0,0);
  }
  return;
}

