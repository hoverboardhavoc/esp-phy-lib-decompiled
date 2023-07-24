/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: librftest -> wifi.o -> set_tx_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_tx_power(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = &phy_param;
    do {
      puVar1[0xf4] = (char)param_1;
      puVar1 = puVar1 + 1;
    } while (puVar1 != &DAT_0001805e);
  }
  else {
    register_chipv7_phy_init_param(init_param_default);
  }
  rom1_wifi_set_tx_gain(DAT_00018242,0);
  phy_printf("0x%x,0x%x,%d,%d\n",phy_ftm_comp,_get_power_db,(int)DAT_0001820a,param_1);
  return;
}

