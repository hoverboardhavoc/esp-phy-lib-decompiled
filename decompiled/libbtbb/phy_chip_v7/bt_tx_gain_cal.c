/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> bt_tx_gain_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_tx_gain_cal(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  char cVar18;
  undefined1 *puVar19;
  char cVar20;
  bool bVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  char cVar26;
  char cVar27;
  ushort uVar28;
  ushort uVar29;
  
  if (-1 < (int)(chip7_sleep_params._0_4_ << 0x10)) {
    bt_tx_pwctrl_init();
    cVar1 = chip7_sleep_params[0x8a];
    cVar20 = chip7_sleep_params[0x8a] + -6;
    uVar9 = tx_rf_ana_gain & 0xf0;
    uVar10 = tx_rf_ana_gain & 0xf0;
    uVar11 = tx_rf_ana_gain & 0xf0;
    uVar12 = tx_rf_ana_gain & 0xf0;
    uVar23 = (ushort)chip7_sleep_params[0x7e];
    uVar15 = (ushort)chip7_sleep_params[0x7d];
    uVar16 = (ushort)chip7_sleep_params[0x7c];
    uVar29 = (ushort)chip7_sleep_params[0x7b];
    uVar28 = (ushort)chip7_sleep_params[0x7a];
    uVar22 = (ushort)chip7_sleep_params[0x79];
    uVar17 = (ushort)chip7_sleep_params[0x78];
    uVar24 = (ushort)chip7_sleep_params[0x7f];
    uVar25 = tx_rf_ana_gain & 0xf0;
    uVar13 = tx_rf_ana_gain & 0xf0;
    cVar26 = chip7_sleep_params[0x8a] + '\x06';
    cVar27 = chip7_sleep_params[0x8a] + '\x04';
    puVar19 = chip7_sleep_params;
    bVar21 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    uVar14 = tx_rf_ana_gain & 0xf0;
    cVar18 = chip7_sleep_params[0x8a] + '\x02';
    do {
      switch((uint)(puVar19 + -0x16021) & 0xff) {
      case 0:
        bVar8 = true;
        chip7_sleep_params[0x82] = cVar20;
        uVar22 = uVar25;
        break;
      case 1:
        bVar7 = true;
        chip7_sleep_params[0x83] = cVar27;
        uVar28 = uVar9 | 1;
        break;
      case 2:
        bVar6 = true;
        chip7_sleep_params[0x84] = cVar27;
        uVar29 = uVar10 | 2;
        break;
      case 3:
        bVar5 = true;
        chip7_sleep_params[0x85] = cVar1;
        uVar16 = uVar11 | 3;
        break;
      case 4:
        bVar4 = true;
        chip7_sleep_params[0x86] = cVar26;
        uVar15 = uVar12 | 9;
        break;
      case 5:
        bVar3 = true;
        chip7_sleep_params[0x87] = cVar1;
        uVar23 = uVar13 | 7;
        break;
      case 6:
        bVar2 = true;
        chip7_sleep_params[0x88] = cVar18;
        uVar24 = uVar14 | 0xb;
        break;
      default:
        bVar21 = true;
        chip7_sleep_params[0x81] = cVar26;
        uVar17 = uVar25;
      }
      if ((char)puVar19[0x81] < '\0') {
        puVar19[0x81] = 0;
      }
      else if ('@' < (char)puVar19[0x81]) {
        puVar19[0x81] = 0x40;
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != chip7_sleep_params);
    if (bVar2) {
      chip7_sleep_params[0x7f] = (byte)uVar24;
    }
    if (bVar3) {
      chip7_sleep_params[0x7e] = (byte)uVar23;
    }
    if (bVar4) {
      chip7_sleep_params[0x7d] = (byte)uVar15;
    }
    if (bVar5) {
      chip7_sleep_params[0x7c] = (byte)uVar16;
    }
    if (bVar6) {
      chip7_sleep_params[0x7b] = (byte)uVar29;
    }
    if (bVar7) {
      chip7_sleep_params[0x7a] = (byte)uVar28;
    }
    if (bVar8) {
      chip7_sleep_params[0x79] = (byte)uVar22;
    }
    if (bVar21) {
      chip7_sleep_params[0x78] = (byte)uVar17;
    }
    bt_correct_bbgain(chip7_sleep_params,chip7_sleep_params);
    chip7_sleep_params._0_4_ = chip7_sleep_params._0_4_ | 0x8000;
  }
  return;
}

