/*
 * Last changed at upstream commit 1e3487dc778d48c15229af05ce0f03f78e15528c
 * https://github.com/espressif/esp-phy-lib/commit/1e3487dc778d48c15229af05ce0f03f78e15528c
 * Upstream date: 2025-01-03 11:45:24 +0800
 * Upstream subject: support h2 eco5 test
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_ble_diag
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_ble_diag(uint param_1,uint param_2,uint param_3,uint param_4)

{
  _DAT_600a4c18 = _DAT_600a4c18 & 0xfffffff8 | param_1 & 7;
  _DAT_600a210c =
       (param_4 & 0xf) << 0x10 |
       (param_3 & 0xf) << 0x14 | (param_2 & 3) << 0xe | _DAT_600a210c & 0xff003fff;
  return;
}

