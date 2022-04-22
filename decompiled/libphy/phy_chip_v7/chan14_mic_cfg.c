/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> chan14_mic_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chan14_mic_cfg(int param_1)

{
  if (param_1 == 1) {
    _DAT_6001c400 = _DAT_6001c400 & 0xffff9fff | 0x2000;
    DAT_00014514 = DAT_00014560;
  }
  else {
    _DAT_6001c400 = _DAT_6001c400 | 0x6000;
  }
  ram_wifi_set_tx_gain(DAT_0001466e,0);
  return;
}

