/*
 * Last changed at upstream commit fc76520d481fc3d08cbc001ef47804a4457fffd7
 * https://github.com/espressif/esp-phy-lib/commit/fc76520d481fc3d08cbc001ef47804a4457fffd7
 * Upstream date: 2025-03-10 14:21:08 +0800
 * Upstream subject: update chips libphy add btbb_set_rx_sense api
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_gain_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_gain_set(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = _DAT_6001c0a4;
  _DAT_6001c094 = _DAT_6001c094 | 1;
  _DAT_6001104c = _DAT_6001104c | 4;
  uVar2 = _DAT_6001c0d0 >> 9;
  _DAT_60011844 =
       ((char)uVar2 + 0x12) * 0x80000 & 0xf80000U |
       (uVar2 & 0x7f) << 7 | _DAT_60011844 & 0xff07c000 | uVar2 & 0x7f;
  _DAT_60011854 = _DAT_60011854 & 0xfffffe03 | 0xc9;
  bt_agc_gain_max(_DAT_6001c0a4 >> 0xf & 0x7f);
  _DAT_60011850 = (uVar1 >> 0x16 & 0x7f) << 0x15 | _DAT_60011850 & 0xf01fffff;
  _DAT_60011848 = _DAT_60011848 & 0xff00ffff | 0x500000;
  _DAT_60011858 = 0x2c2c2c2c;
  _DAT_6001185c = 0x2c2c2c2c;
  _DAT_6001184c = _DAT_6001184c & 0xfff80000 | 0x4002710;
  return;
}

