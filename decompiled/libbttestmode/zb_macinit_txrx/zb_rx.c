/*
 * Last changed at upstream commit c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * https://github.com/espressif/esp-phy-lib/commit/c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * Upstream date: 2024-06-05 14:35:04 +0800
 * Upstream subject: update C6 H2 libphy for coex test ble 154 chan bug
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_rx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_rx(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 auStack_14 [2];
  
  chip_v7_set_chan(1,0);
  zb_rx_init(param_1);
  uVar1 = _DAT_600a3048 + 2U & 0xffff;
  xtal_freq_rx_cal(1,uVar1,0);
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
    iVar2 = zb_rx_a_frame(&uStack_38,&uStack_1c,auStack_14,&uStack_20,&uStack_34,&uStack_30,
                          &uStack_2c,&uStack_18);
    iVar3 = GetStopCmd();
    if (iVar3 == 0) break;
  } while (iVar2 == 0);
  xtal_freq_rx_cal(0,uVar1,0);
  _DAT_600a3000 = 0x45;
  phy_printf("RX %d %d %d %d %d %d %d %d %d %d\n",uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28,
             uStack_24,uStack_1c);
  return;
}

