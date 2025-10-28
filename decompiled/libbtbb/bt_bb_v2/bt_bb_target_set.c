/*
 * Last changed at upstream commit 218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * https://github.com/espressif/esp-phy-lib/commit/218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * Upstream date: 2025-10-28 15:27:17 +0800
 * Upstream subject: update C3 S3 C2 S2 libphy for rxdc opt
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_target_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_target_set(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = -param_1 & 0x1ff;
  _DAT_6001c0d0 = _DAT_6001c0d0 & 0xfffffe00 | uVar3;
  _DAT_60011840 = param_1 * -0x2000 & 0x3fe000U | _DAT_60011840 & 0xffc01fff;
  uVar2 = param_1 * -0x200 & 0x3fe00;
  uVar1 = param_1 * -0x4000 & 0x7fc000;
  _DAT_600118b0 = _DAT_600118b0 & 0x3fff | param_1 * -0x800000 | uVar1;
  _DAT_6001c080 = param_1 * -0x100 & 0x1ff00U | _DAT_6001c080 & 0xff8000ff | 0x180000;
  _DAT_60011898 = _DAT_60011898 & 0xffff8000 | uVar3 | 0x1800;
  _DAT_6001c144 = _DAT_6001c144 & 0xff000000 | uVar3 | uVar2 | 0x300000;
  _DAT_6001189c = _DAT_6001189c & 0xff000000 | uVar3 | uVar2 | 0x300000;
  _DAT_6001c1a4 = _DAT_6001c1a4 & 0xfffc0000 | uVar3 | uVar2;
  _DAT_60011894 = uVar1 | _DAT_60011894 & 0x3fff | param_1 * -0x800000;
  return;
}

