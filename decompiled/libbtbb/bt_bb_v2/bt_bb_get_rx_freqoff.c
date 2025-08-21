/*
 * Last changed at upstream commit 9c0ed868fe5eb6f321c4fb478136bccbfba5a670
 * https://github.com/espressif/esp-phy-lib/commit/9c0ed868fe5eb6f321c4fb478136bccbfba5a670
 * Upstream date: 2025-08-21 21:37:36 +0800
 * Upstream subject: 'rm C5 and C61 modem_syscon_clk_conf1_reg in phy init
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_get_rx_freqoff
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 bt_bb_get_rx_freqoff(void)

{
  return 0x14;
}

