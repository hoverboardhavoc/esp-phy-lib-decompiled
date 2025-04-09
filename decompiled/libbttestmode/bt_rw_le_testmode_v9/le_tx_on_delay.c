/*
 * Last changed at upstream commit 9863dc07bef5e89f7f45ce0768a019d5ac89de68
 * https://github.com/espressif/esp-phy-lib/commit/9863dc07bef5e89f7f45ce0768a019d5ac89de68
 * Upstream date: 2025-04-09 16:48:19 +0800
 * Upstream subject: support c61 beta1 test
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> le_tx_on_delay
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void le_tx_on_delay(undefined4 param_1)

{
  bt_lc_tx_on_delay();
  bt_bb_set_le_tx_on_delay(param_1);
  return;
}

