/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
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
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  memset(&rx_frame,0,0x82);
  _DAT_600c30e0 = &rx_frame;
  iVar6 = 0;
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0;
  _DAT_600c3048 = param_1;
_L30:
  do {
    _DAT_600c3000 = 0x42;
    while ((_DAT_600c3064 & 2) == 0) {
      if ((_DAT_600c3064 & 0x10) != 0) {
        _DAT_600c3064 = _DAT_600c3064 | 0x10;
        uVar2 = _DAT_600c3080 >> 4 & 0x1f;
        iVar4 = iVar4 + 1;
        if (uVar2 == 2) {
          iVar5 = iVar5 + 1;
        }
        else if (uVar2 == 3) {
          iVar6 = iVar6 + 1;
        }
        goto _L30;
      }
      iVar1 = GetStopCmd();
      if (iVar1 == 0) {
        _DAT_600c3000 = 0x45;
        phy_printf("RX %d %d %d %d %d %d %d %d %d %d\n",iVar3,iVar4,iVar5,iVar6);
        return;
      }
    }
    _DAT_600c3064 = _DAT_600c3064 | 2;
    iVar3 = iVar3 + 1;
    phy_printf(&_LC6);
  } while( true );
}

