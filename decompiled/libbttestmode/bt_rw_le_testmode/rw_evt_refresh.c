/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_evt_refresh
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_evt_refresh(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  if ((_DAT_60031214 & 8) != 0) {
    _DAT_60031218 = _DAT_60031218 | 8;
    puVar1 = (uint *)&DAT_3ffb0000;
    do {
      puVar2 = puVar1 + 1;
      *puVar1 = *puVar1 & 0xffffffcf;
      puVar1 = puVar2;
    } while (puVar2 != (uint *)0x3ffb0040);
    if (param_1 != 0) {
      _DAT_3ffb02a0 = _DAT_3ffb02a0 & 0xffff7fff;
      _DAT_3ffb02b0 = _DAT_3ffb02b0 & 0xffff7fff;
      rw_le_rx_status_print(&DAT_3ffb02c0);
      rw_le_rx_status_print(&DAT_3ffb02d0);
      rw_le_rxundone(&DAT_3ffb02c0);
      rw_le_rxundone(&DAT_3ffb02d0);
    }
    evt_refresh_ind = 1;
    return;
  }
  return;
}

