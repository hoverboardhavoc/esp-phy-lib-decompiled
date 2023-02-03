/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_i2c.o -> i2c_rfpll_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void i2c_rfpll_init(void)

{
  int iVar1;
  int *piVar2;
  
  i2c_writeReg_Mask(0x62,1,0xb,4,0,0x10);
  i2c_writeReg_Mask(0x62,1,0,4,0,8);
  i2c_writeReg_Mask(0x62,1,4,2,0,7);
  iVar1 = get_i2c_hostid(1);
  piVar2 = (int *)((iVar1 + 0x1802b600) * 4);
  do {
  } while (*piVar2 << 6 < 0);
  *piVar2 = 0x5200363;
  do {
  } while (*piVar2 << 6 < 0);
  return;
}

