/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> force_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void force_tx_gain(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 local_b0 [32];
  undefined2 local_90 [32];
  undefined2 local_50 [32];
  
  iVar3 = 0;
  puVar1 = local_90;
  puVar2 = local_50;
  do {
    *puVar1 = (short)param_2;
    *puVar2 = (short)param_1;
    local_b0[iVar3] = (char)param_3;
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0x20);
  if (phy_param != '\0') {
    set_tx_gain_mem(0,0x20,local_50,local_90,local_b0,&phy_param,&phy_param);
  }
  force_ble_tx_gain(param_1,param_2,param_3);
  return;
}

