/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
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
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [4];
  
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  auStack_24[0] = 0;
  phy_printf("le_slave_test begins!\n");
  phy_set_clk_conf(2);
  ble_tx_init(param_1,param_2,param_3,2,param_4);
  ble_rx_init(param_1,param_2);
  uVar2 = 0;
  while (iVar1 = ble_master_slave_rx_a_frame
                           (0,param_1,param_2,&uStack_3c,&uStack_38,&uStack_34,&uStack_30,&uStack_2c
                           ), iVar1 != 0) {
    if (uVar2 < uStack_3c) {
      ets_delay_us(100);
      ble_tx_a_frame(1,0,0,&uStack_28,auStack_24,param_3);
      uVar2 = uStack_3c;
    }
  }
  phy_printf("le_slave_test ends!\n");
  phy_printf("slave_RX: n_correct=%d, n_error=%d\n",uStack_3c,uStack_38);
  phy_printf("slave_TX: n_correct=%d, n_error=%d\n",uStack_28,auStack_24[0]);
  if (uStack_3c == 0) {
    if ((_DAT_60091004 & 0x100) == 0) {
      _DAT_60091004 = _DAT_60091004 | 0x100;
    }
    else {
      _DAT_60091004 = _DAT_60091004 & 0xfffffeff;
    }
  }
  phy_set_clk_conf(0);
  return;
}

