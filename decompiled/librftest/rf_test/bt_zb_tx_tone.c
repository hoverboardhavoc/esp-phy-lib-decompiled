/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> rf_test.o -> bt_zb_tx_tone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  force_txon_mode(param_1 & 0xff,0,0);
  (**(code **)(_g_phyFuns + 0x98))
            (param_1 & 0xff,0,param_3 + '(',0,0,0,*(code **)(_g_phyFuns + 0x98));
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

