/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> noise_check_loop
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void noise_check_loop(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = fpga_mem_rd(0x6001d044);
  fpga_mem_wr(0x6001d044,uVar3 & 0xfffffffe);
  uVar3 = fpga_mem_rd(0x6001d050);
  fpga_mem_wr(0x6001d050,uVar3 | 1);
  uVar3 = fpga_mem_rd(0x6001c018);
  fpga_mem_wr(0x6001c018,uVar3 | 0x8000000);
  uVar3 = fpga_mem_rd(0x6001c018);
  fpga_mem_wr(0x6001c018,uVar3 & 0xf7ffffff);
  uVar1 = chip7_sleep_params._178_2_;
  iVar2 = (int)(short)chip7_sleep_params._178_2_;
  uVar3 = fpga_mem_rd(0x6001c050);
  iVar5 = ((uVar3 & 0x3ff) - 0x400) * 0x10000;
  iVar6 = iVar5 >> 0x10;
  phy_meas_noise_floor = (undefined2)((uint)iVar5 >> 0x10);
  if (((uVar3 & 0x3ff) - 0x26d & 0xffff) < 0x3f) {
    if (iVar6 < -0x188) {
      iVar6 = -0x188;
    }
    sVar4 = (short)iVar6;
    if (-0x160 < sVar4) {
      sVar4 = -0x160;
    }
    iVar5 = (int)sVar4;
    if (iVar2 < iVar5) {
      chip7_sleep_params._178_2_ = (undefined2)((iVar5 + iVar2 * 3 + -2) / 4);
    }
    else if (iVar5 < iVar2) {
      if (iVar5 < iVar2 + -0x10) {
        chip7_sleep_params._178_2_ = uVar1 + -0xc;
      }
      else {
        chip7_sleep_params._178_2_ = (undefined2)((iVar5 * 3 + iVar2 + -2) / 4);
      }
    }
    iVar2 = (int)(short)chip7_sleep_params._178_2_;
    if (sw_scan_mode == '\0') {
      sVar4 = chip7_sleep_params._178_2_;
      if ((iVar2 <= (short)chip7_sleep_params._78_2_ + 4) &&
         (sVar4 = chip7_sleep_params._178_2_, (short)chip7_sleep_params._78_2_ + -4 <= iVar2))
      goto _L495;
    }
    else {
      sVar4 = chip7_sleep_params._178_2_;
      if (-0x180 < iVar2) {
        sVar4 = (short)((iVar2 + -0x180) / 2);
      }
    }
    chip7_sleep_params._78_2_ = sVar4;
    if (param_1 != 0) {
      set_noise_floor((int)(short)chip7_sleep_params._78_2_);
    }
  }
_L495:
  uVar3 = fpga_mem_rd(0x6001d044);
  fpga_mem_wr(0x6001d044,uVar3 | 1);
  return;
}

