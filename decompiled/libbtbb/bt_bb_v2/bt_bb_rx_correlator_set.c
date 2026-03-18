/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_correlator_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_correlator_set(void)

{
  _DAT_600c2114 = _DAT_600c2114 & 0xf00000ff | 0x8aa600;
  _DAT_600c2064 = _DAT_600c2064 & 0xfc003fff | 0x518000;
  _DAT_600c20f8 = _DAT_600c20f8 & 0x8000001f | 0x234f0c0;
  _DAT_600c2060 = _DAT_600c2060 & 0xff | 0x10208200;
  return;
}

