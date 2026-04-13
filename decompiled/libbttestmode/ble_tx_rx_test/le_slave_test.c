/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> le_slave_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void le_slave_test(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  phy_printf("le_slave_test begins!\n");
  phy_set_clk_conf(2);
  ble_tx_init(param_1,param_2,param_3,2,param_4);
  ble_rx_init(param_1,param_2);
  uVar2 = 0;
  while (iVar1 = ble_master_slave_rx_a_frame
                           (0,param_1,param_2,&uStack_2c,&uStack_28,&uStack_24,&uStack_20,&uStack_1c
                           ), iVar1 != 0) {
    if (uVar2 < uStack_2c) {
      ets_delay_us(100);
      ble_tx_a_frame(1,0,0,&uStack_18,&uStack_14);
      uVar2 = uStack_2c;
    }
  }
  phy_printf("le_slave_test ends!\n");
  phy_printf("slave_RX: n_correct=%d, n_error=%d\n",uStack_2c,uStack_28);
  phy_printf("slave_TX: n_correct=%d, n_error=%d\n",uStack_18,uStack_14);
  if (uStack_2c == 0) {
    if ((_DAT_20583004 & 0x100) == 0) {
      _DAT_20583004 = _DAT_20583004 | 0x100;
    }
    else {
      _DAT_20583004 = _DAT_20583004 & 0xfffffeff;
    }
  }
  phy_set_clk_conf(0);
  return;
}

