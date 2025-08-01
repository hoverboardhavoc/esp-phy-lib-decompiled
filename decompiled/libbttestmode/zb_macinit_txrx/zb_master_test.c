/*
 * Last changed at upstream commit 1d4cd3aafa244a0adf5891f058b3519bc970d644
 * https://github.com/espressif/esp-phy-lib/commit/1d4cd3aafa244a0adf5891f058b3519bc970d644
 * Upstream date: 2025-08-01 19:50:02 +0800
 * Upstream subject: 1. fix C5ECO2 signaling test power 2. fix C5ECO2/C6ECO3/H2ECO5 coex problem
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
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_stack_00000000;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int aiStack_44 [4];
  
  aiStack_44[0] = 0;
  iVar4 = 0x44c;
  if (0x14 < param_4) {
    iVar4 = param_4 * 0x37;
  }
  phy_set_clk_conf(3);
  zb_tx_init(param_4,param_1,param_2,param_5);
  zb_rx_init(param_1);
  _DAT_600a3004 = (param_5 & 1) << 3 | _DAT_600a3004 & 0xfffffff6 | param_5 & 1;
  for (iVar5 = 0; iVar5 != param_3; iVar5 = iVar5 + 1) {
    iVar1 = zb_tx_a_frame(param_6,param_7,param_5,param_2);
    if (param_5 == 0) {
      zb_master_slave_rx_a_frame
                (iVar4,param_8,in_stack_00000000,aiStack_44,in_stack_00000008,in_stack_0000000c,0);
    }
    else {
      ets_delay_us(1000);
      iVar3 = (int)*(char *)(rx_frame + 68999);
      aiStack_44[0] = aiStack_44[0] + iVar3;
      if (*param_6 == 1) {
        *in_stack_00000008 = iVar3;
      }
      else {
        if (*in_stack_00000008 < iVar3) {
          *in_stack_00000008 = iVar3;
        }
        if (*in_stack_0000000c <= iVar3) goto _L164;
      }
      *in_stack_0000000c = iVar3;
    }
_L164:
    if (iVar1 == 1) break;
  }
  if (param_5 == 0) {
    uVar2 = *param_8;
  }
  else {
    uVar2 = *param_6;
  }
  if (uVar2 == 0) {
    *in_stack_00000004 = 0;
  }
  else {
    iVar4 = aiStack_44[0];
    if (2 < uVar2) {
      uVar2 = uVar2 - 2 & 0xffff;
      iVar4 = (aiStack_44[0] - *in_stack_00000008) - *in_stack_0000000c;
    }
    *in_stack_00000004 = iVar4 / (int)uVar2;
  }
  phy_set_clk_conf(0);
  _DAT_600a3064 = _DAT_600a3064 | 0xf;
  return;
}

