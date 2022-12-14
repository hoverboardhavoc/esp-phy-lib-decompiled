/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_i2c.o -> adc_rate_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adc_rate_set(uint param_1)

{
  (**(code **)(_g_phyFuns + 0x60))
            (0x66,0,4,3,2,(uint)(param_1 == 0) << 1,*(code **)(_g_phyFuns + 0x60));
  _DAT_600a046c = (param_1 & 1) << 0x1d | _DAT_600a046c & 0xdfffffff;
  return;
}

