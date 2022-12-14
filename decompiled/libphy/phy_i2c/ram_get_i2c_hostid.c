/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_i2c.o -> ram_get_i2c_hostid
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ram_get_i2c_hostid(int param_1)

{
  _DAT_600af820 = _DAT_600af820 & 0xffffe00f | 0x1f00;
  return (param_1 - 0x62U & 0xff) < 10 && (1 << (param_1 - 0x62U & 0x1f) & 0x223U) != 0;
}

