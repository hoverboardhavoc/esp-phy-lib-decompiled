/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_le_pq_adv_evt_refresh
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_pq_adv_evt_refresh(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iStack_24 = 0;
  iStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  adv_end = 0;
  if ((_DAT_60031014 & 0x20) != 0) {
    _DAT_60031018 = _DAT_60031018 | 0x20;
    *param_1 = *param_1 & 0xffffffc7;
    if (adv_rsp_flag != 0) {
      adv_end = 1;
    }
    if (param_2 != 0) {
      _DAT_3fcd0300 = _DAT_3fcd0300 & 0xffff7fff;
      _DAT_3fcd0320 = _DAT_3fcd0320 & 0xffff7fff;
    }
    _evt_refresh_ind_v9 = 1;
    iVar1 = rw_le_v9_get_clkn();
    if (param_3 == 1) {
      uVar3 = 0x25;
      uVar2 = _DAT_3fcd0214 >> 0x10 & 0x3f;
      if (uVar2 != 0x27) {
        uVar3 = uVar2 + 1;
      }
      _DAT_3fcd0214 = (uVar3 & 0x3f) << 0x10 | _DAT_3fcd0214 & 0xffc0ffff;
    }
    rw_le_v9_set_rawstp_et(0x3fcd0100,iVar1 + 2U & 0xffffffe);
    rw_le_v9_kick_start(0);
  }
  iVar1 = rw_le_v9_get_rxdone(&DAT_3fcd02c0);
  if (iVar1 != 0) {
    rw_ble_pq_get_ScanA(&DAT_3fcd02c0,0x3fcd0b00,&iStack_2c);
    adv_rsp_flag = 0;
    if (iStack_28 == 0xe02f) {
      if (iStack_2c == 0x40a1df7c) {
        iStack_24 = iStack_2c;
        iStack_20 = iStack_28;
        rw_ble_write_buf(0x3fcd0440,&iStack_24,2);
        adv_rsp_flag = 1;
        _DAT_60031018 = _DAT_60031018 | 2;
      }
    }
    rw_le_v9_set_rxundone(&DAT_3fcd02c0);
  }
  iVar1 = rw_le_v9_get_rxdone(&DAT_3fcd02e0);
  if (iVar1 != 0) {
    rw_le_v9_set_rxundone(&DAT_3fcd02e0);
  }
  return;
}

