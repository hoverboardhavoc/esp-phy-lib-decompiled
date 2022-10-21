/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_rfpll.o -> rfpll_cap_correct
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rfpll_cap_correct(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = (**(code **)(_g_phyFuns + 0x1ac))(0x62,1,0xc,*(code **)(_g_phyFuns + 0x1ac));
  uVar3 = uVar3 >> 2 & 3;
  if (uVar3 == 0) {
    uVar1 = 0;
    iVar5 = 0;
    iVar4 = 0;
  }
  else {
    sVar2 = read_pll_cap();
    iVar4 = (int)sVar2;
    uVar1 = 4;
    if (uVar3 != 1) {
      uVar1 = 0xfffffffc;
      if (uVar3 != 2) {
        uVar1 = 0;
      }
    }
    iVar5 = (int)(short)(sVar2 + (short)uVar1);
    ram_write_pll_cap();
    pll_cap_mem_update(uVar1);
  }
  if (param_1 != 0) {
    phy_printf("%d,%d,%d\n",uVar1,iVar4,iVar5);
  }
  return uVar1;
}

