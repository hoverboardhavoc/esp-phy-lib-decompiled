/*
 * Last changed at upstream commit 603b69583635ffcedf2a5e1d0f70da77edf82d10
 * https://github.com/espressif/esp-phy-lib/commit/603b69583635ffcedf2a5e1d0f70da77edf82d10
 * Upstream date: 2024-03-04 14:31:40 +0800
 * Upstream subject: feat: add esp32c5 beta3 support wifi
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
  phy_printf(&_LC0,_DAT_600af480);
  return;
}

