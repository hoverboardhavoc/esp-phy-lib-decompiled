/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_rx_rssi_thresh
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_rx_rssi_thresh(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff) << 0x10;
  _DAT_6001c07c = _DAT_6001c07c & 0xff00ffff | uVar1;
  _DAT_600118a0 = _DAT_600118a0 & 0xff00ffff | uVar1;
  _DAT_6001c1a0 = (param_2 & 0xff) << 0x15 | _DAT_6001c1a0 & 0xe01fffff;
  _DAT_600118ac = (param_2 & 0xff) << 0x17 | _DAT_600118ac & 0x807fffff;
  return;
}

