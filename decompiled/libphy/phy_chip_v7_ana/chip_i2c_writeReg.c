/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> chip_i2c_writeReg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void chip_i2c_writeReg(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = phy_enter_critical();
  iVar1 = (param_2 + 0x18003800) * 4;
  do {
    uVar3 = fpga_mem_rd(iVar1);
  } while ((uVar3 & 0x2000000) != 0);
  fpga_mem_wr(iVar1,param_4 << 0x10 | param_1 | param_3 << 8 | 0x5000000);
  do {
    uVar3 = fpga_mem_rd(iVar1);
  } while ((uVar3 & 0x2000000) != 0);
  phy_exit_critical(uVar2);
  return;
}

