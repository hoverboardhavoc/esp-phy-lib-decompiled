/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_tx_cca_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_tx_cca_set(int param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6,
                     uint param_7,int param_8)

{
  uint uVar1;
  uint in_stack_00000000;
  uint in_stack_00000004;
  
  if (param_1 == 0) {
    _DAT_600a20b8 = _DAT_600a20b8 & 0x7fffffff;
  }
  else {
    _DAT_600a20b8 = _DAT_600a20b8 | 0x80000000;
  }
  _DAT_600a20b8 = (param_2 & 0xff) << 1 | _DAT_600a20b8 & 0xfffffe01 | 1;
  if (param_3 == 0) {
    _DAT_600a20bc = _DAT_600a20bc & 0xbfffffff;
  }
  else {
    _DAT_600a20bc = _DAT_600a20bc | 0x40000000;
  }
  _DAT_600a20bc = (param_5 & 0x1f) << 0x14 | (param_4 & 0x1f) << 0x19 | _DAT_600a20bc & 0xc00fffff;
  if (param_6 == 0) {
    _DAT_600a20c0 = _DAT_600a20c0 & 0xffdfffff;
  }
  else {
    _DAT_600a20c0 = _DAT_600a20c0 | 0x200000;
  }
  uVar1 = (param_7 & 0xff) << 0xd;
  if (param_8 == 0) {
    uVar1 = uVar1 | _DAT_600a20c0 & 0xffe00fff;
  }
  else {
    uVar1 = uVar1 | _DAT_600a20c0 & 0xffe01fff | 0x1000;
  }
  _DAT_600a20c0 =
       (in_stack_00000004 & 0x1f) << 2 | (in_stack_00000000 & 0x1f) << 7 | uVar1 & 0xfffff003;
  return;
}

