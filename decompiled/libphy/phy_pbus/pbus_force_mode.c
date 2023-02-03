/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_pbus.o -> pbus_force_mode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_force_mode(int param_1)

{
  if (param_1 == 0) {
    _DAT_600a0904 = _DAT_600a0904 & 0xfffffffe;
    _DAT_600a090c = _DAT_600a090c | 0x8000000;
    return;
  }
  _DAT_600a090c = _DAT_600a090c & 0xf7ffffff;
  _DAT_600a0904 = _DAT_600a0904 | 1;
  return;
}

