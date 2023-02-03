/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_pwdet.o -> phy_pwdet_always_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_pwdet_always_en(int param_1)

{
  if (param_1 != 0) {
    _DAT_600a0810 = _DAT_600a0810 | 8;
    return;
  }
  _DAT_600a0810 = _DAT_600a0810 & 0xfffffff7;
  ets_delay_us(1);
  do {
  } while ((_DAT_600a0814 >> 0xe & 7) != 7);
  return;
}

