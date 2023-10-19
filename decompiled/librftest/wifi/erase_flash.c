/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
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

