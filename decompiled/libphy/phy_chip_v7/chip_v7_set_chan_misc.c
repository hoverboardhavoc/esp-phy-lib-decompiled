/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> chip_v7_set_chan_misc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void chip_v7_set_chan_misc(uint param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if (3 < (int)param_1) {
    iVar2 = (8 < (int)param_1) + 1;
  }
  set_noise_floor((int)(short)chip7_sleep_params._78_2_);
  if ((re_entry == '\0') || (phy_init_flag == '\0')) {
    wr_rx_gain_mem(0,1,phy_rxrf_dc,phy_rxbb_dc,chip7_sleep_params[0xb1] + '\x01',phy_rx_gain_gen);
  }
  bVar1 = chip7_phy_init_ctrl[iVar2 + 0x20];
  uVar3 = fpga_mem_rd(0x6001c02c);
  fpga_mem_wr(0x6001c02c,uVar3 & 0xffffff00 | (uint)bVar1);
  uVar3 = fpga_mem_rd(0x6001c0a0);
  fpga_mem_wr(0x6001c0a0,((char)bVar1 + 2) * 0x1000000 | uVar3 & 0xffffff);
  uVar3 = fpga_mem_rd(0x6001c0d0);
  fpga_mem_wr(0x6001c0d0,
              uVar3 & 0xfffe01ff |
              ((int)(char)chip7_phy_init_ctrl[iVar2 + 0x29] + (int)(char)bVar1) * 0x200 & 0x1fe00U);
  set_txcap_reg(chip7_sleep_params,param_1 & 0xff);
  if ((re_entry != '\0') && (phy_init_flag != '\0')) {
    return;
  }
  set_chan_dig_gain(param_1 & 0xff);
  return;
}

