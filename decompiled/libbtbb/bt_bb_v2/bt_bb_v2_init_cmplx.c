/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_init_cmplx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_v2_init_cmplx(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (phy_param != '\0') {
    uVar1 = 0xfffffffc;
  }
  bt_bb_v2_tx_set(0);
  bt_bb_v2_rx_set(uVar1);
  set_gauss_coeff_1m();
  set_gauss_coeff_2m();
  bt_bb_set_le_tx_on_delay((uint)bt_bb_cca_en * 0x14 + 0x3c);
  bt_bb_tx_cca_period(0x45,0x14);
  bt_bb_set_zb_tx_on_delay(0x3c);
  ieee802154_txon_delay_set();
  bt_bb_coex_config();
  bt_bb_cca_config();
  if (param_1 != 0) {
    bt_bb_v2_version();
    return;
  }
  return;
}

