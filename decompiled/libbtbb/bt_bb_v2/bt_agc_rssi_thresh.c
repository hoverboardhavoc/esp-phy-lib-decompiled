/*
 * Last changed at upstream commit 98617ae683c7456706c7de6e27b7f0355c77dc9b
 * https://github.com/espressif/esp-phy-lib/commit/98617ae683c7456706c7de6e27b7f0355c77dc9b
 * Upstream date: 2023-12-29 17:32:23 +0800
 * Upstream subject: fix h2 crash at pos rssi bug
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
  
  _DAT_600a28a0 = (0x97 - ((int)phy_param >> 1)) * 0x10000 | _DAT_600a28a0 & 0xff00ffff;
  uVar1 = 0x88 - ((int)phy_param >> 1);
  if ((uVar1 & 0xffff) < 0x80) {
    uVar1 = 0x80;
  }
  _DAT_600a28ac = _DAT_600a28ac & 0x807fffff | (uVar1 & 0xffff) << 0x17;
  _DAT_600a28b8 = (uVar1 & 0xffff) << 0xc | _DAT_600a28b8 & 0xfff00fff;
  return;
}

