/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_le_pq_master_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_pq_master_test
               (undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4,undefined1 *param_5
               )

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  char *in_stack_00000000;
  char *in_stack_00000004;
  char cStack_52;
  char cStack_51;
  uint uStack_50;
  int iStack_4c;
  undefined1 auStack_48 [20];
  
  uStack_50 = 0;
  iStack_4c = 0;
  rw_le_v9_em_clean(0x3fcd0000,0x400);
  prbs9_gen(&PRBS9);
  rw_v9_init_em_radio_table();
  rw_le_v9_prep_et(0x3fcd0100,0xf,0,0,0,0,0,0);
  rw_le_v9_set_etptr(0x3fcd0100);
  rw_le_v9_set_currentrxdescptr(&DAT_3fcd02c0);
  rf_rw_v9_le_enable();
  read_macaddr_from_otp(auStack_48);
  _DAT_60031120 = _DAT_60031120 & 0xffffc000 | 2000;
  _DAT_60031000 = _DAT_60031000 & 0xffffbfff;
  rw_le_v9_prep_cs(&DAT_3fcd0200,2,1,1,1,0,1,0);
  _DAT_3fcd0222 = 0xffff;
  _DAT_3fcd0224 = _DAT_3fcd0224 | 0x1fffff;
  rw_ble_con_txptr_init(param_2,&PRBS9,6,&PRBS9,5);
  rw_ble_rxptr_init();
  _DAT_60031018 = _DAT_60031018 | 0x20;
  _DAT_60031000 = _DAT_60031000 & 0xfff3ffff | 0x100000;
  _DAT_60011090 = _DAT_60011090 | 0x2000;
  iVar1 = rw_le_v9_get_clkn();
  rw_le_v9_set_rawstp_et(0x3fcd0100,iVar1 + 2U & 0xffffffe);
  _DAT_60011090 = _DAT_60011090 | 0x8000;
  rw_le_v9_set_rxundone(&DAT_3fcd02c0);
  rw_le_v9_set_rxundone(&DAT_3fcd02e0);
  rw_le_v9_kick_start(0);
  rw_le_v9_wait_4_kick_start();
  t0_start_toggle(param_1);
  iVar1 = 0;
  do {
    if ((_DAT_6001f074 & 1) != 0) {
      rf_rw_v9_le_disable();
      timer_stop();
      *param_4 = uStack_50;
      *param_3 = iVar1;
      *in_stack_00000000 = cStack_52;
      *in_stack_00000004 = cStack_51;
      uVar3 = 0;
      if (uStack_50 != 0) {
        if (2 < uStack_50) {
          iStack_4c = (iStack_4c - cStack_52) - (int)cStack_51;
          uStack_50 = uStack_50 - 2;
        }
        uVar3 = (undefined1)(iStack_4c / (int)uStack_50);
      }
      *param_5 = uVar3;
      return;
    }
    if ((int)(_DAT_3fcd0300 << 0x10) < 0) {
      _DAT_3fcd0300 = _DAT_3fcd0300 & 0xffff7fff;
    }
    if ((int)(_DAT_3fcd0320 << 0x10) < 0) {
      _DAT_3fcd0320 = _DAT_3fcd0320 & 0xffff7fff;
    }
    if (_DAT_60011088 << 0x10 < 0) {
      bt_track_pll_cap();
      iVar1 = iVar1 + 1;
      _DAT_60011090 = _DAT_60011090 | 0x8000;
    }
    rw_le_v9_error_print();
    rw_le_pq_master_refresh(0x3fcd0100,iVar1,&uStack_50,&iStack_4c,&cStack_52,&cStack_51);
    iVar2 = GetStopCmd();
  } while (iVar2 != 0);
  phy_printf("rw done!\n");
  rf_rw_v9_le_disable();
  return;
}

