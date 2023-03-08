/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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

