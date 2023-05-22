/*
 * Last changed at upstream commit 05e53904ac98632e09d78693437b7fa0b35f36da
 * https://github.com/espressif/esp-phy-lib/commit/05e53904ac98632e09d78693437b7fa0b35f36da
 * Upstream date: 2023-05-22 12:26:13 +0800
 * Upstream subject: update h2 libphy phy_version: 200,0, 1cef4f4, May 22 2023, 11:57:13
 * Source: libphy -> phy_debug.o -> force_rx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void force_rx_gain(uint param_1,int param_2)

{
  uint uVar1;
  
  _DAT_600a2840 = (param_1 & 1) << 0x17 | (param_2 + 1) * 0x1000000 | _DAT_600a2840 & 0x7fffff;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 0xc000;
  }
  _DAT_600a0010 = _DAT_600a0010 & 0xffff3fff | uVar1;
  uVar1 = 0x3000;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  _DAT_600a0910 = _DAT_600a0910 & 0xffffcfff | uVar1;
  uVar1 = 0xc0000000;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  _DAT_600a28a0 = _DAT_600a28a0 & 0x3fffffff | uVar1;
  bt_rx_force();
  ets_delay_us(1);
  _DAT_600a2840 = _DAT_600a2840 & 0xffffff | param_2 << 0x18;
  return;
}

