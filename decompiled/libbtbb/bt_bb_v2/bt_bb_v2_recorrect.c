/*
 * Last changed at upstream commit 449b432d94b968a75ffabffae91fe15796de7644
 * https://github.com/espressif/esp-phy-lib/commit/449b432d94b968a75ffabffae91fe15796de7644
 * Upstream date: 2022-02-24 11:32:38 +0800
 * Upstream subject: Update phy lib: S3_20220128_fbd66bc :  for high/low temperature performance C3_20220119_908_049c04c : for high/low temperature performance
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_recorrect
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_recorrect(void)

{
  _DAT_6001c080 = _DAT_6001c080 & 0x1fffffff | 0x40000000;
  _DAT_60011840 = _DAT_60011840 & 0xffffe3ff | 0x800;
  _DAT_6001c084 = _DAT_6001c084 & 0xbfffffff;
  _DAT_60011868 = _DAT_60011868 & 0xffffefe0 | 0x202a;
  _DAT_600118b0 = _DAT_600118b0 & 0xffffc00f | 0x14a0;
  return;
}

