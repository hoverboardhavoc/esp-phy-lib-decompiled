/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> wifi_track_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wifi_track_pll_cap(void)

{
  uint uVar1;
  int iVar2;
  char acStack_11 [9];
  
  acStack_11[0] = '\0';
  if (phy_wifi_pll_track_en != '\0') {
    uVar1 = fpga_mem_rd(0x6001d008);
    if ((uVar1 >> 0x1d & 1) == 0 && phy_sw_set_chan_en == '\0') {
      uVar1 = 0x54;
      if (chip7_sleep_params < 0xe) {
        uVar1 = (chip7_sleep_params + -1) * 5 + 0xcU & 0xffff;
      }
      phy_dis_hw_set_freq();
      iVar2 = pll_correct_dcap(uVar1 & 0xff,acStack_11,1);
      if ((iVar2 != 0) && (acStack_11[0] != '\0')) {
        chip_i2c_writeReg(0x62,1,1);
      }
      if (phy_force_wifi_chan_en == '\0') {
        phy_en_hw_set_freq();
      }
    }
  }
  return;
}

