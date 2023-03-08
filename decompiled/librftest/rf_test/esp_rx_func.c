/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> rf_test.o -> esp_rx_func
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_rx_func(undefined4 *param_1)

{
  set_macrxfilter(mac_filter_en);
  setmacaddr(0x134fe18,0x5040302);
  rftest_set_chan(*(undefined1 *)param_1,(uint)(tx_cbw40m_en != '\0') << 1);
  phy_printf("wifi rx start: channel is %d, rate is 0x%x\n",*param_1,param_1[1]);
  WifiRxStart(param_1[1]);
  return;
}

