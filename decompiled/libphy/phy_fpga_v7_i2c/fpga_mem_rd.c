/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_i2c.o -> fpga_mem_rd
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint fpga_mem_rd(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((((uint)param_1 & 0xfffff000) + 0x9fffb000 & 0xffffefff) != 0) &&
     (((uint)param_1 & 0xfffff000) != 0x60008000)) {
    return *param_1;
  }
  i2c_writeReg(0x7d,1,0x4b,(uint)param_1 & 0xff);
  i2c_writeReg(0x7d,1,0x4c,(uint)param_1 >> 8 & 0xff);
  i2c_writeReg(0x7d,1,0x4d,(uint)param_1 >> 0x10 & 0xff);
  i2c_writeReg(0x7d,1,0x4e,(uint)param_1 >> 0x18);
  i2c_writeReg(0x7d,1,0x4a,0xc0);
  i2c_writeReg(0x7d,1,0x4a,0xd0);
  uVar1 = i2c_readReg(0x7d,1,0x53);
  iVar2 = i2c_readReg(0x7d,1,0x54);
  iVar3 = i2c_readReg(0x7d,1,0x55);
  iVar4 = i2c_readReg(0x7d,1,0x56);
  i2c_writeReg(0x7d,1,0x4a,0xc0);
  i2c_writeReg(0x7d,1,0x4a,0);
  return uVar1 | iVar2 << 8 | iVar3 << 0x10 | iVar4 << 0x18;
}

