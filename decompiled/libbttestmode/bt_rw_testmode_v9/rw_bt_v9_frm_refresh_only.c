/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_frm_refresh_only
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_bt_v9_frm_refresh_only(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if ((_DAT_60031414 & 0x20) != 0) {
    _DAT_60031418 = _DAT_60031418 | 0x20;
    rw_bt_v9_set_status_et(0);
    if (param_2 != 0) {
      _DAT_3fcd0300 = _DAT_3fcd0300 & 0xffff7fff;
      _DAT_3fcd0320 = _DAT_3fcd0320 & 0xffff7fff;
    }
    frm_refresh_ind_v9 = 1;
    iVar1 = rw_bt_v9_get_clkn();
    rw_bt_v9_set_rawstp_et(0x3fcd0100,iVar1 + 2U & 0xfffffff);
    rw_bt_v9_kick_start(0);
  }
  if (bt_error_reset == 0) {
    return;
  }
  bt_error_reset = 0;
  rw_bt_v9_set_status_et(param_1,0);
  iVar1 = rw_bt_v9_get_clkn();
  rw_bt_v9_set_rawstp_et(0x3fcd0100,iVar1 + 2U & 0xfffffff);
  _DAT_60031500 = _DAT_60031500 & 0xfffffff0 | 0x80000000;
  return;
}

