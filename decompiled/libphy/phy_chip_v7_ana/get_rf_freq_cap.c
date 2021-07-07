/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> get_rf_freq_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_rf_freq_cap(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  
  rfpll_set_freq(chip7_phy_init_ctrl,param_1,param_2);
  write_rfpll_sdm(param_2);
  restart_cal();
  wait_rfpll_cal_end();
  chip_v7_rxmax_ext_ana(0);
  uVar1 = chip_i2c_readReg(0x62,1,5);
  *param_3 = uVar1;
  bVar2 = chip_i2c_readReg(0x62,1,2);
  bVar3 = chip_i2c_readReg(0x62,1,6);
  param_3[1] = bVar2 & 0xf0 | bVar3 & 0xf | 0x80;
  return;
}

