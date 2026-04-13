/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_rx(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iStack_40;
  int aiStack_3c [10];
  
  iStack_40 = 0;
  aiStack_3c[0] = 0;
  aiStack_3c[1] = 0;
  aiStack_3c[2] = 0;
  aiStack_3c[3] = 0;
  aiStack_3c[4] = 0;
  aiStack_3c[5] = 0;
  aiStack_3c[6] = 0;
  ble_rx_init();
  do {
    iVar1 = ble_rx_a_frame(param_1,param_2,&iStack_40,aiStack_3c,aiStack_3c + 1,aiStack_3c + 2,
                           aiStack_3c + 3,aiStack_3c + 4);
  } while (iVar1 != 0);
  if (iStack_40 == 0) {
    if ((_DAT_20583004 & 0x100) == 0) {
      _DAT_20583004 = _DAT_20583004 | 0x100;
    }
    else {
      _DAT_20583004 = _DAT_20583004 & 0xfffffeff;
    }
  }
  _short_log_en = 0;
  if (iStack_40 != 0) {
    _short_log_en = aiStack_3c[3] / iStack_40;
  }
  esp_rx_valid = 2;
  _esp_rx_result = aiStack_3c[3];
  _phy_set_clk_conf = iStack_40;
  if ((_short_log_en & 0xff) == 0) {
    phy_printf("%x %x %x %x %x %x %x %d %d %d p %d %d %d %d\n",iStack_40 + aiStack_3c[0],iStack_40,0
               ,0,0,0);
  }
  else {
    phy_printf("rx_num: %d rx_rssi: %d\n");
  }
  phy_set_clk_conf(0);
  return;
}

