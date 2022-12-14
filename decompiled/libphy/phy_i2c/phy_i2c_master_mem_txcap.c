/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_i2c.o -> phy_i2c_master_mem_txcap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_i2c_master_mem_txcap(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,2,*(code **)(_g_phyFuns + 0x50));
  _DAT_600afc04 = iVar1 << 0x10 | 0x26b;
  return;
}

