/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_gain.o -> phy_get_txpwr_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_get_txpwr_param(undefined1 *param_1,undefined1 *param_2)

{
  *param_2 = DAT_00011173;
  param_2[1] = DAT_00011174;
  param_2[2] = DAT_00011175;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

