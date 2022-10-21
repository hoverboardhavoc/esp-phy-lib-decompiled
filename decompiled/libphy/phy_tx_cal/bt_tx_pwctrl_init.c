/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_cal.o -> bt_tx_pwctrl_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_tx_pwctrl_init(void)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  code *pcVar8;
  
  if (-1 < (int)(_DAT_00012128 << 0x10)) {
    uVar1 = *(undefined1 *)(DAT_000120ac + 0x12070);
    uVar3 = (**(code **)(_g_phyFuns + 0x1ac))(0x67,1,0x1c,*(code **)(_g_phyFuns + 0x1ac));
    uVar4 = (**(code **)(_g_phyFuns + 0x1ac))(0x67,1,0x1d,*(code **)(_g_phyFuns + 0x1ac));
    uVar5 = (**(code **)(_g_phyFuns + 0x1ac))(0x67,1,0x1e,*(code **)(_g_phyFuns + 0x1ac));
    uVar6 = (**(code **)(_g_phyFuns + 0x1ac))(0x67,1,0x1f,*(code **)(_g_phyFuns + 0x1ac));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1c,2,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1d,2,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1e,2,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1f,2,*(code **)(_g_phyFuns + 0x1b4));
    txcal_debuge_mode();
    (**(code **)(_g_phyFuns + 0x1cc))(5,1,uVar1,*(code **)(_g_phyFuns + 0x1cc));
    (**(code **)(_g_phyFuns + 0x1cc))(1,2,0,*(code **)(_g_phyFuns + 0x1cc));
    pcVar8 = *(code **)(_g_phyFuns + 0x1cc);
    uVar2 = (**(code **)(_g_phyFuns + 0x1d0))(1,1,*(code **)(_g_phyFuns + 0x1d0));
    (*pcVar8)(1,1,uVar2 | 2);
    (**(code **)(_g_phyFuns + 0x1cc))(4,2,0,*(code **)(_g_phyFuns + 0x1cc));
    uVar7 = (**(code **)(_g_phyFuns + 0x38))(0,*(code **)(_g_phyFuns + 0x38));
    (**(code **)(_g_phyFuns + 0x1f0))((uVar7 & 0xff) * 8 + 0x1218a,*(code **)(_g_phyFuns + 0x1f0));
    if ((DAT_0001220c & 0xf0) != 0x10) {
      tx_pwctrl_init_cal(1,&phy_param,&phy_param,&phy_param);
    }
    _DAT_00012186 = 0;
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1c,uVar3,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1d,uVar4,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1e,uVar5,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1f,uVar6,*(code **)(_g_phyFuns + 0x1b4));
    txcal_work_mode();
    _DAT_00012128 = _DAT_00012128 | 0x8000;
  }
  return;
}

