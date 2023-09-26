/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
  _DAT_600a30e0 = &rx_frame;
  _DAT_600a3000 = 0x42;
  while( true ) {
    if ((_DAT_600a3064 & 2) != 0) break;
    if ((_DAT_600a3064 & 0x10) != 0) {
      phy_printf("RX Abort, reason:%x\n\r",_DAT_600a3080 >> 4 & 0x1f);
      _DAT_600a3080 = _DAT_600a3080 | 0x10;
    }
  }
  phy_printf("RX Done (%d bytes)\n\r",rx_frame);
  _DAT_600a3064 = _DAT_600a3064 | 2;
  return 0;
}

