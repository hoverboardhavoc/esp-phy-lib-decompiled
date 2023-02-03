/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_cal.o -> pbus_rx_dco_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pbus_rx_dco_cal(undefined4 param_1,short *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iStack_5c;
  int iStack_58;
  byte abStack_50 [28];
  
  memcpy(abStack_50,&_LANCHOR0,0x10);
  uVar4 = pbus_rd(1,2);
  uVar11 = uVar4 >> 2 & 0xf;
  iVar3 = 4;
  if ((uVar4 >> 2 & 8) == 0) {
    iVar3 = 2;
  }
  uVar8 = (uint)*param_2;
  uVar2 = (uint)param_2[1];
  bVar1 = abStack_50[uVar11];
  iVar9 = 0;
  do {
    pbus_force_test(2,1,uVar8 & 0xffff);
    pbus_force_test(2,2,uVar2 & 0xffff);
    ets_delay_us(2);
    dc_iq_est(1,param_1,&iStack_5c);
    iVar10 = 0;
    iVar5 = abs_temp(iStack_5c);
    if (iVar3 < iVar5) {
      iVar10 = (int)(short)((int)((uint)bVar1 * iStack_5c) >> 5);
    }
    iVar5 = abs_temp(iStack_58);
    if (iVar3 < iVar5) {
      iVar5 = (int)(short)((int)((uint)bVar1 * iStack_58) >> 5);
      if (iVar10 == 0) {
_L66:
        iVar10 = 1;
        if (iStack_5c < 1) {
          iVar10 = -1;
        }
      }
      if (iVar5 == 0) goto _L67;
    }
    else {
      if (iVar10 == 0) {
        iVar5 = 0;
        goto _L66;
      }
_L67:
      iVar5 = 1;
      if (iStack_58 < 1) {
        iVar5 = -1;
      }
    }
    if (param_3 != 0) {
      phy_printf("%d,bb2=0x%03x,vga=%02d,lpf=%d,dco=%d,%d,est=%d,%d,scale=%d,%d\n",iVar9,uVar4,
                 uVar11,uVar4 >> 6 & 3,uVar8,uVar2,iStack_5c);
    }
    iVar10 = get_data_sat(iVar10,10,0xfffffff6);
    iVar5 = get_data_sat(iVar5,10,0xfffffff6);
    iVar6 = abs_temp(iStack_5c);
    if ((iVar6 <= iVar3) && (iVar6 = abs_temp(iStack_58), iVar6 <= iVar3)) break;
    iVar6 = abs_temp(iStack_5c);
    if (iVar3 < iVar6) {
      uVar8 = (int)(((uVar8 & 0xffff) - iVar10) * 0x10000) >> 0x10;
    }
    iVar10 = abs_temp(iStack_58);
    if (iVar3 < iVar10) {
      uVar2 = (int)(((uVar2 & 0xffff) - iVar5) * 0x10000) >> 0x10;
    }
    if (0xff < (int)uVar8) {
      uVar8 = 0xff;
    }
    sVar7 = (short)uVar8;
    if ((int)(uVar8 << 0x10) < 0) {
      sVar7 = 0;
    }
    uVar8 = (uint)sVar7;
    if (0xff < (int)uVar2) {
      uVar2 = 0xff;
    }
    sVar7 = (short)uVar2;
    if ((int)(uVar2 << 0x10) < 0) {
      sVar7 = 0;
    }
    iVar9 = iVar9 + 1;
    uVar2 = (uint)sVar7;
  } while (iVar9 != 0x18);
  param_2[1] = (short)uVar2;
  *param_2 = (short)uVar8;
  return;
}

