/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_i2c.o -> i2c_writeReg_Mask
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void i2c_writeReg_Mask(uint param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                      int param_6)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = chip_i2c_readReg();
  phy_i2c_enter_critical(param_2);
  iVar1 = get_i2c_hostid(param_1);
  puVar2 = (uint *)((iVar1 + 0x1802b600) * 4);
  do {
  } while ((int)(*puVar2 << 6) < 0);
  *puVar2 = ((param_6 << (param_5 & 0x1f) |
             uVar3 & ~((1 << ((param_4 - param_5) + 1 & 0x1f)) + -1 << (param_5 & 0x1f))) & 0xff) <<
            0x10 | param_1 | param_3 << 8 | 0x5000000;
  do {
  } while ((int)(*puVar2 << 6) < 0);
  return;
}

