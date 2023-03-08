/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  uint uStack_a0;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int aiStack_68 [4];
  undefined4 uStack_58;
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
  _DAT_60031018 = _DAT_60031018 | 0x20;
  uVar7 = 0;
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
  iVar9 = 0;
  iVar8 = 0;
  iVar3 = 0;
  uVar10 = 0;
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
    if (_DAT_3fcd02c0 << 0x10 < 0) {
      rw_le_v9_rxstat_unpack_adv
                (&DAT_3fcd02c0,&uStack_78,&iStack_6c,aiStack_68,aiStack_68 + 1,&uStack_54,&iStack_74
                 ,aiStack_68 + 3);
      rw_le_v9_set_rxundone(&DAT_3fcd02c0);
      rw_le_v9_rx_phyinfo(&DAT_3fcd02c0,0x3fcd0b00,&uStack_50,&uStack_4c,&uStack_48,auStack_44);
      if (iStack_70 == 0) {
        bVar1 = false;
        if (aiStack_68[2] == 0) {
          if (aiStack_68[3] == 0) {
            if (iStack_74 == 0) {
              if (aiStack_68[0] == 0) {
                if (iStack_6c == 0) {
                  uVar10 = uVar10 + 1;
                  goto _L300;
                }
                bVar1 = false;
              }
              else {
                bVar1 = false;
              }
            }
            else {
              iVar3 = iVar3 + 1;
_L300:
              bVar1 = true;
            }
          }
          else {
            iVar9 = iVar9 + 1;
          }
        }
        else {
          iVar8 = iVar8 + 1;
        }
        iVar4 = iVar4 + 1;
        if (bVar1) {
          uVar7 = uVar7 + (int)(char)uStack_58;
        }
      }
    }
    if (_DAT_3fcd02e0 << 0x10 < 0) {
      rw_le_v9_rxstat_unpack_adv
                (&DAT_3fcd02e0,&uStack_78,&iStack_6c,aiStack_68,aiStack_68 + 1,&uStack_54,&iStack_74
                 ,aiStack_68 + 3);
      rw_le_v9_set_rxundone(&DAT_3fcd02e0);
      rw_le_v9_rx_phyinfo(&DAT_3fcd02e0,0x3fcd0f00,&uStack_50,&uStack_4c,&uStack_48,auStack_44);
      if (iStack_70 == 0) {
        bVar1 = false;
        if (aiStack_68[2] == 0) {
          if (aiStack_68[3] == 0) {
            if (iStack_74 == 0) {
              if (aiStack_68[0] == 0) {
                if (iStack_6c == 0) {
                  uVar10 = uVar10 + 1;
                  goto _L301;
                }
                bVar1 = false;
              }
              else {
                bVar1 = false;
              }
            }
            else {
              iVar3 = iVar3 + 1;
_L301:
              bVar1 = true;
            }
          }
          else {
            iVar9 = iVar9 + 1;
          }
        }
        else {
          iVar8 = iVar8 + 1;
        }
        iVar4 = iVar4 + 1;
        if (bVar1) {
          uVar7 = uVar7 + (int)(char)uStack_58;
        }
      }
    }
    if (bVar2) {
      rf_rw_v9_le_disable();
      _DAT_60031000 = _DAT_60031000 | 0x80000000;
      _DAT_600310f8 = _DAT_600310f8 & 0xfffff7ff;
      esp_rx_valid = 2;
      _cmd_polling_attach = uVar10;
      if (uVar10 != 0) {
        _cmd_polling_attach = uVar7 / (uVar10 + iVar3);
      }
      _esp_rx_result = uVar10;
      _cmd_polling_dettach = iVar4;
      phy_printf("%x %x %x %x %x %x %x %x %x %x p %d %d %d %x %d %d %d %d\n",iVar4,uVar10,iVar8,
                 iVar9,iVar3,0,0);
      return;
    }
  } while( true );
}

