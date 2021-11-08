/*
 * Last changed at upstream commit fe7dc9599bd318518eccc165d9e751114e28e7d2
 * https://github.com/espressif/esp-phy-lib/commit/fe7dc9599bd318518eccc165d9e751114e28e7d2
 * Upstream date: 2021-11-08 20:19:30 +0800
 * Upstream subject: fix the issue of phy register context loss caused by power off the wifi power domain
 * Source: libphy -> phy_chip_v7.o -> ram_check_noise_floor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x000117ea) */
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

