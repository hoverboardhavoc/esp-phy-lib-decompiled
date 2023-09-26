/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> zb_macinit_txrx.o -> ieee802154_transmit
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_transmit(void)

{
  _DAT_60049058 = 0;
  _DAT_6004905c = 1;
  _tx_frame = 0x201000a;
  DAT_00010b9c = 0x6050403;
  DAT_00010ba0 = 0x807;
  DAT_00010ba2 = 9;
  phy_printf("TX Start \n\r");
  phy_printf("transmitting frame %d bytes\n\r",_tx_frame & 0xff);
  _DAT_600a30d0 = &tx_frame;
  _DAT_600a3000 = 0x41;
  do {
    if ((_DAT_600a3064 & 1) != 0) {
      phy_printf("TX Done\n\r");
      _DAT_600a3064 = _DAT_600a3064 | 1;
      return;
    }
  } while ((_DAT_600a3064 & 0x20) == 0);
  phy_printf("TX Abort, reason:%x\n\r",_DAT_600a3084 >> 4 & 0x1f);
  _DAT_600a3084 = _DAT_600a3084 | 1;
  return;
}

