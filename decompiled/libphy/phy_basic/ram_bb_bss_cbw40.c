/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_basic.o -> ram_bb_bss_cbw40
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_bb_bss_cbw40(uint param_1)

{
  mac_tx_chan_offset_new(param_1 & 0xff);
  if (param_1 == 0) {
    bb_bss_cbw40_dig(0);
    wifi_fbw_sel(0);
    return;
  }
  bb_bss_cbw40_dig(1);
  if (param_1 == 1) {
    cbw2040_cfg(1);
    wifi_fbw_sel(1);
  }
  else {
    cbw2040_cfg(0);
    wifi_fbw_sel(1);
    if (param_1 == 3) {
      _DAT_600a780c = _DAT_600a780c | 1;
      return;
    }
  }
  _DAT_600a780c = _DAT_600a780c & 0xfffffffe;
  return;
}

