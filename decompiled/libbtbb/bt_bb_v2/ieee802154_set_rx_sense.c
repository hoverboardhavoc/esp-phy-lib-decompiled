/*
 * Last changed at upstream commit 1d4cd3aafa244a0adf5891f058b3519bc970d644
 * https://github.com/espressif/esp-phy-lib/commit/1d4cd3aafa244a0adf5891f058b3519bc970d644
 * Upstream date: 2025-08-01 19:50:02 +0800
 * Upstream subject: 1. fix C5ECO2 signaling test power 2. fix C5ECO2/C6ECO3/H2ECO5 coex problem
 * Source: libbtbb -> bt_bb_v2.o -> ieee802154_set_rx_sense
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00010344) */
/* WARNING: Removing unreachable block (ram,0x00010356) */
/* WARNING: Removing unreachable block (ram,0x00010372) */
/* WARNING: Removing unreachable block (ram,0x000103ba) */
/* WARNING: Removing unreachable block (ram,0x00010318) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_set_rx_sense(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x88 - (BLE_RSSI_COMP >> 1);
    _DAT_600a28a0 =
         (0x97 - (uint)(BLE_RSSI_COMP >> 1)) * 0x10000 & 0xff0000 | _DAT_600a28a0 & 0xff00ffff;
    if ((uVar1 & 0xffff) < 0x80) {
      uVar1 = 0x80;
    }
    if (phy_param < 5) {
      _DAT_600a28ac = (uVar1 & 0xff) << 0x17 | _DAT_600a28ac & 0x807fffff;
    }
    else {
      _DAT_600a28a8 = (uVar1 & 0xff) << 4 | _DAT_600a28a8 & 0xfffff00f;
    }
    _DAT_600a28b8 = (uVar1 & 0xff) << 0xc | _DAT_600a28b8 & 0xfff00fff;
    return;
  }
  _DAT_600a28b8 = (param_2 - (uint)(BLE_RSSI_COMP >> 1) & 0xff) << 0xc | _DAT_600a28b8 & 0xfff00fff;
  return;
}

