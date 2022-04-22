/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> phy_dig_ldo_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint phy_dig_ldo_cal(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 local_44 [10];
  
  uVar1 = ((uint)_phy_param * 0x6f) / 0x62;
  (**(code **)(g_phyFuns + 0x1bc))(0x69,0,7,3,3,1,*(code **)(g_phyFuns + 0x1bc));
  puVar7 = local_44;
  (**(code **)(g_phyFuns + 0x1bc))(0x69,0,7,1,0,2,*(code **)(g_phyFuns + 0x1bc));
  uVar4 = 0;
  puVar8 = puVar7;
  do {
    uVar6 = uVar4 + 0x14 & 0xff;
    (**(code **)(g_phyFuns + 0x1bc))(0x6d,0,6,4,0,uVar6,*(code **)(g_phyFuns + 0x1bc));
    ets_delay_us(100);
    cVar5 = '\x04';
    uVar2 = 0;
    do {
      cVar5 = cVar5 + -1;
      iVar3 = (**(code **)(g_phyFuns + 0x150))(3,*(code **)(g_phyFuns + 0x150));
      uVar2 = uVar2 + iVar3 & 0xffff;
    } while (cVar5 != '\0');
    *puVar8 = (short)(uVar2 >> 2);
    if ((uVar1 & 0xffff) < uVar2 >> 2) break;
    uVar4 = uVar4 + 1 & 0xff;
    puVar8 = puVar8 + 1;
  } while (uVar4 != 10);
  (**(code **)(g_phyFuns + 0x1bc))(0x69,0,7,3,3,0,*(code **)(g_phyFuns + 0x1bc));
  (**(code **)(g_phyFuns + 0x1bc))(0x69,0,7,1,0,0,*(code **)(g_phyFuns + 0x1bc));
  if (param_1 != 0) {
    uVar2 = 0;
    do {
      phy_printf("ldo_cal: %d,%d,%d\n",uVar2 + 0x14,*puVar7,uVar1 & 0xffff);
      uVar2 = uVar2 + 1;
      puVar7 = puVar7 + 1;
    } while ((uVar2 & 0xff) <= uVar4);
  }
  return uVar6;
}

