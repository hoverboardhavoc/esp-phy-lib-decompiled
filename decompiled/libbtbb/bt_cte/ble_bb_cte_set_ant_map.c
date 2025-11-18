/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_cte.o -> ble_bb_cte_set_ant_map
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ble_bb_cte_set_ant_map(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    *(undefined2 *)(iVar1 * 2 + 0x600c2130) = *(undefined2 *)(param_1 + iVar1 * 2);
  }
  return;
}

