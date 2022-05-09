/*
 * Last changed at upstream commit d8ee8f776acd1aafdfc3046f526db024b175b094
 * https://github.com/espressif/esp-phy-lib/commit/d8ee8f776acd1aafdfc3046f526db024b175b094
 * Upstream date: 2022-05-09 07:50:30 -0400
 * Upstream subject: esp32c2: optimize rf performace
 * Source: libphy -> phy_track.o -> tx_pwctrl_background_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_pwctrl_background_new(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(_g_phyFuns + 4))(*(code **)(_g_phyFuns + 4));
  if (DAT_000110af == '\0') {
    (**(code **)(_g_phyFuns + 0x1a4))(*(code **)(_g_phyFuns + 0x1a4));
    if (DAT_000110a0 != '\0') {
      rfpll_cap_track(DAT_0001109f);
    }
    wifi_track_tx_power(param_1,param_2);
    rx_table_track(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 8))(uVar1);
  return;
}

