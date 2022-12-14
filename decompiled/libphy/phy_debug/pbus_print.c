/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_debug.o -> pbus_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_print(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = (**(code **)(_g_phyFuns + 0x78))(0,1,*(code **)(_g_phyFuns + 0x78));
  uVar2 = (**(code **)(_g_phyFuns + 0x78))(0,2,*(code **)(_g_phyFuns + 0x78));
  phy_printf("rfrx:0x%x,0x%x;",uVar1,uVar2);
  uVar1 = (**(code **)(_g_phyFuns + 0x78))(4,1,*(code **)(_g_phyFuns + 0x78));
  uVar2 = (**(code **)(_g_phyFuns + 0x78))(5,1,*(code **)(_g_phyFuns + 0x78));
  phy_printf("rftx:0x%x,0x%x;",uVar1,uVar2);
  uVar1 = (**(code **)(_g_phyFuns + 0x78))(1,1,*(code **)(_g_phyFuns + 0x78));
  uVar2 = (**(code **)(_g_phyFuns + 0x78))(1,2,*(code **)(_g_phyFuns + 0x78));
  phy_printf("bb:0x%x,0x%x;",uVar1,uVar2);
  uVar1 = (**(code **)(_g_phyFuns + 0x78))(2,1,*(code **)(_g_phyFuns + 0x78));
  uVar2 = (**(code **)(_g_phyFuns + 0x78))(3,1,*(code **)(_g_phyFuns + 0x78));
  uVar3 = (**(code **)(_g_phyFuns + 0x78))(2,2,*(code **)(_g_phyFuns + 0x78));
  uVar4 = (**(code **)(_g_phyFuns + 0x78))(3,2,*(code **)(_g_phyFuns + 0x78));
  phy_printf("dco:%d,%d,%d,%d\n",uVar1,uVar2,uVar3,uVar4);
  return;
}

