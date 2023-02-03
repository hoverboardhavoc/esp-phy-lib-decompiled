/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> bb_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 bb_reg_init(void)

{
  DAT_6001238d = 0xaf;
  DAT_6001238e = 0x33;
  DAT_6001238f = 4;
  DAT_60012390 = 0x17;
  DAT_60012346 = DAT_60012346 | 0x60;
  return DAT_60012345;
}

