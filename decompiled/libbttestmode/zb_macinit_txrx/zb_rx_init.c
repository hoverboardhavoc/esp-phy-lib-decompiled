/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_rx_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_rx_init(uint param_1)

{
  memset(&rx_frame,0,0x82);
  _DAT_600c30e0 = &rx_frame;
  if (param_1 < 0x1b) {
    _DAT_600c3048 = param_1 * 5 + -0x34;
  }
  else {
    _DAT_600c3048 = param_1 - 0x962;
  }
  return;
}

