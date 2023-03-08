/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> phy_test.o -> phy_corr_pwr_sum
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint phy_corr_pwr_sum(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int extraout_a1;
  char cVar5;
  
  cVar5 = '\x10';
  start_tx_tone_step(1,param_1,0,0,0,0);
  iVar1 = 0;
  uVar2 = 0;
  do {
    cVar5 = cVar5 + -1;
    (**(code **)(_g_phyFuns + 0x104))(1,0x3ff,*(code **)(_g_phyFuns + 0x104));
    iVar3 = phy_corr_get_pwr();
    uVar4 = iVar3 + uVar2;
    iVar1 = iVar1 + extraout_a1 + (uint)(uVar4 < uVar2);
    (**(code **)(_g_phyFuns + 0x108))(*(code **)(_g_phyFuns + 0x108));
    uVar2 = uVar4;
  } while (cVar5 != '\0');
  start_tx_tone_step(0,param_1,0,0,0,0);
  return uVar4 >> 8 | iVar1 * 0x1000000;
}

