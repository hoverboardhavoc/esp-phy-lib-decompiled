/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
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
  _DAT_60011844 =
       _DAT_6001c0d0 >> 9 & 0x7f | (_DAT_6001c0d0 >> 9 & 0x7f) << 7 | _DAT_60011844 & 0xffffc000;
  _DAT_60011854 = _DAT_60011854 & 0xfffffe03 | 0xc9;
  uVar1 = _DAT_6001c0a4 >> 0xf & 0x7f;
  _DAT_60011850 =
       _DAT_6001c0a4 >> 1 & 0xfe00000 |
       uVar1 | _DAT_60011850 & 0xf0000000 | uVar1 << 0xe | uVar1 << 7;
  _DAT_60011858 = 0x31313131;
  _DAT_6001185c = 0x31313131;
  _DAT_6001184c = _DAT_6001184c & 0xfff80000 | 0x4002710;
  return;
}

