/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> bt_txiq_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_txiq_cal(void)

{
  undefined4 uVar1;
  
  if ((DAT_00014544 & 0x800) == 0) {
    uVar1 = (**(code **)(g_phyFuns + 0x1ac))(0x67,1,0x1c,*(code **)(g_phyFuns + 0x1ac));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1c,0,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1d,0,*(code **)(g_phyFuns + 0x1b4));
    rfcal_txiq(0,&DAT_000145a6,&DAT_000145a4,0x20,(int)((DAT_000144fc + 0x14) * 0x1000000) >> 0x18,1
              );
    DAT_00014544 = DAT_00014544 | 0x800;
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1c,uVar1,*(code **)(g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x00010d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1d,uVar1);
    return;
  }
  return;
}

