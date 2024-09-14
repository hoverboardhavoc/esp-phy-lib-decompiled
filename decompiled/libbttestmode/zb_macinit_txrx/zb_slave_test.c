/*
 * Last changed at upstream commit 8608fcf54d51e81f2e74ebf335fa33f61953f7c8
 * https://github.com/espressif/esp-phy-lib/commit/8608fcf54d51e81f2e74ebf335fa33f61953f7c8
 * Upstream date: 2024-09-14 10:30:08 +0800
 * Upstream subject: update ESP32, S2 and H2 librftest.a to support RF cert_test
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_slave_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_slave_test(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [3];
  
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  auStack_24[0] = 0;
  phy_set_clk_conf(3);
  zb_tx_init(param_3,param_1,param_2,param_4);
  zb_rx_init(param_1);
  _DAT_600a3004 = (param_4 & 1) << 3 | _DAT_600a3004 & 0xfffffff6 | param_4 & 1;
  uVar3 = 0;
  do {
    while ((iVar1 = zb_master_slave_rx_a_frame
                              (0,&uStack_3c,&uStack_38,&uStack_34,&uStack_30,&uStack_2c,param_4),
           uVar3 < uStack_3c && (param_4 == 0))) {
      iVar2 = zb_tx_a_frame(&uStack_28,auStack_24,0,param_2);
      if ((iVar1 == 1) || (uVar3 = uStack_3c, iVar2 == 1)) goto _L180;
    }
  } while (iVar1 != 1);
_L180:
  phy_printf("zb_slave_test ends!\n");
  phy_printf("slave_RX: n_correct=%d, n_error=%d\n",uStack_3c,uStack_38);
  phy_printf("slave_TX: n_correct=%d, n_error=%d\n",uStack_28,auStack_24[0]);
  phy_set_clk_conf(0);
  _DAT_600a3064 = _DAT_600a3064 | 0xf;
  return;
}

