/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> rf_cal_data_clear
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rf_cal_data_clear(void)

{
  _rtc_reset_cause = 0;
  _lp_wdt_feed = 0;
  _dig_gpio_out = 0;
  _ble_tx = 0;
  _set_mac_filter = 0;
  _esp_origin_mac = 0;
  _phy_get_romfunc_addr = 0;
  _mac_init = 0;
  _get_target_power_offset = 0;
  _phy_set_freq = 0;
  _target_power_backoff = 0;
  _force_txon_mode = 0;
  _force_txon = 0;
  return;
}

