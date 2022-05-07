/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
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
    uVar3 = (**(code **)(_g_phyFuns + 0x48))(0x6a,0,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x48));
    uVar1 = uVar2 + 1;
    ets_printf("i2c_bias %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 8);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x48))(0x66,0,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x48));
    uVar1 = uVar2 + 1;
    ets_printf("i2c_bbpll %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xb);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x48))(100,1,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x48));
    uVar1 = uVar2 + 1;
    ets_printf("i2c_rfrx %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xb);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x48))(0x6b,0,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x48));
    uVar1 = uVar2 + 1;
    ets_printf("i2c_txrf %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xc);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x48))(0x67,1,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x48));
    uVar1 = uVar2 + 1;
    ets_printf("i2c_bbtop %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0x39);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x48))(0x65,0,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x48));
    uVar1 = uVar2 + 1;
    ets_printf("i2c_ckgen %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 9);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x48))(0x62,1,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x48));
    uVar1 = uVar2 + 1;
    ets_printf("i2c_rfpll %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xd);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x48))(99,1,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x48));
    uVar1 = uVar2 + 1;
    ets_printf("i2c_rfpll_sdm %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 6);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x48))(0x6d,0,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x48));
    uVar1 = uVar2 + 1;
    ets_printf("i2c_dig_reg %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xf);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x48))(0x61,0,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x48));
    uVar1 = uVar2 + 1;
    ets_printf("i2c_ulp %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 9);
  uVar2 = 0;
  do {
    uVar3 = (**(code **)(_g_phyFuns + 0x48))(0x69,0,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x48));
    uVar1 = uVar2 + 1;
    ets_printf("i2c_sar %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 8);
  return;
}

