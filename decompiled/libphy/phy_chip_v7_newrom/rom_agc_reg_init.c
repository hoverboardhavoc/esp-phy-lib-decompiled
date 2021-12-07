/*
 * Last changed at upstream commit 2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * https://github.com/espressif/esp-phy-lib/commit/2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * Upstream date: 2021-12-07 14:34:50 +0800
 * Upstream subject: Update esp32c3 and esp32s3 phy lib and bb lib Fix the ble task watchdog timeout issue caused by phy enable when exit modem sleep.
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_agc_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_agc_reg_init(uint param_1,int param_2)

{
  _DAT_6001c13c = (param_1 - 3) * 0x40000 & 0x1fc0000 | _DAT_6001c13c & 0xfe03ffff;
  _DAT_6001c094 = (param_1 - 3) * 4 & 0x1fc | _DAT_6001c094 & 0xfffffe03;
  _DAT_6001c0a4 = param_2 << 0xf | 0x2346;
  _DAT_6001c02c = (param_1 & 0xcd007f) << 8 | _DAT_6001c02c & 0x7f80ff | 0x32000000;
  _DAT_6001c05c = _DAT_6001c05c & 0xfff80000 | 3000;
  _DAT_6001c134 = _DAT_6001c134 & 0xfffff00f | 0xa60;
  return;
}

