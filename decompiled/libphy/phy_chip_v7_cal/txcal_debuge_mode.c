/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> txcal_debuge_mode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txcal_debuge_mode(void)

{
  uint uVar1;
  int iVar2;
  
  pbus_debugmode();
  pbus_xpd_tx_on(_tx_rf_ana_gain,_DAT_0001402e);
  iVar2 = txbbgain_to_index(_DAT_0001402e);
  pbus_set_dco(stop_tx_tone + iVar2 * 8);
  set_txclk_en(1);
  uVar1 = i2c_to_apb_rd(0x6000e05c);
  i2c_to_apb_wr(0x6000e05c,uVar1 & 0xff7fffff);
  uVar1 = i2c_to_apb_rd(0x6000e05c);
  i2c_to_apb_wr(0x6000e05c,uVar1 & 0xffdfffff);
  uVar1 = i2c_to_apb_rd(0x6000e050);
  i2c_to_apb_wr(0x6000e050,uVar1 & 0xfffffffe);
  uVar1 = fpga_mem_rd(0x600060c0);
  fpga_mem_wr(0x600060c0,uVar1 | 0x80);
  uVar1 = i2c_to_apb_rd(0x6000e050);
  i2c_to_apb_wr(0x6000e050,uVar1 | 0xc0);
  uVar1 = fpga_mem_rd(0x6000880c);
  fpga_mem_wr(0x6000880c,uVar1 | 0xc0000);
  uVar1 = fpga_mem_rd(0x60008890);
  fpga_mem_wr(0x60008890,uVar1 | 0x8000000);
  uVar1 = fpga_mem_rd(0x60008890);
  fpga_mem_wr(0x60008890,uVar1 & 0xefffffff);
  uVar1 = fpga_mem_rd(0x60008894);
  fpga_mem_wr(0x60008894,uVar1 | 0x80000000);
  uVar1 = fpga_mem_rd(0x60008894);
  fpga_mem_wr(0x60008894,uVar1 & 0x8007ffff);
  uVar1 = fpga_mem_rd(0x6000882c);
  fpga_mem_wr(0x6000882c,uVar1 | 0xc);
  uVar1 = fpga_mem_rd(0x60008838);
  fpga_mem_wr(0x60008838,uVar1 & 0x3fffffff);
  uVar1 = fpga_mem_rd(0x60008838);
  fpga_mem_wr(0x60008838,uVar1 & 0xfffffffc);
  uVar1 = fpga_mem_rd(0x6000882c);
  fpga_mem_wr(0x6000882c,uVar1 & 0xffffff1f | 0x80);
  return;
}

