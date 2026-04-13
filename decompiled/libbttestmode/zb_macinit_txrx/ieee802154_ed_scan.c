/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> zb_macinit_txrx.o -> ieee802154_ed_scan
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ieee802154_ed_scan(uint param_1,uint param_2)

{
  _DAT_20103050 = (param_1 & 0xf) << 0x18 | _DAT_20103050 & 0xf0000000 | param_2 & 0xffffff;
  _DAT_20103000 = 0x44;
  do {
    if ((_DAT_20103064 & 0x40) != 0) {
      phy_printf(&_LC5,(int)(char)((uint)_DAT_20103054 >> 0x10));
      _DAT_20103064 = _DAT_20103064 | 0x40;
      return;
    }
  } while ((_DAT_20103064 & 0x10) == 0);
  phy_printf("E %x\n",_DAT_20103080);
  _DAT_20103064 = _DAT_20103064 | 0x10;
  return;
}

