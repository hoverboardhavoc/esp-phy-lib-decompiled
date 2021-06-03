/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_txpwr_cal_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00011640) */
/* WARNING: Removing unreachable block (ram,0x00010000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_txpwr_cal_track(int param_1,int param_2,int param_3)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (**(code **)(_g_phyFuns + 0x100))
                    ((int)*(short *)(phy_param_rom + 0x92) - (int)*(short *)(phy_param_rom + 0x94),
                     *(code **)(_g_phyFuns + 0x100));
  iVar4 = 4;
  if (iVar3 < 8) {
    iVar4 = 2;
  }
  iVar3 = (**(code **)(_g_phyFuns + 0x100))
                    ((int)*(short *)(phy_param_rom + 0x92) - (int)*(short *)(phy_param_rom + 0x96),
                     *(code **)(_g_phyFuns + 0x100));
  if (((iVar4 <= iVar3) &&
      (iVar3 = (**(code **)(_g_phyFuns + 0x168))
                         ((int)*(short *)(phy_param_rom + 0x92),
                          (int)*(short *)(phy_param_rom + 0x94),*(code **)(_g_phyFuns + 0x168)),
      param_2 != 0)) && (*(char *)(phy_param_rom + 0x1fa) != iVar3)) {
    rom_phy_bbpll_cal_part_0();
    iVar4 = phy_param_rom;
    sVar1 = *(short *)(phy_param_rom + 0x92);
    uVar2 = (undefined1)iVar3;
    *(undefined1 *)(phy_param_rom + 0x1fa) = uVar2;
    *(short *)(iVar4 + 0x96) = sVar1;
    if (param_1 == 0) {
      if ((*(short *)(iVar4 + 0xae) <= sVar1) && (sVar1 <= *(short *)(iVar4 + 0xb0))) {
        *(undefined1 *)(iVar4 + 0x1fb) = uVar2;
        ram_wifi_set_tx_gain(*(undefined1 *)(iVar4 + 0x1f2),0);
      }
    }
    else if ((*(short *)(iVar4 + 0xb2) <= sVar1) && (sVar1 <= *(short *)(iVar4 + 0xb4))) {
      *(undefined1 *)(iVar4 + 0x1fc) = uVar2;
      rom_bt_set_tx_gain(0);
    }
    if (param_3 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)*(char *)(phy_param_rom + 0x1fa),
                 (int)*(short *)(phy_param_rom + 0x92),(int)*(short *)(phy_param_rom + 0x94));
    }
    _DAT_6000e040 = _DAT_6000e040 & 0xfffffff3 | 4;
    return;
  }
  return;
}

