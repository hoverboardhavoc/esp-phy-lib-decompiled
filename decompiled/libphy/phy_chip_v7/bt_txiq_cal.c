/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> bt_txiq_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_txiq_cal(void)

{
  undefined4 uVar1;
  
  if ((DAT_00014050 & 0x800) == 0) {
    uVar1 = (**(code **)(g_phyFuns + 0x1ac))(0x67,0,0x1c,*(code **)(g_phyFuns + 0x1ac));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,0x1c,0,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,0x1d,0,*(code **)(g_phyFuns + 0x1b4));
    rfcal_txiq(0,&DAT_000140b2,&DAT_000140b0,0x20,(int)DAT_00014008,1);
    DAT_00014050 = DAT_00014050 | 0x800;
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,0x1c,uVar1,*(code **)(g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x000109e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,0x1d,uVar1);
    return;
  }
  return;
}

