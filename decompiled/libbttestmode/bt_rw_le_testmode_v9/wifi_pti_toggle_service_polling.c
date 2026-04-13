/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> wifi_pti_toggle_service_polling
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wifi_pti_toggle_service_polling(void)

{
  bool bVar1;
  
  _LANCHOR48 = _LANCHOR48 + 1;
  if (wifi_pti_toggle_polling_pti_period <= _LANCHOR48) {
    _LANCHOR48 = 0;
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

