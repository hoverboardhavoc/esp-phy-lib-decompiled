/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> rf_test.o -> esp_rx_func
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_rx_func(undefined4 *param_1)

{
  rftest_set_chan(*(undefined2 *)param_1,(uint)(tx_cbw40m_en != '\0') << 1);
  phy_printf("wifi rx start: channel is %d, rate is 0x%x\n",*param_1,param_1[1]);
  WifiRxStart(*(undefined1 *)(param_1 + 1));
  return;
}

