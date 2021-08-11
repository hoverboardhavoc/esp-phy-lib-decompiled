/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> agc_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void agc_reg_init(uint param_1,uint param_2)

{
  _DAT_6001c13c = (param_1 - 3) * 0x40000 & 0x1fc0000 | _DAT_6001c13c & 0xfe03ffff;
  _DAT_6001c094 = (param_1 - 3) * 4 & 0x1fc | _DAT_6001c094 & 0xfffffe03;
  _DAT_6001c0a4 = param_2 << 0xf | 0x2346;
  _DAT_6001c02c = (param_1 & 0xcd007f) << 8 | _DAT_6001c02c & 0x7f80ff | 0x32000000;
  _DAT_6001c05c = _DAT_6001c05c & 0xfff80000 | 3000;
  _DAT_60011848 = _DAT_60011848 & 0xffff | 0x50500000;
  _DAT_60011868 = _DAT_60011868 & 0xffff | 0x50500000;
  _DAT_60011850 =
       (param_2 & 0x7f) << 7 | (param_2 & 0x7f) << 0xe | _DAT_60011850 & 0xffe00000 | param_2 & 0x7f
  ;
  _DAT_60011840 = param_2 & 0x7f | _DAT_60011840 & 0xffffff80;
  set_rx_comp();
  return;
}

