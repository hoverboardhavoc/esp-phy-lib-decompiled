/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> phy_test.o -> force_txon_mode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void force_txon_mode(uint param_1,uint param_2)

{
  _DAT_600a0910 = _DAT_600a0910 | 0x3000;
  _DAT_600a0410 = (param_2 & 0x3f) << 0x11 | (param_1 & 1) << 0x17 | _DAT_600a0410 & 0xff01ffff;
  force_txon(0);
  if (param_1 == 0) {
    _DAT_600a0910 = _DAT_600a0910 & 0xfffff3ff;
    ets_delay_us(1);
    _DAT_600a0910 = _DAT_600a0910 & 0xfffffcff;
  }
  else {
    _DAT_600a0910 = _DAT_600a0910 & 0xfffffcff | 0x200;
    ets_delay_us(1);
    _DAT_600a0910 = _DAT_600a0910 & 0xfffff3ff | 0x800;
    ets_delay_us(1);
    _DAT_600a0910 = _DAT_600a0910 | 0xc00;
  }
  ets_delay_us(1);
  return;
}

