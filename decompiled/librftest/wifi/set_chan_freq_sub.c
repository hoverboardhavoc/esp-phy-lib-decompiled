/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> set_chan_freq_sub
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_chan_freq_sub(uint param_1)

{
  _DAT_6000e150 = _DAT_6000e150 & 0xf00fffff | param_1 << 0x14;
  do {
  } while (_DAT_6000e168 < 0);
  _DAT_6000e0c4 = (param_1 & 0x7f) << 1 | _DAT_6000e0c4 & 0xfffffe00;
  ets_delay_us(1);
  do {
  } while (_DAT_6000e168 < 0);
  return;
}

