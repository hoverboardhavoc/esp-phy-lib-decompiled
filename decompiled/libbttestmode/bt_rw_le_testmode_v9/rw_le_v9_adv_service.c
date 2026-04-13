/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_adv_service
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_le_v9_adv_service(void)

{
  rw_le_v9_adv_test_init();
  interrupt_set_wrapper(0,0x22,4,1);
  interrupt_handler_set_wrapper(4,t1_toggle_refresh_rw_v9,0);
  t1_start_toggle(100);
  interrupt_on_wrapper(4);
  return;
}

