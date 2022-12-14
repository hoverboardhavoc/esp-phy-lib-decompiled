/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_basic.o -> chan14_mic_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chan14_mic_cfg(int param_1)

{
  char cVar1;
  
  if (param_1 == 1) {
    _DAT_600a7400 = _DAT_600a7400 & 0xffff9fff | 0x2000;
    cVar1 = DAT_00011034;
  }
  else {
    _DAT_600a7400 = _DAT_600a7400 | 0x6000;
    cVar1 = DAT_00011016;
  }
  phy_set_most_tpw((int)cVar1);
  return;
}

