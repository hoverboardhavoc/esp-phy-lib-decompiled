/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libphy -> phy_init.o -> ram_phy_close_rf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ram_phy_close_rf(void)

{
  (**(code **)(g_phyFuns + 0xe0))(*(code **)(g_phyFuns + 0xe0));
  (**(code **)(g_phyFuns + 0x1b4))(0x67,1,2,6,*(code **)(g_phyFuns + 0x1b4));
  rom_phy_bbpll_cal(1);
                    /* WARNING: Could not recover jumptable at 0x0001027e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(g_phyFuns + 0x228))();
  return;
}

