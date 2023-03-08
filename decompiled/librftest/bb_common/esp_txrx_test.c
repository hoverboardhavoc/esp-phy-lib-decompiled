/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
    tx_ack_test(0x134fe18,0x302,param_2,param_3,param_5,3,1,param_6);
    return;
  }
  auto_ack_test(param_2,param_3 & 0xff,param_7);
  return;
}

