/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_tx_cal.o -> bt_tx_pwctrl_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_tx_pwctrl_init_new(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  
  if (-1 < (int)(_DAT_000120b8 << 0x10)) {
    uVar4 = (uint)DAT_00012027;
    uVar2 = (**(code **)(_g_phyFuns + 0x50))(0x67,1,0x1c,*(code **)(_g_phyFuns + 0x50));
    uVar3 = (**(code **)(_g_phyFuns + 0x5c))(0x67,1,0x1e,5,0,*(code **)(_g_phyFuns + 0x5c));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1c,2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1d,2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x60))(0x67,1,0x1e,5,0,2,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x60))(0x67,1,0x1f,5,0,2,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x94))(*(code **)(_g_phyFuns + 0x94));
    (**(code **)(_g_phyFuns + 0x74))(5,1,uVar4 + 0x1c0,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(1,2,0,*(code **)(_g_phyFuns + 0x74));
    pcVar5 = *(code **)(_g_phyFuns + 0x74);
    uVar1 = (**(code **)(_g_phyFuns + 0x78))(1,1,*(code **)(_g_phyFuns + 0x78));
    (*pcVar5)(1,1,uVar1 | 2);
    (**(code **)(_g_phyFuns + 0x74))
              (4,2,(uint)(byte)pbus_workmode << 3,*(code **)(_g_phyFuns + 0x74));
    uVar4 = bt_bb_to_index(0);
    pbus_set_dco((uVar4 & 0xff) * 8 + 0x12118);
    tx_pwctrl_init_cal_new(1,&phy_param,&phy_param,&phy_param);
    _DAT_00012114 = 0;
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1c,uVar2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1d,uVar2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x60))(0x67,1,0x1e,5,0,uVar3,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x60))(0x67,1,0x1f,5,0,uVar3,*(code **)(_g_phyFuns + 0x60));
    txcal_work_mode();
    _DAT_000120b8 = _DAT_000120b8 | 0x8000;
  }
  return;
}

