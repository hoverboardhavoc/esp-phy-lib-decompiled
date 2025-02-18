/*
 * Last changed at upstream commit e5944fc80c813150131566dd0761709ae9fdea89
 * https://github.com/espressif/esp-phy-lib/commit/e5944fc80c813150131566dd0761709ae9fdea89
 * Upstream date: 2025-02-18 15:55:42 +0800
 * Upstream subject: update libphy for RXDC cal opt, no antenna current opt, add cca api
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> bt_lc_tx_on_delay
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_lc_tx_on_delay(uint param_1)

{
  _DAT_60045650 = (param_1 & 0xff) << 0x10 | _DAT_60045650 & 0xff00ff00 | param_1 & 0xff;
  return;
}

