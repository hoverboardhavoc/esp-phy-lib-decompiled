/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_dpo_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_dpo_set(void)

{
  _DAT_60011038 = _DAT_60011038 & 0xfffff87f | 0x300;
  _DAT_60011020 = _DAT_60011020 & 0xfffc03c0 | 0x19806;
  _DAT_60011024 = _DAT_60011024 & 0x87fffffd | 0x30000000;
  _DAT_60011028 = _DAT_60011028 & 0xffffffcf | 0x20;
  return;
}

