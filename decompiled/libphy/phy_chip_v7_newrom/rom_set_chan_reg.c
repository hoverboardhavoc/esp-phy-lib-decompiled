/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_set_chan_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_set_chan_reg(int param_1)

{
  char cVar1;
  
  cVar1 = DAT_000121f6;
  (**(code **)(_g_phyFuns + 0x78))((int)DAT_000121f8,*(code **)(_g_phyFuns + 0x78));
  (**(code **)(_g_phyFuns + 0x60))
            ((int)DAT_000121f6,(int)DAT_000121f8,0,DAT_000120f7,_DAT_00012120,_DAT_0001211c,
             DAT_0001211e,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0xd0))
            (cVar1,&phy_param,&phy_param,DAT_000120c0,*(code **)(_g_phyFuns + 0xd0));
  (**(code **)(_g_phyFuns + 0x8c))((int)_DAT_00012168,*(code **)(_g_phyFuns + 0x8c));
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x114))(&phy_param,DAT_000121f6);
    return;
  }
  return;
}

