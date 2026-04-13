/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
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
  
  phy_set_clk_conf(3);
  zb_rx_init(param_1);
  rfpll_cal_track_set();
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
  _DAT_20103000 = 0x45;
  phy_printf("RX %d %d %d %d %d %d %d %d %d %d\n",uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28,
             uStack_24,uStack_1c);
  phy_set_clk_conf(0);
  return;
}

