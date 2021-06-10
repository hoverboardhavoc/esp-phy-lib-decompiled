/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> set_chan_freq_hw_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_chan_freq_hw_init(uint param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 local_44 [12];
  undefined1 auStack_38 [36];
  
  get_rf_freq_init();
  if (-1 < (int)(_chip7_sleep_params << 0x12)) {
    freq_get_i2c_data(auStack_74,auStack_68,auStack_5c,freq_i2c_addr,local_44,auStack_50,auStack_38,
                      10);
    freq_i2c_write_set(auStack_74,auStack_68,auStack_5c,freq_i2c_addr,local_44,auStack_50,auStack_38
                       ,10);
    iVar4 = 0;
    do {
      puVar2 = local_44 + iVar4;
      puVar3 = bt_wifi_chan_data + iVar4;
      iVar4 = iVar4 + 1;
      *puVar3 = *puVar2;
    } while (iVar4 != 10);
    write_wifi_chan_data(0xc);
    uVar1 = fpga_mem_rd(0x6003509c);
    fpga_mem_wr(0x6003509c,uVar1 & 0xffff | 0xc800000);
    _chip7_sleep_params = _chip7_sleep_params | 0x2000;
  }
  uVar1 = fpga_mem_rd(0x6000e0c4);
  fpga_mem_wr(0x6000e0c4,(param_1 & 0xf) << 0x10 | uVar1 & 0xfff0ffff);
  uVar1 = fpga_mem_rd(0x6000e0c4);
  fpga_mem_wr(0x6000e0c4,(param_2 & 0xf) << 0x14 | uVar1 & 0xff0fffff);
  uVar1 = fpga_mem_rd(0x6000e0c4);
  fpga_mem_wr(0x6000e0c4,uVar1 | 0x1000000);
  uVar1 = fpga_mem_rd(0x6000e0c4);
  fpga_mem_wr(0x6000e0c4,uVar1 | 0x40000000);
  uVar1 = fpga_mem_rd(0x6000e0c4);
  fpga_mem_wr(0x6000e0c4,uVar1 & 0xdfffffff);
  return;
}

