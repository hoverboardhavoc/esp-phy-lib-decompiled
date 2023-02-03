/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
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
  i2c_writeReg_Mask(0x6b,1,4,3,0,0);
  i2c_writeReg_Mask(0x6b,1,4,6,4,3);
  i2c_writeReg_Mask(0x6b,1,2,6,4,3);
  i2c_writeReg_Mask(0x6b,1,3,7,4,2);
  i2c_writeReg_Mask(0x6b,1,3,3,0,2);
  i2c_writeReg_Mask(0x6b,1,1,7,4,2);
  uVar3 = chip_i2c_readReg();
  iVar1 = get_i2c_hostid(1);
  puVar2 = (uint *)((iVar1 + 0x1802b600) * 4);
  do {
  } while ((int)(*puVar2 << 6) < 0);
  *puVar2 = (uVar3 & 0xf0 | 2) << 0x10 | 0x500016b;
  do {
  } while ((int)(*puVar2 << 6) < 0);
  return;
}

