/*
 * Last changed at upstream commit 1d4cd3aafa244a0adf5891f058b3519bc970d644
 * https://github.com/espressif/esp-phy-lib/commit/1d4cd3aafa244a0adf5891f058b3519bc970d644
 * Upstream date: 2025-08-01 19:50:02 +0800
 * Upstream subject: 1. fix C5ECO2 signaling test power 2. fix C5ECO2/C6ECO3/H2ECO5 coex problem
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_init_cmplx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_init_cmplx(int param_1)

{
  if (4 < DAT_00012019) {
    BLE_RSSI_COMP = 0;
  }
  bt_bb_v2_tx_set(0);
  bt_bb_v2_rx_set(3);
  set_gauss_coeff_1m();
  set_gauss_coeff_2m();
  _DAT_600a08fc = _DAT_600a08fc & 0xffff0000 | 0x5004;
  _DAT_600a200c = _DAT_600a200c & 0xffffff7f;
  bt_bb_set_le_tx_on_delay((uint)bt_bb_cca_en * 0x14 + 0x31);
  bt_bb_tx_cca_period(0x3f,0x14);
  bt_bb_set_zb_tx_on_delay(0x31);
  ieee802154_txon_delay_set();
  if (4 < DAT_00012019) {
    bt_bb_coex_config();
  }
  if (param_1 != 0) {
    bt_bb_v2_version();
    return;
  }
  return;
}

