/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_evt_refresh_only
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_v9_evt_refresh_only(int param_1)

{
  int iVar1;
  
  if ((_DAT_60031014 & 0x20) == 0) {
    return;
  }
  _DAT_60031018 = _DAT_60031018 | 0x20;
  rw_le_v9_set_status_et(0);
  if (param_1 != 0) {
    _DAT_3ffd0300 = _DAT_3ffd0300 & 0xffff7fff;
    _DAT_3ffd0320 = _DAT_3ffd0320 & 0xffff7fff;
  }
  evt_refresh_ind_v9 = 1;
  iVar1 = rw_le_v9_get_clkn();
  rw_le_v9_set_rawstp_et(0x3ffd0100,iVar1 + 2);
  _DAT_60031100 = _DAT_60031100 & 0xfffffff0 | 0x80000000;
  return;
}

