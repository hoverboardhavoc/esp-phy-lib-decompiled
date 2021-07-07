/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> pbus_xpd_rx_on
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pbus_xpd_rx_on(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  pbus_force_test(4,1,0);
  pbus_force_test(5,1,0);
  pbus_force_test(0,1,0x184);
  pbus_force_test(1,1,0x189);
  uVar1 = fpga_mem_rd(0x60006094);
  fpga_mem_wr(0x60006094,(param_1 & 0x7ff) << 6 | 0x10004 | uVar1 & 0xfffe0001 | 2);
  do {
    iVar2 = fpga_mem_rd(0x600060a0);
  } while (iVar2 < 0);
  uVar1 = fpga_mem_rd(0x60006094);
  fpga_mem_wr(0x60006094,uVar1 & 0xfffffffd);
  return;
}

