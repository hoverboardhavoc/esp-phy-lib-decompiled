/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_basic.o -> chan14_mic_enable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void chan14_mic_enable(int param_1,int param_2)

{
  DAT_00011036 = (undefined1)param_1;
  if (param_1 == 0) {
    chan14_mic_cfg();
    return;
  }
  DAT_00011034 = (undefined1)param_2;
  if (0x30 < param_2) {
    DAT_00011034 = 0x30;
  }
  return;
}

