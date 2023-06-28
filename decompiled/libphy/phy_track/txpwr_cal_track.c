/*
 * Last changed at upstream commit 97a141a563a4b752f5943d0049aa691038d08613
 * https://github.com/espressif/esp-phy-lib/commit/97a141a563a4b752f5943d0049aa691038d08613
 * Upstream date: 2023-06-28 11:18:04 +0800
 * Upstream subject: h2: optimize track pll when temperature changes. fix ramp up and ramp down timing.
 * Source: libphy -> phy_track.o -> txpwr_cal_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txpwr_cal_track(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = _DAT_600a150c;
  iVar2 = abs_temp((int)_phy_param - (int)_abs_temp);
  if ((((3 < iVar2) || ((uint)DAT_0001106c != (uVar1 & 0xff))) &&
      (iVar2 = temp_to_power((int)_phy_param,(int)_DAT_00011002), param_1 != 0)) &&
     (DAT_00011057 != iVar2)) {
    DAT_00011057 = (char)iVar2;
    _abs_temp = _phy_param;
    txpwr_correct(1,&phy_param,&phy_param,(int)_DAT_00011002);
    if (param_2 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)DAT_00011057,(int)_phy_param,
                 (int)_DAT_00011002);
    }
  }
  DAT_0001106c = (char)uVar1;
  return;
}

