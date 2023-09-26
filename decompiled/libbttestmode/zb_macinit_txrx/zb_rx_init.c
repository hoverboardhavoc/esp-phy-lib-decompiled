/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
  _DAT_600a30e0 = &rx_frame;
  if (param_1 < 0x1b) {
    _DAT_600a3048 = param_1 * 5 + -0x34;
  }
  else {
    _DAT_600a3048 = param_1 - 0x962;
  }
  return;
}

