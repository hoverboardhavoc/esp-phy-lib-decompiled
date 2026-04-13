/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
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
  _DAT_201030e0 = &rx_frame;
  if (param_1 < 0x1b) {
    _DAT_20103048 = param_1 * 5 + -0x34;
  }
  else {
    _DAT_20103048 = param_1 - 0x962;
  }
  return;
}

