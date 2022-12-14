/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_rx_cal.o -> rxiq_cover_mg_mp_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rxiq_cover_mg_mp_new(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte bStack_24;
  byte bStack_23;
  
  iVar5 = 2;
  iVar1 = 0;
  iVar4 = 0;
  while( true ) {
    iVar4 = rxiq_set_reg(iVar4,1);
    iVar1 = rxiq_set_reg(iVar1,0);
    rxiq_get_mis(param_1,&bStack_24,param_4);
    iVar4 = (int)(((uint)bStack_24 + iVar4) * 0x1000000) >> 0x18;
    iVar1 = (int)((iVar1 - (uint)bStack_23) * 0x1000000) >> 0x18;
    if (iVar5 == 1) break;
    iVar5 = 1;
  }
  cVar2 = get_data_sat(0x1f,0xffffffe1);
  cVar3 = get_data_sat(iVar1,0x3f,0xffffffc1);
  rxiq_set_reg((int)cVar2,1);
  rxiq_set_reg((int)cVar3,0);
  *param_2 = cVar2;
  *param_3 = cVar3;
  return;
}

