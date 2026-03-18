/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
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
  _DAT_600c30e0 = &rx_frame;
  _DAT_600c3048 = param_1;
_L18:
  do {
    _DAT_600c3000 = 0x42;
    while ((_DAT_600c3064 & 2) == 0) {
      if ((_DAT_600c3064 & 0x10) != 0) {
        _DAT_600c3064 = _DAT_600c3064 | 0x10;
        goto _L18;
      }
      iVar1 = GetStopCmd();
      if (iVar1 == 0) {
        _DAT_600c3000 = 0x45;
        ets_printf("RX %d %d %d %d %d %d %d %d %d %d\n");
        return;
      }
    }
    _DAT_600c3064 = _DAT_600c3064 | 2;
  } while( true );
}

