/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
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
  
  uStack_28 = 0x50fff6;
  uStack_24 = 0x69ffc4;
  iVar3 = (int)_DAT_0001112e;
  iVar1 = abs_temp(_phy_param - iVar3);
  iVar4 = 4;
  if (iVar1 < 8) {
    iVar4 = 2;
  }
  iVar1 = abs_temp((int)_phy_param - (int)_abs_temp);
  if (((iVar4 <= iVar1) && (iVar1 = ram_temp_to_power((int)_phy_param,iVar3,param_1), param_2 != 0))
     && (DAT_00011122 != iVar1)) {
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

