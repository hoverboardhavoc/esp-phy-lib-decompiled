/*
 * Last changed at upstream commit 98617ae683c7456706c7de6e27b7f0355c77dc9b
 * https://github.com/espressif/esp-phy-lib/commit/98617ae683c7456706c7de6e27b7f0355c77dc9b
 * Upstream date: 2023-12-29 17:32:23 +0800
 * Upstream subject: fix h2 crash at pos rssi bug
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

