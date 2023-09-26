/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> esp_txrx_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_txrx_test(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5
                  ,undefined4 param_6,undefined4 param_7)

{
  target_power_backoff(param_4);
  if (param_1 != 0) {
    tx_ack_test(0x60504030,0x2010,param_2,param_3,param_5,3,1,param_6);
    return;
  }
  auto_ack_test(param_2,param_3 & 0xff,param_7);
  return;
}

