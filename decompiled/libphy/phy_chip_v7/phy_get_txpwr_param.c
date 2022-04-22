/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> phy_get_txpwr_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_get_txpwr_param(undefined1 *param_1,undefined1 *param_2)

{
  *param_2 = DAT_000145eb;
  param_2[1] = DAT_000145ec;
  param_2[2] = DAT_000145ed;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

