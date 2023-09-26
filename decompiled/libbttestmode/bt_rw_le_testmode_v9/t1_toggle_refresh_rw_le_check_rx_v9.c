/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> t1_toggle_refresh_rw_le_check_rx_v9
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void t1_toggle_refresh_rw_le_check_rx_v9(void)

{
  _DAT_60009000 = _DAT_60009000 | 0x400;
  _DAT_6000907c = _DAT_6000907c | 1;
  rw_le_v9_error_print();
  rw_le_v9_evt_refresh_check_rx(0x3ffd0100,1);
  rw_evtv9_cntl_fsm_print();
  rw_evtv9_schdl_fsm_print();
  _DAT_60009000 = _DAT_60009000 | 0x400;
  return;
}

