/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_get_tx_pwr_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 * bt_bb_get_tx_pwr_table(undefined1 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  *param_1 = 0x10;
  puVar3 = &_LANCHOR0;
  iVar1 = -0x18;
  do {
    uVar2 = phy_get_data_sat(iVar1,0x50,0xffffffc4);
    *puVar3 = uVar2;
    iVar1 = iVar1 + 3;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0x18);
  return &_LANCHOR0;
}

