/*
 * Last changed at upstream commit 9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * https://github.com/espressif/esp-phy-lib/commit/9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * Upstream date: 2023-03-31 17:07:27 +0800
 * Upstream subject: update_for_rftest_20230331
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_gain_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_gain_set(void)

{
  uint uVar1;
  
  _DAT_6001c094 = _DAT_6001c094 | 1;
  _DAT_6001104c = _DAT_6001104c | 4;
  uVar1 = _DAT_6001c0d0 >> 9;
  _DAT_60011844 =
       ((char)uVar1 + 0x12) * 0x80000 & 0xf80000U |
       (uVar1 & 0x7f) << 7 | _DAT_60011844 & 0xff07c000 | uVar1 & 0x7f;
  _DAT_60011854 = _DAT_60011854 & 0xfffffe03 | 0xc9;
  uVar1 = _DAT_6001c0a4 >> 0xf & 0x7f;
  _DAT_60011850 =
       _DAT_6001c0a4 >> 1 & 0xfe00000 |
       uVar1 | _DAT_60011850 & 0xf0000000 | uVar1 << 0xe | uVar1 << 7;
  _DAT_60011848 = _DAT_60011848 & 0xff00ffff | 0x500000;
  _DAT_60011858 = 0x2c2c2c2c;
  _DAT_6001185c = 0x2c2c2c2c;
  _DAT_6001184c = _DAT_6001184c & 0xfff80000 | 0x4002710;
  return;
}

