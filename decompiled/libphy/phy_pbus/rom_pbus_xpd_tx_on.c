/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_pbus.o -> rom_pbus_xpd_tx_on
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_pbus_xpd_tx_on(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0x1000100;
  uStack_18 = 0x1000100;
  (**(code **)(_g_phyFuns + 0x1f0))(&uStack_18,*(code **)(_g_phyFuns + 0x1f0));
  (**(code **)(_g_phyFuns + 0x1cc))(0,1,1,*(code **)(_g_phyFuns + 0x1cc));
  (**(code **)(_g_phyFuns + 0x1cc))(1,1,0x7c,*(code **)(_g_phyFuns + 0x1cc));
  (**(code **)(_g_phyFuns + 0x1cc))(1,2,param_2,*(code **)(_g_phyFuns + 0x1cc));
  (**(code **)(_g_phyFuns + 0x1cc))(4,1,0x7f,*(code **)(_g_phyFuns + 0x1cc));
  (**(code **)(_g_phyFuns + 0x1cc))(5,1,param_1,*(code **)(_g_phyFuns + 0x1cc));
  (**(code **)(_g_phyFuns + 0x1cc))(4,2,0,*(code **)(_g_phyFuns + 0x1cc));
  return;
}

