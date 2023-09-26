/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librfate -> ate_test.o -> ate_zb_dut_func
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ate_zb_dut_func(int param_1)

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
  zb_master_test(0x15,0xc,0x32,0x14,0,&uStack_2c,&uStack_28,&uStack_24);
  if (param_1 != 0) {
    phy_printf("zb_txrx_num: %d, %d\n",uStack_2c,uStack_24);
    phy_printf("zb_rssi: avg=%d, max=%d, min=%d\n",uStack_1c,uStack_18,uStack_14);
  }
  return;
}

