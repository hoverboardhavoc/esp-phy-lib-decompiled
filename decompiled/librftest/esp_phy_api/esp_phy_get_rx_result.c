/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> esp_phy_api.o -> esp_phy_get_rx_result
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void esp_phy_get_rx_result(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = _esp_rx_result;
  uVar1 = _wifiscwout;
  param_1[1] = _esp_rx_valid;
  param_1[2] = uVar1;
  param_1[3] = _esp_rx_valid & 0xff;
  return;
}

