/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
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
  _DAT_201030e0 = &rx_frame;
  _DAT_20103048 = param_1;
_L10:
  do {
    _DAT_20103000 = 0x42;
    while ((_DAT_20103064 & 2) == 0) {
      if ((_DAT_20103064 & 0x10) != 0) {
        _DAT_20103064 = _DAT_20103064 | 0x10;
        goto _L10;
      }
      iVar1 = GetStopCmd();
      if (iVar1 == 0) {
        _DAT_20103000 = 0x45;
        phy_printf("RX %d %d %d %d %d %d %d %d %d %d\n");
        return;
      }
    }
    _DAT_20103064 = _DAT_20103064 | 2;
  } while( true );
}

