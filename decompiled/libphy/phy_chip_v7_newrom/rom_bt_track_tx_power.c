/*
 * Last changed at upstream commit 449b432d94b968a75ffabffae91fe15796de7644
 * https://github.com/espressif/esp-phy-lib/commit/449b432d94b968a75ffabffae91fe15796de7644
 * Upstream date: 2022-02-24 11:32:38 +0800
 * Upstream subject: Update phy lib: S3_20220128_fbd66bc :  for high/low temperature performance C3_20220119_908_049c04c : for high/low temperature performance
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_bt_track_tx_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00011934) */
/* WARNING: Removing unreachable block (ram,0x00011846) */
/* WARNING: Removing unreachable block (ram,0x00011850) */
/* WARNING: Removing unreachable block (ram,0x00011aa0) */
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
    rom_phy_bbpll_cal_part_3();
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

