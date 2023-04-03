/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_set(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar1 = DAT_60012f6c;
  _DAT_600a2050 = _DAT_600a2050 & 0xfffff800;
  _DAT_600a2170 = _DAT_600a2170 & 0xffff | param_1 << 0x10;
  _DAT_600a200c = _DAT_600a200c & 0xfff | 0x4000000;
  uVar2 = CONCAT13(DAT_60012f6c,CONCAT12(DAT_60012f6b,CONCAT11(DAT_60012f6a,DAT_60012f69))) &
          0x7fffffff;
  DAT_60012f6a = (undefined1)(uVar2 >> 8);
  DAT_60012f6b = (undefined1)(uVar2 >> 0x10);
  DAT_60012f6c = (undefined1)(uVar2 >> 0x18);
  _DAT_600a204c = _DAT_600a204c | 4;
  bt_agc_v2_set(DAT_60012f69,uVar1);
  _DAT_600a2888 = _DAT_600a2888 & 0xdfffffff | 0x40000;
  _DAT_600a20bc = _DAT_600a20bc | 0x80000000;
  _DAT_600a20c0 = _DAT_600a20c0 & 0xfffffffd;
  _DAT_600a2800 = _DAT_600a2800 | 0xe1c00;
  _DAT_600a284c = _DAT_600a284c & 0xfbffffff;
  _DAT_600a288c = _DAT_600a288c & 0xdfffffff;
  _DAT_600a2054 = _DAT_600a2054 & 0xffffffe0 | 0x14;
  _DAT_600a2000 = _DAT_600a2000 | 1;
  _DAT_600a2c0c = _DAT_600a2c0c & 0xfffffeff;
  _DAT_600a2c00 = _DAT_600a2c00 & 0xfff | 0x400000;
  _DAT_600a2c04 = _DAT_600a2c04 | 0x800;
  return;
}

