/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> ate_txframe_dut
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void ate_txframe_dut(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  undefined2 uVar7;
  uint *puVar8;
  uint *puVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  int local_88 [10];
  int local_60 [8];
  int aiStack_40 [3];
  
  puVar8 = (uint *)Plcp0AddrGet(0);
  puVar9 = (uint *)ConfAddrGet(0);
  local_98 = 0;
  uStack_94 = 0;
  local_90 = 0;
  uStack_8c = 0;
  memset(local_88 + 2,0,0x20);
  memset(local_60,0,0x20);
  local_88[0] = 0;
  local_88[1] = 0;
  if (param_1 != 0) {
    chip_v7_set_chan(param_1,2);
    phy_set_freq(param_2 + 10U & 0xffff,0);
  }
  uVar29 = _DAT_600a7018;
  if (param_4 != 0) {
    phy_printf("\n\ntx chan=%d, freq=%dMHz\n",param_1,param_2);
  }
  uart_tx_wait_idle(0);
  _tx_pocket_num = 0;
  tx_ack_init(0x60504030,0x2010,0xb,100,0,0);
  ate_fill_frame();
  iVar2 = _PSDU0_OFFSET;
  cVar6 = phy_get_pwr_index(0xb);
  phy_force_pwr_index(1,cVar6 + '\x02');
  pcVar10 = (char *)get_rxctrl_addr();
  iVar1 = _DAT_600ad000;
  *puVar9 = *puVar9 & 0xf0ffffff | 0x1000000;
  *puVar8 = *puVar8 & 0xf8ffffff | 0x3000000;
  *(undefined4 *)(iVar2 + 0x2c) = 1;
  set_tx_rate(0,0xb,0,0,0,0);
  iStack_f0 = 0;
  while( true ) {
    iStack_f0 = iStack_f0 + 1;
    *puVar9 = *puVar9 & 0xffc00fff | 0xa000;
    uVar11 = tx_data_frame(50000);
    if ((((uVar11 & 0xff00) == 0) && (-1 < (int)(_DAT_600a4080 << 1))) &&
       (*(int *)(pcVar10 + 0x80) == 2)) break;
    if (iStack_f0 == 0x15) {
      uStack_e8 = 0;
      iStack_ec = -1;
      uVar11 = 0;
      uVar27 = 0;
      uVar31 = 0;
      uVar32 = 0;
      uStack_f8 = 0;
      uStack_fc = 0;
      uStack_100 = 0;
      uVar24 = 0;
      uStack_e0 = 0;
      iStack_e4 = -1;
      iStack_f4 = 0;
_L254:
      clear_macrxfilter();
      cVar6 = phy_get_pwr_index(0xb);
      phy_force_pwr_index(0,cVar6 + '\x02');
      if (param_4 != 0) {
        phy_printf("noise: %d, %d\n",(int)((uVar29 >> 5 | 0xfffffc00) + 2) / 4);
      }
      piVar5 = local_60;
      piVar26 = local_88 + 2;
      puVar34 = &local_98;
      puVar33 = &local_90;
      uVar15 = 0;
      uVar29 = 0;
      iVar2 = 0;
      piVar17 = piVar26;
      piVar18 = piVar5;
      do {
        uVar3 = uVar32 & 0xffff;
        uVar22 = uVar24 & 0xffff;
        switch(iVar2) {
        case 1:
          uVar3 = uVar32 >> 0x10;
          uVar22 = uVar24 >> 0x10;
          break;
        case 2:
          uVar3 = uVar31 & 0xffff;
          uVar22 = uStack_100 & 0xffff;
          break;
        case 3:
          uVar3 = uVar31 >> 0x10;
          uVar22 = uStack_100 >> 0x10;
          break;
        case 4:
          uVar3 = uVar27 & 0xffff;
          uVar22 = uStack_fc & 0xffff;
          break;
        case 5:
          uVar3 = uVar27 >> 0x10;
          uVar22 = uStack_fc >> 0x10;
          break;
        case 6:
          uVar3 = uVar11 & 0xffff;
          uVar22 = uStack_f8 & 0xffff;
          break;
        case 7:
          uVar3 = uVar11 >> 0x10;
          uVar22 = uStack_f8 >> 0x10;
        }
        uVar13 = 0;
        uVar20 = 0;
        uVar23 = 0;
        do {
          uVar21 = uVar20 + ((int)uVar3 >> (uVar23 & 0x1f) & 1U);
          uVar14 = uVar13 + ((int)uVar22 >> (uVar23 & 0x1f) & 1U);
          uVar23 = uVar23 + 1;
          uVar20 = uVar21 & 0xff;
          uVar13 = uVar14 & 0xff;
        } while (uVar23 != 0x10);
        *(char *)puVar34 = (char)uVar21;
        *(char *)puVar33 = (char)uVar14;
        if (uVar20 != 0) {
          iVar4 = *piVar18;
          *piVar17 = *piVar17 / (int)uVar20;
          *piVar18 = iVar4 / (int)uVar20;
        }
        iVar4 = *piVar17;
        iVar28 = *piVar18 + -0x60;
        *piVar18 = iVar28;
        if (iVar4 < 0x80) {
          if (iVar4 < -0x7f) {
            *piVar17 = -0x7f;
          }
        }
        else {
          *piVar17 = 0x7f;
        }
        if (iVar28 < 0x80) {
          if (iVar28 < -0x7f) {
            *piVar18 = -0x7f;
          }
        }
        else {
          *piVar18 = 0x7f;
        }
        iVar2 = iVar2 + 1;
        uVar29 = uVar29 + uVar13 & 0xff;
        uVar15 = uVar15 + uVar20 & 0xff;
        piVar18 = piVar18 + 1;
        piVar17 = piVar17 + 1;
        puVar34 = (undefined4 *)((int)puVar34 + 1);
        puVar33 = (undefined4 *)((int)puVar33 + 1);
      } while (iVar2 != 8);
      uVar3 = 0;
      uVar13 = 0;
      uVar22 = 0;
      do {
        uVar20 = uVar22 & 0x1f;
        uVar23 = uVar32 >> (uVar22 & 0x1f) & 1;
        uVar22 = uVar22 + 1;
        uVar13 = uVar13 + (uVar24 >> uVar20 & 1) & 0xff;
        uVar3 = uVar3 + uVar23 & 0xff;
      } while (uVar22 != 8);
      if (param_4 == 0) {
        return;
      }
      phy_printf("fb_rxrssi: ",uVar23);
      do {
        phy_printf(&_LC15,*piVar5);
        piVar5 = piVar5 + 1;
      } while (aiStack_40 != piVar5);
      phy_printf(&_LC10);
      phy_printf("dut_rxrssi: ");
      do {
        phy_printf(&_LC15,*piVar26);
        piVar26 = piVar26 + 1;
      } while (local_60 != piVar26);
      phy_printf(&_LC10);
      phy_printf("fb_rx_num: ");
      iVar2 = 0;
      do {
        puVar19 = (undefined1 *)((int)&local_90 + iVar2);
        iVar2 = iVar2 + 1;
        phy_printf(&_LC15,*puVar19);
      } while (iVar2 != 8);
      phy_printf(&_LC10);
      phy_printf("dut_rx_num: ");
      iVar2 = 0;
      do {
        puVar19 = (undefined1 *)((int)&local_98 + iVar2);
        iVar2 = iVar2 + 1;
        phy_printf(&_LC15,*puVar19);
      } while (iVar2 != 8);
      phy_printf(&_LC10);
      phy_printf("FREQ_OFFSET, ");
      piVar17 = local_88;
      do {
        piVar18 = (int *)((int)piVar17 + 2);
        *(short *)piVar17 = (short)(((short)*piVar17 * -1000) / 0x9b4);
        phy_printf(&_LC15);
        piVar17 = piVar18;
      } while (local_88 + 2 != piVar18);
      phy_printf(&_LC10);
      phy_printf("txp_state: 0x%08x%08x%08x%08x, 0x%08x%08x%08x%08x;\n",uStack_f8,uStack_fc,
                 uStack_100,uVar24,uVar11,uVar27,uVar31);
      phy_printf("txp_result: %d, %d, %d, %d\n",uVar29,uVar15,
                 (uVar3 + (uVar29 - uVar15)) - uVar13 & 0xff);
      phy_printf("%d: req_suc:%d req_times:%d data_suc:%d txdata_use_timer:0x%x %d ",iStack_ec,
                 uStack_e8,iStack_f0,uStack_e0,iStack_e4,0x80);
      phy_printf("txreq_start_time:0x%x txdata_start_time:0x%x \n",iVar1,iStack_f4);
      return;
    }
  }
  iStack_ec = *(int *)(pcVar10 + 0x84);
  if (iStack_ec == -1) {
    uStack_e8 = 1;
    uVar11 = 0;
    uVar27 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uStack_f8 = 0;
    uStack_fc = 0;
    uStack_100 = 0;
    uVar24 = 0;
    uStack_e0 = 0;
    iStack_e4 = -1;
    iStack_f4 = 0;
  }
  else {
    set_tx_rate(0,_ate_rate,0,0,0,0);
    iVar28 = 0x10;
    *puVar9 = *puVar9 & 0xffc00fff | 0x1000;
    *(undefined4 *)(iVar2 + 0x2c) = 3;
    iStack_e4 = _DAT_600ad000;
    uVar27 = 0;
    uVar31 = 0;
    iStack_f4 = _DAT_600ad000;
    uVar32 = 0;
    uStack_100 = 0;
    uVar24 = 0;
    iVar4 = 0;
    iVar30 = 0;
    uVar11 = 0;
    uStack_f8 = 0;
    uStack_fc = 0;
    do {
      if (param_3 == 0) {
        iVar12 = phy_get_pwr_index(_ate_rate & 0xff);
        uVar15 = test_pwr_backoff + iVar12;
      }
      else {
        iVar12 = phy_get_pwr_index(_ate_rate & 0xff);
        uVar15 = iVar12 + iVar30;
      }
      phy_force_pwr_index(1,uVar15 & 0xff);
      piVar17 = local_88 + iVar30 + 2;
      piVar18 = local_60 + iVar30;
      *piVar17 = 0;
      *piVar18 = 0;
      iVar12 = iVar28 + -0x10;
      do {
        iVar25 = iVar12;
        _DAT_600a4080 = _DAT_600a4080 | 0x40000000;
        *(int *)(iVar2 + 0x34) = iVar25;
        *(int *)(iVar2 + 0x30) = iStack_ec;
        uVar15 = tx_data_frame(50000);
        if ((((uVar15 & 0xff00) == 0) && (-1 < (int)(_DAT_600a4080 << 1))) &&
           (*(int *)(pcVar10 + 0x80) == 4)) {
          iVar12 = *(int *)(pcVar10 + 0x8c);
          uVar15 = *(uint *)(pcVar10 + 0x88);
          iVar16 = *piVar18;
          *piVar17 = *piVar17 + (int)*pcVar10;
          *piVar18 = iVar16 + iVar12;
          uVar7 = get_rx_freq_local();
          *(undefined2 *)((int)local_88 + iVar4 * 2) = uVar7;
          iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
          if (iVar4 == 4) {
            iVar4 = 0;
          }
          uVar24 = *(uint *)(pcVar10 + 0x90);
          uStack_100 = *(uint *)(pcVar10 + 0x94);
          uStack_fc = *(uint *)(pcVar10 + 0x98);
          uStack_f8 = *(uint *)(pcVar10 + 0x9c);
          if (uVar15 < 0x20) {
            uVar32 = uVar32 | 1 << (uVar15 & 0x1f);
          }
          else if (uVar15 - 0x20 < 0x20) {
            uVar31 = uVar31 | 1 << (uVar15 - 0x20 & 0x1f);
          }
          else if (uVar15 - 0x40 < 0x20) {
            uVar27 = uVar27 | 1 << (uVar15 - 0x40 & 0x1f);
          }
          else if (uVar15 - 0x60 < 0x20) {
            uVar11 = uVar11 | 1 << (uVar15 - 0x60 & 0x1f);
          }
        }
        iVar12 = iVar25 + 1;
      } while (iVar25 + 1 != iVar28);
      iVar28 = iVar25 + 0x11;
      iVar30 = iVar30 + 1;
    } while (iVar28 != 0x90);
    iStack_e4 = _DAT_600ad000 - iStack_e4;
    uStack_e8 = 1;
    uStack_e0 = 1;
  }
  goto _L254;
}

