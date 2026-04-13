/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: librfate -> ate_test.o -> ate_bt_dut_func
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ate_bt_dut_func(int param_1)

{
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  le_master_test(9,2,0xc,0x32,0x25,&uStack_2c,&uStack_28,&uStack_24);
  if (param_1 != 0) {
    phy_printf("le_txrx_num: %d, %d\n",uStack_2c,uStack_24);
    phy_printf("le_rssi: avg=%d, max=%d, min=%d\n",uStack_1c,uStack_18,uStack_14);
  }
  return;
}

