/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
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
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte bStack_44;
  byte bStack_43;
  byte bStack_42;
  uint uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  
  if ((_DAT_00012124 & 0x20) == 0) {
    ram_write_pll_cap(200);
    set_rfpll_freq(DAT_000120f7,0x960,0,&bStack_44);
    iVar2 = read_pll_cap();
    iVar3 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,6,3,0,*(code **)(_g_phyFuns + 0x1b8));
    set_rfpll_freq(DAT_000120f7,0x9a0,0,&bStack_44);
    sVar1 = read_pll_cap();
    iVar4 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,6,3,0,*(code **)(_g_phyFuns + 0x1b8));
    iVar9 = 0;
    iVar10 = 0;
    uVar8 = 0;
    do {
      rfpll_set_freq(uVar8 + 0x960,DAT_000120f7,0,&bStack_44);
      iVar6 = iVar10 / 0x40;
      uVar5 = uVar8 & 0xff;
      uVar8 = uVar8 + 1;
      uStack_34 = 0;
      iVar10 = iVar10 + ((int)sVar1 - (int)(short)iVar2);
      uVar7 = iVar6 + iVar2;
      iVar6 = iVar9 / 0x40;
      iVar9 = iVar9 + (iVar4 - iVar3);
      uStack_3c = ((iVar6 + iVar3 | ((int)(short)uVar7 >> 8) << 4 | 0xffffff80U) & 0xff) << 8 |
                  uVar7 & 0xff;
      uStack_38 = (uint)bStack_44 << 0x10 | (uint)bStack_43 << 8 | (uint)bStack_42;
      wr_rf_freq_mem(uVar5,&uStack_3c);
    } while (uVar8 != 0x55);
    _DAT_00012124 = _DAT_00012124 | 0x20;
  }
  return;
}

