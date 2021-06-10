/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> phy_close_rf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_close_rf(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = phy_enter_critical();
  noise_check_loop(1,1);
  uVar2 = fpga_mem_rd(0x6002600c);
  fpga_mem_wr(0x6002600c,uVar2 & 0xfffffffd);
  pbus_debugmode();
  pbus_force_test(1,1,0);
  pbus_workmode();
  uVar2 = fpga_mem_rd(0x60008030);
  fpga_mem_wr(0x60008030,uVar2 & 0x27ffffff);
  set_xpd_sar(0);
  phy_exit_critical(uVar1);
  return;
}

