/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_bt_track_tx_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00011a46) */
/* WARNING: Removing unreachable block (ram,0x00011958) */
/* WARNING: Removing unreachable block (ram,0x00011962) */
/* WARNING: Removing unreachable block (ram,0x00011b92) */
/* WARNING: Removing unreachable block (ram,0x00010000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_bt_track_tx_power(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  sVar1 = _DAT_0001221a;
  if (DAT_00012210 != '\x10') {
    sVar1 = _DAT_0001221e;
  }
  iVar2 = (int)sVar1;
  iVar4 = 2;
  iVar3 = (**(code **)(_g_phyFuns + 0x100))(_DAT_0001209e - iVar2,*(code **)(_g_phyFuns + 0x100));
  if (7 < iVar3) {
    iVar4 = 4;
  }
  iVar3 = (**(code **)(_g_phyFuns + 0x100))
                    ((int)_DAT_0001209e - (int)_DAT_000120a2,*(code **)(_g_phyFuns + 0x100));
  if (((iVar4 <= iVar3) &&
      (iVar3 = (**(code **)(_g_phyFuns + 0x168))
                         ((int)_DAT_0001209e,iVar2,*(code **)(_g_phyFuns + 0x168)), param_1 != 0))
     && (DAT_00012206 != iVar3)) {
    rom_phy_bbpll_cal_part_2();
    _DAT_000120a2 = _DAT_0001209e;
    DAT_00012206 = (char)iVar3;
    ram_txpwr_correct(1,&phy_param,&phy_param,iVar2);
    if (param_2 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)DAT_00012206,(int)_DAT_0001209e,iVar2);
    }
    _DAT_6000e040 = _DAT_6000e040 & 0xfffffff3 | 4;
    return;
  }
  return;
}

