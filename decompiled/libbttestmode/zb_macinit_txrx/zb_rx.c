/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_rx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_rx(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  chip_v7_set_chan(1,0);
  zb_rx_init(param_1);
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  auStack_14[0] = 0;
  do {
    iVar1 = zb_rx_a_frame(&uStack_38,&uStack_1c,auStack_14,&uStack_20,&uStack_34,&uStack_30,
                          &uStack_2c,&uStack_18);
    iVar2 = GetStopCmd();
    if (iVar2 == 0) break;
  } while (iVar1 == 0);
  _DAT_600a3000 = 0x45;
  phy_printf("RX %d %d %d %d %d %d %d %d %d %d\n",uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28,
             uStack_24,uStack_1c);
  return;
}

