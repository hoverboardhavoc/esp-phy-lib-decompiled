/*
 * Last changed at upstream commit fc76520d481fc3d08cbc001ef47804a4457fffd7
 * https://github.com/espressif/esp-phy-lib/commit/fc76520d481fc3d08cbc001ef47804a4457fffd7
 * Upstream date: 2025-03-10 14:21:08 +0800
 * Upstream subject: update chips libphy add btbb_set_rx_sense api
 * Source: libbtbb -> bt_bb_v2.o -> bt_eco_reg_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_eco_reg_set(void)

{
  if (4 < phy_param) {
    _DAT_600a2c0c = _DAT_600a2c0c & 0xffe003ff | 0x1e6c00;
    _DAT_600a2020 = _DAT_600a2020 & 0xfffffff3 | 0x10;
    bt_set_rx_comp((int)(((byte)BLE_RSSI_COMP - 0xe) * 0x1000000) >> 0x18,2,2,0,0);
    _DAT_600a2c10 = _DAT_600a2c10 & 0x1fff | 0xf254c000;
    return;
  }
  return;
}

