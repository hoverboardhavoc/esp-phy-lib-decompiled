/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> write_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_gain_mem(undefined4 param_1,undefined4 param_2,int param_3)

{
  _DAT_600a08cc = param_2;
  _DAT_600a08d0 = param_1;
  _DAT_600a08c8 = param_3 * 0x800 + 0x80000U | _DAT_600a08c8 & 0xfff00000;
  return;
}

