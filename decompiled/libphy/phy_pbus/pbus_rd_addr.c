/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_pbus.o -> pbus_rd_addr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 pbus_rd_addr(int param_1,int param_2)

{
  if (param_1 == 1) {
    return 0x600a0914;
  }
  if (param_1 != 0) {
    if (param_1 == 2) {
      return 0x600a0918;
    }
    if ((param_1 != 3) || (param_2 != 1)) {
      return 0x600a0924;
    }
  }
  return 0x600a0920;
}

