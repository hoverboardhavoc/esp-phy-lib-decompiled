/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> phy_get_noisefloor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int phy_get_noisefloor(void)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  
  uVar2 = fpga_mem_rd(0x6001c050);
  uVar1 = 0xfffffe78;
  if (-0x189 < (int)(uVar2 | 0xfffffc00)) {
    uVar1 = uVar2 | 0xfffffc00;
  }
  uVar2 = fpga_mem_rd(0x6001d050);
  fpga_mem_wr(0x6001d050,uVar2 | 1);
  sVar3 = (short)uVar1;
  if (-0x160 < sVar3) {
    sVar3 = -0x160;
  }
  return (int)sVar3;
}

