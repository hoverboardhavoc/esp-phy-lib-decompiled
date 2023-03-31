/*
 * Last changed at upstream commit 9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * https://github.com/espressif/esp-phy-lib/commit/9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * Upstream date: 2023-03-31 17:07:27 +0800
 * Upstream subject: update_for_rftest_20230331
 * Source: librftest -> rf_test.o -> wifiscwout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wifiscwout(int *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1[2] & 3;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      uVar2 = 0x19;
    }
    else if (uVar2 == 2) {
      uVar2 = 0x32;
    }
    else {
      uVar2 = 0x4b;
    }
  }
  if (*param_1 != 0) {
    if (short_log_en == '\0') {
      pcVar1 = 
      " wifi single carrier tx out, single carrier is in %d channel, power is about (20-%d.%d)dBm\n"
      ;
    }
    else {
      pcVar1 = "wifi single carrier tx start: chan=%d, pwr=20-%d.%d\n";
    }
    phy_printf(pcVar1,param_1[1],param_1[2] >> 2);
    rftest_set_chan((char)param_1[1],0);
    txcal_debuge_mode();
    uVar3 = ((param_1[2] - _DAT_60006004) + 0x28) * 0x1000000 >> 0x18;
    uVar2 = uVar3 & 0xff;
    if ((int)uVar3 < 0) {
      uVar2 = 0;
    }
    start_tx_tone_step(1,0,uVar2,0,0,0);
    return;
  }
  phy_printf(" wifi single carrier tx stop\n",uVar2);
  start_tx_tone_step(0,0,0,0,0,0);
  txcal_work_mode();
  return;
}

