/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> ble_common_link.o -> disable_txlink
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void disable_txlink(uint *param_1,int param_2)

{
  if (param_2 == 0) {
    *param_1 = *param_1 & 0xff000000;
    param_1[1] = param_1[1] & 0xfff00000;
    return;
  }
  if (param_2 == 1) {
    param_1[2] = param_1[2] & 0xff000000;
    param_1[3] = param_1[3] & 0xfff00000;
    return;
  }
  phy_printf("Invalid TX link index !");
  return;
}

