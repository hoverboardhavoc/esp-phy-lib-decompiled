/*
 * Last changed at upstream commit 6b304ed9f5ba7f70b2bde6549f24f18f6b634f23
 * https://github.com/espressif/esp-phy-lib/commit/6b304ed9f5ba7f70b2bde6549f24f18f6b634f23
 * Upstream date: 2026-04-20 19:43:28 +0800
 * Upstream subject: S31 support 154 api and light sleep
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
  DAT_00010b64 = 0x6050403;
  DAT_00010b68 = 0x807;
  DAT_00010b6a = 9;
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

