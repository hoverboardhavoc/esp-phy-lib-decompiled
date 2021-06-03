/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> phy_dig_ldo_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char phy_dig_ldo_cal(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)_phy_param;
  (**(code **)(g_phyFuns + 0x1bc))(0x69,0,7,3,3,1,*(code **)(g_phyFuns + 0x1bc));
  (**(code **)(g_phyFuns + 0x1bc))(0x69,0,7,1,0,2,*(code **)(g_phyFuns + 0x1bc));
  cVar1 = '\x17';
  do {
    (**(code **)(g_phyFuns + 0x1bc))(0x6d,0,6,4,0,cVar1,*(code **)(g_phyFuns + 0x1bc));
    uVar2 = (**(code **)(g_phyFuns + 0x150))(3,*(code **)(g_phyFuns + 0x150));
    if (((uVar3 * 0x6f) / 0x62 & 0xffff) < uVar2) goto _L520;
    cVar1 = cVar1 + '\x01';
  } while (cVar1 != '\x1d');
  cVar1 = '\x1c';
_L520:
  (**(code **)(g_phyFuns + 0x1bc))(0x69,0,7,3,3,0,*(code **)(g_phyFuns + 0x1bc));
  (**(code **)(g_phyFuns + 0x1bc))(0x69,0,7,1,0,0,*(code **)(g_phyFuns + 0x1bc));
  return cVar1;
}

