/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7.o -> ram_enable_wifi_agc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_enable_wifi_agc(void)

{
  _DAT_6001c080 = _DAT_6001c080 & 0xfffffffe;
  _DAT_6001c01c = _DAT_6001c01c & 0xff00ffff | 0x200000;
  _DAT_6001c034 = _DAT_6001c034 | 0x80;
  return;
}

