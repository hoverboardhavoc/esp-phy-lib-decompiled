/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_dpo_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_dpo_set(void)

{
  _DAT_60011038 = _DAT_60011038 & 0xfffff87f | 0x280;
  _DAT_60011020 = _DAT_60011020 & 0xfffc03c0 | 0x15406;
  _DAT_60011024 = _DAT_60011024 & 0x83ffffff | 0x28000000;
  _DAT_60011028 = _DAT_60011028 & 0xfffffff3 | 0x34;
  _DAT_6001102c = _DAT_6001102c & 0xfffff009 | 0xfd2;
  _DAT_60011030 = _DAT_60011030 & 0xffffffc0 | 3;
  return;
}

