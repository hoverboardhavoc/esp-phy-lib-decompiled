/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_master_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_master_test(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                   undefined4 param_6,undefined4 param_7,uint *param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_stack_00000000;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int iStack_34;
  
  iStack_34 = 0;
  iVar2 = 1000;
  if (0x14 < param_4) {
    iVar2 = param_4 * 0x32;
  }
  phy_set_clk_conf(3);
  zb_tx_init(param_4,param_1,param_2,param_5);
  zb_rx_init(param_1);
  _DAT_600a3004 = (param_5 & 1) << 3 | _DAT_600a3004 & 0xfffffff6 | param_5 & 1;
  for (iVar3 = 0; param_3 != iVar3; iVar3 = iVar3 + 1) {
    zb_tx_a_frame(param_6,param_7,param_5);
    if (param_5 == 0) {
      zb_master_slave_rx_a_frame
                (iVar2,param_8,in_stack_00000000,&iStack_34,in_stack_00000008,in_stack_0000000c,0);
    }
    else {
      ets_delay_us(1000);
    }
  }
  uVar1 = *param_8;
  if (uVar1 == 0) {
    *in_stack_00000004 = 0;
  }
  else {
    iVar2 = iStack_34;
    if (2 < uVar1) {
      uVar1 = (int)((uVar1 - 2) * 0x1000000) >> 0x18;
      iVar2 = (iStack_34 - *in_stack_00000008) - *in_stack_0000000c;
    }
    *in_stack_00000004 = iVar2 / (int)uVar1;
  }
  phy_set_clk_conf(0);
  return;
}

