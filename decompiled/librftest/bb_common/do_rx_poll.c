/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> do_rx_poll
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void do_rx_poll(uint param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
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
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  undefined4 *local_90;
  int local_8c;
  int local_88;
  undefined4 *local_84;
  int local_80;
  int local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  undefined2 local_48 [10];
  
  local_94 = param_1 & 0xffff;
  local_bc = param_1 >> 0x11 & 1;
  local_54 = param_1 >> 0x18;
  iVar15 = (local_54 - 0x100) * 10;
  local_74 = local_8a0;
  local_78 = local_1070;
  local_84 = local_1840;
  local_90 = local_2010;
  iVar11 = 0;
  do {
    *(undefined4 *)((int)local_74 + iVar11) = 0;
    *(undefined4 *)((int)local_78 + iVar11) = 0;
    *(undefined4 *)((int)local_84 + iVar11) = 0;
    *(undefined4 *)((int)local_90 + iVar11) = 0;
    iVar11 = iVar11 + 4;
  } while (iVar11 != 2000);
  local_48[0] = 0;
  DAT_60012b45 = 0;
  DAT_60012b46 = 0;
  DAT_60012b47 = 0;
  DAT_60012b48 = 0;
  iVar18 = 0;
  iVar17 = 0;
  iVar16 = 0;
  iVar3 = 0;
  DAT_60012f91 = DAT_60012f91 | 0xc;
  iVar14 = 0;
  iVar20 = -0x500;
  local_8c = 0;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_70 = 0;
  local_6c = 0;
  iVar19 = 0;
  iVar11 = 0;
  local_98 = (int)(((ushort)(CONCAT11(DAT_6001235e,DAT_6001235d) >> 5) | 0xfffffc00) * 10) / 4;
  iVar13 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_9c = iVar15 + -0x2d;
  local_68 = 0;
  local_a0 = iVar15 + -0x23;
  local_a4 = iVar15 + -0x19;
  local_a8 = iVar15 + -0xf;
  local_ac = iVar15 + -5;
  local_b0 = iVar15 + 4;
  local_b4 = iVar15 + 0xe;
  local_b8 = iVar15 + 0x18;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  do {
    flash_test_run(0x20);
    bVar1 = DAT_600123ed;
    if ((DAT_60012f8d & 4) == 0) {
      if ((DAT_60012f8d & 8) != 0) {
        local_60 = (uint)DAT_600123b1;
        DAT_60012f91 = DAT_60012f91 | 8;
        if (iVar14 < 5) {
          ets_delay_us(0x1e);
        }
      }
    }
    else {
      uVar5 = (uint)DAT_600123ed;
      if (iVar13 < 500) {
        local_74[iVar13] = uVar5;
        local_78[iVar13] = 100;
        local_90[iVar13] = local_60;
        local_84[iVar13] = 100 - iVar11;
        if ((bVar1 == 0) || (uVar5 == 0x41)) {
          iVar11 = 100;
        }
        iVar13 = iVar13 + 1;
      }
      if (bVar1 == 0) {
        uVar21 = (uint)DAT_600123f4;
        uVar5 = ((uint)DAT_600123f3 << 0x10) >> 0x16;
        if (uVar5 == 0) {
          uVar2 = DAT_600123f3 & 0x1f;
        }
        else {
          uVar2 = DAT_600123f5 & 0xf | 0x10;
        }
        if (0x7f < uVar21) {
          uVar21 = uVar21 - 0x100;
        }
        local_c4 = local_c4 + 1;
        if ((uVar5 << 4 | uVar2) == local_94) {
          local_d0 = uVar21 * 10;
          local_c0 = local_c0 + 1;
          local_58 = local_58 + local_60;
          local_5c = local_5c + local_d0;
          if (local_d0 < iVar19) {
            iVar19 = local_d0;
          }
          if (iVar20 < local_d0) {
            iVar20 = local_d0;
          }
          uVar4 = get_rx_freq_local();
          local_48[iVar3] = uVar4;
          iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
          if (iVar3 == 4) {
            iVar3 = 0;
          }
          if ((local_d0 < local_9c) && (iVar15 + -0x37 <= local_d0)) {
            local_64 = local_64 + 1;
          }
          else if ((local_d0 < local_a0) && (local_9c <= local_d0)) {
            local_68 = local_68 + 1;
          }
          else if ((local_d0 < local_a4) && (local_a0 <= local_d0)) {
            local_6c = local_6c + 1;
          }
          else if ((local_d0 < local_a8) && (local_a4 <= local_d0)) {
            local_70 = local_70 + 1;
          }
          else if ((local_d0 < local_ac) && (local_a8 <= local_d0)) {
            iVar16 = iVar16 + 1;
          }
          else if ((local_b0 < local_d0) || (local_d0 < local_ac)) {
            if ((local_b4 < local_d0) || (local_d0 <= local_b0)) {
              if ((local_b8 < local_d0) || (local_d0 <= local_b4)) {
                if ((iVar15 + 0x22 < local_d0) || (local_d0 <= local_b8)) {
                  if ((iVar15 + 0x2c < local_d0) || (local_d0 <= iVar15 + 0x22)) {
                    iVar11 = 100;
                    if ((local_d0 <= iVar15 + 0x36) && (iVar15 + 0x2c < local_d0)) {
                      local_8c = local_8c + 1;
                    }
                    goto _L50;
                  }
                  local_88 = local_88 + 1;
                }
                else {
                  local_80 = local_80 + 1;
                }
              }
              else {
                local_7c = local_7c + 1;
              }
            }
            else {
              iVar18 = iVar18 + 1;
            }
          }
          else {
            iVar17 = iVar17 + 1;
          }
          iVar11 = 100;
        }
      }
      else {
        local_c8 = local_c8 + 1;
        if ((uVar5 != 0x80) && (uVar5 == 0x41)) {
          if (DAT_600123f3 >> 6 == 0) {
            uVar21 = DAT_600123f3 & 0x1f;
          }
          else {
            uVar21 = DAT_600123f5 & 0xf | 0x10;
          }
          if (((uint)(DAT_600123f3 >> 6) << 4 | uVar21) == local_94) {
            local_cc = local_cc + 1;
          }
        }
        if ((local_54 == uVar5) && (iVar14 < 5)) {
          iVar14 = iVar14 + 1;
        }
      }
_L50:
      DAT_60012f91 = DAT_60012f91 | 0xc;
    }
    iVar6 = GetStopCmd();
    if (iVar6 == 0) {
      DAT_60012f91 = DAT_60012f91 | 0xc;
      if (local_c0 == 0) {
        iVar11 = 0;
        iVar15 = 0;
      }
      else {
        iVar15 = (local_58 * 10) / local_c0;
        iVar11 = local_5c / local_c0;
      }
      if (local_bc == 0) {
        phy_printf("Correct: %d Desired: %d RSSI: %d noise: %d gain: %d para1: %d para2: %d freq: %d "
                   ,iVar11,local_98,iVar15);
        if (rssi_min_max_print != '\0') {
          phy_printf("rssi_min: %d rssi_max: %d",iVar19,iVar20);
        }
        if (local_54 != 0) {
          phy_printf("rssi_base_p5: %d rssi_base_p4: %d rssi_base_p3: %d rssi_base_p2: %d rssi_base_p1: %d rssi_base_n0: %d rssi_base_n1: %d rssi_base_n2: %d rssi_base_n3: %d rssi_base_n4: %d rssi_base_n5: %d "
                     ,local_64,local_68,local_6c,local_70,iVar16,iVar17,iVar18);
        }
        pcVar7 = "\n";
      }
      else {
        phy_printf("Correct: %d Desired: %d RSSI: %d gain: %d noise: %d err: %d err_fcs: %d err_a1: %d gooddata: %d, freq: %d"
                   ,local_98);
        iVar11 = 0;
        for (iVar15 = 0; iVar15 != iVar13; iVar15 = iVar15 + 1) {
          puVar10 = (undefined4 *)((int)local_84 + iVar11);
          puVar9 = (undefined4 *)((int)local_90 + iVar11);
          puVar8 = (undefined4 *)((int)local_78 + iVar11);
          puVar12 = (undefined4 *)((int)local_74 + iVar11);
          iVar11 = iVar11 + 4;
          phy_printf("err=0x%x,t=%d,gain=%d,dt=%d;#",*puVar12,*puVar8,*puVar9,*puVar10);
        }
        pcVar7 = "print done!\n";
      }
      phy_printf(pcVar7);
      return;
    }
  } while( true );
}

