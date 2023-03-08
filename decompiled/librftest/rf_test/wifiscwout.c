/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> rf_test.o -> wifiscwout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wifiscwout(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2] & 3;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar1 = 0x19;
    }
    else if (uVar1 == 2) {
      uVar1 = 0x32;
    }
    else {
      uVar1 = 0x4b;
    }
  }
  if (*param_1 != 0) {
    phy_printf(" wifi single carrier tx out, single carrier is in %d channel, power is about (20-%d.%d)dBm\n"
               ,param_1[1],param_1[2] >> 2);
    rftest_set_chan((char)param_1[1],0);
    txcal_debuge_mode();
    uVar2 = ((param_1[2] - _DAT_60006004) + 0x28) * 0x1000000 >> 0x18;
    uVar1 = uVar2 & 0xff;
    if ((int)uVar2 < 0) {
      uVar1 = 0;
    }
    start_tx_tone_step(1,0,uVar1,0,0,0);
    return;
  }
  phy_printf(" wifi single carrier tx stop\n",uVar1);
  start_tx_tone_step(0,0,0,0,0,0);
  txcal_work_mode();
  return;
}

