/*
 * Last changed at upstream commit a067a167a3f5581e48f4d21ed3030475dbf281da
 * https://github.com/espressif/esp-phy-lib/commit/a067a167a3f5581e48f4d21ed3030475dbf281da
 * Upstream date: 2024-09-02 19:45:01 +0800
 * Upstream subject: update c5mp libphy support sleep, fix wifi coex scan no ap, fix ble rx crc err
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_ble_diag
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_ble_diag(uint param_1,uint param_2,uint param_3,uint param_4)

{
  _DAT_600a9404 = _DAT_600a9404 & 0xfffffff0 | param_1 & 0xf;
  _DAT_600a210c =
       (param_4 & 0xf) << 0x10 |
       (param_3 & 0xf) << 0x14 | (param_2 & 7) << 0xd | _DAT_600a210c & 0xff001fff;
  return;
}

