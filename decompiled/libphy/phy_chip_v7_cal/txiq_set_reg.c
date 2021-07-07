/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> txiq_set_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint txiq_set_reg(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    iVar2 = 0x1f;
    if ((int)param_1 < 0x20) {
_L54:
      if ((int)param_1 < -iVar2) {
        param_1 = iVar2 * -0x1000000 >> 0x18;
      }
      if (param_2 != 0) goto _L53;
    }
    else {
      param_1 = 0x1f;
    }
    uVar1 = fpga_mem_rd(0x600050dc);
    uVar3 = (param_1 & 0x3f) << 5;
    uVar1 = uVar1 & 0xfffff81f;
  }
  else {
    iVar2 = 0xf;
    if ((int)param_1 < 0x10) goto _L54;
    param_1 = 0xf;
_L53:
    uVar1 = fpga_mem_rd(0x600050dc);
    uVar1 = uVar1 & 0xffffffe0;
    uVar3 = param_1 & 0x1f;
  }
  fpga_mem_wr(0x600050dc,uVar1 | uVar3);
  return param_1;
}

