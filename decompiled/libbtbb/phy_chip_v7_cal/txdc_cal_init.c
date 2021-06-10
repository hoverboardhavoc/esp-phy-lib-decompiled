/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> txdc_cal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txdc_cal_init(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  
  pbus_debugmode();
  pbus_xpd_tx_on(param_2,param_3);
  if (param_4 != 0) {
    uVar2 = pbus_rd(1,1);
    pbus_force_test(1,1,uVar2 | 2);
  }
  uVar1 = 0;
  do {
    uVar3 = index_to_txbbgain(uVar1 & 0xff);
    pbus_force_test(1,2,uVar3);
    iVar4 = uVar1 * 8;
    uVar1 = uVar1 + 1;
    txdc_cal_v70(iVar4 + param_1);
  } while (uVar1 != 5);
  pbus_xpd_rx_on(0);
  pbus_workmode();
  return;
}

