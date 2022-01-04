/*
 * Last changed at upstream commit 4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * https://github.com/espressif/esp-phy-lib/commit/4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * Upstream date: 2022-01-04 15:41:20 +0800
 * Upstream subject: fix the bug that phy libs still have ets_printf
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_wifi_track_tx_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x000119e8) */
/* WARNING: Removing unreachable block (ram,0x00011a3c) */
/* WARNING: Removing unreachable block (ram,0x00011a42) */
/* WARNING: Removing unreachable block (ram,0x00011a4c) */
/* WARNING: Removing unreachable block (ram,0x00011ba4) */
/* WARNING: Removing unreachable block (ram,0x00010000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_wifi_track_tx_power(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_00012210 == '\x01') {
    iVar1 = (int)_DAT_00012218;
  }
  else {
    iVar1 = (int)_DAT_0001221e;
  }
  iVar3 = 2;
  iVar2 = (**(code **)(_g_phyFuns + 0x100))(_DAT_0001209e - iVar1,*(code **)(_g_phyFuns + 0x100));
  if (7 < iVar2) {
    iVar3 = 4;
  }
  iVar2 = (**(code **)(_g_phyFuns + 0x100))
                    ((int)_DAT_0001209e - (int)_DAT_000120a2,*(code **)(_g_phyFuns + 0x100));
  if (((iVar3 <= iVar2) &&
      (iVar2 = (**(code **)(_g_phyFuns + 0x168))
                         ((int)_DAT_0001209e,iVar1,*(code **)(_g_phyFuns + 0x168)), param_1 != 0))
     && (DAT_00012206 != iVar2)) {
    rom_phy_bbpll_cal_part_2();
    _DAT_000120a2 = _DAT_0001209e;
    DAT_00012206 = (char)iVar2;
    ram_txpwr_correct(0,&phy_param,&phy_param,iVar1);
    if (param_2 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)DAT_00012206,(int)_DAT_0001209e,iVar1);
    }
    _DAT_6000e040 = _DAT_6000e040 & 0xfffffff3 | 4;
    return;
  }
  return;
}

