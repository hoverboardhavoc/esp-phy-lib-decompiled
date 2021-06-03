/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> pwdet_ref_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pwdet_ref_code(undefined1 param_1)

{
  start_tx_tone_step(1,0x80,param_1,0,0,0);
  _DAT_6000e05c = _DAT_6000e05c & 0xffff0000;
  _DAT_000130e2 = get_tone_sar_dout(4);
  _DAT_6000e05c = _DAT_6000e05c & 0xffff0000 | 0x5555;
  _DAT_000130e4 = get_tone_sar_dout(4);
  _DAT_6000e05c = _DAT_6000e05c & 0xffff0000 | 0xaaaa;
  return;
}

