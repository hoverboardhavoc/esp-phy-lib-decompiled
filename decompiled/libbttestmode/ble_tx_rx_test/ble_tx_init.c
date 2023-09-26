/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx_init(uint param_1,char *param_2,byte param_3)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  
  ble_select_phy_speed();
  iVar1 = 0x11000;
  uVar3 = (ushort)param_3;
  if (param_2 != (char *)0x2) goto _L11;
  prbs9_gen_new(&ble_radio_tx_buffer);
  ble_radio_tx_buffer = 0x30;
  while( true ) {
    DAT_000110e1 = param_3;
    _DAT_600a1830 = &ble_radio_tx_buffer;
    _DAT_600a150c = param_1 & 0xff;
    if (0xf < param_1) {
      _DAT_600a150c = 0xf;
    }
    if (_DAT_600a1550 == 0) break;
    param_2 = "RADIO->STATE == RADIO_STATE_STATE_Disabled";
    iVar1 = __assert_func("ble_tx_rx_test.c",0xb4,"ble_tx_init");
_L11:
    if (param_2 == (char *)0x0) {
      ble_radio_tx_buffer = 0x70;
      iVar1 = iVar1 + 0xe0;
      for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
        *(undefined1 *)(iVar1 + 2) = 0x55;
        iVar1 = iVar1 + 1;
      }
    }
    else if (param_2 == (char *)0x1) {
      ble_radio_tx_buffer = 0x60;
      iVar1 = iVar1 + 0xe0;
      for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
        *(undefined1 *)(iVar1 + 2) = 0xf;
        iVar1 = iVar1 + 1;
      }
    }
    else if (param_2 == (char *)0x4) {
      ble_radio_tx_buffer = 0x40;
      iVar1 = iVar1 + 0xe0;
      for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
        *(undefined1 *)(iVar1 + 2) = 0xff;
        iVar1 = iVar1 + 1;
      }
    }
    else {
      ble_radio_tx_buffer = 0x11;
      uVar2 = 0;
      iVar1 = iVar1 + 0xe0;
      while (uVar2 < uVar3) {
        uVar2 = uVar2 + 1;
        *(char *)(iVar1 + 2) = (char)uVar2;
        iVar1 = iVar1 + 1;
      }
    }
  }
  return;
}

