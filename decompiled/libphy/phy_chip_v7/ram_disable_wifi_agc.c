/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7.o -> ram_disable_wifi_agc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_disable_wifi_agc(void)

{
  _DAT_6001c01c = _DAT_6001c01c & 0xff00ffff | 0x7f0000;
  _DAT_6001c034 = _DAT_6001c034 | 0x80;
  _DAT_6001c080 = _DAT_6001c080 | 1;
  return;
}

