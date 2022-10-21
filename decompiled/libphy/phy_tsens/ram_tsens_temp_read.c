/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tsens.o -> ram_tsens_temp_read
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ram_tsens_temp_read(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(_g_phyFuns + 0x1ac))(0x69,0,6,*(code **)(_g_phyFuns + 0x1ac));
  DAT_000110ae = tsens_dac_to_index(uVar1 & 0xf);
  (**(code **)(_g_phyFuns + 0x208))(*(code **)(_g_phyFuns + 0x208));
  uVar2 = (**(code **)(_g_phyFuns + 0x218))
                    ((int)(char)phy_tsens_attribute[(uint)DAT_000110ae * 6],
                     *(code **)(_g_phyFuns + 0x218));
  phy_set_tsens_range();
  _DAT_00011096 = (short)uVar2;
  return uVar2;
}

