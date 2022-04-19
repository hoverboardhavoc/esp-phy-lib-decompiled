/*
 * Last changed at upstream commit 97e9e8992ea947fa46bc35545000b2c45d7b3060
 * https://github.com/espressif/esp-phy-lib/commit/97e9e8992ea947fa46bc35545000b2c45d7b3060
 * Upstream date: 2022-04-19 15:45:53 +0800
 * Upstream subject: BLE deinit phy_init_flag make wifi light sleep RX problem
 * Source: libphy -> phy_chip_v7.o -> bt_txiq_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_txiq_cal(void)

{
  undefined4 uVar1;
  
  if ((DAT_0001459c & 0x800) == 0) {
    uVar1 = (**(code **)(g_phyFuns + 0x1ac))(0x67,1,0x1c,*(code **)(g_phyFuns + 0x1ac));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1c,0,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1d,0,*(code **)(g_phyFuns + 0x1b4));
    rfcal_txiq(0,&DAT_000145fe,&DAT_000145fc,0x20,(int)((DAT_00014554 + 0x14) * 0x1000000) >> 0x18,1
              );
    DAT_0001459c = DAT_0001459c | 0x800;
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1c,uVar1,*(code **)(g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x00010d12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0x1d,uVar1);
    return;
  }
  return;
}

