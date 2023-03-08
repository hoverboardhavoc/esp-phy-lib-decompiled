/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> rf_test.o -> flash_test_run
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void flash_test_run(undefined4 param_1)

{
  if ((flash_test_enable != '\0') && (flash_mode_sel == 1)) {
    spi_flash_op(0,0x130000,param_1,flash_clk,flash_clk_drv,flash_data_drv);
    spi_flash_op(1,0x130000,param_1,flash_clk,flash_clk_drv,flash_data_drv);
    return;
  }
  return;
}

