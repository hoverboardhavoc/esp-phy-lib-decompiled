/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx_init(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                undefined1 param_5)

{
  char *pcVar1;
  uint uVar2;
  
  ble_radio_init();
  ble_select_phy_speed(param_1,param_2);
  ble_radio_tx_data_init(param_5,param_4);
  ble_whitening_enable(0);
  uVar2 = 0xf;
  if (param_3 < 0x10) {
    uVar2 = param_3;
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

