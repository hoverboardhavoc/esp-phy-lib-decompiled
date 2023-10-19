/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> sw_chan_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void sw_chan_test(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = param_1;
  for (iVar3 = 0; iVar3 < param_3; iVar3 = iVar3 + 1) {
    uVar4 = phy_time_now();
    rftest_set_chan(uVar1 & 0xffff,0);
    uVar5 = phy_time_now();
    beacon_print(param_4);
    phy_printf("loop= %d, chan= %d, time: %d, %d\n",iVar3,uVar1,uVar4,uVar5);
    uVar2 = param_1;
    if (uVar1 != param_2) {
      uVar2 = uVar1 + 1;
    }
    uVar1 = uVar2;
  }
  return;
}

