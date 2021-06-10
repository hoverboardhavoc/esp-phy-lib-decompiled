/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> set_rx_gain_cal_dc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_rx_gain_cal_dc(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  short *psVar9;
  char cVar10;
  ushort *puVar11;
  ushort *puVar12;
  char cVar13;
  ushort *puVar14;
  ushort *puStack_70;
  short sStack_50;
  short sStack_4e;
  undefined1 auStack_4c [24];
  
  set_rxclk_en(1);
  chip_v7_set_chan_ana(0xe);
  if (param_2 == 2) {
    uVar1 = 0x17;
_L266:
    puVar12 = &bt_rx_gain_swp;
    if (param_1 != 0) goto _L268;
  }
  else {
    uVar1 = 0xc;
    if (param_1 != 0) {
      uVar1 = 0;
      goto _L266;
    }
  }
  puVar12 = (ushort *)rf_gain_swp_wifi;
_L268:
  puStack_70 = &rfbb_gain_swp;
  uVar2 = 0;
  do {
    if (param_3 <= param_2) {
      set_rxclk_en(0);
      return;
    }
    uVar8 = param_2 & 0xfd;
    if (uVar8 == 0) {
      pbus_force_test(2,2,0x100);
      pbus_force_test(3,2,0x100);
      iVar5 = param_6;
      puVar11 = puVar12;
      if (param_2 != 0) goto _L272;
_L271:
      cVar10 = '\x01';
    }
    else {
      pbus_force_test(2,1,*(ushort *)(param_4 + 0x32) & 0x1ff);
      pbus_force_test(3,1,*(uint *)(param_4 + 0x30) & 0x1ff);
_L272:
      if (param_2 == 1) {
        iVar5 = param_8;
        puVar11 = (ushort *)bb_gain_swp;
        goto _L271;
      }
      iVar5 = param_7;
      puVar11 = puStack_70;
      if (param_2 != 2) goto _L271;
      cVar10 = '\x0e';
    }
    psVar9 = (short *)(param_4 + 0x58);
    cVar13 = '\0';
    do {
      cVar13 = cVar13 + '\x01';
      sVar3 = 0x100;
      if (param_2 == 2) {
        chip_v7_set_chan_ana((int)cVar13);
        sVar3 = psVar9[1];
      }
      sStack_4e = 0x100;
      puVar14 = puVar11;
      sStack_50 = sVar3;
      if (param_2 == 2) {
        sStack_4e = *psVar9;
      }
      for (; puVar14 != puVar11 + iVar5; puVar14 = puVar14 + 1) {
        if (param_1 == 0) {
          uVar4 = *puVar14 & 0x78;
          uVar7 = 5;
          if ((((uVar4 != 0x18) && (uVar4 != 0x60)) && (uVar7 = 4, uVar4 != 8)) && (uVar4 != 0x20))
          {
            uVar7 = 3;
          }
          uVar6 = 0x28;
          if (uVar8 == 0) {
            uVar6 = 0x10;
          }
        }
        else {
          uVar7 = 5;
          uVar6 = 0x28;
        }
        pbus_rx_dco_cal_1step(param_1,param_2,4000,&sStack_50,uVar6,uVar7,auStack_4c);
        if (uVar8 == 0) {
          *(int *)(uVar1 * 4 + param_4) = (int)sStack_50 << 0x10 | (int)sStack_4e;
          uVar1 = uVar1 + 1 & 0xff;
        }
        else {
          *(int *)(uVar2 * 4 + param_5) = (int)sStack_50 << 0x10 | (int)sStack_4e;
          uVar2 = uVar2 + 1 & 0xff;
        }
      }
      psVar9 = psVar9 + 2;
    } while (cVar10 != cVar13);
    param_2 = param_2 + 1 & 0xff;
  } while( true );
}

