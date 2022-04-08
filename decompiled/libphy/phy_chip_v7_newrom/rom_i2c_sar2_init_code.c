/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_i2c_sar2_init_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_i2c_sar2_init_code(uint param_1)

{
  (**(code **)(_g_phyFuns + 0x1bc))(0x69,0,4,3,0,param_1 >> 8,*(code **)(_g_phyFuns + 0x1bc));
                    /* WARNING: Could not recover jumptable at 0x00010c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1b4))(0x69,0,3,param_1 & 0xff);
  return;
}

