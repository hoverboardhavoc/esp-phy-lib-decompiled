/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_rx_cal.o -> pbus_rx_dco_cal_1step
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pbus_rx_dco_cal_1step(undefined4 param_1,ushort *param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  uVar9 = param_2[1];
  uVar7 = *param_2;
  iStack_58 = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  iStack_4c = 0;
  iStack_48 = 0;
  uStack_44 = 0;
  iVar12 = 0;
  do {
    iVar11 = (int)(short)uVar7;
    iVar10 = (int)(short)uVar9;
    *param_2 = uVar7;
    param_2[1] = uVar9;
    pbus_force_test(2,1,(uint)uVar7);
    pbus_force_test(2,2,param_2[1]);
    pbus_force_test(1,2,0x1c);
    ets_delay_us(1);
    rxdc_est_min(param_1,1,&iStack_58,&uStack_5a);
    pbus_force_test(1,2,0xdc);
    ets_delay_us(1);
    rxdc_est_min(param_1,1,&iStack_4c,&uStack_59);
    iVar8 = 0;
    *param_3 = iStack_4c - iStack_58;
    param_3[1] = iStack_48 - iStack_54;
    iVar1 = abs_temp();
    if (0 < iVar1) {
      iVar8 = (int)(short)*param_3;
    }
    iVar1 = abs_temp(param_3[1]);
    if (iVar1 < 1) {
      if (iVar8 == 0) {
        iVar1 = 0;
        goto _L109;
      }
_L110:
      iVar1 = 1;
      if (param_3[1] < 1) {
        iVar1 = -1;
      }
    }
    else {
      iVar1 = (int)(short)param_3[1];
      if (iVar8 == 0) {
_L109:
        iVar8 = 1;
        if (*param_3 < 1) {
          iVar8 = -1;
        }
      }
      if (iVar1 == 0) goto _L110;
    }
    if (param_4 != 0) {
      uVar2 = pbus_rd(0,1);
      uVar3 = pbus_rd(1,2);
      uVar4 = pbus_rd(2,1);
      uVar5 = pbus_rd(2,2);
      phy_printf("rfrx=0x%x,bb2=0x%x; i=%d, dco: %d,%d; res dc: %d,%d; %d,%d; %d,%d;,scale=%d,%d,num=%d,%d\n"
                 ,uVar2,uVar3,iVar12,uVar4,uVar5,iStack_58,iStack_54);
    }
    iVar6 = abs_temp(*param_3);
    if ((iVar6 < 2) && (iVar6 = abs_temp(param_3[1]), iVar6 < 2)) break;
    iVar6 = abs_temp(*param_3);
    if (1 < iVar6) {
      iVar11 = (int)(((uint)uVar7 - iVar8) * 0x10000) >> 0x10;
    }
    iVar8 = abs_temp(param_3[1]);
    if (1 < iVar8) {
      iVar10 = (iVar10 - iVar1) * 0x10000 >> 0x10;
    }
    if (0xff < iVar11) {
      iVar11 = 0xff;
    }
    uVar7 = (ushort)iVar11;
    if (iVar11 << 0x10 < 0) {
      uVar7 = 0;
    }
    if (0xff < iVar10) {
      iVar10 = 0xff;
    }
    uVar9 = (ushort)iVar10;
    if (iVar10 << 0x10 < 0) {
      uVar9 = 0;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 8);
  if ((short)*param_2 < 0) {
    *param_2 = 0;
  }
  else if (0xfe < (short)*param_2) {
    *param_2 = 0xff;
  }
  if ((short)param_2[1] < 0) {
    param_2[1] = 0;
  }
  else if (0xfe < (short)param_2[1]) {
    param_2[1] = 0xff;
  }
  pbus_force_test(2,1,*param_2);
  pbus_force_test(2,2,param_2[1]);
  return;
}

