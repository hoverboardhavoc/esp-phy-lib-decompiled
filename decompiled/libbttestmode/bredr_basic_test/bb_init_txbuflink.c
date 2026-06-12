/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbttestmode -> bredr_basic_test.o -> bb_init_txbuflink
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 * bb_init_txbuflink(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  tx_buflink = tx_buflink & 0xfff00000;
  DAT_00013e60 = DAT_00013e60 & 0xfff00000 | param_2 >> 2 & 0xfffff;
  DAT_00013e64 = DAT_00013e64 & 0xfff00000 | param_3 >> 2 & 0xfffff;
  DAT_00013e68 = DAT_00013e68 & 0xffffc000 | param_4 & 0x3fff;
  if (param_1 != (uint *)0x0) {
    *param_1 = *param_1 & 0x7ff00000 | 0x4f97;
  }
  return &tx_buflink;
}

