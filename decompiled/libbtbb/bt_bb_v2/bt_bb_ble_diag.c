/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_ble_diag
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_ble_diag(uint param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0x1f) << 5;
  if (param_3 == 0) {
    _DAT_600c9404 = uVar1 | _DAT_600c9404 & 0xfffff800 | param_1 & 0x1f;
  }
  else {
    _DAT_600c9404 = uVar1 | _DAT_600c9404 & 0xfffffc00 | param_1 & 0x1f | 0x400;
  }
  _DAT_600c210c =
       (param_6 & 0xf) << 0x10 |
       (param_5 & 0xf) << 0x14 | (param_4 & 7) << 0xd | _DAT_600c210c & 0xff001fff;
  return;
}

