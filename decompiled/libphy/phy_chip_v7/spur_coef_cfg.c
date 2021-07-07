/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> spur_coef_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void spur_coef_cfg(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  
  uVar4 = 10;
  if (1 < param_3) {
    uVar4 = 0x14;
  }
  uVar1 = fpga_mem_rd(0x6001d014);
  fpga_mem_wr(0x6001d014,uVar1 & 0xffffdfff);
  uVar1 = param_1 - 1;
  if (((((int)((uint)(ushort)chip7_phy_init_ctrl._94_2_ << 0x11) < 0) &&
       (((int)(uint)(ushort)chip7_phy_init_ctrl._94_2_ >> (uVar1 & 0x1f) & 1U) != 0)) &&
      (iVar2 = spur_cal(param_2,uVar4,chip7_phy_init_ctrl._90_2_,chip7_phy_init_ctrl[0x5c]),
      iVar2 != 0)) && ((iVar2 << 10) / 100 != 0)) {
    spur_reg_write_one_tone(1);
  }
  else {
    uVar3 = fpga_mem_rd(0x6001d018);
    fpga_mem_wr(0x6001d018,uVar3 & 0xffffdfff);
  }
  if ((((int)((uint)(ushort)chip7_phy_init_ctrl._100_2_ << 0x11) < 0) &&
      (((int)(uint)(ushort)chip7_phy_init_ctrl._100_2_ >> (uVar1 & 0x1f) & 1U) != 0)) &&
     ((iVar2 = spur_cal(param_2,uVar4,chip7_phy_init_ctrl._96_2_,chip7_phy_init_ctrl[0x62]),
      iVar2 != 0 && ((iVar2 << 10) / 100 != 0)))) {
    spur_reg_write_one_tone(2);
  }
  else {
    uVar3 = fpga_mem_rd(0x6001d01c);
    fpga_mem_wr(0x6001d01c,uVar3 & 0xffffdfff);
  }
  if ((((int)((uint)(ushort)chip7_phy_init_ctrl._106_2_ << 0x11) < 0) &&
      (((int)(uint)(ushort)chip7_phy_init_ctrl._106_2_ >> (uVar1 & 0x1f) & 1U) != 0)) &&
     ((iVar2 = spur_cal(param_2,uVar4,chip7_phy_init_ctrl._102_2_,chip7_phy_init_ctrl[0x68]),
      iVar2 != 0 && ((iVar2 << 10) / 100 != 0)))) {
    spur_reg_write_one_tone(3);
  }
  else {
    uVar1 = fpga_mem_rd(0x6001d020);
    fpga_mem_wr(0x6001d020,uVar1 & 0xffffdfff);
  }
  uVar1 = fpga_mem_rd(0x6001cc48);
  uVar3 = fpga_mem_rd(0x6001cc48);
  fpga_mem_wr(0x6001cc48,uVar3 & 0xff000000 | (0x50 << (uVar1 >> 0x18 & 0x1f)) / param_2 & 0xffffffU
             );
  return;
}

