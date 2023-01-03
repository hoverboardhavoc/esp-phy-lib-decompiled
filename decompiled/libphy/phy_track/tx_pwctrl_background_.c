/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
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
    rx_table_track(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_g_phyFuns[1])(uVar1);
  return;
}

