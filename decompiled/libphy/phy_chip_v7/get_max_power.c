/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> get_max_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_max_power(void)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  
  puVar3 = &phy_param;
  cVar2 = DAT_00014518;
  do {
    cVar1 = puVar3[0xf5];
    if ((char)puVar3[0xf5] < cVar2) {
      cVar1 = cVar2;
    }
    cVar2 = cVar1;
    puVar3 = puVar3 + 1;
  } while (puVar3 != (undefined1 *)0x14431);
  return;
}

