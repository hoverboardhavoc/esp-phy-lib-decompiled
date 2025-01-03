/*
 * Last changed at upstream commit 1e3487dc778d48c15229af05ce0f03f78e15528c
 * https://github.com/espressif/esp-phy-lib/commit/1e3487dc778d48c15229af05ce0f03f78e15528c
 * Upstream date: 2025-01-03 11:45:24 +0800
 * Upstream subject: support h2 eco5 test
 * Source: libbttestmode -> ble_tx_rx_test.o -> le_master_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void le_master_test(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                   undefined4 param_6,undefined4 param_7,uint *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_stack_00000000;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int aiStack_44 [4];
  
  aiStack_44[0] = 0;
  chip_v7_set_chan(1,0);
  phy_set_clk_conf(2);
  ble_tx_init(param_1,param_2,param_3,2,param_5);
  ble_rx_init(param_1,param_2);
  iVar1 = 0xe;
  if (param_2 != 2) {
    iVar1 = 0x1b;
    if (param_2 != 1) {
      iVar1 = 0x6c;
      if (param_2 != 3) {
        iVar1 = 0x36;
      }
    }
  }
  iVar2 = 0;
  for (iVar4 = 0; iVar4 < param_4; iVar4 = iVar4 + 1) {
    ets_delay_us(200);
    ble_tx_a_frame(1,0,0,param_6,param_7,param_3);
    ble_master_slave_rx_a_frame
              (param_5 * iVar1,param_1,param_2,param_8,in_stack_00000000,aiStack_44,
               in_stack_00000008,in_stack_0000000c);
    if (ble_freq_est != '\0') {
      iVar2 = iVar2 + (uint)_DAT_000110c5;
    }
  }
  uVar3 = *param_8;
  if (uVar3 == 0) {
    *in_stack_00000004 = 0;
  }
  else {
    iVar1 = aiStack_44[0];
    if (2 < uVar3) {
      uVar3 = uVar3 - 2 & 0xffff;
      iVar1 = (aiStack_44[0] - *in_stack_00000008) - *in_stack_0000000c;
    }
    *in_stack_00000004 = iVar1 / (int)uVar3;
  }
  if (ble_freq_est != '\0') {
    iVar1 = 0;
    if (*param_8 != 0) {
      iVar1 = iVar2 / (int)(char)*param_8;
      if (0xff < iVar1) {
        iVar1 = iVar1 + -0x200;
      }
    }
    phy_printf("ble_freq_offset=%d\n",iVar1 << 1);
  }
  phy_set_clk_conf(0);
  return;
}

