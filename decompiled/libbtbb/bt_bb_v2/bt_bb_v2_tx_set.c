/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_tx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_tx_set(uint param_1)

{
  _DAT_60011018 = _DAT_60011018 & 0xff0000 | 0x20002801;
  _DAT_60011008 = (param_1 & 0x3f) << 0x11 | _DAT_60011008 & 0xff81ffff;
  _DAT_6001100c = _DAT_6001100c & 0xfffff0ff | 0x100;
  return;
}

