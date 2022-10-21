/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_api.o -> phy_rx_band_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_rx_band_set(int param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  byte bVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,4,*(code **)(_g_phyFuns + 0x1b4));
    UNRECOVERED_JUMPTABLE = *(code **)(_g_phyFuns + 0x1b4);
    bVar1 = DAT_00011167;
  }
  else {
    uVar2 = param_2 & 0xff;
    if (0x13 < param_2) {
      uVar2 = 0x13;
    }
    bVar1 = (**(code **)(_g_phyFuns + 0x28))
                      (((DAT_00011167 + 8) * 0x13) / uVar2 - 8 & 0xffff,0x3c,2,
                       *(code **)(_g_phyFuns + 0x28));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,4,bVar1,*(code **)(_g_phyFuns + 0x1b4));
    UNRECOVERED_JUMPTABLE = *(code **)(_g_phyFuns + 0x1b4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0x67,1,5,bVar1);
  return;
}

