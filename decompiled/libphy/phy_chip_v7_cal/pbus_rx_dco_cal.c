/*
 * Last changed at upstream commit 4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * https://github.com/espressif/esp-phy-lib/commit/4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * Upstream date: 2022-01-04 15:41:20 +0800
 * Upstream subject: fix the bug that phy libs still have ets_printf
 * Source: libphy -> phy_chip_v7_cal.o -> pbus_rx_dco_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pbus_rx_dco_cal(undefined4 param_1,short *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uStack_5c;
  uint uStack_58;
  byte abStack_50 [28];
  
  memcpy(abStack_50,&_LANCHOR1,0x10);
  uVar4 = pbus_rd(1,2);
  uVar7 = uVar4 >> 2 & 0xf;
  iVar10 = 4;
  if ((uVar4 >> 2 & 8) == 0) {
    iVar10 = 2;
  }
  uVar11 = (uint)*param_2;
  uVar9 = (uint)param_2[1];
  bVar1 = abStack_50[uVar7];
  iVar3 = 0;
  do {
    pbus_force_test(2,1,uVar11 & 0xffff);
    pbus_force_test(2,2,uVar9 & 0xffff);
    ets_delay_us(2);
    dc_iq_est(1,param_1,&uStack_5c);
    iVar2 = 0;
    if (iVar10 < (int)(((int)uStack_5c >> 0x1f ^ uStack_5c) - ((int)uStack_5c >> 0x1f))) {
      iVar2 = (int)(short)((int)(bVar1 * uStack_5c) >> 5);
    }
    if (iVar10 < (int)(((int)uStack_58 >> 0x1f ^ uStack_58) - ((int)uStack_58 >> 0x1f))) {
      iVar8 = (int)(short)((int)(bVar1 * uStack_58) >> 5);
      if ((iVar2 == 0) && (iVar2 = 1, (int)uStack_5c < 1)) {
_L162:
        iVar2 = -1;
      }
      if (iVar8 == 0) goto _L161;
    }
    else {
      if (iVar2 == 0) {
        iVar2 = 1;
        iVar8 = 0;
        if ((int)uStack_5c < 1) goto _L162;
      }
_L161:
      iVar8 = 1;
      if ((int)uStack_58 < 1) {
        iVar8 = -1;
      }
    }
    if (param_3 != 0) {
      phy_printf("%d,bb2=0x%03x,vga=%02d,lpf=%d,dco=%d,%d,est=%d,%d,scale=%d,%d\n",iVar3,uVar4,uVar7
                 ,uVar4 >> 6 & 3,uVar11,uVar9);
    }
    iVar2 = get_data_sat(iVar2,10,0xfffffff6);
    iVar8 = get_data_sat(iVar8,10,0xfffffff6);
    uVar5 = (int)uStack_58 >> 0x1f;
    if (iVar10 < (int)((uStack_5c ^ (int)uStack_5c >> 0x1f) - ((int)uStack_5c >> 0x1f))) {
      uVar11 = (int)(((uVar11 & 0xffff) - iVar2) * 0x10000) >> 0x10;
      if (iVar10 < (int)((uStack_58 ^ uVar5) - uVar5)) goto _L154;
    }
    else {
      if ((int)((uStack_58 ^ uVar5) - uVar5) <= iVar10) break;
_L154:
      uVar9 = (int)(((uVar9 & 0xffff) - iVar8) * 0x10000) >> 0x10;
    }
    if (0xff < (int)uVar11) {
      uVar11 = 0xff;
    }
    sVar6 = (short)uVar11;
    if ((int)(uVar11 << 0x10) < 0) {
      sVar6 = 0;
    }
    uVar11 = (uint)sVar6;
    if (0xff < (int)uVar9) {
      uVar9 = 0xff;
    }
    sVar6 = (short)uVar9;
    if ((int)(uVar9 << 0x10) < 0) {
      sVar6 = 0;
    }
    iVar3 = iVar3 + 1;
    uVar9 = (uint)sVar6;
  } while (iVar3 != 0x18);
  *param_2 = (short)uVar11;
  param_2[1] = (short)uVar9;
  return;
}

