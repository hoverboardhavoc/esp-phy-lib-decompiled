/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7.o -> bt_txiq_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_txiq_cal(void)

{
  undefined4 uVar1;
  
  if ((DAT_000147bc & 0x800) == 0) {
    uVar1 = (**(code **)(g_phyFuns + 0x1ac))(0x67,1,0x1c,*(code **)(g_phyFuns + 0x1ac));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1c,0,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1d,0,*(code **)(g_phyFuns + 0x1b4));
    rfcal_txiq(0,&DAT_0001481e,&DAT_0001481c,0x20,(int)((DAT_00014774 + 0x14) * 0x1000000) >> 0x18,1
              );
    DAT_000147bc = DAT_000147bc | 0x800;
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1c,uVar1,*(code **)(g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x00010c2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1d,uVar1);
    return;
  }
  return;
}

