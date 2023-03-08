/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librfate -> ate_test.o -> ate_bt_dut_func
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ate_bt_dut_func(int param_1,undefined4 param_2)

{
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  rw_le_pq_master_test(0,0xc,param_2,0x14,auStack_14,&uStack_18,&cStack_1b);
  if (param_1 != 0) {
    phy_printf("le_txrx_num: %d, %d\n",auStack_14[0],uStack_18);
    phy_printf("le_rssi: avg=%d, max=%d, min=%d\n",(int)cStack_1b,(int)cStack_1a,(int)cStack_19);
  }
  return;
}

