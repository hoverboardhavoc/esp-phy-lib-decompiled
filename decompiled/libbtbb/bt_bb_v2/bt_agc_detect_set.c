/*
 * Last changed at upstream commit 1d4cd3aafa244a0adf5891f058b3519bc970d644
 * https://github.com/espressif/esp-phy-lib/commit/1d4cd3aafa244a0adf5891f058b3519bc970d644
 * Upstream date: 2025-08-01 19:50:02 +0800
 * Upstream subject: 1. fix C5ECO2 signaling test power 2. fix C5ECO2/C6ECO3/H2ECO5 coex problem
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_detect_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_detect_set(void)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_00012019 < 5) {
    uVar1 = 0xff83ffff;
    uVar2 = 0x100000;
  }
  else {
    uVar1 = 0xfffe0fff;
    uVar2 = 0x4000;
  }
  uVar1 = _DAT_600a28a8 & uVar1;
  _DAT_600a28a8 = uVar1 | uVar2;
  _DAT_600a28a0 = _DAT_600a28a0 & 0xc0ffffff | 0x24000000;
  if (DAT_00012019 < 5) {
    _DAT_600a28ac = _DAT_600a28ac & 0xff87ffff | 0x380000;
  }
  else {
    _DAT_600a28a8 = uVar1 & 0xfffffff0 | uVar2 | 7;
  }
  _DAT_600a28b8 = _DAT_600a28b8 & 0xfffff0ff | 0x700;
  _DAT_600a28c0 = _DAT_600a28c0 & 0x1f | 0x9c752940;
  _DAT_600a28c4 = _DAT_600a28c4 & 0x3ff | 0x9ca7bc00;
  return;
}

