/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> t1_toggle_refresh_rw_le_check_rx_v9
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void t1_toggle_refresh_rw_le_check_rx_v9(void)

{
  rw_le_v9_error_print();
  rw_le_v9_evt_refresh_check_rx(0x3ffd0100,1);
  rw_evtv9_cntl_fsm_print();
  _DAT_60031050 = _DAT_60031050 & 0xffffffc0 | 0x80;
  if (evtschdl_fsm_print_start_v9 == 0) {
    evtschdl_fsm_print_start_v9 = 1;
  }
  evtschdl_fsm_data_last_v9 = _DAT_60031054 & 0xf;
  return;
}

