/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_reg.o -> write_gain_mem_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_gain_mem_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  _DAT_600a08cc = param_1;
  _DAT_600a08d0 = param_2;
  _DAT_600a08d4 = param_3;
  _DAT_600a08c8 = param_4 * 0x800 + 0x80000U | _DAT_600a08c8 & 0xfff00000;
  return;
}

