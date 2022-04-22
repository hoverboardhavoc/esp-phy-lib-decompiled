/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_ana.o -> get_txcap_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_txcap_data(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(DAT_000121f6 >> 2);
  if (2 < uVar1) {
    uVar1 = 2;
  }
  iVar2 = uVar1 * 3;
  DAT_000120c1 = DAT_000120c1 & 0xf0 | *(byte *)(iVar2 + 0x1215c);
  DAT_000120c2 = *(char *)(iVar2 + 0x1215e) << 4 | *(byte *)(iVar2 + 0x1215d);
  return;
}

