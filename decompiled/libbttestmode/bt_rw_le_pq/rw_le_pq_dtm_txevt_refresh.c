/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_le_pq_dtm_txevt_refresh
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_pq_dtm_txevt_refresh(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  _DAT_3fcd0300 = _DAT_3fcd0300 & 0xffff7fff;
  _DAT_3fcd0320 = _DAT_3fcd0320 & 0xffff7fff;
  if ((_DAT_60031014 & 0x20) != 0) {
    _DAT_60031018 = _DAT_60031018 | 0x20;
    *param_1 = *param_1 & 0xffffffc7;
    _evt_refresh_ind_v9 = 1;
    iVar1 = rw_le_v9_get_clkn();
    if (param_2 == 1) {
      uVar3 = 0x25;
      uVar2 = _DAT_3fcd0214 >> 0x10 & 0x3f;
      if (uVar2 != 0x27) {
        uVar3 = uVar2 + 1;
      }
      _DAT_3fcd0214 = (uVar3 & 0x3f) << 0x10 | _DAT_3fcd0214 & 0xffc0ffff;
    }
    rw_le_v9_set_rawstp_et(0x3fcd0100,iVar1 + 2U & 0xffffffe);
    rw_le_v9_kick_start(0);
    phy_printf(&_LC6);
  }
  iVar1 = rw_le_v9_get_rxdone(&DAT_3fcd02c0);
  if (iVar1 != 0) {
    rw_le_v9_set_rxundone(&DAT_3fcd02c0);
  }
  iVar1 = rw_le_v9_get_rxdone(&DAT_3fcd02e0);
  if (iVar1 != 0) {
    rw_le_v9_set_rxundone(&DAT_3fcd02e0);
    return;
  }
  return;
}

