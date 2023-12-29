/*
 * Last changed at upstream commit 98617ae683c7456706c7de6e27b7f0355c77dc9b
 * https://github.com/espressif/esp-phy-lib/commit/98617ae683c7456706c7de6e27b7f0355c77dc9b
 * Upstream date: 2023-12-29 17:32:23 +0800
 * Upstream subject: fix h2 crash at pos rssi bug
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
  DAT_00010d30 = 0x6050403;
  DAT_00010d34 = 0x807;
  DAT_00010d36 = 9;
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
  _DAT_600a30d0 = &tx_frame;
  _DAT_600a3084 = _DAT_600a3084 | 1;
  _DAT_600a3000 = 0x41;
  return;
}

