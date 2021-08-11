/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> bb_bss_cbw40
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bb_bss_cbw40(uint param_1)

{
  mac_tx_chan_offset(param_1 & 0xff);
  if (param_1 == 0) {
    bb_bss_cbw40_dig(0);
    bb_bss_cbw40_ana(0);
    return;
  }
  bb_bss_cbw40_dig(1);
  if (param_1 == 1) {
    _DAT_6001d000 = _DAT_6001d000 | 0x40;
    bb_bss_cbw40_ana(0);
  }
  else {
    cbw2040_cfg(0);
    bb_bss_cbw40_ana(1);
    if (param_1 == 3) {
      _DAT_6001cc0c = _DAT_6001cc0c | 1;
      return;
    }
  }
  _DAT_6001cc0c = _DAT_6001cc0c & 0xfffffffe;
  return;
}

