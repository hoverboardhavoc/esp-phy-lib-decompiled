/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
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
    uVar3 = i2c_readReg(0x6a,0,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_bias %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 8);
  uVar2 = 0;
  do {
    uVar3 = i2c_readReg(0x66,0,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_bbpll %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xb);
  uVar2 = 0;
  do {
    uVar3 = i2c_readReg(0x6b,1,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_txrf %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xc);
  uVar2 = 0;
  do {
    uVar3 = i2c_readReg(0x67,1,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_bbtop %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0x39);
  uVar2 = 0;
  do {
    uVar3 = i2c_readReg(0x62,1,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_rfpll %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xd);
  uVar2 = 0;
  do {
    uVar3 = i2c_readReg(99,1,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_rfpll_sdm %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 6);
  uVar2 = 0;
  do {
    uVar3 = i2c_readReg(0x6d,0,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_dig_reg %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 0xf);
  uVar2 = 0;
  do {
    uVar3 = i2c_readReg(0x61,0,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_ulp %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 9);
  uVar2 = 0;
  do {
    uVar3 = i2c_readReg(0x69,0,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_sar %02d: 0x%x\n",uVar2,uVar3);
    uVar2 = uVar1;
  } while (uVar1 != 8);
  return;
}

