/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_i2c.o -> get_i2c_hostid
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool get_i2c_hostid(int param_1)

{
  _DAT_600ad820 = _DAT_600ad820 & 0xffffe00f | 0x1f00;
  return (param_1 - 0x62U & 0xff) < 10 && (1 << (param_1 - 0x62U & 0x1f) & 0x223U) != 0;
}

