/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_track.o -> txpwr_cal_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txpwr_cal_track(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = 0x69ffc4;
  uStack_24 = 0x69ffc4;
  iVar3 = (int)_DAT_0001112e;
  iVar1 = abs_temp(_phy_param - iVar3);
  iVar4 = 4;
  if (iVar1 < 8) {
    iVar4 = 2;
  }
  iVar1 = abs_temp((int)_phy_param - (int)_abs_temp);
  if (((iVar4 <= iVar1) && (iVar1 = ram_temp_to_power((int)_phy_param,iVar3), param_2 != 0)) &&
     (DAT_00011122 != iVar1)) {
    phy_bbpll_cal(1);
    DAT_00011122 = (char)iVar1;
    _abs_temp = _phy_param;
    if (param_1 == 0) {
      puVar2 = &uStack_28;
    }
    else {
      puVar2 = &uStack_24;
    }
    txpwr_correct(param_1 != 0,&phy_param,puVar2,iVar3);
    if (param_3 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)DAT_00011122,(int)_phy_param,iVar3);
    }
    phy_bbpll_cal(0);
  }
  return;
}

