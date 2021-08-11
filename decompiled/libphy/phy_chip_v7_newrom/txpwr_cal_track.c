/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> txpwr_cal_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00010a46) */
/* WARNING: Removing unreachable block (ram,0x00010000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txpwr_cal_track(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    if (DAT_000121b0 == '\x01') {
      iVar1 = (int)_DAT_000121b8;
      goto _L164;
    }
  }
  else if ((param_1 == 1) && (DAT_000121b0 == '\x10')) {
    iVar1 = (int)_DAT_000121ba;
    goto _L164;
  }
  iVar1 = (int)_tx_pwctrl_bg_init;
_L164:
  iVar3 = 2;
  iVar2 = abs_temp(_DAT_0001206a - iVar1);
  if (7 < iVar2) {
    iVar3 = 4;
  }
  iVar2 = abs_temp((int)_DAT_0001206a - (int)_DAT_0001206e);
  if (((iVar3 <= iVar2) && (param_2 != 0)) &&
     (iVar2 = temp_to_power((int)_DAT_0001206a,iVar1), DAT_000121a8 != iVar2)) {
    phy_bbpll_cal_part_0();
    _DAT_0001206e = _DAT_0001206a;
    DAT_000121a8 = (char)iVar2;
    txpwr_correct(param_1 != 0,&phy_param,&phy_param,iVar1);
    if (param_3 != 0) {
      ets_printf("correct_power=%d,temp=%d %d\n",(int)DAT_000121a8,(int)_DAT_0001206a,iVar1);
    }
    _DAT_6000e040 = _DAT_6000e040 & 0xfffffff3 | 4;
    return;
  }
  return;
}

