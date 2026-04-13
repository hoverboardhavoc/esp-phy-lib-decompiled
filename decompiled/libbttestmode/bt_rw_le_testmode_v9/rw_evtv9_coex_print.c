/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_evtv9_coex_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_evtv9_coex_print(void)

{
  _DAT_60031050 = _DAT_60031050 & 0xffffffc0 | 0x9e;
  if (coex_print_start_v9 == 0) {
    coex_print_start_v9 = 1;
  }
  coex_data_last_v9 = _DAT_60031054 & 0xff;
  return;
}

