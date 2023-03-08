/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> ble_chan_trans
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint ble_chan_trans(uint param_1)

{
  if (param_1 == 0) {
    return 0x25;
  }
  if (param_1 == 0xc) {
    return 0x26;
  }
  if (param_1 != 0x27) {
    if (param_1 < 0xc) {
      return param_1 - 1;
    }
    if (param_1 < 0x27) {
      return param_1 - 2;
    }
    param_1 = 0;
  }
  return param_1;
}

