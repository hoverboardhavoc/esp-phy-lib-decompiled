/*
 * Last changed at upstream commit ae6f29bfebbfdacc1bba905afff3399fe733245f
 * https://github.com/espressif/esp-phy-lib/commit/ae6f29bfebbfdacc1bba905afff3399fe733245f
 * Upstream date: 2026-05-21 14:11:41 +0800
 * Upstream subject: support wifi api and regdma
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
    _LANCHOR2 = 0;
  }
  else if (param_2 == 0) {
    _LANCHOR2 = 2;
    puVar1 = &_LANCHOR2;
    for (uVar2 = 0; uVar2 < param_1; uVar2 = uVar2 + 1) {
      puVar1[2] = 0x55;
      puVar1 = puVar1 + 1;
    }
  }
  else {
    _LANCHOR2 = (undefined1)param_2;
    if (param_2 == 1) {
      puVar1 = &_LANCHOR2;
      for (uVar2 = 0; uVar2 < param_1; uVar2 = uVar2 + 1) {
        puVar1[2] = 0xf;
        puVar1 = puVar1 + 1;
      }
    }
    else if (param_2 == 4) {
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
  }
  DAT_00011145 = (char)param_1;
  _DAT_20101830 = 0x4451;
  return;
}

