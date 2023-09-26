/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_rx_per_syncw
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_v9_rx_per_syncw(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uStack_8c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int aiStack_68 [13];
  
  rw_le_v9_em_clean(0x3ffd0000,0x400);
  rw_v9_init_em_radio_table();
  rw_le_v9_prep_et(0x3ffd0100,0xf,0,0,0,0,0,0);
  rw_le_v9_set_etptr(0x3ffd0100);
  rw_le_v9_set_currentrxdescptr(&DAT_3ffd02c0);
  rf_rw_v9_le_enable();
  _DAT_600310d0 = _DAT_600310d0 | 0x8000000;
  rw_le_v9_prep_cs(&DAT_3ffd0200,0x1d,1,0,0,0,1,0);
  _DAT_3ffd0200 = _DAT_3ffd0200 | 0x400000;
  rw_le_v9_init_rx_descryptor(&DAT_3ffd02c0,&DAT_3ffd02e0,0x3ffd0b00,0x3ffd0700);
  rw_le_v9_init_rx_descryptor(&DAT_3ffd02e0,&DAT_3ffd02c0,0x3ffd0f00,0x3ffd1300);
  _DAT_3ffd0300 = 0xfa010320;
  _DAT_3ffd0304 = 0x340;
  _DAT_3ffd0320 = 0xfa010300;
  _DAT_3ffd0324 = 0x340;
  _DAT_60031018 = _DAT_60031018 | 0x20;
  iVar3 = rw_le_v9_get_clkn();
  rw_le_v9_set_rawstp_et(0x3ffd0100,iVar3 + 2U & 0xffffffe);
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
  aiStack_68[4] = 0;
  aiStack_68[5] = 0;
  aiStack_68[6] = 0;
  aiStack_68[7] = 0;
  aiStack_68[8] = 0;
  aiStack_68[9] = 0;
  iVar6 = 0;
  iVar5 = 0;
  iVar7 = 0;
  iVar2 = 0;
  iVar3 = 0;
  uStack_8c = 0;
  do {
    rw_le_v9_error_print();
    iVar4 = GetStopCmd();
    if ((iVar4 == 3) || (bVar1 = false, iVar4 == 0)) {
      _DAT_60031000 = _DAT_60031000 | 0x4000000;
      do {
        if ((_DAT_60031014 & 0x20) != 0) break;
        _DAT_60031000 = _DAT_60031000 | 0x4000000;
        uStack_8c = uStack_8c + 1;
      } while (uStack_8c < 0x2711);
      _DAT_60031018 = _DAT_60031018 | 0x20;
      bVar1 = true;
    }
    if (_DAT_3ffd02c0 << 0x10 < 0) {
      rw_le_v9_rxstat_unpack_adv
                (&DAT_3ffd02c0,&uStack_78,&iStack_6c,aiStack_68,aiStack_68 + 1,aiStack_68 + 5,
                 &iStack_74,aiStack_68 + 3);
      rw_le_v9_set_rxundone(&DAT_3ffd02c0);
      rw_le_v9_rx_phyinfo(&DAT_3ffd02c0,0x3ffd0b00,aiStack_68 + 6,aiStack_68 + 7,aiStack_68 + 8,
                          aiStack_68 + 9);
      if (iStack_70 == 0) {
        if (aiStack_68[2] == 0) {
          if (aiStack_68[3] == 0) {
            if (iStack_74 == 0) {
              if ((aiStack_68[0] == 0) && (iStack_6c == 0)) {
                iVar2 = iVar2 + 1;
              }
            }
            else {
              iVar7 = iVar7 + 1;
            }
          }
          else {
            iVar6 = iVar6 + 1;
          }
        }
        else {
          iVar5 = iVar5 + 1;
        }
        iVar3 = iVar3 + 1;
      }
    }
    if (_DAT_3ffd02e0 << 0x10 < 0) {
      rw_le_v9_rxstat_unpack_adv
                (&DAT_3ffd02e0,&uStack_78,&iStack_6c,aiStack_68,aiStack_68 + 1,aiStack_68 + 5,
                 &iStack_74,aiStack_68 + 3);
      rw_le_v9_set_rxundone(&DAT_3ffd02e0);
      rw_le_v9_rx_phyinfo(&DAT_3ffd02e0,0x3ffd0f00,aiStack_68 + 6,aiStack_68 + 7,aiStack_68 + 8,
                          aiStack_68 + 9);
      if (iStack_70 == 0) {
        if (aiStack_68[2] == 0) {
          if (aiStack_68[3] == 0) {
            if (iStack_74 == 0) {
              if ((aiStack_68[0] == 0) && (iStack_6c == 0)) {
                iVar2 = iVar2 + 1;
              }
            }
            else {
              iVar7 = iVar7 + 1;
            }
          }
          else {
            iVar6 = iVar6 + 1;
          }
        }
        else {
          iVar5 = iVar5 + 1;
        }
        iVar3 = iVar3 + 1;
      }
    }
    if (bVar1) {
      rf_rw_v9_le_disable();
      _DAT_60031000 = _DAT_60031000 | 0x80000000;
      phy_printf("%x %x %x %x %x %x %x %x %x %x p %d %d %d %x\n",iVar3,iVar2,iVar5,iVar6,iVar7,0,0);
      return;
    }
  } while( true );
}

