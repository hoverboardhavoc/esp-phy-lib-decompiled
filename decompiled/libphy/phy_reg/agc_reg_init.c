/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_reg.o -> agc_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void agc_reg_init(int param_1)

{
  _DAT_600a2058 = _DAT_600a2058 | 8;
  _DAT_600a2848 = _DAT_600a2848 & 0xffff;
  _DAT_600a2868 = _DAT_600a2868 & 0xffff;
  _DAT_600a0468 = _DAT_600a0468 | 0x800;
  _DAT_600a0958 = _DAT_600a0958 & 0xfff00fff | param_1 << 0xc;
  _DAT_600a2850 = _DAT_600a2850 & 0xffe03fff | 0x168000;
  _DAT_600a2840 = _DAT_600a2840 & 0xffffff80 | 0x5a;
  return;
}

