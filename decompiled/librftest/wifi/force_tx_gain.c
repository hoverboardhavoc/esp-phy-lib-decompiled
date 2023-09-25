/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: librftest -> wifi.o -> force_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void force_tx_gain(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined2 local_3c [20];
  
  if (param_4 == 0) {
    phy_tx_pwr_track_en = 0;
    DAT_000180e9 = 1;
    iVar2 = 0;
    puVar1 = local_3c;
    do {
      local_5c[iVar2] = (char)param_1;
      *puVar1 = (short)param_2;
      local_4c[iVar2] = (char)param_3;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 0xe);
    rom_set_tx_gain_mem(0,0xe,local_5c,local_3c,&phy_param,&phy_param);
    rom1_wifi_tx_dig_gain(local_4c);
  }
  else {
    DAT_000180e9 = 0;
    phy_tx_pwr_track_en = 1;
    ram1_wifi_set_tx_gain(DAT_00018242,1);
  }
  force_ble_tx_gain(param_1,param_2,param_3,param_4);
  return;
}

