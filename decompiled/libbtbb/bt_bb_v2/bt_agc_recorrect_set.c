/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_recorrect_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_recorrect_set(void)

{
  _DAT_600c28b4 = _DAT_600c28b4 | 0x100;
  _DAT_600c28bc = _DAT_600c28bc & 0xfffffebf | 0xa0;
  _DAT_600c2868 = _DAT_600c2868 & 0xffffffe0 | 0x383c;
  _DAT_600c28b0 = _DAT_600c28b0 & 0xff801fff | 0x73c000;
  return;
}

