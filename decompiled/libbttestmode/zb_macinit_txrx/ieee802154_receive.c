/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbttestmode -> zb_macinit_txrx.o -> ieee802154_receive
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_receive(void)

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
  return;
}

