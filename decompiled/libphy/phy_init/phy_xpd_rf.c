/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_init.o -> phy_xpd_rf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_xpd_rf(void)

{
  disable_agc();
  _DAT_600a981c = _DAT_600a981c & 0xfffffffd;
  pbus_debugmode();
  (**(code **)(g_phyFuns + 0x74))(4,1,0x100,*(code **)(g_phyFuns + 0x74));
  pbus_workmode();
  (**(code **)(g_phyFuns + 0x58))(0x67,1,2,10,*(code **)(g_phyFuns + 0x58));
  _DAT_600b0154 = _DAT_600b0154 & 0xfffffff;
  return;
}

