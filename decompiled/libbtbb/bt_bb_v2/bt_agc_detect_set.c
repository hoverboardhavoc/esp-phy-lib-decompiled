/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_detect_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_detect_set(void)

{
  _DAT_600c28a8 = _DAT_600c28a8 & 0xfffffff0 | 7;
  _DAT_600c28b8 = _DAT_600c28b8 & 0xfffff0ff | 0x700;
  _DAT_600c28c0 = _DAT_600c28c0 & 0x3ff | 0x9c752800;
  _DAT_600c28c4 = _DAT_600c28c4 & 0x3ff | 0x9ca7bc00;
  return;
}

