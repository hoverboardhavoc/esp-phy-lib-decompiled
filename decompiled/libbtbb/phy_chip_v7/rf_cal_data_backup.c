/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> rf_cal_data_backup
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_cal_data_backup(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0x55;
  if (phy_freq_wifi_only != '\0') {
    iVar8 = 0xe;
  }
  uVar2 = 0;
  do {
    uVar6 = uVar2 & 0xff;
    if ((phy_freq_wifi_only != '\0') && (uVar6 = 0x54, (int)uVar2 < 0xd)) {
      uVar6 = uVar2 * 5 + 0xc & 0xff;
    }
    iVar7 = 0;
    puVar1 = (undefined1 *)((uVar6 + 1) * 0xc + param_1);
    do {
      uVar3 = fpga_mem_rd(0x6000e0c4);
      fpga_mem_wr(0x6000e0c4,uVar3 & 0xffffff00 | (uVar6 * 3 & 0xff) + iVar7);
      iVar4 = fpga_mem_rd(0x6000e0c0);
      uVar3 = 0;
      puVar5 = puVar1;
      do {
        *puVar5 = (char)(iVar4 >> (uVar3 & 0x1f));
        uVar3 = uVar3 + 8;
        puVar5 = puVar5 + 1;
      } while (uVar3 != 0x20);
      iVar7 = iVar7 + 1;
      puVar1 = puVar1 + 4;
    } while (iVar7 != 3);
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < iVar8);
  puVar1 = chip7_sleep_params;
  iVar8 = 0x40c;
  do {
    uVar2 = 0;
    puVar5 = (undefined1 *)(param_1 + iVar8);
    do {
      *puVar5 = (char)(*(int *)puVar1 >> (uVar2 & 0x1f));
      uVar2 = uVar2 + 8;
      puVar5 = puVar5 + 1;
    } while (uVar2 != 0x20);
    iVar8 = iVar8 + 4;
    puVar1 = (undefined1 *)((int)puVar1 + 4);
  } while (iVar8 != 0x4d0);
  puVar1 = phy_rx_gain_gen;
  iVar8 = 0x4d0;
  do {
    uVar2 = 0;
    puVar5 = (undefined1 *)(iVar8 + param_1);
    do {
      *puVar5 = (char)(*(uint *)puVar1 >> (uVar2 & 0x1f));
      uVar2 = uVar2 + 8;
      puVar5 = puVar5 + 1;
    } while (uVar2 != 0x20);
    iVar8 = iVar8 + 4;
    puVar1 = (undefined1 *)((int)puVar1 + 4);
  } while (iVar8 != 0x638);
  puVar1 = phy_rxrf_dc;
  iVar8 = 0x638;
  do {
    uVar2 = 0;
    puVar5 = (undefined1 *)(param_1 + iVar8);
    do {
      *puVar5 = (char)(*(uint *)puVar1 >> (uVar2 & 0x1f));
      uVar2 = uVar2 + 8;
      puVar5 = puVar5 + 1;
    } while (uVar2 != 0x20);
    iVar8 = iVar8 + 4;
    puVar1 = (undefined1 *)((int)puVar1 + 4);
  } while (iVar8 != 0x6cc);
  puVar1 = phy_rxbb_dc;
  iVar8 = 0x6cc;
  do {
    uVar2 = 0;
    puVar5 = (undefined1 *)(param_1 + iVar8);
    do {
      *puVar5 = (char)(*(uint *)puVar1 >> (uVar2 & 0x1f));
      uVar2 = uVar2 + 8;
      puVar5 = puVar5 + 1;
    } while (uVar2 != 0x20);
    iVar8 = iVar8 + 4;
    puVar1 = (undefined1 *)((int)puVar1 + 4);
  } while (iVar8 != 0x6e4);
  return;
}

