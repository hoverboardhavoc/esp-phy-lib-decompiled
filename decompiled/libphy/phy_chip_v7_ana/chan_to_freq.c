/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> chan_to_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint chan_to_freq(int param_1)

{
  if ((param_1 != 0) && (param_1 < 0xf)) {
    if (param_1 != 0xe) {
      return (param_1 + -1) * 5 + 0x96cU & 0xffff;
    }
    return 0x9b4;
  }
  ets_printf("set_chan error! %d\n",param_1);
  return 0x96c;
}

