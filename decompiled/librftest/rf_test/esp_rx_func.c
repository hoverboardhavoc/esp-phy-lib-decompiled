/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
  WifiRxStart(param_1[1]);
  return;
}

