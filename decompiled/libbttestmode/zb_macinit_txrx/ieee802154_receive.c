/*
 * Last changed at upstream commit 3dad662616b80b89abed23f218fb8ef2222ceb63
 * https://github.com/espressif/esp-phy-lib/commit/3dad662616b80b89abed23f218fb8ef2222ceb63
 * Upstream date: 2026-03-30 10:56:56 +0800
 * Upstream subject: support h4eco1 libphy
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
  _DAT_600c30e0 = &rx_frame;
  _DAT_600c3000 = 0x42;
  while( true ) {
    if ((_DAT_600c3064 & 2) != 0) break;
    if ((_DAT_600c3064 & 0x10) != 0) {
      phy_printf("RX Abort, reason:%x\n\r",_DAT_600c3080 >> 4 & 0x1f);
      _DAT_600c3080 = _DAT_600c3080 | 0x10;
    }
  }
  phy_printf("RX Done (%d bytes)\n\r",rx_frame);
  _DAT_600c3064 = _DAT_600c3064 | 2;
  return;
}

