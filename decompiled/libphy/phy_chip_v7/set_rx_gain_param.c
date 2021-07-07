/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> set_rx_gain_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_rx_gain_param(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  cVar4 = (param_1 != 0) + '\v';
  bVar1 = param_1 == 0;
  if (param_1 == 0) {
    uVar6 = 0;
    uVar5 = 6;
  }
  else {
    uVar6 = i2c_readReg_Mask(0x67,1,0xf,2,0);
    i2c_writeReg_Mask(0x67,1,0xf,2,0,0);
    uVar5 = 0;
  }
  uVar3 = fpga_mem_rd(0x600060a0);
  fpga_mem_wr(0x600060a0,uVar3 | 0x4000);
  uVar3 = fpga_mem_rd(0x600060a0);
  fpga_mem_wr(0x600060a0,uVar3 | 0x8000);
  pbus_debugmode();
  pbus_xpd_rx_on(0);
  if (bt_mode_wifibb == '\0') {
    if (param_1 == 0) {
_L306:
      if ((chip7_sleep_params._0_4_ & 0x400) == 0) {
        chip7_sleep_params._0_4_ = chip7_sleep_params._0_4_ | 0x400;
      }
    }
    else {
      uVar2 = pbus_rd(1,1);
      pbus_force_test(1,1,uVar2 | 2);
    }
  }
  else if (param_1 == 0) goto _L306;
  uVar3 = fpga_mem_rd(0x600050dc);
  fpga_mem_wr(0x600050dc,uVar3 & 0xf7ffffff);
  pbus_xpd_rx_on(0);
  if (bt_mode_wifibb == '\0') {
    if (param_1 == 0) {
_L309:
      if ((chip7_sleep_params._0_4_ & 0x80) == 0) {
        set_rx_gain_cal_dc(0,0,2,param_2,param_3,cVar4,bVar1,uVar5);
        chip7_sleep_params._0_4_ = chip7_sleep_params._0_4_ | 0x80;
      }
      if ((chip7_sleep_params._0_4_ & 0x40) == 0) {
        set_rx_gain_cal_dc(0,2,3,param_2,param_3,cVar4,bVar1,uVar5);
        chip7_sleep_params._0_4_ = chip7_sleep_params._0_4_ | 0x40;
      }
      goto _L311;
    }
    uVar2 = pbus_rd(1,1);
    pbus_force_test(1,1,uVar2 | 2);
  }
  else if (param_1 == 0) goto _L309;
  set_rx_gain_cal_dc(param_1,0,1,param_2,param_3,cVar4,bVar1,uVar5);
_L311:
  uVar3 = fpga_mem_rd(0x600060a0);
  fpga_mem_wr(0x600060a0,uVar3 & 0xffff7fff);
  pbus_xpd_rx_on(0);
  pbus_workmode();
  if (param_1 != 0) {
    i2c_writeReg_Mask(0x67,1,0xf,2,0,uVar6);
    return;
  }
  return;
}

