/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_i2c.o -> rom_set_txcap_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_set_txcap_reg(byte *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte abStack_18 [4];
  byte abStack_14 [12];
  
  pbVar1 = param_1 + 3;
  pbVar2 = abStack_18;
  do {
    abStack_14[0] = *param_1;
    abStack_14[1] = param_1[3];
    abStack_14[2] = param_1[6];
    iVar3 = 0;
    if (3 < param_2) {
      iVar3 = (8 < param_2) + 1;
    }
    param_1 = param_1 + 1;
    *pbVar2 = abStack_14[iVar3];
    pbVar2 = pbVar2 + 1;
  } while (pbVar1 != param_1);
  (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,1,3,0,abStack_18[0],*(code **)(_g_phyFuns + 0x1bc));
                    /* WARNING: Could not recover jumptable at 0x000100c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1b4))
            (0x6b,0,2,((int)(char)abStack_18[2] & 0xfU) << 4 | (uint)abStack_18[1]);
  return;
}

