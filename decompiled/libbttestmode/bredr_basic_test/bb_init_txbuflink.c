/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> bb_init_txbuflink
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 * bb_init_txbuflink(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  tx_buflink = tx_buflink & 0xfff00000;
  DAT_00013e6c = DAT_00013e6c & 0xfff00000 | param_2 >> 2 & 0xfffff;
  DAT_00013e70 = DAT_00013e70 & 0xfff00000 | param_3 >> 2 & 0xfffff;
  DAT_00013e74 = DAT_00013e74 & 0xffffc000 | param_4 & 0x3fff;
  if (param_1 != (uint *)0x0) {
    *param_1 = *param_1 & 0x7ff00000 | 0x4f9a;
  }
  return &tx_buflink;
}

