/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> txdc_cal_v70
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txdc_cal_v70(undefined2 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  pbus_force_test(2,2,0x100);
  pbus_force_test(3,2,0x100);
  iVar8 = 1;
  while( true ) {
    iVar6 = 0;
    iVar2 = 0;
    iVar10 = 0x7c;
    bVar7 = 0;
    uVar9 = 0x100;
    uVar1 = 0x100;
    do {
      uVar9 = uVar9 & 0xffff;
      pbus_force_test(3,iVar8,uVar9);
      uVar1 = uVar1 & 0xffff;
      pbus_force_test(2,iVar8,uVar1);
      ets_delay_us(2);
      uVar3 = i2c_to_apb_rd(0x6000e04c);
      i2c_to_apb_wr(0x6000e04c,uVar3 & 0xff000000 | 0x113cf1);
      uVar3 = i2c_to_apb_rd(0x6000e04c);
      i2c_to_apb_wr(0x6000e04c,uVar3 & 0xff000000 | 0x113cf3);
      do {
        uVar3 = i2c_to_apb_rd(0x6000e04c);
      } while ((uVar3 & 0x1000000) == 0);
      iVar4 = i2c_to_apb_rd(0x6000e04c);
      uVar3 = i2c_to_apb_rd(0x6000e04c);
      if (iVar4 < 0) {
        sVar5 = (short)(uVar1 - iVar10);
        if ((int)((uVar1 - iVar10) * 0x10000) < 0) {
          sVar5 = 0;
        }
      }
      else {
        sVar5 = (short)(uVar1 + iVar10);
        if (0x1ff < (int)((uVar1 + iVar10) * 0x10000) >> 0x10) {
          sVar5 = 0x1ff;
        }
      }
      uVar1 = (uint)sVar5;
      if ((uVar3 & 0x40000000) == 0) {
        sVar5 = (short)(iVar10 + uVar9);
        if (0x1ff < (int)((iVar10 + uVar9) * 0x10000) >> 0x10) {
          sVar5 = 0x1ff;
        }
      }
      else {
        sVar5 = (short)(uVar9 - iVar10);
        if ((int)((uVar9 - iVar10) * 0x10000) < 0) {
          sVar5 = 0;
        }
      }
      uVar9 = (uint)sVar5;
      if (iVar10 == 2) {
        iVar10 = 1;
      }
      else {
        iVar10 = (iVar10 >> 1) + 1;
      }
      if (7 < bVar7) {
        iVar2 = (int)((iVar2 + uVar1) * 0x10000) >> 0x10;
        iVar6 = (int)((iVar6 + uVar9) * 0x10000) >> 0x10;
      }
      bVar7 = bVar7 + 1;
    } while (bVar7 != 0xc);
    uVar9 = iVar6 + 2 >> 2;
    pbus_force_test(3,iVar8,uVar9 & 0xffff);
    uVar1 = iVar2 + 2 >> 2;
    pbus_force_test(2,iVar8,uVar1 & 0xffff);
    *param_1 = (short)uVar1;
    param_1[1] = (short)uVar9;
    param_1 = param_1 + 2;
    if (iVar8 == 2) break;
    iVar8 = 2;
  }
  uVar1 = i2c_to_apb_rd(0x6000e04c);
  i2c_to_apb_wr(0x6000e04c,uVar1 & 0xff000000 | 0x113cf0);
  return;
}

