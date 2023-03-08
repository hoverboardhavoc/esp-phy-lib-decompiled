/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> le_master_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void le_master_test(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  undefined4 uStack_18;
  undefined4 auStack_14 [4];
  
  uVar1 = 0x9c;
  if (((param_2 != 0) && (uVar1 = 0xce, param_2 != 1)) && (uVar1 = 0x21, param_2 != 2)) {
    uVar1 = 0x40;
  }
  rw_le_pq_master_test(param_1,(uint)(param_3 * 100000) / uVar1,auStack_14,&uStack_18,&cStack_1b);
  phy_printf("le_txrx_num: %d, %d,",auStack_14[0],uStack_18);
  phy_printf("le_rssi: avg=%d, max=%d, min=%d\n",(int)cStack_1b,(int)cStack_1a,(int)cStack_19);
  return;
}

