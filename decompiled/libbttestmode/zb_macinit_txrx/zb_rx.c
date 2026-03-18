/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
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
  
  dis_clk_for_current(0,1);
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
  _DAT_600c3000 = 0x45;
  ets_printf("RX %d %d %d %d %d %d %d %d %d %d\n",uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28,
             uStack_24,uStack_1c);
  dis_clk_for_current(1,1);
  return;
}

