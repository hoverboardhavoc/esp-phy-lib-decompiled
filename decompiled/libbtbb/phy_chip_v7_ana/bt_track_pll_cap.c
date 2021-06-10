/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> bt_track_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_track_pll_cap(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_11 [5];
  
  uVar1 = phy_enter_critical();
  if ((phy_bt_pll_track_en != '\0') && (iVar2 = fpga_mem_rd(0x6001d008), iVar2 << 2 < 0)) {
    if (phy_force_wifi_chan_en == '\0' && phy_sw_set_chan_en == '\0') {
      uVar3 = fpga_mem_rd(0x6000e168);
      uVar3 = uVar3 >> 0x18 & 0x7f;
      phy_dis_hw_set_freq();
      uVar4 = pll_correct_dcap(uVar3,auStack_11,0);
      if (phy_bt_power_track_en != '\0') {
        bt_track_tx_power(uVar3,uVar4);
      }
      phy_en_hw_set_freq();
    }
  }
  phy_exit_critical(uVar1);
  return;
}

