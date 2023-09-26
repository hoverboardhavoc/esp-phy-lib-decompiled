/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  int iVar17;
  undefined4 local_2010 [500];
  undefined4 local_1840 [500];
  undefined4 local_1070 [500];
  undefined4 local_8a0 [501];
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined **local_bc;
  undefined **local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined4 *local_a0;
  int local_9c;
  int local_98;
  undefined4 *local_94;
  int local_90;
  int local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  undefined2 local_48 [10];
  
  local_b0 = param_1 & 0xffff;
  local_b4 = param_1 >> 0x11 & 1;
  local_54 = param_1 >> 0x18;
  iVar15 = (local_54 - 0x100) * 10;
  local_84 = local_8a0;
  local_88 = local_1070;
  local_94 = local_1840;
  local_a0 = local_2010;
  iVar9 = 0;
  do {
    *(undefined4 *)((int)local_84 + iVar9) = 0;
    *(undefined4 *)((int)local_88 + iVar9) = 0;
    *(undefined4 *)((int)local_94 + iVar9) = 0;
    *(undefined4 *)((int)local_a0 + iVar9) = 0;
    iVar9 = iVar9 + 4;
  } while (iVar9 != 2000);
  local_48[0] = 0;
  _DAT_600a4800 = 0;
  _DAT_600ad004 = 0;
  iVar17 = 0;
  iVar14 = 0;
  _DAT_600a4c4c = _DAT_600a4c4c | 0xc;
  iVar4 = read_hw_noisefloor();
  iVar2 = 0;
  iVar9 = 0;
  iVar13 = 0;
  uVar12 = 0;
  local_a4 = (iVar4 * 10) / 4;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  iVar4 = 0;
  local_9c = 0;
  pcVar16 = (char *)((_DAT_600a407c & 0xff) +
                    *(int *)(_DAT_600a4090 + 4 + (_DAT_600a4c70 & 0xfff00000)));
  local_68 = -0x500;
  local_a8 = iVar15 + -0x2d;
  local_ac = iVar15 + -0x23;
  local_b8 = &_L94;
  local_98 = 0;
  local_90 = 0;
  local_8c = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_bc = &_L84;
  do {
    flash_test_run(0x20);
    if ((_DAT_600a4c48 & 4) == 0) {
      if ((_DAT_600a4c48 & 8) != 0) {
        local_60 = _DAT_600a706c & 0xff;
        _DAT_600a4c4c = _DAT_600a4c4c | 8;
        if (iVar14 < 5) {
          ets_delay_us(0x1e);
        }
      }
    }
    else {
      uVar10 = _DAT_600a40a8 & 0xff;
      if (iVar13 < 500) {
        local_84[iVar13] = uVar10;
        iVar5 = _DAT_600ad000;
        local_88[iVar13] = _DAT_600ad000;
        local_a0[iVar13] = local_60;
        local_94[iVar13] = iVar5 - iVar9;
        if ((uVar10 != 0) && (uVar10 != 0x41)) {
          iVar5 = iVar9;
        }
        iVar9 = iVar5;
        iVar13 = iVar13 + 1;
      }
      iVar5 = _DAT_600ad000;
      if (uVar10 == 0) {
        uVar10 = _DAT_600a40ac >> 0x16 & 3;
        if ((_DAT_600a40b0 & 0x80) == 0) {
          cVar1 = *pcVar16;
        }
        else {
          cVar1 = pcVar16[0x15];
        }
        if (uVar10 == 2) {
          if ((pcVar16[0x27] & 0xdU) == 4) {
            uVar10 = *(int *)(pcVar16 + 4) >> 3 & 0xfU | 0x20;
            uVar12 = uVar10;
          }
          else {
            uVar10 = uVar12;
            if ((pcVar16[0x27] & 0xfU) == 5) {
              uVar10 = (byte)pcVar16[0x4a] & 0x1f;
              uVar12 = ((int)(uint)(byte)pcVar16[0x4a] >> 5) - 1;
              if ((int)(0x20 - uVar10) < 0x15) {
                if (uVar12 < 7) {
                    /* WARNING: Could not recover jumptable at 0x000109c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)local_b8[uVar12])(local_b8[uVar12]);
                  return;
                }
                uVar12 = (*(uint *)(pcVar16 + 0x28) >> uVar10) +
                         (*(int *)(pcVar16 + 0x2c) << (0x20 - uVar10 & 0x1f));
              }
              else {
                if (uVar12 < 7) {
                    /* WARNING: Could not recover jumptable at 0x0001096e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)local_bc[uVar12])(local_bc[uVar12]);
                  return;
                }
                uVar12 = *(uint *)(pcVar16 + 0x28) >> uVar10;
              }
              uVar10 = (int)(uVar12 & 0x1fffff) >> 0xf & 0xfU | 0x20;
              uVar12 = uVar10;
            }
          }
        }
        else if (uVar10 == 1) {
          uVar10 = _DAT_600a40b0 & 0x2f | 0x10;
        }
        else {
          uVar10 = _DAT_600a40ac >> 0x10 & 0x1f;
        }
        local_c0 = local_c0 + 1;
        if (uVar10 == local_b0) {
          local_cc = cVar1 * 10;
          local_58 = local_58 + local_60;
          iVar4 = iVar4 + 1;
          local_5c = local_5c + local_cc;
          if (local_cc < local_64) {
            local_64 = local_cc;
          }
          if (local_68 < local_cc) {
            local_68 = local_cc;
          }
          uVar3 = get_rx_freq_local();
          local_48[iVar2] = uVar3;
          iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
          if (iVar2 == 4) {
            iVar2 = 0;
          }
          iVar9 = iVar5;
          if ((local_cc < local_a8) && (iVar15 + -0x37 <= local_cc)) {
            local_6c = local_6c + 1;
          }
          else if ((local_cc < local_ac) && (local_a8 <= local_cc)) {
            local_70 = local_70 + 1;
          }
          else if ((local_cc < iVar15 + -0x19) && (local_ac <= local_cc)) {
            local_74 = local_74 + 1;
          }
          else if ((local_cc < iVar15 + -0xf) && (iVar15 + -0x19 <= local_cc)) {
            local_78 = local_78 + 1;
          }
          else if ((local_cc < iVar15 + -5) && (iVar15 + -0xf <= local_cc)) {
            local_7c = local_7c + 1;
          }
          else if ((iVar15 + 4 < local_cc) || (local_cc < iVar15 + -5)) {
            if ((iVar15 + 0xe < local_cc) || (local_cc <= iVar15 + 4)) {
              if ((iVar15 + 0x18 < local_cc) || (local_cc <= iVar15 + 0xe)) {
                if ((iVar15 + 0x22 < local_cc) || (local_cc <= iVar15 + 0x18)) {
                  if ((iVar15 + 0x2c < local_cc) || (local_cc <= iVar15 + 0x22)) {
                    if ((local_cc <= iVar15 + 0x36) && (iVar15 + 0x2c < local_cc)) {
                      local_9c = local_9c + 1;
                    }
                  }
                  else {
                    local_98 = local_98 + 1;
                  }
                }
                else {
                  local_90 = local_90 + 1;
                }
              }
              else {
                local_8c = local_8c + 1;
              }
            }
            else {
              iVar17 = iVar17 + 1;
            }
          }
          else {
            local_80 = local_80 + 1;
          }
        }
      }
      else {
        local_c4 = local_c4 + 1;
        if ((uVar10 != 0x80) && (uVar10 == 0x41)) {
          local_c8 = local_c8 + 1;
        }
        if ((local_54 == uVar10) && (iVar14 < 5)) {
          iVar14 = iVar14 + 1;
        }
      }
      _DAT_600a4c4c = _DAT_600a4c4c | 0xc;
    }
    iVar5 = GetStopCmd();
  } while (iVar5 != 0);
  _DAT_600a4c4c = _DAT_600a4c4c | 0xc;
  if (iVar4 == 0) {
    DAT_00012974 = 0;
    iVar9 = 0;
  }
  else {
    iVar9 = (local_58 * 10) / iVar4;
    DAT_00012974 = local_5c / iVar4;
  }
  esp_rx_valid = 1;
  DAT_00012978 = local_c0;
  esp_rx_result = iVar4;
  if (local_b4 == 0) {
    if (short_log_en == '\0') {
      phy_printf("Correct: %d Desired: %d RSSI: %d noise: %d gain: %d para1: %d para2: %d freq: %d "
                 ,iVar4,local_a4,iVar9);
    }
    else {
      phy_printf("rx_num: %d rx_rssi: %d\n",iVar4,DAT_00012974);
    }
    if (rssi_min_max_print != '\0') {
      phy_printf("rssi_min: %d rssi_max: %d",local_64,local_68);
    }
    if (local_54 != 0) {
      phy_printf("rssi_base_p5: %d rssi_base_p4: %d rssi_base_p3: %d rssi_base_p2: %d rssi_base_p1: %d rssi_base_n0: %d rssi_base_n1: %d rssi_base_n2: %d rssi_base_n3: %d rssi_base_n4: %d rssi_base_n5: %d "
                 ,local_6c,local_70,local_74,local_78,local_7c,local_80,iVar17);
    }
    pcVar16 = "\n";
  }
  else {
    phy_printf("Correct: %d Desired: %d RSSI: %d gain: %d noise: %d err: %d err_fcs: %d err_a1: %d gooddata: %d, freq: %d"
               ,iVar4,local_a4);
    iVar9 = 0;
    for (iVar15 = 0; iVar15 != iVar13; iVar15 = iVar15 + 1) {
      puVar8 = (undefined4 *)((int)local_94 + iVar9);
      puVar7 = (undefined4 *)((int)local_a0 + iVar9);
      puVar6 = (undefined4 *)((int)local_88 + iVar9);
      puVar11 = (undefined4 *)((int)local_84 + iVar9);
      iVar9 = iVar9 + 4;
      phy_printf("err=0x%x,t=%d,gain=%d,dt=%d;#",*puVar11,*puVar6,*puVar7,*puVar8);
    }
    pcVar16 = "print done!\n";
  }
  phy_printf(pcVar16);
  return;
}

