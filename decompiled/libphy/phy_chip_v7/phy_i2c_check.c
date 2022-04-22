/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> phy_i2c_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_i2c_check(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x6a,0,uVar2 & 0xff,*(code **)(g_phyFuns + 0x1ac));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_bias %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 8);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x66,0,uVar2 & 0xff,*(code **)(g_phyFuns + 0x1ac));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_bbpll %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xb);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(100,1,uVar2 & 0xff,*(code **)(g_phyFuns + 0x1ac));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_rfrx %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xb);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x6b,0,uVar2 & 0xff,*(code **)(g_phyFuns + 0x1ac));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_txrf %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xc);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x67,1,uVar2 & 0xff,*(code **)(g_phyFuns + 0x1ac));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_bbtop %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0x39);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x65,0,uVar2 & 0xff,*(code **)(g_phyFuns + 0x1ac));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_ckgen %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 9);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x62,1,uVar2 & 0xff,*(code **)(g_phyFuns + 0x1ac));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_rfpll %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xd);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(99,1,uVar2 & 0xff,*(code **)(g_phyFuns + 0x1ac));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_rfpll_sdm %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 6);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x6d,0,uVar2 & 0xff,*(code **)(g_phyFuns + 0x1ac));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_dig_reg %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xf);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x61,0,uVar2 & 0xff,*(code **)(g_phyFuns + 0x1ac));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_ulp %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 9);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x69,0,uVar2 & 0xff,*(code **)(g_phyFuns + 0x1ac));
    uVar1 = uVar2 + 1;
    phy_printf("i2c_sar %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 8);
  return;
}

