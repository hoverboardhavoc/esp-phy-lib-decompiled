/*
 * Last changed at upstream commit d8ee8f776acd1aafdfc3046f526db024b175b094
 * https://github.com/espressif/esp-phy-lib/commit/d8ee8f776acd1aafdfc3046f526db024b175b094
 * Upstream date: 2022-05-09 07:50:30 -0400
 * Upstream subject: esp32c2: optimize rf performace
 * Source: libphy -> phy_i2c.o -> bias_reg_set_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bias_reg_set_new(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (param_1 == 0) {
    (**(code **)(_g_phyFuns + 0x58))(0x6a,0,0,3,0,7);
    (**(code **)(_g_phyFuns + 0x58))(0x6a,0,1,3,0,7,*(code **)(_g_phyFuns + 0x58));
    pcVar2 = *(code **)(_g_phyFuns + 0x58);
    uVar1 = 7;
  }
  else {
    (**(code **)(_g_phyFuns + 0x58))(0x6a,0,0,3,0,0xc);
    (**(code **)(_g_phyFuns + 0x58))(0x6a,0,1,3,0,0xc,*(code **)(_g_phyFuns + 0x58));
    pcVar2 = *(code **)(_g_phyFuns + 0x58);
    uVar1 = 10;
  }
  (*pcVar2)(0x6a,0,0,7,4,uVar1,pcVar2);
  (**(code **)(_g_phyFuns + 0x58))(0x61,0,8,0,0,0,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x61,0,8,4,4,0,*(code **)(_g_phyFuns + 0x58));
                    /* WARNING: Could not recover jumptable at 0x000100f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x58))(0x61,0,7,5,5,0);
  return;
}

