/*
 * Last changed at upstream commit 792ba5917ee8191e7264143e69f9e6f8c1c0eacc
 * https://github.com/espressif/esp-phy-lib/commit/792ba5917ee8191e7264143e69f9e6f8c1c0eacc
 * Upstream date: 2024-05-08 10:58:27 +0800
 * Upstream subject: update c3 s3 c6 libphy fix coex reset and bug
 * Source: librftest -> bb_common.o -> esp_get_rx_result
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 esp_get_rx_result(undefined4 *param_1)

{
  *param_1 = esp_rx_result;
  param_1[1] = DAT_00012938;
  param_1[2] = DAT_0001293c;
  return esp_rx_valid;
}

