/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
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

