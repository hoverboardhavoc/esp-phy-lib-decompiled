/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> bt_zb_tx_tone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_zb_tx_tone(uint param_1,short param_2,char param_3,int param_4)

{
  short sVar1;
  char *pcVar2;
  
  if (param_4 == 0) {
    sVar1 = (param_2 + 0x4b1) * 2;
  }
  else {
    sVar1 = param_2 * 5 + 0x92e;
  }
  phy_set_freq(sVar1,0);
  target_power_backoff((int)param_3);
  force_txon_mode(param_1 & 0xff,0xf);
  if (param_4 == 0) {
    if (param_1 == 0) {
      pcVar2 = "BT TX TONE STOP!\n";
    }
    else {
      pcVar2 = "BT TX TONE START!\n";
    }
  }
  else if (param_1 == 0) {
    pcVar2 = "ZB TX TONE STOP!\n";
  }
  else {
    pcVar2 = "ZB TX TONE START!\n";
  }
  phy_printf(pcVar2);
  return;
}

