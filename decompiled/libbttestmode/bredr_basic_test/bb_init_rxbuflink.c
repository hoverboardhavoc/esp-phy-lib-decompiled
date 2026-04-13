/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> bb_init_rxbuflink
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 * bb_init_rxbuflink(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  rx_buflink = rx_buflink & 0xfff00000;
  DAT_00012560 = DAT_00012560 & 0xfff00000 | param_2 >> 2 & 0xfffff;
  DAT_00012564 = DAT_00012564 & 0xfff00000 | param_3 >> 2 & 0xfffff;
  DAT_00012568 = DAT_00012568 & 0xffffc000 | param_4 & 0x3fff;
  if (param_1 != (uint *)0x0) {
    *param_1 = *param_1 & 0x7ff00000 | 0x4957;
  }
  return &rx_buflink;
}

