/*
 * Last changed at upstream commit c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * https://github.com/espressif/esp-phy-lib/commit/c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * Upstream date: 2024-06-05 14:35:04 +0800
 * Upstream subject: update C6 H2 libphy for coex test ble 154 chan bug
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
  _DAT_600a200c = _DAT_600a200c & 0xffffff7f;
  if (param_1 != 0) {
    bt_bb_v2_version();
    return;
  }
  return;
}

