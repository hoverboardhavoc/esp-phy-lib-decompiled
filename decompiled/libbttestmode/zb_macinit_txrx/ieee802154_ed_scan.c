/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbttestmode -> zb_macinit_txrx.o -> ieee802154_ed_scan
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_ed_scan(uint param_1,uint param_2)

{
  _DAT_600a3050 = (param_1 & 0xf) << 0x18 | _DAT_600a3050 & 0xf0000000 | param_2 & 0xffffff;
  _DAT_600a3000 = 0x44;
  do {
    if ((_DAT_600a3064 & 0x40) != 0) {
      phy_printf(&_LC7,(int)(char)((uint)_DAT_600a3054 >> 0x10));
      _DAT_600a3064 = _DAT_600a3064 | 0x40;
      return;
    }
  } while ((_DAT_600a3064 & 0x10) == 0);
  phy_printf("E %x\n",_DAT_600a3080);
  _DAT_600a3064 = _DAT_600a3064 | 0x10;
  return;
}

