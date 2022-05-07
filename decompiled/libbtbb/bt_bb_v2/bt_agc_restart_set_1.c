/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_restart_set_1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_restart_set_1(void)

{
  _DAT_60046888 = _DAT_60046888 & 0xefffffff;
  _DAT_600468a4 = _DAT_600468a4 & 0xf8007fff | 0xe90000;
  _DAT_600468ac = _DAT_600468ac & 0xfffc0000 | 0x31145;
  _DAT_600468b8 = _DAT_600468b8 & 0xfffff | 0x3f100000;
  _DAT_600468bc = _DAT_600468bc & 0xf80001ff | 0xf9261200;
  _DAT_60046884 = _DAT_60046884 & 0xffffff | 0xf4800000;
  return;
}

