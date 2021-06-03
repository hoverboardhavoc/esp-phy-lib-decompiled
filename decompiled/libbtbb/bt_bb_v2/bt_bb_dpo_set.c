/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_dpo_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_dpo_set(void)

{
  _DAT_60011038 = _DAT_60011038 & 0xfffff87f | 0x280;
  _DAT_60011020 = _DAT_60011020 & 0xfffc03c0 | 0x15406;
  _DAT_60011024 = _DAT_60011024 & 0x87fffffd | 0x28000000;
  _DAT_60011028 = _DAT_60011028 & 0xffffffcf | 0x20;
  return;
}

