/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
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
    tx_i2c_track();
    wifi_track_tx_power(param_1,param_2);
    phy_cal_param_track(10,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_g_phyFuns[1])(uVar1);
  return;
}

