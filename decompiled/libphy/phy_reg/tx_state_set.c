/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> tx_state_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_state_set(uint param_1)

{
  _DAT_600a08b0 = _DAT_600a08b0 & 0x3f3f3f3f | 0x404000;
  _DAT_600a08b4 = _DAT_600a08b4 & 0x3f3f3f3f | param_1 << 0x1e;
  _DAT_600a08b8 = (param_1 & 3) << 6 | _DAT_600a08b8 & 0x3f3f3f3f;
  _DAT_600a08bc = _DAT_600a08bc & 0xffffff3f;
  return;
}

