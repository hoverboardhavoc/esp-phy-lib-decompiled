/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> phy_i2c_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_i2c_check(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = 0;
  do {
    uVar5 = i2c_readReg(0x6a,1,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_bias %02d: 0x%x\n",uVar2,uVar5);
    uVar2 = uVar1;
  } while (uVar1 != 10);
  uVar2 = 0;
  do {
    uVar5 = i2c_readReg(0x66,1,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_bbpll %02d: 0x%x\n",uVar2,uVar5);
    uVar2 = uVar1;
  } while (uVar1 != 0xd);
  uVar2 = 0;
  do {
    uVar5 = i2c_readReg(100,1,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_rfrx %02d: 0x%x\n",uVar2,uVar5);
    uVar2 = uVar1;
  } while (uVar1 != 0xb);
  uVar2 = 0;
  do {
    uVar5 = i2c_readReg(0x6b,1,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_txrf %02d: 0x%x\n",uVar2,uVar5);
    uVar2 = uVar1;
  } while (uVar1 != 0xc);
  uVar2 = 0;
  do {
    uVar5 = i2c_readReg(0x67,1,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_bbtop %02d: 0x%x\n",uVar2,uVar5);
    uVar2 = uVar1;
  } while (uVar1 != 0x10);
  uVar2 = 0;
  do {
    uVar5 = i2c_readReg(0x65,1,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_ckgen %02d: 0x%x\n",uVar2,uVar5);
    uVar2 = uVar1;
  } while (uVar1 != 7);
  uVar2 = 0;
  do {
    uVar5 = i2c_readReg(0x68,1,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_xtal %02d: 0x%x\n",uVar2,uVar5);
    uVar2 = uVar1;
  } while (uVar1 != 3);
  uVar2 = 0;
  do {
    uVar5 = i2c_readReg(0x62,1,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_rfpll %02d: 0x%x\n",uVar2,uVar5);
    uVar2 = uVar1;
  } while (uVar1 != 0xd);
  uVar2 = 0;
  do {
    uVar5 = i2c_readReg(99,1,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_rfpll_sdm %02d: 0x%x\n",uVar2,uVar5);
    uVar2 = uVar1;
  } while (uVar1 != 6);
  uVar2 = 0;
  do {
    uVar5 = i2c_readReg(0x6d,1,uVar2 & 0xff);
    uVar1 = uVar2 + 1;
    ets_printf("i2c_apll %02d: 0x%x\n",uVar2,uVar5);
    uVar2 = uVar1;
  } while (uVar1 != 10);
  iVar4 = 0x60008000;
  do {
    uVar5 = i2c_to_apb_rd(iVar4);
    iVar3 = iVar4 + 4;
    ets_printf("rtc_cntl 0x%x: 0x%x\n",iVar4,uVar5);
    iVar4 = iVar3;
  } while (iVar3 != 0x600080d4);
  iVar4 = 0x60008800;
  do {
    uVar5 = i2c_to_apb_rd(iVar4);
    iVar3 = iVar4 + 4;
    ets_printf("saradc 0x%x: 0x%x\n",iVar4,uVar5);
    iVar4 = iVar3;
  } while (iVar3 != 0x60008900);
  iVar4 = 0x6000e000;
  do {
    uVar5 = i2c_to_apb_rd(iVar4);
    iVar3 = iVar4 + 4;
    ets_printf("i2c_mst 0x%x: 0x%x\n",iVar4,uVar5);
    iVar4 = iVar3;
  } while (iVar3 != 0x6000e16c);
  iVar4 = 0x60005000;
  do {
    uVar5 = i2c_to_apb_rd(iVar4);
    iVar3 = iVar4 + 4;
    ets_printf("fe2_reg 0x%x: 0x%x\n",iVar4,uVar5);
    iVar4 = iVar3;
  } while (iVar3 != 0x6000511c);
  iVar4 = 0x60006000;
  do {
    uVar5 = i2c_to_apb_rd(iVar4);
    iVar3 = iVar4 + 4;
    ets_printf("fe_reg 0x%x: 0x%x\n",iVar4,uVar5);
    iVar4 = iVar3;
  } while (iVar3 != 0x60006100);
  return;
}

