/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_slave_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_slave_test(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_2c = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  phy_set_clk_conf(3);
  zb_tx_init(param_3,param_1,param_2,param_4);
  zb_rx_init(param_1);
  _DAT_600a3004 = (param_4 & 1) << 3 | _DAT_600a3004 & 0xfffffff6 | param_4 & 1;
  uVar1 = 0;
  while (iVar2 = zb_master_slave_rx_a_frame
                           (0,&local_2c,&local_28,&uStack_24,&uStack_20,&uStack_1c,param_4),
        iVar2 != 1) {
    if ((uVar1 < local_2c) && (param_4 == 0)) {
      zb_tx_a_frame(&uStack_18,&uStack_14,0);
      uVar1 = local_2c;
    }
  }
  phy_printf("zb_slave_test ends!\n");
  phy_printf("slave_RX: n_correct=%d, n_error=%d\n",local_2c,local_28);
  phy_printf("slave_TX: n_correct=%d, n_error=%d\n",uStack_18,uStack_14);
  phy_set_clk_conf(0);
  return;
}

