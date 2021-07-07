/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> spur_reg_write_one_tone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void spur_reg_write_one_tone(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  iVar2 = (param_1 + 0x18007405) * 4;
  uVar3 = fpga_mem_rd(iVar2);
  fpga_mem_wr(iVar2,uVar3 & 0xffffe000 | param_2 & 0x1fff);
  uVar3 = fpga_mem_rd(iVar2);
  fpga_mem_wr(iVar2,uVar3 & 0xffffdfff | (uint)(param_2 != 0) << 0xd);
  puVar6 = (undefined4 *)((param_1 + 0xc003982) * 8);
  puVar10 = puVar6 + 1;
  bVar1 = (int)(param_2 << 0x13) < 0;
  uVar3 = param_2;
  if (bVar1) {
    uVar3 = -param_2;
  }
  uVar9 = (int)(uVar3 + 0x10) / 0x20;
  iVar2 = 0x40;
  if (((param_2 != 0) && ((int)uVar3 < 0x7b0)) && (iVar2 = (int)(uVar3 + uVar9 * -0x20) / 4, bVar1))
  {
    uVar9 = -uVar9;
    iVar2 = -iVar2;
  }
  *puVar6 = 0;
  puVar6[1] = 0;
  uVar3 = iVar2 + 4;
  if (uVar3 < 9) {
    iVar12 = (int)(char)CSWTCH_234[iVar2 + 4];
    iVar5 = (int)(char)CSWTCH_235[iVar2 + 4];
    iVar11 = (int)(char)CSWTCH_236[iVar2 + 4];
    uVar13 = (uint)(char)CSWTCH_237[iVar2 + 4];
    iVar7 = 3;
  }
  else {
    uVar13 = 0;
    iVar11 = 0;
    iVar5 = 0;
    iVar12 = 0;
    iVar7 = 0;
  }
  uVar4 = fpga_mem_rd(puVar6);
  uVar13 = iVar5 << 2 | iVar7 << 4 | uVar13 | iVar12 << 6 | iVar11 << 8;
  fpga_mem_wr(puVar6,uVar4 & 0xfffffc00 | uVar13);
  uVar4 = fpga_mem_rd(puVar6);
  fpga_mem_wr(puVar6,uVar4 & 0xfff003ff | uVar13 << 10);
  uVar4 = fpga_mem_rd(puVar6);
  fpga_mem_wr(puVar6,uVar4 & 0xc00fffff | uVar13 << 0x14);
  if (uVar3 < 9) {
    iVar11 = (int)(char)CSWTCH_238[iVar2 + 4];
    uVar13 = (uint)(char)CSWTCH_239[iVar2 + 4];
  }
  else {
    uVar13 = 0;
    iVar11 = 0;
  }
  uVar4 = fpga_mem_rd(puVar10);
  uVar8 = iVar7 << 2 | uVar13 | iVar11 << 4;
  fpga_mem_wr(puVar10,uVar4 & 0xffffffc0 | uVar8);
  uVar13 = fpga_mem_rd(puVar10);
  fpga_mem_wr(puVar10,uVar13 & 0xfffff03f | uVar8 << 6);
  if (uVar3 < 9) {
    iVar5 = (int)(char)CSWTCH_240[iVar2 + 4];
    iVar11 = (int)(char)CSWTCH_241[iVar2 + 4];
    uVar13 = (uint)(char)CSWTCH_242[iVar2 + 4];
  }
  else {
    uVar13 = 0;
    iVar11 = 0;
    iVar5 = 0;
  }
  uVar4 = fpga_mem_rd(puVar10);
  fpga_mem_wr(puVar10,uVar4 & 0xfffc0fff | (iVar5 << 2 | iVar11 << 4 | uVar13) << 0xc);
  if (uVar3 < 9) {
    iVar5 = (int)(char)CSWTCH_243[iVar2 + 4];
    iVar11 = (int)(char)CSWTCH_244[iVar2 + 4];
    uVar13 = (uint)(char)CSWTCH_245[iVar2 + 4];
  }
  else {
    uVar13 = 0;
    iVar11 = 0;
    iVar5 = 0;
  }
  uVar4 = fpga_mem_rd(puVar10);
  fpga_mem_wr(puVar10,uVar4 & 0xff03ffff | (iVar5 << 2 | iVar11 << 4 | uVar13) << 0x12);
  if (uVar3 < 9) {
    iVar5 = (int)(char)CSWTCH_243[iVar2 + 4];
    iVar11 = (int)(char)CSWTCH_247[iVar2 + 4];
    uVar3 = (uint)(char)CSWTCH_248[iVar2 + 4];
  }
  else {
    uVar3 = 0;
    iVar11 = 0;
    iVar5 = 0;
  }
  uVar13 = fpga_mem_rd(puVar10);
  fpga_mem_wr(puVar10,uVar13 & 0xc0ffffff | (iVar5 << 2 | iVar11 << 4 | uVar3) << 0x18);
  uVar3 = fpga_mem_rd(0x6001ccb0);
  fpga_mem_wr(0x6001ccb0,
              ~(0x7f << (param_1 * 7 & 0x1fU)) & uVar3 | (uVar9 & 0x7f) << (param_1 * 7 & 0x1fU));
  return;
}

