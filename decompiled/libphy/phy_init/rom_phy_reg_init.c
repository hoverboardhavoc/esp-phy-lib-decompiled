/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libphy -> phy_init.o -> rom_phy_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rom_phy_reg_init(void)

{
  (**(code **)(g_phyFuns + 0xb0))(*(code **)(g_phyFuns + 0xb0));
  (**(code **)(g_phyFuns + 0xb8))(DAT_00010f12,DAT_00010f11,*(code **)(g_phyFuns + 0xb8));
  rom_wifi_agc_sat_gain(s_<<<<P_00010df0._0_4_);
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

