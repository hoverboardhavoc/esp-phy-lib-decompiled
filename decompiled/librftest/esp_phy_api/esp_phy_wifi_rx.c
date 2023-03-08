/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> esp_phy_api.o -> esp_phy_wifi_rx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_phy_wifi_rx(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  esp_rx_func(&uStack_18);
  return;
}

