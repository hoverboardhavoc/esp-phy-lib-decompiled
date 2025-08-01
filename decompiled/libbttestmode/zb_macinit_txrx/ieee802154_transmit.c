/*
 * Last changed at upstream commit 1d4cd3aafa244a0adf5891f058b3519bc970d644
 * https://github.com/espressif/esp-phy-lib/commit/1d4cd3aafa244a0adf5891f058b3519bc970d644
 * Upstream date: 2025-08-01 19:50:02 +0800
 * Upstream subject: 1. fix C5ECO2 signaling test power 2. fix C5ECO2/C6ECO3/H2ECO5 coex problem
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
  DAT_00010e10 = 0x6050403;
  DAT_00010e14 = 0x807;
  DAT_00010e16 = 9;
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

