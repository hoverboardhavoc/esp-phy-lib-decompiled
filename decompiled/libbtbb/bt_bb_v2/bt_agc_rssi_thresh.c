/*
 * Last changed at upstream commit 38908075833e4ae3a48e6ffe431a672698e07e21
 * https://github.com/espressif/esp-phy-lib/commit/38908075833e4ae3a48e6ffe431a672698e07e21
 * Upstream date: 2025-02-13 17:19:18 +0800
 * Upstream subject: update H2 libphy fit ECO5 btbb rssi fix
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_rssi_thresh
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_rssi_thresh(void)

{
  uint uVar1;
  
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

