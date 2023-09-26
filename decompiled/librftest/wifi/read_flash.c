/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> read_flash
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void read_flash(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_420 [1036];
  
  uVar2 = *param_1;
  uVar4 = param_1[1];
  memset(local_420,0,0x400);
  uVar1 = _DAT_60096018;
  _DAT_60096018 = 5;
  if (uVar4 < 0x401) {
    esp_rom_spiflash_read(uVar2,local_420,uVar4);
    phy_printf("READ FLASH 0x%08x, length: %d :\r\n",uVar2,uVar4);
    for (uVar3 = 0; uVar4 != uVar3; uVar3 = uVar3 + 1) {
      phy_printf("%02x ",local_420[uVar3]);
    }
    phy_printf("\r\nFLASH READ END.\r\n");
  }
  else {
    phy_printf("Error: data length > %d\r\n",0x400);
  }
  _DAT_60096018 = uVar1;
  return;
}

