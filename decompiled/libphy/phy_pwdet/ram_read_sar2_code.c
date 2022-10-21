/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_pwdet.o -> ram_read_sar2_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 ram_read_sar2_code(void)

{
  undefined1 auStack_20 [2];
  undefined2 uStack_1e;
  
  (**(code **)(_g_phyFuns + 0x144))(*(code **)(_g_phyFuns + 0x144));
  (**(code **)(_g_phyFuns + 0x148))(auStack_20,*(code **)(_g_phyFuns + 0x148));
  return uStack_1e;
}

