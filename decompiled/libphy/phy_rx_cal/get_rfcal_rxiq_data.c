/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_cal.o -> get_rfcal_rxiq_data
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
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cStack_34;
  char cStack_33;
  
  iVar9 = 0;
  iVar10 = 0;
  iVar8 = 0;
  iVar1 = 0;
  iVar3 = 0;
  while( true ) {
    rfcal_rxiq(0xe,param_1,param_2,&cStack_34,param_3);
    if (param_3 != 0) {
      phy_printf("%d_%d_%d\n",iVar8,(int)cStack_34,(int)cStack_33);
    }
    if (((iVar8 != 0) && (iVar4 = abs_temp(iVar10 - cStack_34), iVar4 < 2)) &&
       (iVar4 = abs_temp(iVar9 - cStack_33), iVar4 < 2)) break;
    iVar10 = (int)cStack_34;
    iVar9 = (int)cStack_33;
    iVar8 = iVar8 + 1;
    iVar3 = (iVar3 + iVar10) * 0x10000 >> 0x10;
    iVar1 = (iVar1 + iVar9) * 0x10000 >> 0x10;
    if (iVar8 == 4) {
      cVar2 = (char)(iVar3 + 2 >> 2);
      cVar6 = (char)(iVar1 + 2 >> 2);
_L47:
      if (cVar2 < -0x1f) {
        cVar2 = -0x1f;
      }
      uVar5 = (uint)cVar2;
      if (cVar6 < -0x1f) {
        cVar6 = -0x1f;
      }
      uVar7 = (uint)cVar6;
      if (0x1f < (int)uVar5) {
        uVar5 = 0x1f;
      }
      if (0x1f < (int)uVar7) {
        uVar7 = 0x1f;
      }
      return (uVar5 & 0x3f) << 6 | uVar7 & 0x3f;
    }
  }
  cVar2 = (char)(cStack_34 + iVar10 + 1 >> 1);
  cVar6 = (char)(cStack_33 + iVar9 + 1 >> 1);
  goto _L47;
}

