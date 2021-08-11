/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> rc_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rc_cal(void)

{
  int iVar1;
  
  if (-1 < (int)(_DAT_0001310c << 8)) {
    iVar1 = get_rc_dout(DAT_000130b3);
    DAT_0001312a = (undefined1)iVar1;
    DAT_0001312b = 0x7f;
    if ((iVar1 * 0x7b < 0x3188) &&
       (iVar1 = (iVar1 * 0x7b + 0x78) / 100, DAT_0001312b = (undefined1)iVar1, iVar1 == 1)) {
      DAT_0001312b = 2;
    }
    _DAT_0001310c = _DAT_0001310c | 0x800000;
    DAT_0001312c = DAT_0001312b;
    DAT_0001312d = DAT_0001312b;
    DAT_0001312e = DAT_0001312b;
  }
  return;
}

