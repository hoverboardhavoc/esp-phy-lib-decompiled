/*
 * Last changed at upstream commit a8e8b9532e2874ac167d4ade7808fda70fe05820
 * https://github.com/espressif/esp-phy-lib/commit/a8e8b9532e2874ac167d4ade7808fda70fe05820
 * Upstream date: 2023-11-01 14:13:34 +0800
 * Upstream subject: h2 libphy fix ble track
 * Source: librftest -> phy_test.o -> esp_phy_freq_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int esp_phy_freq_cal(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar5 = -100;
  iVar1 = 0;
  uVar8 = 0;
  iVar7 = 0;
  iVar6 = 10;
  while( true ) {
    iVar9 = 0x15;
    iVar2 = 0;
    do {
      iVar4 = (iVar2 * iVar6 + iVar5) * 0x10000 >> 0x10;
      set_rf_freq_offset(0,param_1,iVar4);
      uVar3 = get_signal_pwr();
      if ((iVar2 == 0) || (uVar8 < uVar3)) {
        iVar1 = iVar4;
        uVar8 = uVar3;
      }
      if (param_2 != 0) {
        phy_printf("%d,%d,%d,%d,%d\n",iVar7,iVar2,iVar1);
      }
      iVar9 = iVar9 + -1;
      iVar2 = iVar2 + 1;
    } while (iVar9 != 0);
    iVar5 = (iVar1 + -10) * 0x10000 >> 0x10;
    iVar6 = 1;
    if (iVar7 == 1) break;
    iVar7 = 1;
  }
  set_rf_freq_offset(0,param_1,iVar1);
  return iVar1;
}

