/*
 * Last changed at upstream commit 20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * https://github.com/espressif/esp-phy-lib/commit/20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * Upstream date: 2026-09-24 11:57:44 +0800
 * Upstream subject: fix S31 bod rst
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
  bt_bb_set_le_tx_on_delay(0x27);
  bt_bb_tx_cca_period(0x30,0x14);
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

