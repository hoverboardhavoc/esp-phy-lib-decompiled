/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> esp_tx_state_out
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void esp_tx_state_out(void)

{
  _DAT_600060b0 = _DAT_600060b0 & 0x3f3f3f3f | 0x404000;
  _DAT_600060b4 = _DAT_600060b4 & 0x3f3f3f3f | 0x40000000;
  _DAT_600060b8 = _DAT_600060b8 & 0x3f3f3f3f | 0x40;
  _DAT_600060bc = _DAT_600060bc & 0xffffff3f;
  return;
}

