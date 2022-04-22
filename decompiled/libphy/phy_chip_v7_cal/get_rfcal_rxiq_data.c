/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_cal.o -> get_rfcal_rxiq_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  char cStack_44;
  char cStack_43;
  
  iVar9 = 0;
  iVar10 = 0;
  iVar8 = 0;
  iVar1 = 0;
  iVar3 = 0;
  while( true ) {
    rfcal_rxiq(0xe,param_1,param_2,&cStack_44,param_3);
    if (param_3 != 0) {
      phy_printf("%d_%d_%d\n",iVar8,(int)cStack_44,(int)cStack_43);
    }
    if (((iVar8 != 0) &&
        (iVar4 = (**(code **)(_g_phyFuns + 0x100))
                           (iVar10 - cStack_44,*(code **)(_g_phyFuns + 0x100)), iVar4 < 2)) &&
       (iVar4 = (**(code **)(_g_phyFuns + 0x100))(iVar9 - cStack_43,*(code **)(_g_phyFuns + 0x100)),
       iVar4 < 2)) break;
    iVar10 = (int)cStack_44;
    iVar9 = (int)cStack_43;
    iVar8 = iVar8 + 1;
    iVar3 = (iVar3 + iVar10) * 0x10000 >> 0x10;
    iVar1 = (iVar1 + iVar9) * 0x10000 >> 0x10;
    if (iVar8 == 4) {
      cVar2 = (char)(iVar3 + 2 >> 2);
      cVar6 = (char)(iVar1 + 2 >> 2);
_L252:
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
  cVar2 = (char)(cStack_44 + iVar10 + 1 >> 1);
  cVar6 = (char)(cStack_43 + iVar9 + 1 >> 1);
  goto _L252;
}

