/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> zb_macinit_txrx.o -> ieee802154_receive
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ieee802154_receive(void)

{
  _DAT_60049058 = 0;
  _DAT_6004905c = 1;
  memset(&rx_frame,0,0x82);
  _DAT_201030e0 = &rx_frame;
  _DAT_20103000 = 0x42;
  while( true ) {
    if ((_DAT_20103064 & 2) != 0) break;
    if ((_DAT_20103064 & 0x10) != 0) {
      phy_printf("RX Abort, reason:%x\n\r",_DAT_20103080 >> 4 & 0x1f);
      _DAT_20103080 = _DAT_20103080 | 0x10;
    }
  }
  phy_printf("RX Done (%d bytes)\n\r",rx_frame);
  _DAT_20103064 = _DAT_20103064 | 2;
  return 0;
}

