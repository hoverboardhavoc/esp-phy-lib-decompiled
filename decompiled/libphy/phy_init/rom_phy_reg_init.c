/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_init.o -> rom_phy_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rom_phy_reg_init(void)

{
  (**(code **)(g_phyFuns + 0xb0))(*(code **)(g_phyFuns + 0xb0));
  (**(code **)(g_phyFuns + 0xb8))(DAT_00010f2e,DAT_00010f2d,*(code **)(g_phyFuns + 0xb8));
  rom_wifi_agc_sat_gain(s_<<<<P_00010e0c._0_4_);
  (**(code **)(g_phyFuns + 0xbc))(*(code **)(g_phyFuns + 0xbc));
  (**(code **)(g_phyFuns + 0xc4))(*(code **)(g_phyFuns + 0xc4));
  (**(code **)(g_phyFuns + 0xa8))(*(code **)(g_phyFuns + 0xa8));
  (**(code **)(g_phyFuns + 0x158))(1,*(code **)(g_phyFuns + 0x158));
  (**(code **)(g_phyFuns + 0x160))(*(code **)(g_phyFuns + 0x160));
  (**(code **)(g_phyFuns + 0x7c))(*(code **)(g_phyFuns + 0x7c));
  rom_phy_ant_init();
  rom_bt_filter_reg();
                    /* WARNING: Could not recover jumptable at 0x0001010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(g_phyFuns + 0xc0))();
  return;
}

