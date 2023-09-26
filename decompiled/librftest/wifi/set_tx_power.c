/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> set_tx_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_tx_power(undefined4 param_1)

{
  char local_b0 [32];
  undefined2 auStack_90 [32];
  undefined2 auStack_50 [34];
  
  DAT_0001701b = 1;
  DAT_00017137 = (char)param_1 + -0x50;
  wifi_get_tx_tab(_esp_rx_func,local_b0,auStack_90,auStack_50,0);
  wifi_set_tx_gain(_esp_rx_func,0);
  force_tx_gain(auStack_50[0],auStack_90[0],(int)local_b0[0]);
  DAT_00017137 = 0;
  DAT_0001701b = 0;
  phy_printf("%d,0x%x,0x%x,%d\n",param_1,auStack_50[0],auStack_90[0],(int)local_b0[0]);
  return;
}

