/*
 * Last changed at upstream commit aa93b8ad95d8a3c646c24a314480e61b52502920
 * https://github.com/espressif/esp-phy-lib/commit/aa93b8ad95d8a3c646c24a314480e61b52502920
 * Upstream date: 2025-06-06 15:13:47 +0800
 * Upstream subject: support C61 ECO3 test
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_ble_diag_all
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_ble_diag_all(uint param_1,uint param_2,uint param_3,int param_4,uint param_5,int param_6,
                       uint param_7)

{
  uint in_stack_00000000;
  uint in_stack_00000004;
  
  _DAT_600a210c =
       (param_5 & 0xf) << 0x18 |
       (param_3 & 0xf) << 0x10 |
       (param_2 & 0xf) << 0x14 | (param_1 & 7) << 0xd | _DAT_600a210c & 0x1fff | param_4 << 0x1c;
  _DAT_600a20ac =
       (in_stack_00000004 & 7) << 0x14 |
       (in_stack_00000000 & 7) << 0x17 |
       (param_7 & 7) << 0x1a | _DAT_600a20ac & 0xfffff | param_6 << 0x1d;
  return;
}

