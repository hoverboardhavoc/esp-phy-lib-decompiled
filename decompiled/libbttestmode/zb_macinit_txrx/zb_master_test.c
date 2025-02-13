/*
 * Last changed at upstream commit 38908075833e4ae3a48e6ffe431a672698e07e21
 * https://github.com/espressif/esp-phy-lib/commit/38908075833e4ae3a48e6ffe431a672698e07e21
 * Upstream date: 2025-02-13 17:19:18 +0800
 * Upstream subject: update H2 libphy fit ECO5 btbb rssi fix
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_master_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_master_test(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                   uint *param_6,undefined4 param_7,uint *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_stack_00000000;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int aiStack_44 [4];
  
  aiStack_44[0] = 0;
  iVar4 = 1000;
  if (0x14 < param_4) {
    iVar4 = param_4 * 0x32;
  }
  phy_set_clk_conf(3);
  zb_tx_init(param_4,param_1,param_2,param_5);
  zb_rx_init(param_1);
  _DAT_600a3004 = (param_5 & 1) << 3 | _DAT_600a3004 & 0xfffffff6 | param_5 & 1;
  for (iVar5 = 0; iVar5 != param_3; iVar5 = iVar5 + 1) {
    iVar1 = zb_tx_a_frame(param_6,param_7,param_5,param_2);
    if (param_5 == 0) {
      iVar2 = zb_master_slave_rx_a_frame
                        (iVar4,param_8,in_stack_00000000,aiStack_44,in_stack_00000008,
                         in_stack_0000000c,0);
      if (iVar2 == 1) goto _L164;
    }
    else {
      ets_delay_us(1000);
      iVar2 = (int)*(char *)(rx_frame + 0x10d8b);
      aiStack_44[0] = aiStack_44[0] + iVar2;
      if (*param_6 == 1) {
        *in_stack_00000008 = iVar2;
      }
      else {
        if (*in_stack_00000008 < iVar2) {
          *in_stack_00000008 = iVar2;
        }
        if (*in_stack_0000000c <= iVar2) goto _L165;
      }
      *in_stack_0000000c = iVar2;
    }
_L165:
    if (iVar1 == 1) break;
  }
  if (param_5 == 0) {
_L164:
    uVar3 = *param_8;
  }
  else {
    uVar3 = *param_6;
  }
  if (uVar3 == 0) {
    *in_stack_00000004 = 0;
  }
  else {
    iVar4 = aiStack_44[0];
    if (2 < uVar3) {
      uVar3 = uVar3 - 2 & 0xffff;
      iVar4 = (aiStack_44[0] - *in_stack_00000008) - *in_stack_0000000c;
    }
    *in_stack_00000004 = iVar4 / (int)uVar3;
  }
  phy_set_clk_conf(0);
  _DAT_600a3064 = _DAT_600a3064 | 0xf;
  return;
}

