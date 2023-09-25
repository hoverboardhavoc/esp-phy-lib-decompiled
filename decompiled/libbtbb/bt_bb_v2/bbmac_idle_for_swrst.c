/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: libbtbb -> bt_bb_v2.o -> bbmac_idle_for_swrst
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool bbmac_idle_for_swrst(void)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((_DAT_600a207c >> 0x1c == 0) && ((_DAT_600a207c >> 0x16 & 3) == 0)) &&
      ((_DAT_600a1550 & 0xf) == 0)) && ((_DAT_600a3088 & 0xf) == 0)) {
    bVar1 = (_DAT_600a2c38 & 7) == 1;
  }
  return bVar1;
}

