/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_init.o -> register_chipv7_phy_init_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void register_chipv7_phy_init_param(undefined1 *param_1)

{
  DAT_000104d2 = *param_1;
  DAT_000104d3 = param_1[1];
  DAT_000104d4 = param_1[2];
  DAT_000104d5 = param_1[3];
  return;
}

