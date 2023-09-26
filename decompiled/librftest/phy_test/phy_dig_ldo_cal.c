/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> phy_dig_ldo_cal
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
  uint uVar5;
  undefined2 *puVar6;
  char cVar7;
  undefined2 *puVar8;
  undefined2 local_44 [10];
  
  puVar6 = local_44;
  uVar1 = ((uint)_phy_param * 0x6f) / 0x62;
  uVar4 = 0;
  puVar8 = puVar6;
  do {
    uVar5 = uVar4 + 0x14 & 0xff;
    (**(code **)(_g_phyFuns + 0x60))(0x6d,0,6,4,0,uVar5,*(code **)(_g_phyFuns + 0x60));
    ets_delay_us(100);
    cVar7 = '\x04';
    uVar2 = 0;
    do {
      iVar3 = get_sar2_vol_new(3);
      cVar7 = cVar7 + -1;
      uVar2 = uVar2 + iVar3 & 0xffff;
    } while (cVar7 != '\0');
    *puVar8 = (short)(uVar2 >> 2);
    if ((uVar1 & 0xffff) < uVar2 >> 2) break;
    uVar4 = uVar4 + 1 & 0xff;
    puVar8 = puVar8 + 1;
  } while (uVar4 != 10);
  if (param_1 != 0) {
    uVar2 = 0;
    do {
      phy_printf("ldo_cal: %d,%d,%d\n",uVar2 + 0x14,*puVar6,uVar1 & 0xffff);
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 1;
    } while ((uVar2 & 0xff) <= uVar4);
  }
  return uVar5;
}

