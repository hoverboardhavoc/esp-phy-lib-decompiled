/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_reg.o -> freq_reg_init1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void freq_reg_init1(void)

{
  _DAT_600a00d4 = 0x80c500;
  _DAT_600a00d8 = 0x834a0e2;
  _DAT_600a00dc = 10;
  _DAT_600a00c0 = 0x42841f00;
  _DAT_600a00c4 = 0x3e7c;
  _DAT_600a00c8 = 0x33000492;
  _DAT_600a00cc = 0x49836d48;
  return;
}

