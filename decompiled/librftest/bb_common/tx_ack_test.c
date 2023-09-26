/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> tx_ack_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_ack_test(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined1 in_stack_00000000;
  undefined1 in_stack_00000004;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  test_pocket_type = 0x40;
  _tx_pocket_num = 0;
  tx_ack_init(param_3,in_stack_00000000,in_stack_00000004);
  tx_ack_start(param_1,param_2,param_4,param_5,param_6,&uStack_34,in_stack_00000000);
  phy_printf("flag: 0x%x tx_num: %d ack_num: %d rssi: %02d rssi_max: %02d rssi_min: %02d\n",
             uStack_34,param_2,uStack_30,uStack_2c,uStack_28,uStack_24);
  return;
}

