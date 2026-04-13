/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bredr_tx_cca_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bredr_tx_cca_set(int param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6,
                     uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint in_stack_00000000;
  int in_stack_00000004;
  
  if (param_1 == 0) {
    _DAT_20102454 = _DAT_20102454 & 0x7fffffff;
  }
  else {
    _DAT_20102454 = _DAT_20102454 | 0x80000000;
  }
  uVar1 = (param_2 & 0xff) << 0xc;
  if (param_3 == 0) {
    uVar1 = uVar1 | _DAT_20102454 & 0xbff00fff;
  }
  else {
    uVar1 = uVar1 | _DAT_20102454 & 0xfff00fff | 0x40000000;
  }
  uVar2 = (param_4 & 0x1f) << 2;
  if (param_6 == 0) {
    uVar2 = uVar2 | uVar1 & 0xefffff83;
  }
  else {
    uVar2 = uVar2 | uVar1 & 0xffffff83 | 0x10000000;
  }
  uVar1 = (param_7 & 0xff) << 0x14;
  if (param_8 == 0) {
    uVar1 = uVar1 | uVar2 & 0xd00fffff;
  }
  else {
    uVar1 = uVar1 | uVar2 & 0xf00fffff | 0x20000000;
  }
  _DAT_20102454 = (in_stack_00000000 & 0x1f) << 7 | uVar1 & 0xfffff07f;
  _DAT_20102458 = (param_5 & 0x1f) << 0x16 | _DAT_20102458 & 0x3fffff | in_stack_00000004 << 0x1b;
  return;
}

