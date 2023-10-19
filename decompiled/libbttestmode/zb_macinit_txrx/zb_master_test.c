/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
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
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_stack_00000000;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int aiStack_44 [4];
  
  aiStack_44[0] = 0;
  iVar1 = 1000;
  if (0x14 < param_4) {
    iVar1 = param_4 * 0x32;
  }
  phy_set_clk_conf(3);
  zb_tx_init(param_4,param_1,param_2,param_5);
  zb_rx_init(param_1);
  _DAT_600a3004 = (param_5 & 1) << 3 | _DAT_600a3004 & 0xfffffff6 | param_5 & 1;
  for (iVar5 = 0; iVar5 != param_3; iVar5 = iVar5 + 1) {
    iVar2 = zb_tx_a_frame(param_6,param_7,param_5,param_2);
    if (param_5 == 0) {
      iVar3 = zb_master_slave_rx_a_frame
                        (iVar1,param_8,in_stack_00000000,aiStack_44,in_stack_00000008,
                         in_stack_0000000c,0);
      if (iVar3 == 1) break;
    }
    else {
      ets_delay_us(1000);
    }
    if (iVar2 == 1) break;
  }
  uVar4 = *param_8;
  if (uVar4 == 0) {
    *in_stack_00000004 = 0;
  }
  else {
    iVar1 = aiStack_44[0];
    if (2 < uVar4) {
      uVar4 = (int)((uVar4 - 2) * 0x1000000) >> 0x18;
      iVar1 = (aiStack_44[0] - *in_stack_00000008) - *in_stack_0000000c;
    }
    *in_stack_00000004 = iVar1 / (int)uVar4;
  }
  phy_set_clk_conf(0);
  _DAT_600a3064 = _DAT_600a3064 | 0xf;
  return;
}

