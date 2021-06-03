/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> ant_wifirx_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ant_wifirx_cfg(uint param_1,uint param_2,int param_3)

{
  _DAT_6001c11c = (param_1 & 1) << 1 | _DAT_6001c11c & 0xfffffffd;
  _DAT_600060b0 = _DAT_600060b0 & 0xffffff | param_2 << 0x18;
  _DAT_600060b4 =
       ((_DAT_600060b4 & 0xffffff00 | param_2) & 0xffff00ff | param_3 << 8) & 0xff00ffff |
       param_3 << 0x10;
  return;
}

