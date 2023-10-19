/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> rftest_open_clk
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rftest_open_clk(void)

{
  phy_get_romfunc_addr();
  _DAT_600b0414 = 0xffffffff;
  _DAT_600b0418 = 0;
  _DAT_600b0420 = _DAT_600b0420 | 0xa000;
  _DAT_600a5404 = 0xffffffff;
  _DAT_600a5410 = 0x7ffff;
  _DAT_600ad008 = 0xffffffff;
  _DAT_600ad00c = 0xffffffff;
  _DAT_600a5414 = 0xffffffff;
  _DAT_600a5408 = 0xffffffff;
  return;
}

