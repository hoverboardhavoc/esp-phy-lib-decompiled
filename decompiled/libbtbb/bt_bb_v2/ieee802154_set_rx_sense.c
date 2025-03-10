/*
 * Last changed at upstream commit fc76520d481fc3d08cbc001ef47804a4457fffd7
 * https://github.com/espressif/esp-phy-lib/commit/fc76520d481fc3d08cbc001ef47804a4457fffd7
 * Upstream date: 2025-03-10 14:21:08 +0800
 * Upstream subject: update chips libphy add btbb_set_rx_sense api
 * Source: libbtbb -> bt_bb_v2.o -> ieee802154_set_rx_sense
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00010316) */
/* WARNING: Removing unreachable block (ram,0x00010364) */
/* WARNING: Removing unreachable block (ram,0x000102ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_set_rx_sense(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
    _DAT_600a28a0 =
         (0x97 - (uint)(BLE_RSSI_COMP >> 1)) * 0x10000 & 0xff0000 | _DAT_600a28a0 & 0xff00ffff;
    uVar1 = 0x88 - (BLE_RSSI_COMP >> 1);
    if ((uVar1 & 0xffff) < 0x80) {
      uVar1 = 0x80;
    }
    _DAT_600a28ac = (uVar1 & 0xff) << 0x17 | _DAT_600a28ac & 0x807fffff;
    _DAT_600a28b8 = (uVar1 & 0xff) << 0xc | _DAT_600a28b8 & 0xfff00fff;
    return;
  }
  _DAT_600a28b8 = (param_2 - (uint)(BLE_RSSI_COMP >> 1) & 0xff) << 0xc | _DAT_600a28b8 & 0xfff00fff;
  return;
}

