/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> phy_get_vdd33
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int phy_get_vdd33(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort local_20 [8];
  ushort auStack_10 [2];
  
  puVar4 = local_20;
  uVar2 = fpga_mem_rd(0x6000882c);
  fpga_mem_wr(0x6000882c,uVar2 & 0xffffff1f | 0x80);
  uVar2 = fpga_mem_rd(0x600060c0);
  fpga_mem_wr(0x600060c0,uVar2 | 0x80);
  set_xpd_sar(1);
  uVar2 = fpga_mem_rd(0x60008890);
  fpga_mem_wr(0x60008890,uVar2 | 0x8000000);
  i2c_writeReg_Mask(0x6b,1,9,7,7,1);
  uVar2 = fpga_mem_rd(0x6000882c);
  fpga_mem_wr(0x6000882c,uVar2 | 0x10);
  uVar2 = fpga_mem_rd(0x60008838);
  fpga_mem_wr(0x60008838,uVar2 & 0x3fffffff);
  uVar2 = i2c_to_apb_rd(0x6000e05c);
  i2c_to_apb_wr(0x6000e05c,uVar2 | 0x800000);
  uVar2 = i2c_to_apb_rd(0x6000e05c);
  i2c_to_apb_wr(0x6000e05c,uVar2 & 0xffdfffff);
  do {
    uVar2 = i2c_to_apb_rd(0x6000e050);
  } while ((uVar2 >> 0x18 & 7) != 0);
  uVar2 = i2c_to_apb_rd(0x6000e050);
  i2c_to_apb_wr(0x6000e050,uVar2 & 0xfffffffd);
  uVar2 = i2c_to_apb_rd(0x6000e050);
  i2c_to_apb_wr(0x6000e050,uVar2 | 2);
  ets_delay_us(10);
  do {
    uVar2 = i2c_to_apb_rd(0x6000e050);
  } while ((uVar2 >> 0x18 & 7) != 0);
  read_sar_dout(local_20);
  uVar2 = 0;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    uVar2 = uVar2 + uVar1 & 0xffff;
  } while (auStack_10 != puVar4);
  i2c_writeReg_Mask(0x6b,1,9,7,7,0);
  uVar3 = fpga_mem_rd(0x6000882c);
  fpga_mem_wr(0x6000882c,uVar3 & 0xffffffef);
  uVar3 = i2c_to_apb_rd(0x6000e05c);
  i2c_to_apb_wr(0x6000e05c,uVar3 & 0xff7fffff);
  return (int)(uVar2 + 4) >> 3;
}

