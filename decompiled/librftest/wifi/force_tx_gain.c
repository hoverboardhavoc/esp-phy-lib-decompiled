/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> force_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void force_tx_gain(undefined1 param_1,undefined1 param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  if (param_4 == 0) {
    DAT_0001508e = 1;
    DAT_00015091 = 0;
    iVar1 = 0;
    do {
      local_40[iVar1] = param_1;
      local_30[iVar1] = param_2;
      local_20[iVar1] = param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x10);
    set_tx_gain_mem(1,0x10,local_40,local_30,local_20);
  }
  else {
    DAT_0001508e = 0;
    DAT_00015091 = 1;
    bt_set_tx_gain(0);
  }
  return;
}

