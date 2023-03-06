/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_reg.o -> fe_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fe_reg_init(void)

{
  _DAT_600a0468 = _DAT_600a0468 & 0xfffffeff;
  _DAT_600a0410 = _DAT_600a0410 & 0xffffff | 0x50000000;
  _DAT_600a0450 = _DAT_600a0450 | 0xe0000000;
  _DAT_600a0c18 = 0xc03359a0;
  _DAT_600a0c1c = 0x750a6740;
  _DAT_600a044c = _DAT_600a044c & 0xffc00000 | 0xcda02;
  return;
}

