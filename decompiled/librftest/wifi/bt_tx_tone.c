/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> bt_tx_tone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_tx_tone(uint param_1,int param_2,char param_3)

{
  char *pcVar1;
  
  phy_set_freq((uint)((param_2 + 0x4b1) * 0x20000) >> 0x10,0);
  force_txon_mode(param_1 & 0xff,0,0);
  start_tx_tone_step(param_1 & 0xff,0,param_3 + 'P',0,0,0);
  if (param_1 == 0) {
    pcVar1 = "BT TX TONE STOP!\n";
  }
  else {
    pcVar1 = "BT TX TONE START!\n";
  }
  phy_printf(pcVar1);
  return;
}

