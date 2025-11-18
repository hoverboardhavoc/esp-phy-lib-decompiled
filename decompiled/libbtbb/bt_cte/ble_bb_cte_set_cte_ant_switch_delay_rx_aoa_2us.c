/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_cte.o -> ble_bb_cte_set_cte_ant_switch_delay_rx_aoa_2us
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_bb_cte_set_cte_ant_switch_delay_rx_aoa_2us(uint param_1)

{
  _DAT_600c212c = _DAT_600c212c & 0xffffff00 | param_1 & 0xff;
  return;
}

