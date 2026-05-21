/*
 * Last changed at upstream commit ae6f29bfebbfdacc1bba905afff3399fe733245f
 * https://github.com/espressif/esp-phy-lib/commit/ae6f29bfebbfdacc1bba905afff3399fe733245f
 * Upstream date: 2026-05-21 14:11:41 +0800
 * Upstream subject: support wifi api and regdma
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx_init(uint param_1,undefined4 param_2,undefined1 param_3)

{
  char *pcVar1;
  uint uVar2;
  
  ble_select_phy_speed();
  ble_radio_tx_data_init(param_3,param_2);
  ble_whitening_enable(0);
  uVar2 = 0xf;
  if (param_1 < 0x10) {
    uVar2 = param_1;
  }
  uVar2 = uVar2 & 0xff;
  pcVar1 = (char *)0x20101000;
  _DAT_2010150c = uVar2;
  if (_DAT_20101550 != 0) {
    pcVar1 = "RADIO->STATE == RADIO_STATE_STATE_Disabled";
    __assert_func("ble_tx_rx_test.c",0xf0,"ble_tx_init");
  }
  *(uint *)(pcVar1 + 0x50c) = *(uint *)(pcVar1 + 0x50c) & 0xffffff00 | uVar2;
  return;
}

