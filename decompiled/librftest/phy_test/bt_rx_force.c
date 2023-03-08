/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> phy_test.o -> bt_rx_force
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_rx_force(int param_1)

{
  if (param_1 == 0) {
    _DAT_6001c080 = _DAT_6001c080 & 0xffffff3f;
    ets_delay_us(10);
    _DAT_60006110 = _DAT_60006110 & 0xfffffcff | 0x200;
    ets_delay_us(1);
    _DAT_60006110 = _DAT_60006110 | 0x300;
    ets_delay_us(1);
    _DAT_60006110 = _DAT_60006110 & 0xfffffcff;
  }
  else {
    _DAT_6001c080 = _DAT_6001c080 | 0xc0;
    ets_delay_us(10);
    _DAT_60006110 = _DAT_60006110 & 0xfffffcff | 0x200;
    ets_delay_us(1);
    _DAT_60006110 = _DAT_60006110 | 0x300;
  }
  return;
}

