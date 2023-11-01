/*
 * Last changed at upstream commit a8e8b9532e2874ac167d4ade7808fda70fe05820
 * https://github.com/espressif/esp-phy-lib/commit/a8e8b9532e2874ac167d4ade7808fda70fe05820
 * Upstream date: 2023-11-01 14:13:34 +0800
 * Upstream subject: h2 libphy fix ble track
 * Source: librftest -> phy_test.o -> rxiq_cal_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint rxiq_cal_test(undefined1 *param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  
  set_txclk_en(1);
  set_rxclk_en(1);
  iVar9 = 0;
  uVar7 = 0;
  iVar6 = 0;
  iVar4 = 0;
_L57:
  bVar1 = false;
  iVar11 = iVar4;
  do {
    bVar12 = 0;
    iVar5 = iVar6;
    uVar8 = uVar7;
    iVar10 = iVar11;
    do {
      bVar2 = bVar12;
      if (bVar1) {
        bVar2 = ~bVar12;
      }
      iVar3 = (int)(char)bVar2;
      iVar6 = iVar3;
      if (iVar9 == 0) {
        iVar4 = iVar3;
        iVar6 = iVar5;
      }
      force_iq_set(1,0,iVar4,iVar6);
      ets_delay_us(1);
      uVar7 = get_rxiq_pwr();
      if (param_2 != 0) {
        phy_printf("%d,%d,%d,%d,%d\n",iVar9,iVar3,iVar10,uVar7,uVar8);
      }
      iVar11 = iVar3;
      if (bVar1 || bVar12 != 0) {
        iVar11 = iVar10;
        if (uVar7 < uVar8) {
          uVar8 = uVar7;
          iVar11 = iVar3;
        }
        uVar7 = uVar8;
        if ((bVar12 != 0) && (iVar5 = abs_temp(iVar11 - iVar3), 2 < iVar5)) break;
      }
      bVar12 = bVar12 + 1;
      iVar5 = iVar6;
      uVar8 = uVar7;
      iVar10 = iVar11;
    } while (bVar12 != 0x20);
    if (bVar1) break;
    bVar1 = true;
  } while( true );
  if (iVar9 != 0) {
    force_iq_set(1,0,iVar4,iVar11);
    *param_1 = (char)iVar4;
    param_1[1] = (char)iVar11;
    if (param_2 != 0) {
      phy_printf("%d,%d\n",iVar4,iVar11);
    }
    return uVar7;
  }
  iVar9 = 1;
  iVar4 = iVar11;
  goto _L57;
}

