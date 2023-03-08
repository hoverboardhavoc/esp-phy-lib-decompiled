/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> erase_flash
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void erase_flash(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  spi_flash_attach(0,0);
  iVar4 = *param_1;
  iVar2 = param_1[1];
  iVar1 = 0;
  if ((uint)(iVar2 + iVar4) < 0x401) {
    for (; iVar2 != iVar1; iVar1 = iVar1 + 1) {
      esp_rom_spiflash_erase_sector(iVar1 + iVar4);
    }
    pcVar3 = "ERASE OK\r\n";
  }
  else {
    pcVar3 = "ERROR:SECTOR OUT OF RANGE\r\n";
  }
  phy_printf(pcVar3);
  return;
}

