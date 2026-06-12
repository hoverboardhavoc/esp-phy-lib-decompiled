/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
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
  bt_bb_v2_rx_set(4);
  set_gauss_coeff_1m();
  set_gauss_coeff_2m();
  _DAT_20100870 = _DAT_20100870 & 0xffff00ff | 0x9600;
  bt_bb_set_le_tx_on_delay(0x3c);
  bt_bb_tx_cca_period(0x45,0x14);
  bt_bb_set_zb_tx_on_delay(0x3c);
  bt_bb_coex_config();
  bt_bb_cca_config();
  if (param_1 != 0) {
    bt_bb_v2_version();
  }
  zb_rx_v0_0_set();
  _DAT_20102c00 = _DAT_20102c00 & 0xffff | 0x19f000;
  return;
}

