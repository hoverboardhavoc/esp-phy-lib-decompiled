/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
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
    uVar4 = 0x30;
    bVar3 = 0xd;
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

