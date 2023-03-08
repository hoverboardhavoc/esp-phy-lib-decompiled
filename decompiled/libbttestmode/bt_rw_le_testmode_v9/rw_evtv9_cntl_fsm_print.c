/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_evtv9_cntl_fsm_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_evtv9_cntl_fsm_print(void)

{
  _DAT_60031050 = _DAT_60031050 & 0xffffffc0 | 0x81;
  if (evtcntl_fsm_print_start_v9 == 0) {
    evtcntl_fsm_print_start_v9 = 1;
  }
  evtcntl_fsm_data_last_v9 = _DAT_60031054 & 0x1f;
  if (((_DAT_60031054 & 0x1f) - 6 < 2) &&
     (evtcntl_6_repeat = evtcntl_6_repeat + 1, 999 < evtcntl_6_repeat)) {
    _DAT_60031000 = _DAT_60031000 | 0x4000000;
    evtcntl_6_repeat = 0;
  }
  return;
}

