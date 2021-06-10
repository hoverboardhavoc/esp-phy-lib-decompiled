/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> rf_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_init(void)

{
  uint uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = fpga_mem_rd(0x60008030);
  fpga_mem_wr(0x60008030,uVar1 | 0xf8000000);
  if ((re_entry != '\0') && (phy_init_flag != '\0')) {
    chip_i2c_writeReg(0x65,1,0,3);
    uVar1 = fpga_mem_rd(0x600060a0);
    fpga_mem_wr(0x600060a0,uVar1 & 0xfffff0ff | 0xa00);
  }
  uVar1 = fpga_mem_rd(0x600060a0);
  fpga_mem_wr(0x600060a0,uVar1 | 0x1000000);
  uVar1 = fpga_mem_rd(0x600050dc);
  fpga_mem_wr(0x600050dc,uVar1 | 0xc0000000);
  rfpll_init();
  ana_rx_cfg();
  rftx_init();
  i2c_writeReg_Mask(0x66,1,0xb,0,0,0);
  rfbt_init();
  if ((re_entry == '\0') || (phy_init_flag == '\0')) {
    pbus_debugmode();
    uStack_18 = 0x1000100;
    uStack_14 = 0x1000100;
    pbus_set_dco(&uStack_18);
    pbus_xpd_tx_off();
    pbus_xpd_rx_off();
    pbus_force_mode_part_0();
  }
  set_chan_freq_hw_init(2,4);
  return;
}

