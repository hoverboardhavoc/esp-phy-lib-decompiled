/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> get_rfcal_rxiq_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint get_rfcal_rxiq_data(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cStack_34;
  char cStack_33;
  
  iVar12 = 0;
  iVar10 = 0;
  iVar11 = 0;
  iVar1 = 0;
  iVar3 = 0;
  do {
    rfcal_rxiq(0xe,param_1,param_2,&cStack_34,param_3);
    if (param_3 != 0) {
      ets_printf("%d_%d_%d\n",iVar12,(int)cStack_34,(int)cStack_33);
    }
    iVar8 = (int)cStack_34;
    iVar5 = (int)cStack_33;
    if (iVar12 != 0) {
      iVar4 = iVar3 - iVar8;
      if (iVar4 < 0) {
        iVar4 = iVar8 - iVar3;
      }
      if (iVar4 < 2) {
        iVar4 = iVar1 - iVar5;
        if (iVar4 < 0) {
          iVar4 = iVar5 - iVar1;
        }
        if (iVar4 < 2) {
          cVar2 = (char)(iVar3 + iVar8 + 1 >> 1);
          cVar7 = (char)(iVar1 + iVar5 + 1 >> 1);
          goto _L181;
        }
      }
    }
    iVar12 = iVar12 + 1;
    iVar11 = (iVar11 + iVar8) * 0x10000 >> 0x10;
    iVar10 = (iVar10 + iVar5) * 0x10000 >> 0x10;
    iVar1 = iVar5;
    iVar3 = iVar8;
    if (iVar12 == 4) {
      cVar2 = (char)(iVar11 + 2 >> 2);
      cVar7 = (char)(iVar10 + 2 >> 2);
_L181:
      if (cVar2 < -0xf) {
        cVar2 = -0xf;
      }
      uVar6 = (uint)cVar2;
      if (cVar7 < -0x1f) {
        cVar7 = -0x1f;
      }
      uVar9 = (uint)cVar7;
      if (0xf < (int)uVar6) {
        uVar6 = 0xf;
      }
      if (0x1f < (int)uVar9) {
        uVar9 = 0x1f;
      }
      return (uVar6 & 0x1f) << 6 | uVar9 & 0x3f;
    }
  } while( true );
}

