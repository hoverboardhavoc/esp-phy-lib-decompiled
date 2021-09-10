/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_newrom.o -> temp_to_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int temp_to_power(int param_1,int param_2)

{
  return (int)(char)(((param_1 - param_2) * 0x10000 >> 0x10) / 8);
}

