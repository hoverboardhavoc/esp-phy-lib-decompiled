/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_cal.o -> bt_txiq_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_txiq_cal(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((_DAT_00012128 & 0x800) == 0) {
    uVar1 = (**(code **)(_g_phyFuns + 0x1ac))(0x67,1,0x1c,*(code **)(_g_phyFuns + 0x1ac));
    uVar2 = (**(code **)(_g_phyFuns + 0x1ac))(0x67,1,0x1d,*(code **)(_g_phyFuns + 0x1ac));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1c,0,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1d,0,*(code **)(_g_phyFuns + 0x1b4));
    rfcal_txiq(0,&phy_param,&phy_param,0x20,(int)((DAT_000120e0 + 0x14) * 0x1000000) >> 0x18,1);
    _DAT_00012128 = _DAT_00012128 | 0x800;
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1c,uVar1,*(code **)(_g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x00010970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1d,uVar2);
    return;
  }
  return;
}

