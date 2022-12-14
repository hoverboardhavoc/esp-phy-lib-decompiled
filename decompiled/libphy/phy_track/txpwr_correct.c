/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_track.o -> txpwr_correct
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txpwr_correct(int param_1,char *param_2,short *param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_2;
  if ((param_3[1] < param_4) || (param_4 < *param_3)) {
    cVar2 = ram_temp_to_power(param_5);
    *param_2 = cVar2;
  }
  else {
    *param_2 = phy_param;
  }
  if (*param_2 != cVar1) {
    if (param_1 != 0) {
      bt_set_tx_gain(0);
      return;
    }
    wifi_set_tx_gain(_phy_param,0);
    return;
  }
  return;
}

