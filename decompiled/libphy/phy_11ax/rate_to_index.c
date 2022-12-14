/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_11ax.o -> rate_to_index
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint rate_to_index(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = wifi_11g_rate_chg();
  if (param_1 < 8) {
    uVar1 = param_1 >> 1 & 1;
  }
  else if (param_1 < 0x10) {
    uVar1 = (uVar1 >> 1) + 2 & 0xff;
  }
  else {
    uVar2 = (int)param_1 >> 1 & 7;
    uVar1 = uVar2 + 7;
    if (param_1 < 0x19) {
      uVar1 = uVar2 + 6;
    }
  }
  return uVar1;
}

