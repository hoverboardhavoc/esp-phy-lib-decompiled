/*
 * Last changed at upstream commit 3dad662616b80b89abed23f218fb8ef2222ceb63
 * https://github.com/espressif/esp-phy-lib/commit/3dad662616b80b89abed23f218fb8ef2222ceb63
 * Upstream date: 2026-03-30 10:56:56 +0800
 * Upstream subject: support h4eco1 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_target_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_target_set(void)

{
  _DAT_600c2898 = _DAT_600c2898 & 0xfffffe00 | 0x1d4;
  _DAT_600c28b0 = _DAT_600c28b0 & 0x7fffff | 0xea000000;
  _DAT_600c2840 = _DAT_600c2840 & 0xffc01fff | 0x3a8000;
  _DAT_600c2894 = _DAT_600c2894 & 0xff803fff | 0x740000;
  _DAT_600c28b4 = _DAT_600c28b4 & 0x7fffff | 0xea000000;
  return;
}

