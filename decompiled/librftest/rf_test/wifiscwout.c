/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> rf_test.o -> wifiscwout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wifiscwout(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = param_1[2] & 3;
  uVar3 = 0x19;
  if (uVar4 != 1) {
    uVar3 = 0x32;
    if (uVar4 != 2) {
      uVar3 = 0x4b;
      if (uVar4 != 3) {
        uVar3 = 0;
      }
    }
  }
  if (*param_1 != 0) {
    phy_printf(" wifi single carrier tx out, single carrier is in %d channel, power is about (20-%d.%d)dBm\n"
               ,param_1[1],param_1[2] >> 2);
    rftest_set_chan((short)param_1[1],0);
    txcal_debuge_mode();
    iVar1 = set_chan_cal_interp(&phy_param,(char)param_1[1]);
    uVar4 = (iVar1 + param_1[2] + -0xc) * 0x1000000 >> 0x18;
    uVar2 = uVar4 & 0xff;
    if ((int)uVar4 < 0) {
      uVar2 = 0;
    }
    start_tx_tone_step(1,0,uVar2,0,0,0);
    return;
  }
  phy_printf(" wifi single carrier tx stop\n",uVar3);
  start_tx_tone_step(0,0,0,0,0,0);
  txcal_work_mode();
  return;
}

