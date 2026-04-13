/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> wifi_pti_toggle_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wifi_pti_toggle_start(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  timer0_wifi_pti_low = param_2;
  timer0_wifi_pti_high = param_1;
  interrupt_set_wrapper(0,0x20,4,1);
  interrupt_handler_set_wrapper(4,t0_toggle_force_wifi_v2,0);
  t0_start_toggle(param_3);
  interrupt_on_wrapper(4);
  return;
}

