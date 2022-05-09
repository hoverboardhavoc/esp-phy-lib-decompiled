/*
 * Last changed at upstream commit d8ee8f776acd1aafdfc3046f526db024b175b094
 * https://github.com/espressif/esp-phy-lib/commit/d8ee8f776acd1aafdfc3046f526db024b175b094
 * Upstream date: 2022-05-09 07:50:30 -0400
 * Upstream subject: esp32c2: optimize rf performace
 * Source: libphy -> phy_i2c.o -> i2c_bbpll_set_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_bbpll_set_new(int param_1)

{
  if (param_1 != 0) {
    (**(code **)(_g_phyFuns + 0x58))(0x66,0,9,3,2,3,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x66,0,9,5,4,2,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x66,0,10,1,0,1,*(code **)(_g_phyFuns + 0x58));
    DAT_000110d1 = (**(code **)(_g_phyFuns + 0x48))(0x66,0,9,*(code **)(_g_phyFuns + 0x48));
    DAT_000110d2 = (**(code **)(_g_phyFuns + 0x48))(0x66,0,10,*(code **)(_g_phyFuns + 0x48));
    DAT_000110d3 = (**(code **)(_g_phyFuns + 0x48))(0x66,0,4,*(code **)(_g_phyFuns + 0x48));
    return;
  }
  (**(code **)(_g_phyFuns + 0x50))(0x66,0,9,DAT_000110d1,*(code **)(_g_phyFuns + 0x50));
  (**(code **)(_g_phyFuns + 0x50))(0x66,0,10,DAT_000110d2,*(code **)(_g_phyFuns + 0x50));
                    /* WARNING: Could not recover jumptable at 0x0001020c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x50))(0x66,0,4,DAT_000110d3);
  return;
}

