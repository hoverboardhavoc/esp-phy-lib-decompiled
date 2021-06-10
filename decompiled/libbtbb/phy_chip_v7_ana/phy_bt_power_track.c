/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> phy_bt_power_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_bt_power_track(undefined1 param_1)

{
  uint uVar1;
  
  phy_bt_power_track_en = param_1;
  uVar1 = fpga_mem_rd(0x6000884c);
  fpga_mem_wr(0x6000884c,uVar1 & 0xff00ffff | 0x20000);
  uVar1 = fpga_mem_rd(0x6000884c);
  fpga_mem_wr(0x6000884c,uVar1 | 0x2000000);
  uVar1 = fpga_mem_rd(0x6000884c);
  fpga_mem_wr(0x6000884c,uVar1 & 0xfeffffff);
  uVar1 = fpga_mem_rd(0x6000884c);
  fpga_mem_wr(0x6000884c,uVar1 | 0x1000000);
  return;
}

