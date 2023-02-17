/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
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
  
  if (-1 < (int)(_DAT_000120b4 << 0x10)) {
    uVar4 = (uint)DAT_00012023;
    uVar2 = (**(code **)(_g_phyFuns + 0x50))(0x67,1,0x1c,*(code **)(_g_phyFuns + 0x50));
    uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x67,1,0x1e,*(code **)(_g_phyFuns + 0x50));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1c,2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1d,2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1e,2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1f,2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x94))(*(code **)(_g_phyFuns + 0x94));
    (**(code **)(_g_phyFuns + 0x74))(5,1,uVar4 + 0x1c0,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(1,2,0,*(code **)(_g_phyFuns + 0x74));
    pcVar5 = *(code **)(_g_phyFuns + 0x74);
    uVar1 = (**(code **)(_g_phyFuns + 0x78))(1,1,*(code **)(_g_phyFuns + 0x78));
    (*pcVar5)(1,1,uVar1 | 2);
    (**(code **)(_g_phyFuns + 0x74))
              (4,2,(uint)(byte)pbus_workmode << 3,*(code **)(_g_phyFuns + 0x74));
    uVar4 = bt_bb_to_index(0);
    pbus_set_dco((uVar4 & 0xff) * 8 + 0x12114);
    tx_pwctrl_init_cal_new(1,&phy_param,&phy_param,&phy_param);
    _DAT_00012110 = 0;
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1c,uVar2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1d,uVar2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1e,uVar3,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0x1f,uVar3,*(code **)(_g_phyFuns + 0x58));
    txcal_work_mode();
    _DAT_000120b4 = _DAT_000120b4 | 0x8000;
  }
  return;
}

