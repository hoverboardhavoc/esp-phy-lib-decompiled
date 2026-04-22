/*
 * Last changed at upstream commit 59c1234e929212aec0fdda75769b759951235536
 * https://github.com/espressif/esp-phy-lib/commit/59c1234e929212aec0fdda75769b759951235536
 * Upstream date: 2026-04-22 17:40:08 +0800
 * Upstream subject: support freq hop done api
 * Source: libbtbb -> bt_bb_v2.o -> coex_force_bt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void coex_force_bt(void)

{
  _DAT_600af008 = _DAT_600af008 | 4;
  _DAT_600af400 = _DAT_600af400 & 0xc0000000 | 0x25000000;
  _DAT_600af404 = _DAT_600af404 & 0xff000000 | 5;
  _DAT_600af408 = _DAT_600af408 | 1;
  phy_printf(&_LC1,_DAT_600af480);
  return;
}

