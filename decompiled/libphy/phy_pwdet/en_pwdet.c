/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_pwdet.o -> en_pwdet
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void en_pwdet(void)

{
  _DAT_600a0810 = _DAT_600a0810 & 0xfffffff1;
  _DAT_600a0814 = _DAT_600a0814 & 0xfffffdff | 0x3000;
  _DAT_600a0820 = 0x16a;
  _DAT_600b1054 = _DAT_600b1054 & 0x1fffffff | 0x80000000;
  return;
}

