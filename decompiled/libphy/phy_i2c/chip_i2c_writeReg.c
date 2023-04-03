/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_i2c.o -> chip_i2c_writeReg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void chip_i2c_writeReg(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  
  phy_i2c_enter_critical();
  iVar1 = get_i2c_hostid(param_1);
  puVar2 = (uint *)((iVar1 + 0x1802b600) * 4);
  do {
  } while ((int)(*puVar2 << 6) < 0);
  *puVar2 = param_3 << 0x10 | param_1 | param_2 << 8 | 0x5000000;
  do {
  } while ((int)(*puVar2 << 6) < 0);
  return;
}

