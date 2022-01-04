/*
 * Last changed at upstream commit 4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * https://github.com/espressif/esp-phy-lib/commit/4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * Upstream date: 2022-01-04 15:41:20 +0800
 * Upstream subject: fix the bug that phy libs still have ets_printf
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
  phy_printf("set_chan error! %d\n",param_1);
  return 0x96c;
}

