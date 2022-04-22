/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> get_temp_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_temp_init(void)

{
  rom_tsens_temp_read();
  DAT_0001468e = DAT_0001450e;
  if (DAT_00014680 == '\x11') {
    DAT_0001468e = DAT_00014688;
  }
  DAT_00014512 = DAT_0001468e;
  DAT_00014510 = DAT_0001468e;
  return;
}

