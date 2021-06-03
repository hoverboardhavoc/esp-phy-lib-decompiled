/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_wifi_track_tx_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x000111d2) */
/* WARNING: Removing unreachable block (ram,0x000111da) */
/* WARNING: Removing unreachable block (ram,0x000111e2) */
/* WARNING: Removing unreachable block (ram,0x00011640) */
/* WARNING: Removing unreachable block (ram,0x00010000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_wifi_track_tx_power(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(_g_phyFuns + 0x100))
                    ((int)*(short *)(phy_param_rom + 0x92) - (int)*(short *)(phy_param_rom + 0x94),
                     *(code **)(_g_phyFuns + 0x100));
  iVar3 = 4;
  if (iVar2 < 8) {
    iVar3 = 2;
  }
  iVar2 = (**(code **)(_g_phyFuns + 0x100))
                    ((int)*(short *)(phy_param_rom + 0x92) - (int)*(short *)(phy_param_rom + 0x96),
                     *(code **)(_g_phyFuns + 0x100));
  if (((iVar3 <= iVar2) &&
      (iVar2 = (**(code **)(_g_phyFuns + 0x168))
                         ((int)*(short *)(phy_param_rom + 0x92),
                          (int)*(short *)(phy_param_rom + 0x94),*(code **)(_g_phyFuns + 0x168)),
      param_1 != 0)) && (*(char *)(phy_param_rom + 0x1fa) != iVar2)) {
    rom_phy_bbpll_cal_part_0();
    iVar3 = phy_param_rom;
    sVar1 = *(short *)(phy_param_rom + 0x92);
    *(char *)(phy_param_rom + 0x1fa) = (char)iVar2;
    *(short *)(iVar3 + 0x96) = sVar1;
    if ((*(short *)(iVar3 + 0xae) <= sVar1) && (sVar1 <= *(short *)(iVar3 + 0xb0))) {
      *(char *)(iVar3 + 0x1fb) = (char)iVar2;
      ram_wifi_set_tx_gain(*(undefined1 *)(iVar3 + 0x1f2),0);
    }
    if (param_2 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)*(char *)(phy_param_rom + 0x1fa),
                 (int)*(short *)(phy_param_rom + 0x92),(int)*(short *)(phy_param_rom + 0x94));
    }
    _DAT_6000e040 = _DAT_6000e040 & 0xfffffff3 | 4;
    return;
  }
  return;
}

