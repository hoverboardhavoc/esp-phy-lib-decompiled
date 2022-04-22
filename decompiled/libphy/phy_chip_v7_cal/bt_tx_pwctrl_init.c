/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_cal.o -> bt_tx_pwctrl_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_tx_pwctrl_init(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  
  if (-1 < (int)(_DAT_00013128 << 0x10)) {
    uVar2 = (**(code **)(_g_phyFuns + 0x1ac))(0x67,1,0x1c,*(code **)(_g_phyFuns + 0x1ac));
    uVar3 = (**(code **)(_g_phyFuns + 0x1ac))(0x67,1,0x1e,*(code **)(_g_phyFuns + 0x1ac));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1c,2,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1d,2,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1e,2,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1f,2,*(code **)(_g_phyFuns + 0x1b4));
    txcal_debuge_mode();
    (**(code **)(_g_phyFuns + 0x1cc))(5,1,0x2f,*(code **)(_g_phyFuns + 0x1cc));
    (**(code **)(_g_phyFuns + 0x1cc))(1,2,0,*(code **)(_g_phyFuns + 0x1cc));
    pcVar5 = *(code **)(_g_phyFuns + 0x1cc);
    uVar1 = (**(code **)(_g_phyFuns + 0x1d0))(1,1,*(code **)(_g_phyFuns + 0x1d0));
    (*pcVar5)(1,1,uVar1 | 2);
    (**(code **)(_g_phyFuns + 0x1cc))(4,2,0,*(code **)(_g_phyFuns + 0x1cc));
    uVar4 = (**(code **)(_g_phyFuns + 0x38))(0,*(code **)(_g_phyFuns + 0x38));
    (**(code **)(_g_phyFuns + 0x1f0))((uVar4 & 0xff) * 8 + 0x1318a,*(code **)(_g_phyFuns + 0x1f0));
    if ((DAT_0001320c & 0xf0) != 0x10) {
      tx_pwctrl_init_cal(1,&phy_param,&phy_param,&phy_param);
    }
    _DAT_00013186 = 0;
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1c,uVar2,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1d,uVar2,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1e,uVar3,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1f,uVar3,*(code **)(_g_phyFuns + 0x1b4));
    txcal_work_mode();
    _DAT_00013128 = _DAT_00013128 | 0x8000;
  }
  return;
}

