/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> pbus_debug_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_debug_print(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = (**(code **)(_g_phyFuns + 0x1d0))(0,1,*(code **)(_g_phyFuns + 0x1d0));
  uVar2 = (**(code **)(_g_phyFuns + 0x1d0))(1,1,*(code **)(_g_phyFuns + 0x1d0));
  uVar3 = (**(code **)(_g_phyFuns + 0x1d0))(4,1,*(code **)(_g_phyFuns + 0x1d0));
  uVar4 = (**(code **)(_g_phyFuns + 0x1d0))(4,2,*(code **)(_g_phyFuns + 0x1d0));
  phy_printf("%x,%x,%x,%x\n",uVar1,uVar2,uVar3,uVar4);
  return;
}

