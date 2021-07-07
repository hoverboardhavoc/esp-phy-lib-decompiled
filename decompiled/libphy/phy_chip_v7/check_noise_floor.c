/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> check_noise_floor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int check_noise_floor(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  
  uVar3 = fpga_mem_rd(0x6001c018);
  fpga_mem_wr(0x6001c018,uVar3 & 0xff7fffff);
  uVar3 = fpga_mem_rd(0x6001c018);
  fpga_mem_wr(0x6001c018,uVar3 | 0x2000000);
  uVar3 = fpga_mem_rd(0x6001c018);
  fpga_mem_wr(0x6001c018,uVar3 & 0xfdffffff);
  uVar3 = fpga_mem_rd(0x6001c018);
  fpga_mem_wr(0x6001c018,uVar3 | 0x800000);
  iVar2 = _DAT_60035000;
  bVar1 = false;
  while ((uVar3 = fpga_mem_rd(0x6001c018), (uVar3 & 0x1000000) == 0 && (!bVar1))) {
    bVar1 = 50000 < (uint)(_DAT_60035000 - iVar2);
  }
  uVar3 = fpga_mem_rd(0x6001c050);
  uVar3 = uVar3 | 0xfffffc00;
  if ((int)uVar3 < -0x188) {
    uVar3 = 0xfffffe78;
  }
  sVar4 = (short)uVar3;
  if (-0x160 < sVar4) {
    sVar4 = -0x160;
  }
  if (bVar1) {
    sVar4 = -sVar4;
  }
  return (int)sVar4;
}

