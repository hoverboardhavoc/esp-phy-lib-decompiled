/*
 * Last changed at upstream commit 05e53904ac98632e09d78693437b7fa0b35f36da
 * https://github.com/espressif/esp-phy-lib/commit/05e53904ac98632e09d78693437b7fa0b35f36da
 * Upstream date: 2023-05-22 12:26:13 +0800
 * Upstream subject: update h2 libphy phy_version: 200,0, 1cef4f4, May 22 2023, 11:57:13
 * Source: libphy -> phy_debug.o -> bt_rx_force
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_rx_force(int param_1)

{
  _DAT_600a0910 = _DAT_600a0910 & 0xfffffcff | 0x200;
  if (param_1 == 0) {
    ets_delay_us(1);
    _DAT_600a0910 = _DAT_600a0910 | 0x300;
    ets_delay_us(1);
    _DAT_600a0910 = _DAT_600a0910 & 0xfffffcff;
  }
  else {
    ets_delay_us(1);
    _DAT_600a0910 = _DAT_600a0910 | 0x300;
  }
  return;
}

