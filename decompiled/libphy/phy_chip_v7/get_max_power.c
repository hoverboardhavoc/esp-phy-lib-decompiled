/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
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
  cVar2 = DAT_00014570;
  do {
    cVar1 = puVar3[0xf5];
    if ((char)puVar3[0xf5] < cVar2) {
      cVar1 = cVar2;
    }
    cVar2 = cVar1;
    puVar3 = puVar3 + 1;
  } while (puVar3 != (undefined1 *)0x14489);
  return;
}

