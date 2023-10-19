/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> read_flash
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void read_flash(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_410 [1024];
  
  spi_flash_attach(0,0);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  memset(local_410,0,0x400);
  if (uVar3 < 0x401) {
    esp_rom_spiflash_read(uVar1,local_410,uVar3);
    phy_printf("READ FLASH 0x%08x, length: %d :\r\n",uVar1,uVar3);
    for (uVar2 = 0; uVar3 != uVar2; uVar2 = uVar2 + 1) {
      phy_printf("%02x ",local_410[uVar2]);
    }
    phy_printf("\r\nFLASH READ END.\r\n");
  }
  else {
    phy_printf("Error: data length > %d\r\n",0x400);
  }
  return;
}

