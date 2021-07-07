/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> tx_pwctrl_background
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void tx_pwctrl_background(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = phy_enter_critical();
  phy_set_most_tpw_disbg = 1;
  if (phy_pwdet_onetime_flag == '\x01') {
    iVar2 = i2c_to_apb_rd();
    if (-1 < iVar2) {
      phy_pwdet_onetime_flag = '\0';
    }
  }
  else {
    uVar3 = i2c_to_apb_rd(0x6000e050);
    if ((uVar3 & 1) == 0) {
      phy_pwdet_onetime_en();
    }
  }
  if (phy_dis_pwdet_one != '\0') {
    phy_dis_pwdet_one = '\0';
  }
  wifi_track_pll_cap();
  phy_exit_critical(uVar1);
  return;
}

