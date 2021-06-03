/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libbtbb -> bt_bb_v2.o -> bt_get_channel_pwr_unset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_get_channel_pwr_unset(void)

{
  _DAT_60011004 = _DAT_60011004 & 0xfffffcff;
  force_coex_timer11_bt_pti_v2(0);
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfdffffff;
  return;
}

