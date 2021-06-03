/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> txpwr_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txpwr_offset(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (-1 < (int)(_DAT_00013128 << 9)) {
    uVar1 = phy_get_vdd33();
    uVar4 = 0;
    if (uVar1 < 0xce4) {
      iVar2 = (**(code **)(_g_phyFuns + 0x118))(3,*(code **)(_g_phyFuns + 0x118));
      iVar3 = (**(code **)(_g_phyFuns + 0x118))(0xce4,3,*(code **)(_g_phyFuns + 0x118));
      uVar4 = ((iVar2 - iVar3) * 0x2000000 >> 0x18) + 2 >> 2;
    }
    _DAT_00013208 = uVar1 << 0x10 | (uVar4 & 0xff) << 8;
    _DAT_00013128 = _DAT_00013128 | 0x400000;
  }
  return;
}

