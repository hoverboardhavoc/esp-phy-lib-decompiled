/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_le_rx_status_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_le_rx_status_print(uint *param_1)

{
  if ((int)(*param_1 << 0x10) < 0) {
    if (-1 < (int)(*param_1 << 0xf)) {
      phy_printf("rx%3x rssi%d\n",*param_1 >> 0x10 & 0x3ff,(int)(char)(param_1[1] >> 0x10));
      return;
    }
  }
  return;
}

