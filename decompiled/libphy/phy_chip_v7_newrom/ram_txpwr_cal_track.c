/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_txpwr_cal_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00010c9c) */
/* WARNING: Removing unreachable block (ram,0x00010000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_txpwr_cal_track(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    if (DAT_00012208 == '\x01') {
      iVar1 = (int)_DAT_00012210;
      goto _L196;
    }
  }
  else if ((param_1 == 1) && (DAT_00012208 == '\x10')) {
    iVar1 = (int)_DAT_00012212;
    goto _L196;
  }
  iVar1 = (int)_DAT_00012216;
_L196:
  iVar3 = 2;
  iVar2 = (**(code **)(_g_phyFuns + 0x100))(_DAT_00012096 - iVar1,*(code **)(_g_phyFuns + 0x100));
  if (7 < iVar2) {
    iVar3 = 4;
  }
  iVar2 = (**(code **)(_g_phyFuns + 0x100))
                    ((int)_DAT_00012096 - (int)_DAT_0001209a,*(code **)(_g_phyFuns + 0x100));
  if (((iVar3 <= iVar2) &&
      (iVar2 = (**(code **)(_g_phyFuns + 0x168))
                         ((int)_DAT_00012096,iVar1,*(code **)(_g_phyFuns + 0x168)), param_2 != 0))
     && (DAT_000121fe != iVar2)) {
    rom_phy_bbpll_cal_part_0();
    _DAT_0001209a = _DAT_00012096;
    DAT_000121fe = (char)iVar2;
    ram_txpwr_correct(param_1 != 0,&phy_param,&phy_param,iVar1);
    if (param_3 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)DAT_000121fe,(int)_DAT_00012096,iVar1);
    }
    _DAT_6000e040 = _DAT_6000e040 & 0xfffffff3 | 4;
    return;
  }
  return;
}

