/*
 * Last changed at upstream commit 0c849b3d31d44c797c2b48f1b9c1607a8c6c4f82
 * https://github.com/espressif/esp-phy-lib/commit/0c849b3d31d44c797c2b48f1b9c1607a8c6c4f82
 * Upstream date: 2024-11-28 14:21:09 +0800
 * Upstream subject: feat(wifi): add phy support for esp32c5 beta5
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_ble_diag_all
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_ble_diag_all(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6
                       ,int param_7,uint param_8)

{
  uint in_stack_00000000;
  uint in_stack_00000004;
  
  _DAT_600a9404 = _DAT_600a9404 & 0xfffffff0 | param_1 & 0xf;
  _DAT_600a210c =
       (param_6 & 0xf) << 0x18 |
       (param_4 & 0xf) << 0x10 |
       (param_3 & 0xf) << 0x14 | (param_2 & 7) << 0xd | _DAT_600a210c & 0x1fff | param_5 << 0x1c;
  _DAT_600a20ac =
       (in_stack_00000004 & 7) << 0x14 |
       (in_stack_00000000 & 7) << 0x17 |
       (param_8 & 7) << 0x1a | _DAT_600a20ac & 0xfffff | param_7 << 0x1d;
  return;
}

