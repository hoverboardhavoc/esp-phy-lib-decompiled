/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_correlator_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_correlator_set(void)

{
  _DAT_600a20fc = _DAT_600a20fc & 0x81ffffff | 0x12000000;
  _DAT_600a2068 = _DAT_600a2068 & 0x81f | 0x10d9b860;
  _DAT_600a2060 = _DAT_600a2060 & 0x3ffffff | 0x10000000;
  _DAT_600a2100 = _DAT_600a2100 & 0xf33fffff | 0x400000;
  _DAT_600a2064 = _DAT_600a2064 & 0xfc000003 | 0x30c908;
  _DAT_600a20f8 = _DAT_600a20f8 & 0x8000001f | 0x214f060;
  return;
}

