/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: librftest -> bb_common.o -> do_rx_poll
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void do_rx_poll(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined4 local_2010 [500];
  undefined4 local_1840 [500];
  undefined4 local_1070 [500];
  undefined4 local_8a0 [500];
  uint local_d0;
  uint local_cc;
  uint local_c8;
  undefined1 *local_c4;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  undefined4 *local_98;
  int local_94;
  undefined4 *local_90;
  int local_8c;
  int local_88;
  undefined4 *local_84;
  int local_80;
  int local_7c;
  undefined4 *local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  undefined2 local_48 [10];
  
  local_a4 = param_1 & 0xffff;
  local_c0 = param_1 >> 0x11 & 1;
  local_a0 = param_1 >> 0x18;
  iVar20 = (local_a0 - 0x100) * 10;
  local_78 = local_8a0;
  local_84 = local_1070;
  local_90 = local_1840;
  local_98 = local_2010;
  esp_rx_valid = 0;
  iVar11 = 0;
  local_c4 = &esp_rx_valid;
  do {
    *(undefined4 *)((int)local_78 + iVar11) = 0;
    *(undefined4 *)((int)local_84 + iVar11) = 0;
    *(undefined4 *)((int)local_90 + iVar11) = 0;
    *(undefined4 *)((int)local_98 + iVar11) = 0;
    iVar11 = iVar11 + 4;
  } while (iVar11 != 2000);
  local_48[0] = 0;
  _DAT_60033800 = 0;
  _DAT_60035004 = 0;
  iVar2 = 0;
  iVar19 = 0;
  _DAT_60033c40 = _DAT_60033c40 | 0xc;
  local_9c = 0;
  local_94 = 0;
  local_8c = 0;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_a8 = (int)((_DAT_6001c018 >> 5 | 0xfffffc00) * 10) / 4;
  local_68 = 0;
  local_64 = 0;
  uVar21 = 0xfffffb00;
  local_60 = 0;
  iVar11 = 0;
  iVar14 = 0;
  iVar18 = 0;
  iVar17 = 0;
  iVar15 = 0;
  iVar16 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_c8 = param_1 & 0xfff0;
  local_ac = iVar20 + -0x2d;
  local_b0 = iVar20 + -0x23;
  local_b4 = iVar20 + -0x19;
  local_b8 = iVar20 + -0xf;
  local_bc = iVar20 + -5;
  do {
    flash_test_run(0x20);
    if ((_DAT_60033c3c & 4) == 0) {
      if ((_DAT_60033c3c & 8) != 0) {
        local_5c = _DAT_6001c06c & 0xff;
        _DAT_60033c40 = _DAT_60033c40 | 8;
        if (iVar19 < 5) {
          ets_delay_us(0x1e);
        }
      }
    }
    else {
      uVar12 = _DAT_600330a8 & 0xff;
      if (iVar14 < 500) {
        local_78[iVar14] = uVar12;
        local_84[iVar14] = _DAT_60035000;
        local_98[iVar14] = local_5c;
        local_90[iVar14] = _DAT_60035000 - iVar11;
        iVar5 = _DAT_60035000;
        if ((uVar12 != 0) && (uVar12 != 0x41)) {
          iVar5 = iVar11;
        }
        iVar14 = iVar14 + 1;
        iVar11 = iVar5;
      }
      if (uVar12 == 0) {
        local_d0 = _DAT_600330ac;
        local_cc = _DAT_600330b0;
        pcVar4 = (char *)get_rxctrl_addr();
        iVar5 = _DAT_60035000;
        if ((local_c8 == 0) || ((local_cc & 0x80) == 0)) {
          cVar1 = *pcVar4;
        }
        else {
          cVar1 = pcVar4[0x15];
        }
        uVar12 = local_d0 >> 0x16 & 3;
        if (uVar12 == 0) {
          uVar6 = local_d0 >> 0x10 & 0x1f;
        }
        else {
          uVar6 = local_cc & 0xf | 0x10;
        }
        iVar15 = iVar15 + 1;
        if ((uVar12 << 4 | uVar6) == local_a4) {
          local_cc = cVar1 * 10;
          iVar16 = iVar16 + 1;
          local_54 = local_54 + local_5c;
          local_58 = local_58 + local_cc;
          if ((int)local_cc < (int)local_60) {
            local_60 = local_cc;
          }
          if ((int)uVar21 < (int)local_cc) {
            uVar21 = local_cc;
          }
          uVar3 = get_rx_freq_local();
          local_48[iVar2] = uVar3;
          iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
          if (iVar2 == 4) {
            iVar2 = 0;
          }
          iVar11 = iVar5;
          if (((int)local_cc < local_ac) && (iVar20 + -0x37 <= (int)local_cc)) {
            local_64 = local_64 + 1;
          }
          else if (((int)local_cc < local_b0) && (local_ac <= (int)local_cc)) {
            local_68 = local_68 + 1;
          }
          else if (((int)local_cc < local_b4) && (local_b0 <= (int)local_cc)) {
            local_6c = local_6c + 1;
          }
          else if (((int)local_cc < local_b8) && (local_b4 <= (int)local_cc)) {
            local_70 = local_70 + 1;
          }
          else if (((int)local_cc < local_bc) && (local_b8 <= (int)local_cc)) {
            local_74 = local_74 + 1;
          }
          else if ((iVar20 + 4 < (int)local_cc) || ((int)local_cc < local_bc)) {
            if ((iVar20 + 0xe < (int)local_cc) || ((int)local_cc <= iVar20 + 4)) {
              if ((iVar20 + 0x18 < (int)local_cc) || ((int)local_cc <= iVar20 + 0xe)) {
                if ((iVar20 + 0x22 < (int)local_cc) || ((int)local_cc <= iVar20 + 0x18)) {
                  if ((iVar20 + 0x2c < (int)local_cc) || ((int)local_cc <= iVar20 + 0x22)) {
                    if (((int)local_cc <= iVar20 + 0x36) && (iVar20 + 0x2c < (int)local_cc)) {
                      local_9c = local_9c + 1;
                    }
                  }
                  else {
                    local_94 = local_94 + 1;
                  }
                }
                else {
                  local_8c = local_8c + 1;
                }
              }
              else {
                local_88 = local_88 + 1;
              }
            }
            else {
              local_80 = local_80 + 1;
            }
          }
          else {
            local_7c = local_7c + 1;
          }
        }
      }
      else {
        iVar17 = iVar17 + 1;
        if ((uVar12 != 0x80) && (uVar12 == 0x41)) {
          uVar6 = _DAT_600330ac >> 0x16 & 3;
          if (uVar6 == 0) {
            uVar7 = _DAT_600330ac >> 0x10 & 0x1f;
          }
          else {
            uVar7 = _DAT_600330b0 & 0xf | 0x10;
          }
          if ((uVar6 << 4 | uVar7) == local_a4) {
            iVar18 = iVar18 + 1;
          }
        }
        if ((local_a0 == uVar12) && (iVar19 < 5)) {
          iVar19 = iVar19 + 1;
        }
      }
      _DAT_60033c40 = _DAT_60033c40 | 0xc;
    }
    iVar5 = GetStopCmd();
  } while (iVar5 != 0);
  _DAT_60033c40 = _DAT_60033c40 | 0xc;
  if (iVar16 == 0) {
    DAT_00012950 = 0;
    iVar11 = 0;
  }
  else {
    iVar11 = (local_54 * 10) / iVar16;
    DAT_00012950 = local_58 / iVar16;
  }
  *local_c4 = 1;
  esp_rx_result = iVar16;
  DAT_00012954 = iVar15;
  if (local_c0 == 0) {
    if (short_log_en == '\0') {
      phy_printf("Correct: %d Desired: %d RSSI: %d noise: %d gain: %d para1: %d para2: %d freq: %d "
                 ,iVar15,iVar16,local_a8,iVar11,iVar17,iVar18);
    }
    else {
      phy_printf("rx_num: %d rx_rssi: %d\n",iVar16,DAT_00012950);
    }
    if (rssi_min_max_print != '\0') {
      phy_printf("rssi_min: %d rssi_max: %d",local_60,uVar21);
    }
    if (local_a0 != 0) {
      phy_printf("rssi_base_p5: %d rssi_base_p4: %d rssi_base_p3: %d rssi_base_p2: %d rssi_base_p1: %d rssi_base_n0: %d rssi_base_n1: %d rssi_base_n2: %d rssi_base_n3: %d rssi_base_n4: %d rssi_base_n5: %d "
                 ,local_64,local_68,local_6c,local_70,local_74,local_7c,local_80);
    }
    pcVar4 = "\n";
  }
  else {
    phy_printf("Correct: %d Desired: %d RSSI: %d gain: %d noise: %d err: %d err_fcs: %d err_a1: %d gooddata: %d, freq: %d"
               ,iVar15,iVar16,local_a8,iVar17,iVar18);
    iVar11 = 0;
    for (iVar20 = 0; iVar20 != iVar14; iVar20 = iVar20 + 1) {
      puVar10 = (undefined4 *)((int)local_90 + iVar11);
      puVar9 = (undefined4 *)((int)local_98 + iVar11);
      puVar8 = (undefined4 *)((int)local_84 + iVar11);
      puVar13 = (undefined4 *)((int)local_78 + iVar11);
      iVar11 = iVar11 + 4;
      phy_printf("err=0x%x,t=%d,gain=%d,dt=%d;#",*puVar13,*puVar8,*puVar9,*puVar10);
    }
    pcVar4 = "print done!\n";
  }
  phy_printf(pcVar4);
  return;
}

