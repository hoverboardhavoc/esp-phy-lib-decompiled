/*
 * Last changed at upstream commit 05e53904ac98632e09d78693437b7fa0b35f36da
 * https://github.com/espressif/esp-phy-lib/commit/05e53904ac98632e09d78693437b7fa0b35f36da
 * Upstream date: 2023-05-22 12:26:13 +0800
 * Upstream subject: update h2 libphy phy_version: 200,0, 1cef4f4, May 22 2023, 11:57:13
 * Source: libphy -> phy_reg.o -> fe_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fe_reg_init(void)

{
  _DAT_600a0468 = _DAT_600a0468 & 0xfffffeff;
  _DAT_600a045c = _DAT_600a045c & 0xff00ffff;
  _DAT_600a0410 = _DAT_600a0410 & 0xffffff | 0x50000000;
  _DAT_600a0450 = _DAT_600a0450 | 0xe0000000;
  adc_cal_set(1);
  _DAT_600a08fc = _DAT_600a08fc & 0xffff00ff | 0xc800;
  return;
}

