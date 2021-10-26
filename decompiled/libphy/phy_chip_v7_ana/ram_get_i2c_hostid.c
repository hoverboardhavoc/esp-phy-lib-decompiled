/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_ana.o -> ram_get_i2c_hostid
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ram_get_i2c_hostid(int param_1)

{
  _DAT_6000e048 = _DAT_6000e048 & 0xfffe000f | 0x1fe00;
  return (param_1 - 0x62U & 0xff) < 10 && (1 << (param_1 - 0x62U & 0x1f) & 0x227U) != 0;
}

