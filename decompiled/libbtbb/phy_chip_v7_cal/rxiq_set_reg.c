/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> rxiq_set_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint rxiq_set_reg(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0x1f;
    if ((int)param_1 < 0x20) {
_L138:
      if ((int)param_1 < -iVar3) {
        param_1 = iVar3 * -0x1000000 >> 0x18;
      }
      if (param_2 != 0) goto _L137;
    }
    else {
      param_1 = 0x1f;
    }
    uVar1 = fpga_mem_rd(0x600050dc);
    uVar2 = (param_1 & 0x3f) << 0x15;
    iVar3 = -0x7e00000;
  }
  else {
    iVar3 = 0xf;
    if ((int)param_1 < 0x10) goto _L138;
    param_1 = 0xf;
_L137:
    uVar1 = fpga_mem_rd(0x600050dc);
    uVar2 = (param_1 & 0x1f) << 0x10;
    iVar3 = -0x1f0000;
  }
  fpga_mem_wr(0x600050dc,uVar2 | uVar1 & iVar3 - 1U);
  return param_1;
}

