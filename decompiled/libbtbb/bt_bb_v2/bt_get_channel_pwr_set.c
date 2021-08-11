/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libbtbb -> bt_bb_v2.o -> bt_get_channel_pwr_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_get_channel_pwr_set(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0x7f) << 1;
  do {
  } while (-1 < (int)(uVar1 | _DAT_6000e0c4 & 0xffff7f01 | 0x2000000 | 0x100));
  _DAT_6000e0c4 = uVar1 | _DAT_6000e0c4 & 0xffff7e01 | 0x2000000;
  force_coex_timer11_BT_V3_2();
  force_coex_timer11_bt_pti_v2(0xf);
  _DAT_60011004 = _DAT_60011004 | 0x300;
  return;
}

