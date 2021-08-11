/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> phy_chan_filt_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_chan_filt_set(int param_1,int param_2)

{
  if (param_1 == 0) {
    _DAT_6001cd08 = _DAT_6001cd08 & 0xfffffff8 | 0x10000000;
    _DAT_6001cd04 = _DAT_6001cd04 & 0xfffffff8 | 0x10000000;
  }
  else {
    _DAT_6001cd04 = _DAT_6001cd04 & 0xefffffff;
    _DAT_6001cd08 = _DAT_6001cd08 & 0xefffffff;
  }
  if (param_2 != 0) {
    _DAT_6001c074 = _DAT_6001c074 & 0xffffdfff;
    return;
  }
  _DAT_6001c074 = _DAT_6001c074 | 0x2000;
  return;
}

