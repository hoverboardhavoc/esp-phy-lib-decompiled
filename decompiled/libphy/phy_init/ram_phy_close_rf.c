/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
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
                    /* WARNING: Could not recover jumptable at 0x0001029e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(g_phyFuns + 0x228))();
  return;
}

