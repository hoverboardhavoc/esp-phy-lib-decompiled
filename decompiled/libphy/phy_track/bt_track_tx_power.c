/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
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
     (DAT_0001104e != iVar1)) {
    phy_bbpll_cal(1);
    _abs_temp = _phy_param;
    DAT_0001104e = (char)iVar1;
    txpwr_correct(1,&phy_param,&phy_param,(int)_DAT_00011002);
    if (param_2 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)DAT_0001104e,(int)_phy_param,
                 (int)_DAT_00011002);
    }
    phy_bbpll_cal(0);
    return;
  }
  return;
}

