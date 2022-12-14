/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_hw_freq.o -> get_rf_freq_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rf_freq_init_new(uint param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  uint uStack_4c;
  uint uStack_48;
  
  if ((_DAT_000110b8 & 0x20) == 0) {
    write_pll_cap(200);
    set_rfpll_freq(DAT_00011063,0x960,param_2,&bStack_54);
    iVar2 = read_pll_cap();
    iVar3 = (**(code **)(_g_phyFuns + 0x5c))(0x62,1,6,3,0,*(code **)(_g_phyFuns + 0x5c));
    set_rfpll_freq(DAT_00011063,0x9a0,param_2,&bStack_54);
    sVar1 = read_pll_cap();
    iVar4 = (**(code **)(_g_phyFuns + 0x5c))(0x62,1,6,3,0,*(code **)(_g_phyFuns + 0x5c));
    iVar9 = 0;
    iVar8 = 0;
    for (uVar7 = 0; uVar7 != param_1; uVar7 = uVar7 + 1) {
      (**(code **)(_g_phyFuns + 0x30))
                (uVar7 + 0x960,DAT_00011063,param_2,&bStack_54,*(code **)(_g_phyFuns + 0x30));
      iVar5 = iVar8 / 0x40;
      iVar8 = iVar8 + ((int)sVar1 - (int)(short)iVar2);
      uVar6 = iVar5 + iVar2;
      uStack_4c = ((iVar9 / 0x40 + iVar3 | ((int)(short)uVar6 >> 8) << 4 | 0xffffff80U) & 0xff) << 8
                  | uVar6 & 0xff | (uint)bStack_54 << 0x10;
      uStack_48 = (uint)bStack_51 << 0x10 | (uint)bStack_52 << 8 | (uint)bStack_53;
      wr_rf_freq_mem_new(uVar7 & 0xff,&uStack_4c);
      iVar9 = iVar9 + (iVar4 - iVar3);
    }
    _DAT_000110b8 = _DAT_000110b8 | 0x20;
  }
  return;
}

