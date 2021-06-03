/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_ana.o -> get_rf_freq_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rf_freq_init(void)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort auStack_34 [2];
  byte bStack_30;
  byte bStack_2f;
  byte bStack_2e;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  if ((_DAT_0001212c & 0x20) == 0) {
    uVar4 = 0;
    sVar1 = 200;
    do {
      ram_write_pll_cap(sVar1);
      get_rf_freq_cap(uVar4 + 0x960 & 0xffff,0,&bStack_30,auStack_34);
      sVar1 = read_pll_cap();
      sVar1 = sVar1 + -3;
      uVar2 = (**(code **)(_g_phyFuns + 0x1ac))(100,1,4,*(code **)(_g_phyFuns + 0x1ac));
      iVar3 = (**(code **)(_g_phyFuns + 0x1ac))(100,1,7,*(code **)(_g_phyFuns + 0x1ac));
      uStack_2c = (uint)auStack_34[0];
      uStack_24 = uVar2 & 0xf0 | 1 | iVar3 << 8;
      uStack_28 = (uint)bStack_30 << 0x10 | (uint)bStack_2f << 8 | (uint)bStack_2e;
      uVar2 = uVar4 & 0xff;
      uVar4 = uVar4 + 1;
      wr_rf_freq_mem(uVar2,&uStack_2c);
    } while (uVar4 != 0x55);
    _DAT_0001212c = _DAT_0001212c | 0x20;
  }
  return;
}

