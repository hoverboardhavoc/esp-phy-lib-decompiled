/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
 * Source: libphy -> phy_track.o -> tx_pwctrl_background_
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_pwctrl_background_(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)*_g_phyFuns)((code *)*_g_phyFuns);
  if (DAT_00011017 == '\0') {
    tsens_temp_read_new();
    if (DAT_0001100a != '\0') {
      rfpll_cap_track(DAT_00011009);
    }
    wifi_track_tx_power(param_1,param_2);
    if (DAT_00011192 == '\0') {
      phy_cal_param_track(0x28,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_g_phyFuns[1])(uVar1);
  return;
}

