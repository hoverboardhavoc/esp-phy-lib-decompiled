/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> write_flash_init_para
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void write_flash_init_para(uint param_1,undefined4 param_2)

{
  spi_flash_attach(0,0);
  esp_rom_spiflash_erase_sector(param_1 >> 0xc);
  esp_rom_spiflash_write(param_1,param_2,0x90);
  return;
}

