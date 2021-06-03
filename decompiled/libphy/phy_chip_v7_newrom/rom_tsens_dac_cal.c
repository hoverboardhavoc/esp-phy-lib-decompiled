/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_tsens_dac_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rom_tsens_dac_cal(int param_1,byte *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (uint)*param_2;
  if (uVar4 < 5) {
    iVar5 = (int)*(short *)(&_LANCHOR1 + uVar4 * 2);
    iVar3 = (int)*(short *)(&_LANCHOR2 + uVar4 * 2);
  }
  else {
    iVar3 = 0x37;
    iVar5 = 10;
  }
  if (param_1 < iVar5) {
    if (uVar4 == 0) {
      return 0;
    }
    cVar1 = -1;
  }
  else {
    if ((param_1 <= iVar3) || (3 < uVar4)) {
      return 0;
    }
    cVar1 = '\x01';
  }
  *param_2 = *param_2 + cVar1;
  uVar2 = (**(code **)(_g_phyFuns + 0x20c))(*param_2,*(code **)(_g_phyFuns + 0x20c));
  (**(code **)(_g_phyFuns + 0x1bc))(0x69,0,6,3,0,uVar2,*(code **)(_g_phyFuns + 0x1bc));
  return 1;
}

