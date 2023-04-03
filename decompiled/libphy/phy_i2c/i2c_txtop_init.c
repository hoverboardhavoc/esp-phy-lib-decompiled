/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_i2c.o -> i2c_txtop_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void i2c_txtop_init(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  i2c_writeReg_Mask(0x6b,1,2,3,0,7);
  i2c_writeReg_Mask(0x6b,1,4,3,0,1);
  i2c_writeReg_Mask(0x6b,1,4,6,4,3);
  i2c_writeReg_Mask(0x6b,1,2,6,4,3);
  i2c_writeReg_Mask(0x6b,1,3,7,4,2);
  i2c_writeReg_Mask(0x6b,1,3,3,0,2);
  i2c_writeReg_Mask(0x6b,1,1,7,4,2);
  uVar3 = chip_i2c_readReg();
  phy_i2c_enter_critical(1);
  iVar1 = get_i2c_hostid(0x6b);
  puVar2 = (uint *)((iVar1 + 0x1802b600) * 4);
  do {
  } while ((int)(*puVar2 << 6) < 0);
  *puVar2 = (uVar3 & 0xf0 | 2) << 0x10 | 0x500016b;
  do {
  } while ((int)(*puVar2 << 6) < 0);
  return;
}

