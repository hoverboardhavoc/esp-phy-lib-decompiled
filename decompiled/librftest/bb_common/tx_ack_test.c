/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> tx_ack_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_ack_test(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined1 *puVar1;
  undefined1 in_stack_00000000;
  undefined1 in_stack_00000004;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = _PSDU0_OFFSET;
  _tx_pocket_num = 0;
  tx_ack_init(param_2,in_stack_00000000,in_stack_00000004);
  *puVar1 = 0x40;
  tx_ack_start(param_1,param_3,param_4,param_5,&uStack_24);
  phy_printf("flag: 0x%x tx_num: %d ack_num: %d rssi: %02d rssi_max: %02d rssi_min: %02d\n",
             uStack_24,param_1,uStack_20,uStack_1c,uStack_18,uStack_14);
  return;
}

