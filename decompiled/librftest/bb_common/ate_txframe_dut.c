/*
 * Last changed at upstream commit 9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * https://github.com/espressif/esp-phy-lib/commit/9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * Upstream date: 2023-03-31 17:07:27 +0800
 * Upstream subject: update_for_rftest_20230331
 * Source: librftest -> bb_common.o -> ate_txframe_dut
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ate_txframe_dut(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  char cVar5;
  undefined2 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint extraout_a1;
  int iVar14;
  int *piVar15;
  int *piVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  undefined4 uVar30;
  uint uVar31;
  undefined4 *puVar32;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  int iStack_100;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  int local_88 [10];
  int local_60 [8];
  int aiStack_40 [3];
  
  puVar7 = (uint *)ConfAddrGet(10);
  local_98 = 0;
  uStack_94 = 0;
  local_90 = 0;
  uStack_8c = 0;
  memset(local_88 + 2,0,0x20);
  memset(local_60,0,0x20);
  local_88[0] = 0;
  local_88[1] = 0;
  if (param_1 != 0) {
    chip_v7_set_chan((int)(char)param_1,1);
    phy_set_freq(param_2,0);
  }
  uVar28 = _DAT_6001c018;
  if (param_4 != 0) {
    phy_printf("\n\ntx chan=%d, freq=%dMHz\n",param_1,param_2);
  }
  set_macrxfilter(1);
  get_macaddr(&uStack_a0);
  _DAT_60033040 = uStack_a0;
  _DAT_60033044 = uStack_9c;
  _DAT_60033c78 = _DAT_60033c78 | 2;
  puVar8 = (undefined4 *)fill_txdataframe(5,0x20,0x60504030,0x2010,0x74657373,auStack_a8,auStack_a4)
  ;
  _DAT_60033084 = _DAT_60033084 & 0x1fffffff;
  _DAT_60033080 = _DAT_60033080 & 0xefffffff;
  _DAT_60033c44 = _DAT_60033c44 & 0xffff0000 | 0x4040;
  pcVar9 = (char *)get_rxctrl_addr();
  iVar1 = _DAT_60035000;
  iStack_f4 = 0;
  iStack_f8 = -1;
  iVar25 = 0;
  iVar27 = 0;
  uVar10 = extraout_a1;
  do {
    iStack_f4 = iStack_f4 + 1;
    *puVar8 = 1;
    _DAT_60033084 = _DAT_60033084 | 0x40000000;
    *puVar7 = ((_DAT_6003507c & 7) + 1) * 0x8000 | *puVar7 & 0xffc00fff;
    uVar10 = tx_data_frame(5000,uVar10);
    if (((uVar10 & 0xff000000) == 0) && (-1 < (int)(_DAT_60033084 << 1))) {
      iVar25 = (int)*pcVar9;
      iVar27 = *(int *)(pcVar9 + 0x54);
      if (iVar27 != 2) goto _L192;
      iStack_f8 = *(int *)(pcVar9 + 0x58);
      if (param_4 == 0) {
        iStack_100 = 1;
        goto _L193;
      }
      iStack_100 = 1;
_L230:
      uVar10 = phy_printf("txerr: 0x%x, %d, 0x%x\n",iVar25,iVar27);
      if (iStack_100 == 1) goto _L193;
    }
    else {
_L192:
      if (param_4 != 0) {
        iStack_100 = 0;
        goto _L230;
      }
    }
    if (iStack_f4 == 0x15) {
      iStack_100 = 0;
_L193:
      if (iStack_f8 == -1) {
        uVar10 = 0;
        uVar26 = 0;
        uStack_110 = 0;
        uVar31 = 0;
        uStack_10c = 0;
        uStack_104 = 0;
        uStack_108 = 0;
        uVar24 = 0;
        uVar30 = 0;
        iStack_ec = -1;
        iStack_f0 = 0;
      }
      else {
        puVar8 = (undefined4 *)
                 fill_txdataframe(2,ate_length,0x60504030,0x2010,0x74657373,auStack_a8,auStack_a4);
        *puVar7 = *puVar7 & 0xffc00fff | 0x1000;
        ets_delay_us(1000);
        *puVar8 = 3;
        iStack_ec = _DAT_60035000;
        iVar27 = 0x10;
        uStack_110 = 0;
        iStack_f0 = _DAT_60035000;
        uVar24 = 0;
        iVar25 = 0;
        iVar29 = 0;
        uVar10 = 0;
        uVar26 = 0;
        uVar31 = 0;
        uStack_10c = 0;
        uStack_104 = 0;
        uStack_108 = 0;
        do {
          cVar5 = (char)(iVar29 << 1);
          if (param_3 == 0) {
            cVar5 = (char)(test_pwr_backoff << 2);
          }
          target_power_backoff((int)cVar5);
          piVar16 = local_88 + iVar29 + 2;
          piVar15 = local_60 + iVar29;
          *piVar16 = 0;
          *piVar15 = 0;
          iVar2 = iVar27 + -0x10;
          do {
            iVar22 = iVar2;
            _DAT_60033084 = _DAT_60033084 | 0x40000000;
            puVar8[2] = iVar22;
            puVar8[1] = iStack_f8;
            uVar11 = tx_data_frame(5000);
            if ((((uVar11 & 0xff000000) == 0) && (-1 < (int)(_DAT_60033084 << 1))) &&
               (*(int *)(pcVar9 + 0x54) == 4)) {
              iVar2 = *(int *)(pcVar9 + 0x60);
              uVar11 = *(uint *)(pcVar9 + 0x5c);
              iVar14 = *piVar15;
              *piVar16 = *piVar16 + (int)*pcVar9;
              *piVar15 = iVar14 + iVar2;
              uVar6 = get_rx_freq_local();
              *(undefined2 *)((int)local_88 + iVar25 * 2) = uVar6;
              iVar25 = (iVar25 + 1) * 0x10000 >> 0x10;
              if (iVar25 == 4) {
                iVar25 = 0;
              }
              uVar24 = *(uint *)(pcVar9 + 100);
              uStack_108 = *(uint *)(pcVar9 + 0x68);
              uStack_104 = *(uint *)(pcVar9 + 0x6c);
              uStack_10c = *(uint *)(pcVar9 + 0x70);
              if (uVar11 < 0x20) {
                uVar31 = uVar31 | 1 << (uVar11 & 0x1f);
              }
              else if (uVar11 - 0x20 < 0x20) {
                uStack_110 = uStack_110 | 1 << (uVar11 - 0x20 & 0x1f);
              }
              else if (uVar11 - 0x40 < 0x20) {
                uVar26 = uVar26 | 1 << (uVar11 - 0x40 & 0x1f);
              }
              else if (uVar11 - 0x60 < 0x20) {
                uVar10 = uVar10 | 1 << (uVar11 - 0x60 & 0x1f);
              }
            }
            iVar2 = iVar22 + 1;
          } while (iVar22 + 1 != iVar27);
          iVar27 = iVar22 + 0x11;
          iVar29 = iVar29 + 1;
        } while (iVar27 != 0x90);
        uVar30 = 1;
        iStack_ec = _DAT_60035000 - iStack_ec;
      }
      _DAT_600330d8 = 0x7960;
      _DAT_60033084 = 0x80000000;
      if (param_4 != 0) {
        phy_printf("noise: %d, %d\n",(int)((uVar28 >> 5 | 0xfffffc00) + 2) / 4);
      }
      piVar4 = local_60;
      piVar23 = local_88 + 2;
      puVar32 = &local_98;
      puVar8 = &local_90;
      uVar11 = 0;
      uVar28 = 0;
      iVar25 = 0;
      piVar15 = piVar23;
      piVar16 = piVar4;
      do {
        uVar3 = uVar31 & 0xffff;
        uVar20 = uVar24 & 0xffff;
        switch(iVar25) {
        case 1:
          uVar3 = uVar31 >> 0x10;
          uVar20 = uVar24 >> 0x10;
          break;
        case 2:
          uVar3 = uStack_110 & 0xffff;
          uVar20 = uStack_108 & 0xffff;
          break;
        case 3:
          uVar3 = uStack_110 >> 0x10;
          uVar20 = uStack_108 >> 0x10;
          break;
        case 4:
          uVar3 = uVar26 & 0xffff;
          uVar20 = uStack_104 & 0xffff;
          break;
        case 5:
          uVar3 = uVar26 >> 0x10;
          uVar20 = uStack_104 >> 0x10;
          break;
        case 6:
          uVar3 = uVar10 & 0xffff;
          uVar20 = uStack_10c & 0xffff;
          break;
        case 7:
          uVar3 = uVar10 >> 0x10;
          uVar20 = uStack_10c >> 0x10;
        }
        uVar12 = 0;
        uVar18 = 0;
        uVar21 = 0;
        do {
          uVar19 = uVar18 + ((int)uVar3 >> (uVar21 & 0x1f) & 1U);
          uVar13 = uVar12 + ((int)uVar20 >> (uVar21 & 0x1f) & 1U);
          uVar21 = uVar21 + 1;
          uVar18 = uVar19 & 0xff;
          uVar12 = uVar13 & 0xff;
        } while (uVar21 != 0x10);
        *(char *)puVar32 = (char)uVar19;
        *(char *)puVar8 = (char)uVar13;
        if (uVar18 != 0) {
          iVar27 = *piVar16;
          *piVar15 = *piVar15 / (int)uVar18;
          *piVar16 = iVar27 / (int)uVar18;
        }
        iVar27 = *piVar15;
        iVar29 = *piVar16 + -0x60;
        *piVar16 = iVar29;
        if (iVar27 < 0x80) {
          if (iVar27 < -0x7f) {
            *piVar15 = -0x7f;
          }
        }
        else {
          *piVar15 = 0x7f;
        }
        if (iVar29 < 0x80) {
          if (iVar29 < -0x7f) {
            *piVar16 = -0x7f;
          }
        }
        else {
          *piVar16 = 0x7f;
        }
        iVar25 = iVar25 + 1;
        uVar28 = uVar28 + uVar12 & 0xff;
        uVar11 = uVar11 + uVar18 & 0xff;
        piVar16 = piVar16 + 1;
        piVar15 = piVar15 + 1;
        puVar32 = (undefined4 *)((int)puVar32 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      } while (iVar25 != 8);
      uVar3 = 0;
      uVar12 = 0;
      uVar20 = 0;
      do {
        uVar18 = uVar20 & 0x1f;
        uVar21 = uVar20 & 0x1f;
        uVar20 = uVar20 + 1;
        uVar12 = uVar12 + (uVar24 >> uVar18 & 1) & 0xff;
        uVar3 = uVar3 + (uVar31 >> uVar21 & 1) & 0xff;
      } while (uVar20 != 8);
      if (param_4 != 0) {
        phy_printf("fb_rxrssi: ");
        do {
          phy_printf(&_LC17,*piVar4);
          piVar4 = piVar4 + 1;
        } while (aiStack_40 != piVar4);
        phy_printf(&_LC11);
        phy_printf("dut_rxrssi: ");
        do {
          phy_printf(&_LC17,*piVar23);
          piVar23 = piVar23 + 1;
        } while (local_60 != piVar23);
        phy_printf(&_LC11);
        phy_printf("fb_rx_num: ");
        iVar25 = 0;
        do {
          puVar17 = (undefined1 *)((int)&local_90 + iVar25);
          iVar25 = iVar25 + 1;
          phy_printf(&_LC17,*puVar17);
        } while (iVar25 != 8);
        phy_printf(&_LC11);
        phy_printf("dut_rx_num: ");
        iVar25 = 0;
        do {
          puVar17 = (undefined1 *)((int)&local_98 + iVar25);
          iVar25 = iVar25 + 1;
          phy_printf(&_LC17,*puVar17);
        } while (iVar25 != 8);
        phy_printf(&_LC11);
        phy_printf("FREQ_OFFSET, ");
        piVar15 = local_88;
        do {
          piVar16 = (int *)((int)piVar15 + 2);
          *(short *)piVar15 = (short)(((short)*piVar15 * -1000) / 0x9b4);
          phy_printf(&_LC17);
          piVar15 = piVar16;
        } while (local_88 + 2 != piVar16);
        phy_printf(&_LC11);
        phy_printf("txp_state: 0x%08x%08x%08x%08x, 0x%08x%08x%08x%08x;\n",uStack_10c,uStack_104,
                   uStack_108,uVar24,uVar10,uVar26,uStack_110);
        phy_printf("txp_result: %d, %d, %d, %d\n",uVar28,uVar11,
                   (uVar3 + (uVar28 - uVar11)) - uVar12 & 0xff);
        phy_printf("%d: req_suc:%d req_times:%d data_suc:%d txdata_use_timer:0x%x %d ",iStack_f8,
                   iStack_100,iStack_f4,uVar30,iStack_ec,0x80);
        phy_printf("txreq_start_time:0x%x txdata_start_time:0x%x \n",iVar1,iStack_f0);
      }
      return;
    }
  } while( true );
}

