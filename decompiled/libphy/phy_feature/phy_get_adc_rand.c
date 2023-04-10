/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_feature.o -> phy_get_adc_rand
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_get_adc_rand(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  phy_param_addr(&phy_param);
  iVar1 = phy_get_romfuncs();
  *(undefined **)(iVar1 + 0x6c) = &ram_pbus_rd_addr;
  _g_phyFuns = iVar1;
  *(undefined **)(iVar1 + 0x70) = &ram_pbus_rd_shift;
  if (param_1 == 0) {
    (**(code **)(iVar1 + 0x80))(*(code **)(iVar1 + 0x80));
    pbus_workmode();
    set_rxclk_en(0);
  }
  else {
    _DAT_600b0154 = _DAT_600b0154 | 0xf0000000;
    _DAT_600b00cc = _DAT_600b00cc | 0x10000000;
    _DAT_600a9804 = _DAT_600a9804 | 0x80000000;
    _DAT_600a9814 = _DAT_600a9814 | 0x1e400;
    _DAT_600a980c = _DAT_600a980c & 0xff0fff | 0x44004000;
    set_rxclk_en(1);
    _DAT_600a0914 = _DAT_600a0914 | 0x100000;
    pbus_debugmode();
    (**(code **)(_g_phyFuns + 0x74))(4,1,0,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(4,2,1,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(5,1,0,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(0,1,0,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(0,2,0,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(1,1,0x189,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(1,2,0x100,*(code **)(_g_phyFuns + 0x74));
    uStack_18 = 0x1000100;
    uStack_14 = 0x1000100;
    pbus_set_dco(&uStack_18);
  }
  return;
}

