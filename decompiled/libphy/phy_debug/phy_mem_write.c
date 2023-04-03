/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_debug.o -> phy_mem_write
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_mem_write(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = 0;
  do {
    sVar2 = sVar1 + 3;
    freq_i2c_mem_write_new(sVar1,*param_1,7);
    param_1 = param_1 + 1;
    sVar1 = sVar2;
  } while (sVar2 != 0x4b0);
  return;
}

