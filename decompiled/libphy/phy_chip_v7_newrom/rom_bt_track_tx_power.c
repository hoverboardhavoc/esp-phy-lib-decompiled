/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_bt_track_tx_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00011532) */
/* WARNING: Removing unreachable block (ram,0x00011444) */
/* WARNING: Removing unreachable block (ram,0x0001144e) */
/* WARNING: Removing unreachable block (ram,0x00010c9c) */
/* WARNING: Removing unreachable block (ram,0x00010000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_bt_track_tx_power(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  sVar1 = _DAT_00012212;
  if (DAT_00012208 != '\x10') {
    sVar1 = _DAT_00012216;
  }
  iVar2 = (int)sVar1;
  iVar4 = 2;
  iVar3 = (**(code **)(_g_phyFuns + 0x100))(_DAT_00012096 - iVar2,*(code **)(_g_phyFuns + 0x100));
  if (7 < iVar3) {
    iVar4 = 4;
  }
  iVar3 = (**(code **)(_g_phyFuns + 0x100))
                    ((int)_DAT_00012096 - (int)_DAT_0001209a,*(code **)(_g_phyFuns + 0x100));
  if (((iVar4 <= iVar3) &&
      (iVar3 = (**(code **)(_g_phyFuns + 0x168))
                         ((int)_DAT_00012096,iVar2,*(code **)(_g_phyFuns + 0x168)), param_1 != 0))
     && (DAT_000121fe != iVar3)) {
    rom_phy_bbpll_cal_part_0();
    _DAT_0001209a = _DAT_00012096;
    DAT_000121fe = (char)iVar3;
    ram_txpwr_correct(1,&phy_param,&phy_param,iVar2);
    if (param_2 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)DAT_000121fe,(int)_DAT_00012096,iVar2);
    }
    _DAT_6000e040 = _DAT_6000e040 & 0xfffffff3 | 4;
    return;
  }
  return;
}

