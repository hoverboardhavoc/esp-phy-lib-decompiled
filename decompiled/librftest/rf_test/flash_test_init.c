/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> rf_test.o -> flash_test_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void flash_test_init(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  flash_test_enable = 1;
  flash_clk = param_1;
  flash_clk_drv = param_2;
  flash_data_drv = param_3;
  flash_mode_sel = param_4;
  phy_printf("flash test: enable=%d, clk_div=%d, clk_drv=%d, data_drv=%d, flash_mode=%d\n",1,param_1
             ,param_2);
  return;
}

