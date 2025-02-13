/*
 * Last changed at upstream commit 38908075833e4ae3a48e6ffe431a672698e07e21
 * https://github.com/espressif/esp-phy-lib/commit/38908075833e4ae3a48e6ffe431a672698e07e21
 * Upstream date: 2025-02-13 17:19:18 +0800
 * Upstream subject: update H2 libphy fit ECO5 btbb rssi fix
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_init_cmplx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_init_cmplx(int param_1)

{
  if (4 < phy_param) {
    BLE_RSSI_COMP = 0;
  }
  bt_bb_v2_tx_set(0);
  bt_bb_v2_rx_set(3);
  set_gauss_coeff_1m();
  set_gauss_coeff_2m();
  _DAT_600a08fc = _DAT_600a08fc & 0xffff0000 | 0x5004;
  _DAT_600a200c = _DAT_600a200c & 0xffffff7f;
  bt_bb_set_le_tx_on_delay(0x31);
  bt_bb_tx_cca_period(0x3f,0x14);
  bt_bb_set_zb_tx_on_delay(0x32);
  ieee802154_txon_delay_set();
  if (param_1 != 0) {
    bt_bb_v2_version();
    return;
  }
  return;
}

