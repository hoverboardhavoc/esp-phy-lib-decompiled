/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> dc_iq_est_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dc_iq_est_test(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(_g_phyFuns + 0x104))(*(code **)(_g_phyFuns + 0x104));
  param_1 = param_1 + 1;
  iVar2 = (_DAT_6000615c >> 6) / param_1;
  *param_2 = iVar2;
  iVar3 = (_DAT_60006160 >> 6) / param_1;
  param_2[1] = iVar3;
  iVar1 = (_DAT_60006168 / param_1) * 4 - iVar2 * iVar2;
  iVar4 = (_DAT_6000616c / param_1) * 4 - iVar3 * iVar3;
  iVar2 = (_DAT_60006164 / param_1) * 8 - (iVar2 * iVar2 + iVar3 * iVar3);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar2 = (**(code **)(_g_phyFuns + 0x118))(iVar2,0,*(code **)(_g_phyFuns + 0x118));
  *param_3 = iVar2;
  param_2[2] = iVar2 + 8 >> 4;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar1 = (**(code **)(_g_phyFuns + 0x118))(iVar1,0,*(code **)(_g_phyFuns + 0x118));
  param_3[1] = iVar1;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  iVar2 = (**(code **)(_g_phyFuns + 0x118))(iVar4,0,*(code **)(_g_phyFuns + 0x118));
  iVar1 = _g_phyFuns;
  param_3[2] = iVar2;
                    /* WARNING: Could not recover jumptable at 0x00012938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x108))();
  return;
}

