/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> pbus_debugmode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00010364) */
/* WARNING: Removing unreachable block (ram,0x00010000) */
/* WARNING: Removing unreachable block (ram,0x00010056) */
/* WARNING: Removing unreachable block (ram,0x000100d8) */

void pbus_debugmode(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6002600c);
  if ((uVar1 & 2) == 0) {
    uVar1 = fpga_mem_rd(0x6000609c);
    fpga_mem_wr(0x6000609c,uVar1 & 0xf7ffffff);
  }
  uVar1 = fpga_mem_rd(0x60006094);
  fpga_mem_wr(0x60006094,uVar1 | 1);
  return;
}

