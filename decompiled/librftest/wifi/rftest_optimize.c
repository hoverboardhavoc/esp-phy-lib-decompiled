/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: librftest -> wifi.o -> rftest_optimize
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rftest_optimize(void)

{
  _DAT_6001cd04 = 0x51510556;
  _DAT_6001cd08 = 0x51510556;
  phy_2480m_opt(0);
  if (phy_param == '\0') {
    rom2_ulp_ext_code_set(1,0x80);
    return;
  }
  return;
}

