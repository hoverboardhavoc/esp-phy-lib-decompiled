/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_adv_service_polling
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_v9_adv_service_polling(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  rw_le_v9_error_print();
  if ((_DAT_60031014 & 0x20) != 0) {
    _DAT_60031018 = _DAT_60031018 | 0x20;
    rw_le_v9_set_status_et(0x3ffd0100,0);
    _DAT_3ffd0300 = _DAT_3ffd0300 & 0xffff7fff;
    _DAT_3ffd0320 = _DAT_3ffd0320 & 0xffff7fff;
    evt_refresh_ind_v9 = 1;
    iVar1 = rw_le_v9_get_clkn();
    if (freq_sweep == 1) {
      uVar2 = _DAT_3ffd0214 >> 0x10 & 0x3f;
      if (uVar2 == 0x1d) {
        iVar3 = 0;
      }
      else if (uVar2 == 0) {
        iVar3 = 0xd;
      }
      else {
        iVar3 = 1;
        if ((uVar2 != 0xd) && (iVar3 = 0x1f, uVar2 != 0xb)) {
          iVar3 = 0x1d;
        }
      }
      _DAT_3ffd0214 = iVar3 << 0x10 | _DAT_3ffd0214 & 0xffc0ffff;
    }
    rw_le_v9_set_rawstp_et(0x3ffd0100,iVar1 + 2U & 0xffffffe);
    rw_le_v9_kick_start(0);
  }
  if (_DAT_3ffd02c0 << 0x10 < 0) {
    rw_le_v9_rx_status_print(&DAT_3ffd02c0,0x3ffd0b00);
    rw_le_v9_set_rxundone(&DAT_3ffd02c0);
  }
  if ((int)(_DAT_3ffd02e0 << 0x10) < 0) {
    rw_le_v9_rx_status_print(&DAT_3ffd02e0,0x3ffd0f00);
    _DAT_3ffd02e0 = _DAT_3ffd02e0 & 0xffff7fff;
    return;
  }
  return;
}

