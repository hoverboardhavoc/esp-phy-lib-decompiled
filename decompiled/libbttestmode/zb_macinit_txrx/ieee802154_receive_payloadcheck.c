/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> zb_macinit_txrx.o -> ieee802154_receive_payloadcheck
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_receive_payloadcheck(undefined4 param_1)

{
  int iVar1;
  
  memset(&rx_frame,0,0x82);
  _DAT_600a30e0 = &rx_frame;
  _DAT_600a3048 = param_1;
_L10:
  do {
    _DAT_600a3000 = 0x42;
    while ((_DAT_600a3064 & 2) == 0) {
      if ((_DAT_600a3064 & 0x10) != 0) {
        _DAT_600a3064 = _DAT_600a3064 | 0x10;
        goto _L10;
      }
      iVar1 = GetStopCmd();
      if (iVar1 == 0) {
        _DAT_600a3000 = 0x45;
        phy_printf("RX %d %d %d %d %d %d %d %d %d %d\n");
        return;
      }
    }
    _DAT_600a3064 = _DAT_600a3064 | 2;
  } while( true );
}

