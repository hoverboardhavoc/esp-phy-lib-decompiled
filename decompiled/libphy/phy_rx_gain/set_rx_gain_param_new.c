/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
 * Source: libphy -> phy_rx_gain.o -> set_rx_gain_param_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_param_new(int param_1)

{
  code *pcVar1;
  ushort uVar2;
  
  chip_v7_set_chan_ana(0xe);
  _DAT_60044110 = _DAT_60044110 | 0xc000;
  (**(code **)(_g_phyFuns + 0x78))(*(code **)(_g_phyFuns + 0x78));
  (**(code **)(_g_phyFuns + 0x88))(0,*(code **)(_g_phyFuns + 0x88));
  if (param_1 == 0) {
    if ((_DAT_00011148 & 0x400) == 0) {
      (**(code **)(_g_phyFuns + 0x184))(0,0x80,&phy_param,0,*(code **)(_g_phyFuns + 0x184));
      _DAT_00011148 = _DAT_00011148 | 0x400;
    }
  }
  else {
    pcVar1 = *(code **)(_g_phyFuns + 0x70);
    uVar2 = (**(code **)(_g_phyFuns + 0x74))(1,1,*(code **)(_g_phyFuns + 0x74));
    (*pcVar1)(1,1,uVar2 | 2);
  }
  _DAT_6004407c = _DAT_6004407c & 0xf7ffffff;
  (**(code **)(_g_phyFuns + 0x88))(0,*(code **)(_g_phyFuns + 0x88));
  if (param_1 != 0) {
    pcVar1 = *(code **)(_g_phyFuns + 0x70);
    uVar2 = (**(code **)(_g_phyFuns + 0x74))(1,1,*(code **)(_g_phyFuns + 0x74));
    (*pcVar1)(1,1,uVar2 | 2);
    (**(code **)(_g_phyFuns + 0x70))(4,2,0,*(code **)(_g_phyFuns + 0x70));
  }
  _DAT_60044110 = _DAT_60044110 & 0xffff7fff;
  if (param_1 != 0) {
    (**(code **)(_g_phyFuns + 0x70))(4,2,0,*(code **)(_g_phyFuns + 0x70));
  }
  (**(code **)(_g_phyFuns + 0x88))(0,*(code **)(_g_phyFuns + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x7c))();
  return;
}

