/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_i2c.o -> i2c_bbtop_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void i2c_bbtop_init(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  i2c_writeReg_Mask(0x67,1,0,6,0,DAT_00011043);
  i2c_writeReg_Mask(0x67,1,1,6,0,DAT_00011044);
  i2c_writeReg_Mask(0x67,1,2,6,0,DAT_00011045);
  uVar4 = (uint)DAT_00011046;
  uVar3 = chip_i2c_readReg();
  iVar1 = get_i2c_hostid(1);
  puVar2 = (uint *)((iVar1 + 0x1802b600) * 4);
  do {
  } while ((int)(*puVar2 << 6) < 0);
  *puVar2 = (uVar4 | uVar3 & 0x80) << 0x10 | 0x5000367;
  do {
  } while ((int)(*puVar2 << 6) < 0);
  return;
}

