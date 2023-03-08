/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> rf_cal_flash
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_cal_flash(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    return;
  }
  if (param_1 == 0) {
    spi_flash_read(0xfc000,0x766);
    return;
  }
  esp_rom_spiflash_erase_sector(0xfc);
  esp_rom_spiflash_write(0xfc000,param_2,0x766);
  return;
}

