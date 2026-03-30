/*
 * Last changed at upstream commit 3dad662616b80b89abed23f218fb8ef2222ceb63
 * https://github.com/espressif/esp-phy-lib/commit/3dad662616b80b89abed23f218fb8ef2222ceb63
 * Upstream date: 2026-03-30 10:56:56 +0800
 * Upstream subject: support h4eco1 libphy
 * Source: libbttestmode -> zb_macinit_txrx.o -> ieee802154_receive_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_receive_print(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  memset(&rx_frame,0,0x82);
  _DAT_600c30e0 = &rx_frame;
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = 0;
  _DAT_600c3048 = param_1;
_L30:
  do {
    _DAT_600c3000 = 0x42;
    while ((_DAT_600c3064 & 2) == 0) {
      if ((_DAT_600c3064 & 0x10) != 0) {
        _DAT_600c3064 = _DAT_600c3064 | 0x10;
        iVar3 = iVar3 + 1;
        if ((_DAT_600c3080 >> 4 & 0x1f) == 2) {
          iVar4 = iVar4 + 1;
        }
        goto _L30;
      }
      iVar1 = GetStopCmd();
      if (iVar1 == 0) {
        _DAT_600c3000 = 0x45;
        phy_printf("RX %d %d %d %d %d %d %d %d %d %d\n",iVar2,iVar3,iVar4);
        return;
      }
    }
    _DAT_600c3064 = _DAT_600c3064 | 2;
    iVar2 = iVar2 + 1;
    phy_printf(&_LC6);
  } while( true );
}

