/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> register_chipv7_phy
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 register_chipv7_phy(void)

{
  uint uVar1;
  
  if (re_entry == '\0') {
    ets_printf("phy_init begin: %d, %s, %s, 0x%x\n",1,"Mar 26 2021","18:06:08",_DAT_60035000);
  }
  phy_init_flag = 1;
  phy_dis_hw_set_freq();
  uVar1 = fpga_mem_rd(0x6000e0c4);
  fpga_mem_wr(0x6000e0c4,uVar1 & 0xfffffeff);
  if (re_entry == '\0') {
    uVar1 = fpga_mem_rd(0x60008030);
    fpga_mem_wr(0x60008030,uVar1 & 0x7ffffff);
    register_chipv7_phy_init_param(rf_gain_swp_wifi);
    if (chip7_phy_init_ctrl[0x51] == '\x01') {
      pwrdet_offset = 0x138;
    }
    else {
      pwrdet_offset = 0x120;
    }
    phy_in_most_power = chip7_phy_init_ctrl[0x2c];
    if (re_entry == '\0') {
      chip7_sleep_params._0_4_ = 8;
    }
  }
  rf_init();
  bb_init();
  if (re_entry == '\0') {
    rf_cal_data_backup(rf_cal_data_fpga);
    phy_rfcal_data_check(0,rf_cal_data_fpga,rf_gain_swp_wifi);
  }
  if (re_entry == '\x01') {
    i2c_writeReg(0x65,1,0,99);
    chip_v7_set_chan_nomac((int)chip7_sleep_params[0x51],(int)chip7_sleep_params[0x53]);
    uVar1 = fpga_mem_rd(0x600060a0);
    fpga_mem_wr(0x600060a0,uVar1 & 0xfffff0ff);
  }
  else if (chip7_phy_init_ctrl[0] != '\0') {
    chip_v7_set_chan_offset(0);
  }
  if (re_entry == '\0') {
    ets_printf("phy_version: %d, phy=%s, fpga=%s, %s, %s, %d, %d\n",0xb,"e3e9fcc","5f7f7b8",
               "Mar 26 2021","18:06:08",chip7_phy_init_ctrl[0],2);
  }
  i2c_readReg(99,1,0);
  uVar1 = fpga_mem_rd(0x60011000);
  fpga_mem_wr(0x60011000,uVar1 | 0x80000000);
  uVar1 = fpga_mem_rd(0x60011000);
  fpga_mem_wr(0x60011000,uVar1 & 0x7fffffff);
  re_entry = '\x01';
  phy_init_flag = 0;
  phy_en_hw_set_freq();
  i2c_clk_sel(0);
  if (re_entry == '\0') {
    fpga_vesion_print();
  }
  return 0;
}

