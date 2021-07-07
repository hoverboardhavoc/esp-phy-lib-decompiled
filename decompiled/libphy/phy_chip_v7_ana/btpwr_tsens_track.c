/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> btpwr_tsens_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int btpwr_tsens_track(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  
  uVar2 = fpga_mem_rd(0x6000884c);
  fpga_mem_wr(0x6000884c,uVar2 | 0x4000000);
  ets_delay_us(1);
  uVar2 = fpga_mem_rd(0x60008844);
  uVar2 = uVar2 >> 0x16;
  uVar3 = fpga_mem_rd(0x6000884c);
  fpga_mem_wr(0x6000884c,uVar3 & 0xfbffffff);
  uVar3 = fpga_mem_rd(0x6000884c);
  fpga_mem_wr(0x6000884c,uVar3 & 0xfeffffff);
  uVar3 = fpga_mem_rd(0x6000884c);
  fpga_mem_wr(0x6000884c,uVar3 | 0x1000000);
  bVar1 = (byte)uVar2;
  if (btpwr_tsen_init == 0) {
    btpwr_tsen_old = bVar1;
    btpwr_tsen_init = bVar1;
  }
  btpwr_tsen_flag = 1;
  iVar5 = (int)btpwr_atten_offset;
  if (((uVar2 & 0xff) - 10 & 0xff) < 0xec) {
    if (10 < (((uVar2 & 0xff) - (uint)btpwr_tsen_old) + 5 & 0xffff)) {
      iVar5 = (int)(((uint)btpwr_tsen_init - (uVar2 & 0xff)) * 4) / 0x12;
      btpwr_tsen_old = bVar1;
    }
  }
  else {
    btpwr_tsen_flag = 0;
  }
  if (iVar5 < -0x18) {
    iVar5 = -0x18;
  }
  sVar4 = (short)iVar5;
  if (0x18 < sVar4) {
    sVar4 = 0x18;
  }
  return (int)sVar4;
}

