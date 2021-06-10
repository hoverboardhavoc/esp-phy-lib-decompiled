/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> bb_wdt_int_enable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_wdt_int_enable(uint param_1)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(&DAT_6001d040);
  fpga_mem_wr(&DAT_6001d040,(param_1 & 1) << 0x1e | uVar1 & 0xbfffffff);
  return;
}

