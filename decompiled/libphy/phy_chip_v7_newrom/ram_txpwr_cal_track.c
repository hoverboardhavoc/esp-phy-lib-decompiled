/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_txpwr_cal_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00011b92) */
/* WARNING: Removing unreachable block (ram,0x00010000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_txpwr_cal_track(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    if (DAT_00012210 == '\x01') {
      iVar1 = (int)_DAT_00012218;
      goto _L240;
    }
  }
  else if ((param_1 == 1) && (DAT_00012210 == '\x10')) {
    iVar1 = (int)_DAT_0001221a;
    goto _L240;
  }
  iVar1 = (int)_DAT_0001221e;
_L240:
  iVar3 = 2;
  iVar2 = (**(code **)(_g_phyFuns + 0x100))(_DAT_0001209e - iVar1,*(code **)(_g_phyFuns + 0x100));
  if (7 < iVar2) {
    iVar3 = 4;
  }
  iVar2 = (**(code **)(_g_phyFuns + 0x100))
                    ((int)_DAT_0001209e - (int)_DAT_000120a2,*(code **)(_g_phyFuns + 0x100));
  if (((iVar3 <= iVar2) &&
      (iVar2 = (**(code **)(_g_phyFuns + 0x168))
                         ((int)_DAT_0001209e,iVar1,*(code **)(_g_phyFuns + 0x168)), param_2 != 0))
     && (DAT_00012206 != iVar2)) {
    rom_phy_bbpll_cal_part_2();
    _DAT_000120a2 = _DAT_0001209e;
    DAT_00012206 = (char)iVar2;
    ram_txpwr_correct(param_1 != 0,&phy_param,&phy_param,iVar1);
    if (param_3 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)DAT_00012206,(int)_DAT_0001209e,iVar1);
    }
    _DAT_6000e040 = _DAT_6000e040 & 0xfffffff3 | 4;
    return;
  }
  return;
}

