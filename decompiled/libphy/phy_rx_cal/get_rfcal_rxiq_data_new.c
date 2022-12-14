/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_rx_cal.o -> get_rfcal_rxiq_data_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint get_rfcal_rxiq_data_new(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cStack_34;
  char cStack_33;
  
  iVar7 = 0;
  iVar8 = 0;
  iVar6 = 0;
  iVar1 = 0;
  iVar2 = 0;
  while( true ) {
    rfcal_rxiq_new(0xe,param_1,param_2,&cStack_34,param_3);
    if (param_3 != 0) {
      phy_printf("%d_%d_%d\n",iVar6,(int)cStack_34,(int)cStack_33);
    }
    if (((iVar6 != 0) && (iVar5 = abs_temp(iVar8 - cStack_34), iVar5 < 2)) &&
       (iVar5 = abs_temp(iVar7 - cStack_33), iVar5 < 2)) break;
    iVar8 = (int)cStack_34;
    iVar7 = (int)cStack_33;
    iVar6 = iVar6 + 1;
    iVar2 = (iVar2 + iVar8) * 0x10000 >> 0x10;
    iVar1 = (iVar1 + iVar7) * 0x10000 >> 0x10;
    if (iVar6 == 4) {
      cVar3 = (char)(iVar2 + 2 >> 2);
      cVar4 = (char)(iVar1 + 2 >> 2);
_L22:
      cVar3 = get_data_sat((int)cVar3,0x1f,0xffffffe1);
      cVar4 = get_data_sat((int)cVar4,0x3f,0xffffffc1);
      return ((int)cVar4 | (int)cVar3 << 8) & 0xffff;
    }
  }
  cVar3 = (char)(cStack_34 + iVar8 + 1 >> 1);
  cVar4 = (char)(cStack_33 + iVar7 + 1 >> 1);
  goto _L22;
}

