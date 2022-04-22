/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> chan14_mic_enable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00012aa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chan14_mic_enable(int param_1,int param_2)

{
  DAT_00014562 = (undefined1)param_1;
  if (param_1 == 0) {
    _DAT_6001c400 = _DAT_6001c400 | 0x6000;
    ram_wifi_set_tx_gain(DAT_0001466e,0);
    return;
  }
  DAT_00014560 = (undefined1)param_2;
  if (0x30 < param_2) {
    DAT_00014560 = 0x30;
  }
  return;
}

