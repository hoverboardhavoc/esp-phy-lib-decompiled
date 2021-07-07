/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_init.o -> i2c_2wire_mode_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_2wire_mode_cfg(int param_1)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x6000d00c);
  fpga_mem_wr(0x6000d00c,uVar1 | 0x4000000);
  do {
  } while ((_DAT_6000d044 >> 0x10 & 7) != 0);
  if (param_1 == 0) {
    cmd_3wire_mode(1);
    i2c_2wire_mode(0);
  }
  else {
    i2c_2wire_mode();
    cmd_3wire_mode(0);
  }
  uVar1 = fpga_mem_rd(0x6000d00c);
  fpga_mem_wr(0x6000d00c,uVar1 & 0xfbffffff);
  return;
}

