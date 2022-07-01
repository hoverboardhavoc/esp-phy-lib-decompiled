/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
 * Source: libphy -> phy_hw_freq.o -> get_rf_freq_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rf_freq_init_new(void)

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
  undefined4 auStack_54 [2];
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((_DAT_00011148 & 0x20) == 0) {
    iVar9 = 0;
    (**(code **)(_g_phyFuns + 0x160))(200,*(code **)(_g_phyFuns + 0x160));
    (**(code **)(_g_phyFuns + 0x15c))
              (DAT_000110f9,0x960,0,auStack_54,*(code **)(_g_phyFuns + 0x15c));
    iVar10 = 0;
    uVar8 = 0;
    iVar2 = (**(code **)(_g_phyFuns + 0x164))(*(code **)(_g_phyFuns + 0x164));
    iVar3 = (**(code **)(_g_phyFuns + 0x54))(0x62,1,6,3,0,*(code **)(_g_phyFuns + 0x54));
    (**(code **)(_g_phyFuns + 0x15c))
              (DAT_000110f9,0x9a0,0,auStack_54,*(code **)(_g_phyFuns + 0x15c));
    sVar1 = (**(code **)(_g_phyFuns + 0x164))(*(code **)(_g_phyFuns + 0x164));
    iVar4 = (**(code **)(_g_phyFuns + 0x54))(0x62,1,6,3,0,*(code **)(_g_phyFuns + 0x54));
    do {
      (**(code **)(_g_phyFuns + 0x154))
                (uVar8 + 0x960,DAT_000110f9,0,auStack_54,*(code **)(_g_phyFuns + 0x154));
      iVar6 = iVar10 / 0x40;
      uVar5 = uVar8 & 0xff;
      uVar8 = uVar8 + 1;
      uStack_44 = 0;
      iVar10 = iVar10 + ((int)sVar1 - (int)(short)iVar2);
      uVar7 = iVar6 + iVar2;
      iVar6 = iVar9 / 0x40;
      iVar9 = iVar9 + (iVar4 - iVar3);
      uStack_4c = ((iVar6 + iVar3 | ((int)(short)uVar7 >> 8) << 4 | 0xffffff80U) & 0xff) << 8 |
                  uVar7 & 0xff;
      uStack_48 = auStack_54[0];
      wr_rf_freq_mem(uVar5,&uStack_4c);
    } while (uVar8 != 0x55);
    _DAT_00011148 = _DAT_00011148 | 0x20;
  }
  return;
}

