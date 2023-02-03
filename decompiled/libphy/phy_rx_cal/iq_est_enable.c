/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_cal.o -> iq_est_enable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void iq_est_enable(uint param_1)

{
  _DAT_600a0470 = _DAT_600a0470 & 0xf3ffffff | 0x4000000;
  _DAT_600a0474 = (param_1 & 0x7fff) << 2 | _DAT_600a0474 & 0xffe60003 | 0x100000 | 1;
  ets_delay_us(1);
  _DAT_600a0474 = _DAT_600a0474 | 2;
  do {
  } while (-1 < _DAT_600a04a0 << 0xf);
  return;
}

