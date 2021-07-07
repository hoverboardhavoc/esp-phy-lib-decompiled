/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> pbus_set_dco
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pbus_set_dco(undefined2 *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  pbus_force_test(2,1,*param_1);
  pbus_force_test(3,1,param_1[1]);
  pbus_force_test(2,2,param_1[2]);
  uVar1 = param_1[3];
  uVar2 = fpga_mem_rd(0x60006094);
  fpga_mem_wr(0x60006094,(uVar1 & 0x7ff) << 6 | 0x1000c | uVar2 & 0xfffe0001 | 2);
  do {
    iVar3 = fpga_mem_rd(0x600060a0);
  } while (iVar3 < 0);
  uVar2 = fpga_mem_rd(0x60006094);
  fpga_mem_wr(0x60006094,uVar2 & 0xfffffffd);
  return;
}

