/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> ram_check_noise_floor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00011872) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ram_check_noise_floor(void)

{
  short sVar1;
  uint uVar2;
  
  _DAT_6001c018 = _DAT_6001c018 & 0xfd7fffff | 0x800000;
  do {
  } while (-1 < (int)(_DAT_6001c018 << 7));
  uVar2 = _DAT_6001c050 | 0xfffffc00;
  if ((int)uVar2 < -0x188) {
    uVar2 = 0xfffffe78;
  }
  sVar1 = (short)uVar2;
  if (-0x160 < sVar1) {
    sVar1 = -0x160;
  }
  return (int)sVar1;
}

