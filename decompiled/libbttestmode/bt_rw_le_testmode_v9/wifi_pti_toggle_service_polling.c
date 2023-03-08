/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> wifi_pti_toggle_service_polling
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wifi_pti_toggle_service_polling(void)

{
  bool bVar1;
  
  _LANCHOR2 = _LANCHOR2 + 1;
  if (wifi_pti_toggle_polling_pti_period <= _LANCHOR2) {
    _LANCHOR2 = 0;
    bVar1 = force_w_on == 0;
    if (bVar1) {
      force_coex_timer0_wifi_pti_v2(timer0_wifi_pti_high);
    }
    else {
      force_coex_timer0_wifi_pti_v2(timer0_wifi_pti_low);
    }
    force_w_on = (uint)bVar1;
    return;
  }
  return;
}

