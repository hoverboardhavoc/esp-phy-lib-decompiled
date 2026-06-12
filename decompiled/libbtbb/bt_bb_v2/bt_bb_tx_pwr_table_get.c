/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
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
  undefined4 uVar4;
  
  if (param_2 < 2) {
    uVar4 = 0x50;
    bVar3 = 0x10;
  }
  else {
    uVar4 = 0x38;
    bVar3 = 0xf;
  }
  *param_1 = bVar3;
  uVar1 = 0;
  while( true ) {
    if ((uint)*param_1 <= (uVar1 & 0xffff)) break;
    uVar2 = phy_get_data_sat(uVar1 * 3 + -0x18,uVar4,0xffffffc4);
    (&_LANCHOR1)[uVar1] = uVar2;
    uVar1 = uVar1 + 1;
  }
  return &_LANCHOR1;
}

