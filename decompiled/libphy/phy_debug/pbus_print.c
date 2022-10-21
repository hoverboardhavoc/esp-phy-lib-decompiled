/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_debug.o -> pbus_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_print(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  phy_printf(&_LC22,param_1);
  uVar1 = (**(code **)(_g_phyFuns + 0x1d0))(0,1,*(code **)(_g_phyFuns + 0x1d0));
  uVar2 = (**(code **)(_g_phyFuns + 0x1d0))(0,2,*(code **)(_g_phyFuns + 0x1d0));
  phy_printf("rfrx:0x%x,0x%x;",uVar1,uVar2);
  uVar1 = (**(code **)(_g_phyFuns + 0x1d0))(4,1,*(code **)(_g_phyFuns + 0x1d0));
  uVar2 = (**(code **)(_g_phyFuns + 0x1d0))(5,1,*(code **)(_g_phyFuns + 0x1d0));
  phy_printf("rftx:0x%x,0x%x;",uVar1,uVar2);
  uVar1 = (**(code **)(_g_phyFuns + 0x1d0))(1,1,*(code **)(_g_phyFuns + 0x1d0));
  uVar2 = (**(code **)(_g_phyFuns + 0x1d0))(1,2,*(code **)(_g_phyFuns + 0x1d0));
  phy_printf("bb:0x%x,0x%x,0x%x,0x%x;",uVar1,uVar2);
  uVar1 = (**(code **)(_g_phyFuns + 0x1d0))(2,1,*(code **)(_g_phyFuns + 0x1d0));
  uVar2 = (**(code **)(_g_phyFuns + 0x1d0))(3,1,*(code **)(_g_phyFuns + 0x1d0));
  uVar3 = (**(code **)(_g_phyFuns + 0x1d0))(2,2,*(code **)(_g_phyFuns + 0x1d0));
  uVar4 = (**(code **)(_g_phyFuns + 0x1d0))(3,2,*(code **)(_g_phyFuns + 0x1d0));
  phy_printf("dco:%d,%d,%d,%d\n",uVar1,uVar2,uVar3,uVar4);
  return;
}

