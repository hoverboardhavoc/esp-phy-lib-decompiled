/*
 * Last changed at upstream commit c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * https://github.com/espressif/esp-phy-lib/commit/c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * Upstream date: 2024-06-05 14:35:04 +0800
 * Upstream subject: update C6 H2 libphy for coex test ble 154 chan bug
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_radio_tx_data_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_radio_tx_data_init(ushort param_1,int param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  
  if (param_2 == 2) {
    prbs9_gen_new(&_LANCHOR2);
    _LANCHOR2 = 0x30;
  }
  else if (param_2 == 0) {
    _LANCHOR2 = 0x70;
    puVar1 = &_LANCHOR2;
    for (uVar2 = 0; uVar2 < param_1; uVar2 = uVar2 + 1) {
      puVar1[2] = 0x55;
      puVar1 = puVar1 + 1;
    }
  }
  else if (param_2 == 1) {
    _LANCHOR2 = 0x60;
    puVar1 = &_LANCHOR2;
    for (uVar2 = 0; uVar2 < param_1; uVar2 = uVar2 + 1) {
      puVar1[2] = 0xf;
      puVar1 = puVar1 + 1;
    }
  }
  else if (param_2 == 4) {
    _LANCHOR2 = 0x40;
    puVar1 = &_LANCHOR2;
    for (uVar2 = 0; uVar2 < param_1; uVar2 = uVar2 + 1) {
      puVar1[2] = 0xff;
      puVar1 = puVar1 + 1;
    }
  }
  else {
    _LANCHOR2 = 0x11;
    uVar2 = 0;
    puVar1 = &_LANCHOR2;
    while (uVar2 < param_1) {
      uVar2 = uVar2 + 1;
      puVar1[2] = (char)uVar2;
      puVar1 = puVar1 + 1;
    }
  }
  DAT_00011139 = (char)param_1;
  _DAT_600a1830 = &_LANCHOR2;
  return;
}

