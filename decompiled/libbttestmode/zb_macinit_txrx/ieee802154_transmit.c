/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
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
  DAT_00010b70 = 0x6050403;
  DAT_00010b74 = 0x807;
  DAT_00010b76 = 9;
  phy_printf("TX Start \n\r");
  phy_printf("transmitting frame %d bytes\n\r",_tx_frame & 0xff);
  _DAT_201030d0 = &tx_frame;
  _DAT_20103000 = 0x41;
  do {
    if ((_DAT_20103064 & 1) != 0) {
      phy_printf("TX Done\n\r");
      _DAT_20103064 = _DAT_20103064 | 1;
      return;
    }
  } while ((_DAT_20103064 & 0x20) == 0);
  phy_printf("TX Abort, reason:%x\n\r",_DAT_20103084 >> 4 & 0x1f);
  _DAT_20103084 = _DAT_20103084 | 1;
  return;
}

