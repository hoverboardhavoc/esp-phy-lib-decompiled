/*
 * Last changed at upstream commit b7095b90157d98f116ba43c35b12d51192dc91c8
 * https://github.com/espressif/esp-phy-lib/commit/b7095b90157d98f116ba43c35b12d51192dc91c8
 * Upstream date: 2021-10-12 21:50:40 +0800
 * Upstream subject: Update libphy and libbb
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_set_corr_thresh_le
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_set_corr_thresh_le(uint param_1,uint param_2,int param_3)

{
  _DAT_60011064 = (param_2 & 0x3f) << 0xe | (param_1 & 0x3f) << 0x14 | _DAT_60011064 & 0xfc003fff;
  _DAT_600110f8 = (param_2 & 0x3f) << 5 | (param_2 & 0x3f) << 0x13 | _DAT_600110f8 & 0xfe07f81f;
  _DAT_60011060 = _DAT_60011060 & 0x3ffffff | param_3 << 0x1a;
  return;
}

