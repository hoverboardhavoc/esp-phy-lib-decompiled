/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_debug.o -> phy_i2c_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_i2c_check(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x6a,1,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x50));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_bias %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 4);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x66,0,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x50));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_bbpll %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xb);
  uVar2 = 1;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x50));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_txrf %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0x10);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x67,1,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x50));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_bbtop %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0x39);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x62,1,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x50));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_rfpll %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0x13);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x50))(99,1,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x50));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_rfpll_sdm %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 7);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x6d,0,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x50));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_dig_reg %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xf);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x61,0,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x50));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_ulp %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xb);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x69,0,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x50));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_perif %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 9);
  return;
}

