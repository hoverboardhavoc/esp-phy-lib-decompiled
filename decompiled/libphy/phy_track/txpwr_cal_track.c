/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_track.o -> txpwr_cal_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txpwr_cal_track(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = abs_temp((int)_phy_param - (int)_abs_temp);
  if (((3 < iVar1) && (iVar1 = temp_to_power((int)_phy_param,(int)_DAT_00011002), param_1 != 0)) &&
     (DAT_00011057 != iVar1)) {
    DAT_00011057 = (char)iVar1;
    _abs_temp = _phy_param;
    txpwr_correct(1,&phy_param,&phy_param,(int)_DAT_00011002);
    if (param_2 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)DAT_00011057,(int)_phy_param,
                 (int)_DAT_00011002);
      return;
    }
  }
  return;
}

