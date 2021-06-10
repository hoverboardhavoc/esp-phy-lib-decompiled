/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> noise_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void noise_init(void)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  short *psVar5;
  
  uVar3 = fpga_mem_rd(0x6001c018);
  fpga_mem_wr(0x6001c018,uVar3 | 0x10000000);
  uVar3 = fpga_mem_rd(0x6001c018);
  fpga_mem_wr(0x6001c018,uVar3 & 0xfffffff8 | 4);
  if (-1 < (int)(chip7_sleep_params._0_4_ << 10)) {
    psVar5 = &noise_array;
    cVar2 = '\x01';
    do {
      chip_v7_set_chan((int)cVar2,0);
      cVar4 = '\x05';
      *psVar5 = 0;
      do {
        if (-0x180 < *psVar5) {
          *psVar5 = -0x180;
        }
        cVar4 = cVar4 + -1;
      } while (cVar4 != '\0');
      cVar2 = cVar2 + '\x05';
      psVar5 = psVar5 + 1;
    } while (cVar2 != '\x10');
    sVar1 = noise_array;
    if (DAT_00015e26 < noise_array) {
      sVar1 = DAT_00015e26;
    }
    if (0 < sVar1) {
      sVar1 = 0;
    }
    chip7_sleep_params._78_2_ = DAT_00015e28;
    if (sVar1 < DAT_00015e28) {
      chip7_sleep_params._78_2_ = sVar1;
    }
    chip7_sleep_params._0_4_ = chip7_sleep_params._0_4_ | 0x200000;
    chip7_sleep_params._178_2_ = chip7_sleep_params._78_2_;
  }
  sVar1 = -0x188;
  if (-0x189 < (short)chip7_sleep_params._78_2_) {
    sVar1 = chip7_sleep_params._78_2_;
  }
  uVar3 = fpga_mem_rd(0x6001c018);
  if (-0x160 < sVar1) {
    sVar1 = -0x160;
  }
  fpga_mem_wr(0x6001c018,uVar3 & 0xffff801f | ((int)sVar1 & 0x3ffU) << 5);
  uVar3 = fpga_mem_rd(0x6001c018);
  fpga_mem_wr(0x6001c018,uVar3 | 0x10);
  return;
}

