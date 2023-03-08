/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_rx_per_ulap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_bt_v9_rx_per_ulap(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 auStack_44 [4];
  
  rf_rw_v9_bt_enable();
  rw_bt_v9_em_clean(0x3fcd0000,0x400);
  rw_v9_init_em_radio_table();
  rw_bt_v9_prep_et(0x3fcd0100,0xf,0,0,0,0,0,0);
  rw_bt_v9_set_etptr(0x3fcd0100);
  rw_bt_v9_set_currentrxdescptr(&DAT_3fcd02c0);
  if (param_1 == 0) {
    _DAT_60031428 = _DAT_60031428 & 0xffff7fff;
  }
  else {
    _DAT_60031428 = _DAT_60031428 | 0x8000;
  }
  rw_bch_gen(param_2,auStack_7c,auStack_78);
  rw_bt_v9_prep_cs(0x3fcd0200,3,0,1,1,0,0);
  rw_bt_v9_init_rx_descryptor(&DAT_3fcd02c0,0x3fcd0b00,0x3fcd0700);
  rw_bt_v9_init_rx_descryptor(&DAT_3fcd02e0,&DAT_3fcd02c0,0x3fcd0f00,0x3fcd1300);
  _DAT_3fcd0300 = 0x820320;
  _DAT_3fcd0304 = 0x3400a9e;
  _DAT_3fcd0308 = _DAT_3fcd0308 & 0xffff0000 | 0x700;
  _DAT_3fcd0320 = 0x820300;
  _DAT_3fcd0324 = 0x3400a9e;
  _DAT_3fcd0328 = _DAT_3fcd0328 & 0xffff0000 | 0x700;
  _DAT_60031418 = _DAT_60031418 | 0x60;
  iVar2 = rw_bt_v9_get_clkn();
  rw_bt_v9_set_rawstp_et(0x3fcd0100,iVar2 + 2U & 0xfffffff);
  rw_bt_v9_kick_start(0);
  rw_bt_v9_wait_4_kick_start();
  prbs9_gen(&PRBS9);
  phy_printf("RW V9 RX PER\n");
  uStack_74 = 0;
  uStack_70 = 0;
  iStack_6c = 0;
  iStack_68 = 0;
  iStack_64 = 0;
  iStack_60 = 0;
  iStack_5c = 0;
  iStack_58 = 0;
  iStack_54 = 0;
  iStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  auStack_44[0] = 0;
  iVar8 = 0;
  iVar9 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
  iVar5 = 0;
  iVar2 = 0;
  do {
    rw_bt_v9_error_print();
    rw_bt_v9_frm_refresh_only(0x3fcd0100,1);
    if (_DAT_3fcd02c0 << 0x10 < 0) {
      rw_bt_v9_rxstat_unpack
                (&DAT_3fcd02c0,&uStack_74,&uStack_70,&iStack_6c,&iStack_68,&iStack_64,&iStack_60,
                 &iStack_5c);
      rw_bt_v9_set_rxundone(&DAT_3fcd02c0);
      if (iStack_50 == 0) {
        if (iStack_54 == 0) {
          if (iStack_58 == 0) {
            bVar1 = false;
            if (iStack_64 == 0) {
              if (iStack_5c == 0) {
                if (iStack_60 == 0) {
                  if (iStack_68 != 0) {
                    iVar9 = iVar9 + 1;
                    goto _L217;
                  }
                  if (iStack_6c == 0) {
                    iVar4 = iVar4 + 1;
                    goto _L216;
                  }
                  bVar1 = false;
                }
                else {
                  iVar8 = iVar8 + 1;
                  bVar1 = false;
                }
              }
              else {
                iVar7 = iVar7 + 1;
_L217:
                bVar1 = false;
              }
            }
          }
          else {
            iVar6 = iVar6 + 1;
_L216:
            bVar1 = true;
          }
        }
        else {
          iVar5 = iVar5 + 1;
          bVar1 = false;
        }
        iVar2 = iVar2 + 1;
        if (bVar1) {
          rw_bt_v9_rx_prbs9_status(&DAT_3fcd02c0,&uStack_48,auStack_44);
        }
      }
    }
    iVar3 = GetStopCmd();
    if ((iVar3 == 3) || (iVar3 == 0)) {
      phy_printf("%x %x %x %x %x %x %x %x p %x b %x %x\n",iVar2,iVar4,iVar5,iVar6,iVar7,iVar8,iVar9)
      ;
      rf_rw_v9_bt_disable();
      return;
    }
  } while( true );
}

