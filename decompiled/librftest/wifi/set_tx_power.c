/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
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
  ram1_wifi_set_tx_gain(DAT_00018242,0);
  phy_printf("0x%x,0x%x,%d,%d\n",gpio_output_set,_esp_txrx_test,(int)DAT_0001820a,param_1);
  return;
}

