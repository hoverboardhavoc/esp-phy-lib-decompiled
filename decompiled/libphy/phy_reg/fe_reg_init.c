/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> fe_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fe_reg_init(void)

{
  _DAT_600a0450 = _DAT_600a0450 | 0x80000000;
  _DAT_600a0410 = _DAT_600a0410 & 0xffffff | 0x50000000;
  _DAT_600a0414 = _DAT_600a0414 | 4;
  _DAT_600a0468 = _DAT_600a0468 & 0xfffff6ff;
  return;
}

