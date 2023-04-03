/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_i2c.o -> bias_reg_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bias_reg_set(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = chip_i2c_readReg();
  phy_i2c_enter_critical(0);
  iVar1 = get_i2c_hostid(0x6a);
  puVar2 = (uint *)((iVar1 + 0x1802b600) * 4);
  do {
  } while ((int)(*puVar2 << 6) < 0);
  *puVar2 = (uVar3 & 0xf | 0x80) << 0x10 | 0x500006a;
  do {
  } while ((int)(*puVar2 << 6) < 0);
  return;
}

