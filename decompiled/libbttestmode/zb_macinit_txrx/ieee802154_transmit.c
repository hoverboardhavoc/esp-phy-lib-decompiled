/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
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
  DAT_00010ddc = 0x6050403;
  DAT_00010de0 = 0x807;
  DAT_00010de2 = 9;
  ets_printf("TX Start \n\r");
  ets_printf("transmitting frame %d bytes\n\r",_tx_frame & 0xff);
  _DAT_600c30d0 = &tx_frame;
  _DAT_600c3000 = 0x41;
  do {
    if ((_DAT_600c3064 & 1) != 0) {
      ets_printf("TX Done\n\r");
      _DAT_600c3064 = _DAT_600c3064 | 1;
      return;
    }
  } while ((_DAT_600c3064 & 0x20) == 0);
  _DAT_600c30d0 = &tx_frame;
  _DAT_600c3084 = _DAT_600c3084 | 1;
  _DAT_600c3000 = 0x41;
  return;
}

