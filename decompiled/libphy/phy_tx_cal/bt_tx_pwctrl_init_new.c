/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
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
  undefined4 uVar4;
  uint uVar5;
  code *pcVar6;
  
  if (-1 < (int)(_DAT_000110ac << 0x10)) {
    uVar5 = (uint)DAT_0001101b;
    uVar2 = (**(code **)(_g_phyFuns + 0x50))(0x67,1,0x1c,*(code **)(_g_phyFuns + 0x50));
    uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x67,1,0x1e,*(code **)(_g_phyFuns + 0x50));
    uVar4 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,6,*(code **)(_g_phyFuns + 0x50));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1c,2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1d,2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1e,2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1f,2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x60))(0x6b,1,6,5,3,5,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x94))(*(code **)(_g_phyFuns + 0x94));
    (**(code **)(_g_phyFuns + 0x74))(5,1,uVar5 + 0x1c0,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(1,2,0,*(code **)(_g_phyFuns + 0x74));
    pcVar6 = *(code **)(_g_phyFuns + 0x74);
    uVar1 = (**(code **)(_g_phyFuns + 0x78))(1,1,*(code **)(_g_phyFuns + 0x78));
    (*pcVar6)(1,1,uVar1 | 2);
    (**(code **)(_g_phyFuns + 0x74))
              (4,2,(uint)(byte)pbus_set_dco << 3,*(code **)(_g_phyFuns + 0x74));
    uVar5 = bt_bb_to_index(0);
    pbus_set_dco((uVar5 & 0xff) * 8 + 0x1110c);
    tx_pwctrl_init_cal_new(1,&phy_param,&phy_param,&phy_param);
    _DAT_00011108 = 0;
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1c,uVar2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1d,uVar2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1e,uVar3,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1f,uVar3,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x6b,1,6,uVar4,*(code **)(_g_phyFuns + 0x58));
    txcal_work_mode();
    _DAT_000110ac = _DAT_000110ac | 0x8000;
  }
  return;
}

