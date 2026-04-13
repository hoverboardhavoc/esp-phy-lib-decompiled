/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> btlc_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void btlc_reg_init(undefined4 param_1)

{
  _DAT_20109c04 = _DAT_20109c04 | 0x400000;
  _DAT_2010a07c = _DAT_2010a07c & 0xfff00fff | 0x2c4000;
  _DAT_20101090 = _DAT_20101090 & 0xfffffff8 | 3;
  _DAT_2010100c = _DAT_2010100c | 1;
  mac_write(&DAT_20101074,param_1);
  _DAT_201010dc = _DAT_201010dc & 0xfc000000 | 0x81002205;
  _DAT_20101084 = _DAT_20101084 & 0xffffff00 | 0x14;
  _DAT_20101088 = _DAT_20101088 & 0xffffff00 | 1;
  _DAT_2010a028 = _DAT_2010a028 & 0xfffffe00 | 200;
  _DAT_20101074 = 0x2f000000;
  _DAT_2010a048 = _DAT_2010a048 | 0x10;
  return;
}

