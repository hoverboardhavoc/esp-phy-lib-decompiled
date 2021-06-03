/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> rxiq_cover_mg_mp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rxiq_cover_mg_mp(uint param_1,char *param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bStack_34;
  byte bStack_33;
  
  iVar8 = 2;
  iVar1 = 0;
  iVar7 = 0;
  while( true ) {
    uVar2 = iVar1 * iVar1 + 0x80 >> 8 & 0xff;
    iVar7 = rxiq_set_reg((int)((iVar7 - uVar2) * 0x1000000) >> 0x18,1);
    iVar1 = rxiq_set_reg(iVar1,0);
    (**(code **)(_g_phyFuns + 0x104))
              (1,1 << (param_1 & 0x1f) & 0xffff,*(code **)(_g_phyFuns + 0x104));
    rxiq_get_mis(param_1,&bStack_34,param_4);
    uVar6 = (uint)bStack_33;
    uVar3 = (uint)bStack_34;
    (**(code **)(_g_phyFuns + 0x108))(*(code **)(_g_phyFuns + 0x108));
    iVar7 = (int)((uVar2 + iVar7 + uVar3) * 0x1000000) >> 0x18;
    iVar1 = (int)((iVar1 - uVar6) * 0x1000000) >> 0x18;
    if (iVar8 == 1) break;
    iVar8 = 1;
  }
  if (iVar7 < -0x1f) {
    iVar7 = -0x1f;
  }
  cVar4 = (char)iVar7;
  if ('\x1f' < cVar4) {
    cVar4 = '\x1f';
  }
  if (iVar1 < -0x1f) {
    iVar1 = -0x1f;
  }
  cVar5 = (char)iVar1;
  if ('\x1f' < cVar5) {
    cVar5 = '\x1f';
  }
  rxiq_set_reg((int)cVar4,1);
  rxiq_set_reg((int)cVar5,0);
  *param_2 = cVar4;
  *param_3 = cVar5;
  return;
}

