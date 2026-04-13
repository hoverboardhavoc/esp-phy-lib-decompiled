/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_evt_refresh_check_rx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_v9_evt_refresh_check_rx(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if ((_DAT_60031014 & 0x20) != 0) {
    _DAT_60031018 = _DAT_60031018 | 0x20;
    rw_le_v9_set_status_et(0);
    if (param_1 != 0) {
      _DAT_3ffd0300 = _DAT_3ffd0300 & 0xffff7fff;
      _DAT_3ffd0320 = _DAT_3ffd0320 & 0xffff7fff;
    }
    evt_refresh_ind_v9 = 1;
    iVar3 = rw_le_v9_get_clkn();
    rw_le_v9_set_rawstp_et(0x3ffd0100,iVar3 + 2U & 0xffffffe);
    rw_le_v9_kick_start(0);
  }
  if ((int)(_DAT_3ffd02c0 << 0x10) < 0) {
    uVar1 = _DAT_3ffd02c0 >> 0x10 & 0x3f;
    rw_le_v9_set_rxundone(&DAT_3ffd02c0);
  }
  else {
    uVar1 = 0xdead;
  }
  if ((int)(_DAT_3ffd02e0 << 0x10) < 0) {
    uVar2 = _DAT_3ffd02e0 >> 0x10 & 0x3f;
    rw_le_v9_set_rxundone(&DAT_3ffd02e0);
    if (uVar1 != 0) goto joined_r0x00010cec;
  }
  else {
    uVar2 = uVar1;
    if (uVar1 == 0xdead) {
      return;
    }
joined_r0x00010cec:
    if (uVar2 != 0) {
      puVar4 = &_LC6;
      goto _L119;
    }
  }
  puVar4 = &_LC7;
_L119:
  phy_printf(puVar4);
  return;
}

