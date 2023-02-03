/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
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
  
  iVar1 = get_i2c_hostid();
  puVar2 = (uint *)((iVar1 + 0x1802b600) * 4);
  do {
  } while ((int)(*puVar2 << 6) < 0);
  *puVar2 = param_3 << 0x10 | param_1 | param_2 << 8 | 0x5000000;
  do {
  } while ((int)(*puVar2 << 6) < 0);
  return;
}

