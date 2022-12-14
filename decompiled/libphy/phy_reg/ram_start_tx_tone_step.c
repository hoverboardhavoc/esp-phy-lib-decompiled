/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_reg.o -> ram_start_tx_tone_step
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_start_tx_tone_step
               (int param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6)

{
  if (param_1 == 0 && param_4 == 0) {
    _DAT_600a0414 = _DAT_600a0414 | 3;
  }
  else {
    _DAT_600a0414 = _DAT_600a0414 & 0xfffffffc;
  }
  _DAT_600a042c = (param_5 & 3) << 2 | _DAT_600a042c & 0xfffffff0 | param_2 & 3;
  _DAT_600a0420 =
       (param_1 << 0x12 | (int)param_2 >> 2) & 0xfffffffU | (-param_3 & 0xffU) << 10 |
       _DAT_600a0420 & 0xf0000000;
  _DAT_600a0424 =
       (param_4 << 0x12 | (int)param_5 >> 2) & 0xfffffffU | (-param_6 & 0xffU) << 10 |
       _DAT_600a0424 & 0xf0000000;
  return;
}

