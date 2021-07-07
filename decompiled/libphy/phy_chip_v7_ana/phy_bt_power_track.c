/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> phy_bt_power_track
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

