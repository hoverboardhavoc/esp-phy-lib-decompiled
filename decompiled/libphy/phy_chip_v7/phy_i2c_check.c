/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> phy_i2c_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_i2c_check(void)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x6a,0,cVar1,*(code **)(g_phyFuns + 0x1ac));
    phy_printf("i2c_bias %02d: 0x%x\n",uVar3);
    cVar1 = cVar2;
  } while (cVar2 != '\b');
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x66,0,cVar1,*(code **)(g_phyFuns + 0x1ac));
    phy_printf("i2c_bbpll %02d: 0x%x\n",uVar3);
    cVar1 = cVar2;
  } while (cVar2 != '\v');
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(100,1,cVar1,*(code **)(g_phyFuns + 0x1ac));
    phy_printf("i2c_rfrx %02d: 0x%x\n",uVar3);
    cVar1 = cVar2;
  } while (cVar2 != '\v');
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x6b,0,cVar1,*(code **)(g_phyFuns + 0x1ac));
    phy_printf("i2c_txrf %02d: 0x%x\n",uVar3);
    cVar1 = cVar2;
  } while (cVar2 != '\f');
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x67,0,cVar1,*(code **)(g_phyFuns + 0x1ac));
    phy_printf("i2c_bbtop %02d: 0x%x\n",uVar3);
    cVar1 = cVar2;
  } while (cVar2 != '9');
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x65,0,cVar1,*(code **)(g_phyFuns + 0x1ac));
    phy_printf("i2c_ckgen %02d: 0x%x\n",uVar3);
    cVar1 = cVar2;
  } while (cVar2 != '\t');
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x62,1,cVar1,*(code **)(g_phyFuns + 0x1ac));
    phy_printf("i2c_rfpll %02d: 0x%x\n",uVar3);
    cVar1 = cVar2;
  } while (cVar2 != '\r');
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(99,1,cVar1,*(code **)(g_phyFuns + 0x1ac));
    phy_printf("i2c_rfpll_sdm %02d: 0x%x\n",uVar3);
    cVar1 = cVar2;
  } while (cVar2 != '\x06');
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x6d,0,cVar1,*(code **)(g_phyFuns + 0x1ac));
    phy_printf("i2c_dig_reg %02d: 0x%x\n",uVar3);
    cVar1 = cVar2;
  } while (cVar2 != '\x0f');
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x61,0,cVar1,*(code **)(g_phyFuns + 0x1ac));
    phy_printf("i2c_ulp %02d: 0x%x\n",uVar3);
    cVar1 = cVar2;
  } while (cVar2 != '\t');
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    uVar3 = (**(code **)(g_phyFuns + 0x1ac))(0x69,0,cVar1,*(code **)(g_phyFuns + 0x1ac));
    phy_printf("i2c_sar %02d: 0x%x\n",uVar3);
    cVar1 = cVar2;
  } while (cVar2 != '\b');
  return;
}

