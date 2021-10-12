/*
 * Last changed at upstream commit b7095b90157d98f116ba43c35b12d51192dc91c8
 * https://github.com/espressif/esp-phy-lib/commit/b7095b90157d98f116ba43c35b12d51192dc91c8
 * Upstream date: 2021-10-12 21:50:40 +0800
 * Upstream subject: Update libphy and libbb
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
  undefined2 *puVar3;
  
  puVar3 = &phy_param;
  cVar2 = DAT_00012efc;
  do {
    cVar1 = *(char *)((int)puVar3 + 0x9d);
    if (*(char *)((int)puVar3 + 0x9d) < cVar2) {
      cVar1 = cVar2;
    }
    cVar2 = cVar1;
    puVar3 = (undefined2 *)((int)puVar3 + 1);
  } while (puVar3 != (undefined2 *)0x12e6f);
  return;
}

