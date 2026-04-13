/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_frm_refresh_check_rx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_bt_v9_frm_refresh_check_rx(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  
  if ((_DAT_60031414 & 0x20) != 0) {
    _DAT_60031418 = _DAT_60031418 | 0x20;
    rw_bt_v9_set_status_et(0);
    if (param_1 != 0) {
      _DAT_3ffd0300 = _DAT_3ffd0300 & 0xffff7fff;
      _DAT_3ffd0320 = _DAT_3ffd0320 & 0xffff7fff;
    }
    frm_refresh_ind_v9 = 1;
    rw_bt_v9_kick_start(0);
  }
  if ((int)(_DAT_3ffd02c0 << 0x10) < 0) {
    uVar1 = _DAT_3ffd02c0 >> 0x10 & 0xbf;
    rw_bt_v9_set_rxundone(&DAT_3ffd02c0);
  }
  else {
    uVar1 = 0xdead;
  }
  if ((int)(_DAT_3ffd02e0 << 0x10) < 0) {
    uVar2 = _DAT_3ffd02e0 >> 0x10 & 0xbf;
    rw_bt_v9_set_rxundone(&DAT_3ffd02e0);
    if (uVar1 != 0) goto joined_r0x00010b4c;
  }
  else {
    uVar2 = uVar1;
    if (uVar1 == 0xdead) {
      return;
    }
joined_r0x00010b4c:
    if (uVar2 != 0) {
      puVar3 = &_LC1;
      goto _L102;
    }
  }
  puVar3 = &_LC2;
_L102:
  phy_printf(puVar3);
  return;
}

