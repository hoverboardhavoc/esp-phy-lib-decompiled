/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> ble_tx_rx_test.o -> le_master_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void le_master_test(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                   undefined4 param_6,undefined4 param_7,uint *param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int iStack_34;
  
  iStack_34 = 0;
  phy_set_clk_conf(2);
  ble_tx_init(param_1,param_2,param_3,2,param_5);
  ble_rx_init(param_1,param_2);
  if (param_2 == 2) {
    __floatunsidf(param_5);
    __muldf3(0,0);
    param_5 = __fixunsdfsi();
  }
  else {
    if (param_2 == 1) {
      iVar2 = 0x1b;
    }
    else if (param_2 == 3) {
      iVar2 = 0x6c;
    }
    else {
      iVar2 = 0x36;
    }
    param_5 = param_5 * iVar2;
  }
  for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
    ets_delay_us(200);
    ble_tx_a_frame(1,0,0,param_6,param_7);
    ble_master_slave_rx_a_frame
              (param_5,param_1,param_2,param_8,in_stack_00000000,&iStack_34,in_stack_00000008,
               in_stack_0000000c);
  }
  uVar1 = *param_8;
  if (uVar1 == 0) {
    *in_stack_00000004 = 0;
  }
  else {
    iVar2 = iStack_34;
    if (2 < uVar1) {
      uVar1 = uVar1 - 2 & 0xffff;
      iVar2 = (iStack_34 - *in_stack_00000008) - *in_stack_0000000c;
    }
    *in_stack_00000004 = iVar2 / (int)uVar1;
  }
  phy_set_clk_conf(0);
  return;
}

