/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_init_cmplx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_v2_init_cmplx(int param_1)

{
  bt_bb_v2_tx_set(0);
  bt_bb_v2_rx_set(4);
  set_gauss_coeff_1m();
  set_gauss_coeff_2m();
  bt_bb_set_le_tx_on_delay((uint)bt_bb_cca_en * 0x14 + 0x28);
  bt_bb_tx_cca_period(0x36,0x14);
  bt_bb_set_zb_tx_on_delay(0x28);
  ieee802154_txon_delay_set();
  bt_bb_coex_config();
  if (param_1 != 0) {
    bt_bb_v2_version();
    return;
  }
  return;
}

