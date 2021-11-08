/*
 * Last changed at upstream commit fe7dc9599bd318518eccc165d9e751114e28e7d2
 * https://github.com/espressif/esp-phy-lib/commit/fe7dc9599bd318518eccc165d9e751114e28e7d2
 * Upstream date: 2021-11-08 20:19:30 +0800
 * Upstream subject: fix the issue of phy register context loss caused by power off the wifi power domain
 * Source: libphy -> phy_chip_v7.o -> bt_txiq_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_txiq_cal(void)

{
  undefined4 uVar1;
  
  if ((DAT_00014808 & 0x800) == 0) {
    uVar1 = (**(code **)(g_phyFuns + 0x1ac))(0x67,1,0x1c,*(code **)(g_phyFuns + 0x1ac));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1c,0,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1d,0,*(code **)(g_phyFuns + 0x1b4));
    rfcal_txiq(0,&DAT_0001486a,&DAT_00014868,0x20,(int)((DAT_000147c0 + 0x14) * 0x1000000) >> 0x18,1
              );
    DAT_00014808 = DAT_00014808 | 0x800;
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1c,uVar1,*(code **)(g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x00010c62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1d,uVar1);
    return;
  }
  return;
}

