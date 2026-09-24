/*
 * Last changed at upstream commit 20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * https://github.com/espressif/esp-phy-lib/commit/20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * Upstream date: 2026-09-24 11:57:44 +0800
 * Upstream subject: fix S31 bod rst
 * Source: libbttestmode -> bredr_basic_test.o -> bb_init_txbuflink
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 * bb_init_txbuflink(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  tx_buflink = tx_buflink & 0xfff00000;
  DAT_00013e9c = DAT_00013e9c & 0xfff00000 | param_2 >> 2 & 0xfffff;
  DAT_00013ea0 = DAT_00013ea0 & 0xfff00000 | param_3 >> 2 & 0xfffff;
  DAT_00013ea4 = DAT_00013ea4 & 0xffffc000 | param_4 & 0x3fff;
  if (param_1 != (uint *)0x0) {
    *param_1 = *param_1 & 0x7ff00000 | 0x4fa6;
  }
  return &tx_buflink;
}

