/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_le_pq_testmode_txevt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_pq_testmode_txevt(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_stack_00000000;
  
  phy_printf("RW pq BLE Test_Mode Tx\n");
  rw_le_pq_ET_init();
  rw_le_v9_prep_cs(&DAT_3fcd0200,0x1c,1,1,1,0,1,0);
  rw_ble_dtm_txptr_init(param_1,param_2,param_3);
  rw_ble_rxptr_init();
  _DAT_60031018 = _DAT_60031018 | 0x20;
  _DAT_60031000 = _DAT_60031000 & 0xfbffffff;
  _DAT_600310d0 = _DAT_600310d0 & 0xffff4fff | 0x800;
  iVar1 = rw_le_v9_get_clkn();
  rw_le_v9_set_rawstp_et(0x3fcd0100,iVar1 + 2U & 0xffffffe);
  rw_le_v9_kick_start(0);
  do {
  } while (_DAT_600310d4 == in_stack_00000000);
  rw_le_v9_wait_4_kick_start();
  phy_printf("DTM tx start!\n");
  do {
    rw_le_v9_error_print();
    rw_le_pq_dtm_txevt_refresh(0x3fcd0100,1,0);
    if (in_stack_00000000 == _DAT_600310d4) {
      _DAT_60031000 = _DAT_60031000 | 0x4000000;
      phy_printf("%d package done!\n",in_stack_00000000);
      _DAT_600310d0 = _DAT_600310d0 & 0xfffff7ff | 0x800;
      goto _L223;
    }
    iVar1 = GetStopCmd();
  } while (iVar1 != 0);
  _DAT_60031000 = _DAT_60031000 | 0x4000000;
  phy_printf("rw done! %d\n",_DAT_600310d4);
_L223:
  rf_rw_v9_le_disable();
  return;
}

