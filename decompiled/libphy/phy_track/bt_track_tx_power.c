/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_track.o -> bt_track_tx_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_track_tx_power(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = abs_temp((int)_phy_param - (int)_abs_temp);
  if (((3 < iVar1) && (iVar1 = temp_to_power((int)_phy_param,(int)_DAT_00011002), param_1 != 0)) &&
     (DAT_00011051 != iVar1)) {
    DAT_00011051 = (char)iVar1;
    _abs_temp = _phy_param;
    txpwr_correct(1,&phy_param,&phy_param,(int)_DAT_00011002);
    if (param_2 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)DAT_00011051,(int)_phy_param,
                 (int)_DAT_00011002);
      return;
    }
  }
  return;
}

