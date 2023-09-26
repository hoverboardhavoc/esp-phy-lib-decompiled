/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> force_ble_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void force_ble_tx_gain(undefined2 param_1,undefined2 param_2,undefined1 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 local_60 [16];
  undefined2 local_50 [16];
  undefined2 local_30 [22];
  
  iVar2 = 0;
  puVar1 = local_50;
  puVar3 = local_30;
  do {
    *puVar3 = param_1;
    *puVar1 = param_2;
    local_60[iVar2] = param_3;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0x10);
  if (phy_param != '\0') {
    set_tx_gain_mem(1,0x10,local_30,local_50,local_60,&phy_param,&phy_param);
  }
  return;
}

