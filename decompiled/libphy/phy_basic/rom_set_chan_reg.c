/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_basic.o -> rom_set_chan_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_set_chan_reg(int param_1)

{
  char cVar1;
  
  cVar1 = DAT_000111fe;
  (**(code **)(_g_phyFuns + 0x78))((int)DAT_00011200,*(code **)(_g_phyFuns + 0x78));
  (**(code **)(_g_phyFuns + 0x60))
            ((int)DAT_000111fe,(int)DAT_00011200,0,DAT_000110ff,_DAT_00011128,_DAT_00011124,
             DAT_00011126,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0xd0))
            (cVar1,&phy_param,&phy_param,DAT_000110c8,*(code **)(_g_phyFuns + 0xd0));
  (**(code **)(_g_phyFuns + 0x8c))((int)_DAT_00011170,*(code **)(_g_phyFuns + 0x8c));
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x114))(&phy_param,DAT_000111fe);
    return;
  }
  return;
}

