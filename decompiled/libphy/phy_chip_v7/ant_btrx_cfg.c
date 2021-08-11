/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> ant_btrx_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ant_btrx_cfg(uint param_1,int param_2,uint param_3)

{
  _DAT_6001c11c = (param_1 & 1) << 3 | _DAT_6001c11c & 0xfffffff7;
  _DAT_600060b8 =
       ((_DAT_600060b8 & 0xffff00ff | param_2 << 8) & 0xff00ffff | param_2 << 0x10) & 0xffffff |
       param_3 << 0x18;
  _DAT_600060bc = _DAT_600060bc & 0xffffff00 | param_3;
  return;
}

