/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> rf_test.o -> flash_test_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void flash_test_init(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  flash_test_enable = 1;
  flash_clk = param_1;
  flash_drv = param_2;
  flash_mode_sel = param_3;
  phy_printf("flash test: enable=%d, clk_div=%d, drv=%d, flash_mode=%d\n",1,param_1,param_2);
  return;
}

