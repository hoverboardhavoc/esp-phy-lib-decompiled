/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_ana.o -> phy_get_i2c_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_get_i2c_data(void)

{
  DAT_00013071 = 0x1b;
  _DAT_00013072 = 0x6877;
  _DAT_00013074 = 0x5fc80a74;
  _DAT_00013078 = 0x7705740a;
  _DAT_0001307c = 0x3002f000;
  _DAT_00013080 = 0x4191f3b0;
  DAT_00013084 = 0x26;
  return;
}

