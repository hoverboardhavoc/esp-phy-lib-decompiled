/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> force_ble_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void force_ble_tx_gain(undefined1 param_1,undefined2 param_2,undefined1 param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined2 local_30 [22];
  
  if (param_4 == 0) {
    DAT_000180e5 = 1;
    DAT_000180e9 = 0;
    iVar2 = 0;
    puVar1 = local_30;
    do {
      local_50[iVar2] = param_1;
      *puVar1 = param_2;
      local_40[iVar2] = param_3;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 0x10);
    rom_set_tx_gain_mem(1,0x10,local_50,local_30,&phy_param,&phy_param);
    rom_bt_tx_dig_gain(local_40);
  }
  else {
    DAT_000180e5 = 0;
    DAT_000180e9 = 1;
    ram_bt_set_tx_gain(0);
  }
  return;
}

