/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
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
  _DAT_60011020 = _DAT_60011020 & 0xfffc03c0 | 0x19806;
  _DAT_60011024 = _DAT_60011024 & 0x83ffffff | 0x28000000;
  _DAT_60011028 = _DAT_60011028 & 0xffffffc3 | 4;
  _DAT_6001102c = _DAT_6001102c & 0xf0000009 | 0xfdfdfd2;
  _DAT_60011030 = _DAT_60011030 & 0xffffffc0 | 3;
  return;
}

