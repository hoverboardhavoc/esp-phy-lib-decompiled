/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_rx_cal.o -> ram_bb_gain_index
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ram_bb_gain_index(uint param_1)

{
  char cVar1;
  ushort *puVar2;
  ushort local_20 [12];
  
  puVar2 = local_20;
  memcpy(local_20,&_LANCHOR0,0xe);
  cVar1 = '\0';
  do {
    if (*puVar2 == param_1) {
      return;
    }
    cVar1 = cVar1 + '\x01';
    puVar2 = puVar2 + 1;
  } while (cVar1 != '\a');
  return;
}

