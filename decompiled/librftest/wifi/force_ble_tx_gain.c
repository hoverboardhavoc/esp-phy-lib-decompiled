/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
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
    DAT_000180e9 = 1;
    DAT_000180ed = 0;
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
    DAT_000180e9 = 0;
    DAT_000180ed = 1;
    rom1_bt_set_tx_gain(0);
  }
  return;
}

