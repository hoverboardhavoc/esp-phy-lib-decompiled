/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
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
  
  rw_le_pq_master_test(0,0xc,param_2,auStack_14,&uStack_18,&cStack_1b,&cStack_1a);
  if (param_1 != 0) {
    phy_printf("le_txrx_num: %d, %d\n",auStack_14[0],uStack_18);
    phy_printf("le_rssi: avg=%d, max=%d, min=%d\n",(int)cStack_1b,(int)cStack_1a,(int)cStack_19);
  }
  return;
}

