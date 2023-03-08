/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_rx_per_syncw_polling_stop
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_v9_rx_per_syncw_polling_stop(void)

{
  cmd_polling_dettach(0,0,rw_le_v9_rx_per_syncw_service_polling);
  rf_rw_v9_le_disable();
  _DAT_60031000 = _DAT_60031000 | 0x80000000;
  phy_printf("%x %x %x %x %x %x %x %x %x %x p %d %d %d %x\n",total_p_polling,cp_polling,
             type_ep_polling,len_ep_polling,crc_ep_polling,mic_ep_polling,sn_ep_polling);
  total_gain_polling = 0;
  type_ep_polling = 0;
  len_ep_polling = 0;
  crc_ep_polling = 0;
  mic_ep_polling = 0;
  sn_ep_polling = 0;
  nesn_ep_polling = 0;
  time_ep_polling = 0;
  priv_ep_polling = 0;
  total_rssi_polling = 0;
  total_inband_polling = 0;
  total_fullband_polling = 0;
  total_p_polling = 0;
  cp_polling = 0;
  return;
}

