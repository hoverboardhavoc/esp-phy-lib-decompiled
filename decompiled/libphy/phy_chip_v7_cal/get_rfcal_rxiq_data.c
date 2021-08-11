/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> get_rfcal_rxiq_data
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
  uint uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
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
    iVar9 = (int)cStack_34;
    iVar7 = (int)cStack_33;
    if (iVar12 != 0) {
      iVar4 = iVar3 - iVar9;
      if (iVar4 < 0) {
        iVar4 = iVar9 - iVar3;
      }
      if (iVar4 < 2) {
        iVar4 = iVar1 - iVar7;
        if (iVar4 < 0) {
          iVar4 = iVar7 - iVar1;
        }
        if (iVar4 < 2) {
          cVar2 = (char)(iVar3 + iVar9 + 1 >> 1);
          cVar6 = (char)(iVar1 + iVar7 + 1 >> 1);
          goto _L118;
        }
      }
    }
    iVar12 = iVar12 + 1;
    iVar11 = (iVar11 + iVar9) * 0x10000 >> 0x10;
    iVar10 = (iVar10 + iVar7) * 0x10000 >> 0x10;
    iVar1 = iVar7;
    iVar3 = iVar9;
    if (iVar12 == 4) {
      cVar2 = (char)(iVar11 + 2 >> 2);
      cVar6 = (char)(iVar10 + 2 >> 2);
_L118:
      if (cVar2 < -0x1f) {
        cVar2 = -0x1f;
      }
      uVar5 = (uint)cVar2;
      if (cVar6 < -0x1f) {
        cVar6 = -0x1f;
      }
      uVar8 = (uint)cVar6;
      if (0x1f < (int)uVar5) {
        uVar5 = 0x1f;
      }
      if (0x1f < (int)uVar8) {
        uVar8 = 0x1f;
      }
      return (uVar5 & 0x3f) << 6 | uVar8 & 0x3f;
    }
  } while( true );
}

