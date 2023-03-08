/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> set_spur_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_spur_reg(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0xe) {
    uVar1 = 0x9b4;
  }
  else {
    uVar1 = param_1 * 5 + 0x967;
  }
  iVar2 = (**(code **)(_g_phyFuns + 0x5c))(uVar1 & 0xffff,10,0x28,1,*(code **)(_g_phyFuns + 0x5c));
  (**(code **)(_g_phyFuns + 0x58))(0,(iVar2 << 10) / 100,*(code **)(_g_phyFuns + 0x58));
  phy_printf("Spur register set done! Chan frequency = %d \n",uVar1);
  return;
}

