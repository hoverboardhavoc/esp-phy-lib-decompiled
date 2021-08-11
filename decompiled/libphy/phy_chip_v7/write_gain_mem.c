/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> write_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_gain_mem(undefined4 param_1,undefined4 param_2,int param_3)

{
  _DAT_600060cc = param_2;
  _DAT_600060d0 = param_1;
  _DAT_600060c8 = _DAT_600060c8 & 0xfffe0000 | param_3 << 8 | 0x10000;
  return;
}

