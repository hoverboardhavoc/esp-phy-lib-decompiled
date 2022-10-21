/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_feature.o -> phy_dig_ldo_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint phy_dig_ldo_cal(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 local_44 [10];
  
  uVar1 = ((uint)_phy_param * 0x6f) / 0x62;
  (**(code **)(_g_phyFuns + 0x1bc))(0x69,0,7,3,3,1,*(code **)(_g_phyFuns + 0x1bc));
  puVar7 = local_44;
  (**(code **)(_g_phyFuns + 0x1bc))(0x69,0,7,1,0,2,*(code **)(_g_phyFuns + 0x1bc));
  uVar4 = 0;
  puVar8 = puVar7;
  do {
    uVar6 = uVar4 + 0x14 & 0xff;
    (**(code **)(_g_phyFuns + 0x1bc))(0x6d,0,6,4,0,uVar6,*(code **)(_g_phyFuns + 0x1bc));
    ets_delay_us(100);
    cVar5 = '\x04';
    uVar3 = 0;
    do {
      cVar5 = cVar5 + -1;
      iVar2 = (**(code **)(_g_phyFuns + 0x150))(3,*(code **)(_g_phyFuns + 0x150));
      uVar3 = uVar3 + iVar2 & 0xffff;
    } while (cVar5 != '\0');
    *puVar8 = (short)(uVar3 >> 2);
    if ((uVar1 & 0xffff) < uVar3 >> 2) break;
    uVar4 = uVar4 + 1 & 0xff;
    puVar8 = puVar8 + 1;
  } while (uVar4 != 10);
  (**(code **)(_g_phyFuns + 0x1bc))(0x69,0,7,3,3,0,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x69,0,7,1,0,0,*(code **)(_g_phyFuns + 0x1bc));
  if (param_1 != 0) {
    uVar3 = 0;
    do {
      phy_printf("ldo_cal: %d,%d,%d\n",uVar3 + 0x14,*puVar7,uVar1 & 0xffff);
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while ((uVar3 & 0xff) <= uVar4);
  }
  return uVar6;
}

