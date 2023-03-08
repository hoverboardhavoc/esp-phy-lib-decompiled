/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> esp_set_wifi_index
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void esp_set_wifi_index(undefined4 param_1)

{
  undefined *puVar1;
  
  puVar1 = &phy_param;
  do {
    puVar1[0xf4] = (char)param_1;
    puVar1 = puVar1 + 1;
  } while (puVar1 != &DAT_0001805a);
  DAT_000181c1 = 0x30;
  DAT_000181bb = 8;
  _txdc_cal_init = 0x808;
  ram_wifi_set_tx_gain(DAT_0001823e,0);
  phy_printf("0x%x,0x%x,%d,%d\n",esp_txrx_test,_esp_en_retest,(int)DAT_00018206,param_1);
  return;
}

