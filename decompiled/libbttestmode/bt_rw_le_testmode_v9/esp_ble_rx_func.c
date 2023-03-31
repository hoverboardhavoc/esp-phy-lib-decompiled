/*
 * Last changed at upstream commit 9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * https://github.com/espressif/esp-phy-lib/commit/9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * Upstream date: 2023-03-31 17:07:27 +0800
 * Upstream subject: update_for_rftest_20230331
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> esp_ble_rx_func
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void esp_ble_rx_func(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iStack_a4;
  uint uStack_a0;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int aiStack_68 [4];
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 auStack_44 [4];
  
  lerx_valid = 0;
  rw_le_v9_em_clean(0x3fcd0000,0x400);
  rw_v9_init_em_radio_table();
  rw_le_v9_prep_et(0x3fcd0100,0xf,0,0,0,0,0,0);
  rw_le_v9_set_etptr(0x3fcd0100);
  rw_le_v9_set_currentrxdescptr(&DAT_3fcd02c0);
  rf_rw_v9_le_enable();
  _DAT_600310d0 = _DAT_600310d0 | 0x8000000;
  rw_le_v9_prep_cs(&DAT_3fcd0200,0x1d,1,0,0,0,1,0);
  _DAT_3fcd0200 = _DAT_3fcd0200 | 0x400000;
  rw_le_v9_init_rx_descryptor(&DAT_3fcd02c0,&DAT_3fcd02e0,0x3fcd0b00,0x3fcd0700);
  rw_le_v9_init_rx_descryptor(&DAT_3fcd02e0,&DAT_3fcd02c0,0x3fcd0f00,0x3fcd1300);
  _DAT_3fcd0300 = 0xfa010320;
  _DAT_3fcd0304 = 0x340;
  _DAT_3fcd0320 = 0xfa010300;
  _DAT_3fcd0324 = 0x340;
  uVar10 = 0;
  _DAT_60031018 = _DAT_60031018 | 0x20;
  _DAT_600310f8 = _DAT_600310f8 | 0x800;
  iVar4 = rw_le_v9_get_clkn();
  rw_le_v9_set_rawstp_et(0x3fcd0100,iVar4 + 2U & 0xffffffe);
  rw_le_v9_kick_start(0);
  rw_le_v9_wait_4_kick_start();
  phy_printf("RW LE V9 RX PER\n");
  uStack_78 = 0;
  iStack_74 = 0;
  iStack_70 = 0;
  iStack_6c = 0;
  aiStack_68[0] = 0;
  aiStack_68[1] = 0;
  aiStack_68[2] = 0;
  aiStack_68[3] = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  auStack_44[0] = 0;
  iVar3 = 0;
  iVar8 = 0;
  iStack_a4 = 0;
  iVar9 = 0;
  iVar12 = 0;
  iVar4 = 0;
  uStack_a0 = 0;
  do {
    rw_le_v9_error_print();
    iVar5 = ble_pll_track_refesh();
    iVar6 = GetStopCmd();
    if (((iVar6 == 3) || (iVar6 == 0)) || (bVar2 = false, iVar5 != 0)) {
      _DAT_60031000 = _DAT_60031000 | 0x4000000;
      do {
        if ((_DAT_60031014 & 0x20) != 0) break;
        _DAT_60031000 = _DAT_60031000 | 0x4000000;
        uStack_a0 = uStack_a0 + 1;
      } while (uStack_a0 < 0x2711);
      _DAT_60031018 = _DAT_60031018 | 0x20;
      bVar2 = true;
    }
    uVar11 = uVar10;
    if (_DAT_3fcd02c0 << 0x10 < 0) {
      rw_le_v9_rxstat_unpack_adv
                (&DAT_3fcd02c0,&uStack_78,&iStack_6c,aiStack_68,aiStack_68 + 1,&uStack_54,&iStack_74
                 ,aiStack_68 + 3);
      rw_le_v9_set_rxundone(&DAT_3fcd02c0);
      rw_le_v9_rx_phyinfo(&DAT_3fcd02c0,0x3fcd0b00,&uStack_50,&uStack_4c,&uStack_48,auStack_44);
      if (iStack_70 == 0) {
        if (aiStack_68[2] == 0) {
          if (aiStack_68[3] == 0) {
            if (iStack_74 == 0) {
              if (aiStack_68[0] != 0) goto _L310;
              if (iStack_6c == 0) {
                iVar12 = iVar12 + 1;
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
            }
            else {
              iVar9 = iVar9 + 1;
              bVar1 = false;
            }
          }
          else {
            iVar8 = iVar8 + 1;
_L310:
            bVar1 = false;
          }
        }
        else {
          iStack_a4 = iStack_a4 + 1;
          bVar1 = false;
        }
        iVar4 = iVar4 + 1;
        if (bVar1) {
          uVar7 = (uint)(char)uStack_58;
          uVar11 = uVar7;
          if ((iVar12 != 1) && (uStack_58 <= uVar10)) {
            uVar11 = uVar10;
          }
          iVar3 = iVar3 + uVar7;
        }
      }
    }
    uVar10 = uVar11;
    if (_DAT_3fcd02e0 << 0x10 < 0) {
      rw_le_v9_rxstat_unpack_adv
                (&DAT_3fcd02e0,&uStack_78,&iStack_6c,aiStack_68,aiStack_68 + 1,&uStack_54,&iStack_74
                 ,aiStack_68 + 3);
      rw_le_v9_set_rxundone(&DAT_3fcd02e0);
      rw_le_v9_rx_phyinfo(&DAT_3fcd02e0,0x3fcd0f00,&uStack_50,&uStack_4c,&uStack_48,auStack_44);
      if (iStack_70 == 0) {
        if (aiStack_68[2] == 0) {
          if (aiStack_68[3] == 0) {
            if (iStack_74 == 0) {
              if (aiStack_68[0] != 0) goto _L311;
              if (iStack_6c == 0) {
                iVar12 = iVar12 + 1;
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
            }
            else {
              iVar9 = iVar9 + 1;
              bVar1 = false;
            }
          }
          else {
            iVar8 = iVar8 + 1;
_L311:
            bVar1 = false;
          }
        }
        else {
          iStack_a4 = iStack_a4 + 1;
          bVar1 = false;
        }
        iVar4 = iVar4 + 1;
        if (bVar1) {
          uVar7 = (uint)(char)uStack_58;
          uVar10 = uVar7;
          if ((iVar12 != 1) && (uStack_58 <= uVar11)) {
            uVar10 = uVar11;
          }
          iVar3 = iVar3 + uVar7;
        }
      }
    }
    if (bVar2) {
      rf_rw_v9_le_disable();
      _cmd_polling_attach = 0;
      _DAT_60031000 = _DAT_60031000 | 0x80000000;
      _DAT_600310f8 = _DAT_600310f8 & 0xfffff7ff;
      if (iVar12 != 0) {
        _cmd_polling_attach = iVar3 / iVar12;
      }
      esp_rx_valid = 2;
      _esp_rx_result = iVar12;
      _cmd_polling_dettach = iVar4;
      if (short_log_en == '\0') {
        phy_printf("%x %x %x %x %x %x %x %x %x %x p %d %d %d %x %d %d %d %d %d %d\n",iVar4,iVar12,
                   iStack_a4,iVar8,iVar9,0,0);
      }
      else {
        phy_printf("rx_num: %d rx_rssi: %d\n",iVar12);
      }
      return;
    }
  } while( true );
}

