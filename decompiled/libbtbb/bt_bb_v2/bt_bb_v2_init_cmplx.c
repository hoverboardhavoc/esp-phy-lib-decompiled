/*
 * Last changed at upstream commit f4c28b6d72f6cdfcc377f56b2095c061e811e740
 * https://github.com/espressif/esp-phy-lib/commit/f4c28b6d72f6cdfcc377f56b2095c061e811e740
 * Upstream date: 2023-08-23 15:27:04 +0800
 * Upstream subject: update h2 libphy for wakeup tx memory
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_init_cmplx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_init_cmplx(int param_1)

{
  bt_bb_v2_tx_set(0);
  bt_bb_v2_rx_set(3);
  set_gauss_coeff_1m();
  set_gauss_coeff_2m();
  zb_txon_delay_set();
  _DAT_600a08fc = _DAT_600a08fc & 0xffff0000 | 0x5004;
  if (param_1 != 0) {
    bt_bb_v2_version();
    return;
  }
  return;
}

