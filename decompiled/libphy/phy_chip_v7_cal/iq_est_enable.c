/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> iq_est_enable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void iq_est_enable(uint param_1)

{
  _DAT_60006140 = _DAT_60006140 & 0xf3ffffff | 0x4000000;
  _DAT_60006144 = (param_1 & 0x7fff) << 2 | _DAT_60006144 & 0xffe60003 | 0x100000 | 1;
  ets_delay_us(1);
  _DAT_60006144 = _DAT_60006144 | 2;
  do {
  } while (-1 < _DAT_60006174 << 0xf);
  return;
}

