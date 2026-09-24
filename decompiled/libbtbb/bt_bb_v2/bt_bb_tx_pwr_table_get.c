/*
 * Last changed at upstream commit 20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * https://github.com/espressif/esp-phy-lib/commit/20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * Upstream date: 2026-09-24 11:57:44 +0800
 * Upstream subject: fix S31 bod rst
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_tx_pwr_table_get
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 * bt_bb_tx_pwr_table_get(byte *param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  byte bVar3;
  
  bVar3 = 0x10;
  if (1 < param_2) {
    bVar3 = 0xf;
  }
  *param_1 = bVar3;
  uVar1 = 0;
  while( true ) {
    if ((uint)*param_1 <= (uVar1 & 0xffff)) break;
    uVar2 = phy_get_data_sat(uVar1 * 3 + -0x18,0x14,0xffffffee);
    (&_LANCHOR1)[uVar1] = uVar2;
    uVar1 = uVar1 + 1;
  }
  return &_LANCHOR1;
}

