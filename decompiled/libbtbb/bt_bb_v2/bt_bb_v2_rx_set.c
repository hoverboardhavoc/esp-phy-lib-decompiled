/*
 * Last changed at upstream commit 38908075833e4ae3a48e6ffe431a672698e07e21
 * https://github.com/espressif/esp-phy-lib/commit/38908075833e4ae3a48e6ffe431a672698e07e21
 * Upstream date: 2025-02-13 17:19:18 +0800
 * Upstream subject: update H2 libphy fit ECO5 btbb rssi fix
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_rx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_rx_set(void)

{
  uint uVar1;
  
  bt_bb_rx_set();
  bt_set_rx_comp((int)(((byte)BLE_RSSI_COMP - 0xe) * 0x1000000) >> 0x18,0,0xfffffffc,0xfffffffc,
                 0xfffffffc);
  bt_agc_gain_set();
  bt_agc_rssi_thresh();
  bt_agc_target_set();
  bt_agc_restart_set();
  bt_agc_recorrect_set();
  bt_agc_detect_set();
  bt_bb_rx_correlator_set();
  bt_bb_rx_dpo_set();
  bt_bb_rx_filter_sel();
  zb_rx_core_set();
  zb_rx_v0_0_set();
  zb_rx_auto_sel();
  if (phy_param < 5) {
    return;
  }
  _DAT_600a2c0c = _DAT_600a2c0c & 0xffe003ff | 0x1e6c00;
  _DAT_600a2020 = _DAT_600a2020 & 0xfffffff3 | 0x10;
  uVar1 = (int)(((byte)BLE_RSSI_COMP - 0xe) * 0x1000000) >> 0x18;
  _DAT_600a2844 = (uVar1 & 0x7f) << 7 | _DAT_600a2844 & 0xe0000000 | uVar1 & 0x7f | 0x108000;
  return;
}

