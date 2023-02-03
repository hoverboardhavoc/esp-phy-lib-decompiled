/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_i2c.o -> i2c_sar2_init_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void i2c_sar2_init_code(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  i2c_writeReg_Mask(0x69,0,4,3,0,param_1 >> 8);
  iVar1 = get_i2c_hostid(0);
  puVar2 = (uint *)((iVar1 + 0x1802b600) * 4);
  do {
  } while ((int)(*puVar2 << 6) < 0);
  *puVar2 = (param_1 & 0xff) << 0x10 | 0x5000369;
  do {
  } while ((int)(*puVar2 << 6) < 0);
  return;
}

