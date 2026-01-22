/*
 * Last changed at upstream commit ac744ff2c5c39c63f8cdd503d4074905647fdbb6
 * https://github.com/espressif/esp-phy-lib/commit/ac744ff2c5c39c63f8cdd503d4074905647fdbb6
 * Upstream date: 2026-01-22 19:46:19 +0800
 * Upstream subject: support h2 154 txpwr api
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
  puVar3 = &_LANCHOR1;
  iVar1 = -0x18;
  do {
    uVar2 = get_data_sat(iVar1,0x14,0xffffffe8);
    *puVar3 = uVar2;
    iVar1 = iVar1 + 3;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0x18);
  return &_LANCHOR1;
}

