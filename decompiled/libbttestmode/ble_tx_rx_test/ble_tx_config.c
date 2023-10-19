/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_config
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx_config(undefined1 param_1,ushort param_2,int param_3)

{
  undefined1 *puVar1;
  ushort uVar2;
  
  ble_select_phy_speed(param_1);
  if (param_3 == 2) {
    prbs9_gen_new(&_LANCHOR2);
    _LANCHOR2 = 0x30;
  }
  else if (param_3 == 0) {
    _LANCHOR2 = 0x70;
    puVar1 = &_LANCHOR2;
    for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
      puVar1[2] = 0x55;
      puVar1 = puVar1 + 1;
    }
  }
  else if (param_3 == 1) {
    _LANCHOR2 = 0x60;
    puVar1 = &_LANCHOR2;
    for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
      puVar1[2] = 0xf;
      puVar1 = puVar1 + 1;
    }
  }
  else if (param_3 == 4) {
    _LANCHOR2 = 0x40;
    puVar1 = &_LANCHOR2;
    for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
      puVar1[2] = 0xff;
      puVar1 = puVar1 + 1;
    }
  }
  else {
    _LANCHOR2 = 0x11;
    uVar2 = 0;
    puVar1 = &_LANCHOR2;
    while (uVar2 < param_2) {
      uVar2 = uVar2 + 1;
      puVar1[2] = (char)uVar2;
      puVar1 = puVar1 + 1;
    }
  }
  DAT_0001117d = (char)param_2;
  _DAT_600a1830 = &_LANCHOR2;
  return;
}

