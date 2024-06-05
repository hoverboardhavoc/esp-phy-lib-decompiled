/*
 * Last changed at upstream commit c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * https://github.com/espressif/esp-phy-lib/commit/c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * Upstream date: 2024-06-05 14:35:04 +0800
 * Upstream subject: update C6 H2 libphy for coex test ble 154 chan bug
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_gain_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_gain_set(void)

{
  _DAT_600a2854 = _DAT_600a2854 & 0xfffffe03 | 0xc9;
  _DAT_600a2848 = _DAT_600a2848 & 0xffff;
  _DAT_600a2868 = _DAT_600a2868 & 0xffff;
  _DAT_600a2850 = _DAT_600a2850 & 0xffe03fff | 0x140000;
  _DAT_600a2840 = _DAT_600a2840 & 0xffffff80 | 0x50;
  return;
}

