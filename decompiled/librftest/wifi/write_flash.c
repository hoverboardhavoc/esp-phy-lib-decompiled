/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> write_flash
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void write_flash(uint *param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_98 [132];
  
  spi_flash_attach(0,0);
  uVar6 = param_1[1];
  uVar1 = *param_1;
  memset(auStack_98,0,0x78);
  if (uVar6 < 0x79) {
    uVar5 = uVar1 & 3;
    param_1 = param_1 + 2;
    if (uVar5 == 0) {
      for (; uVar6 != uVar5; uVar5 = uVar5 + 1) {
        auStack_98[uVar5] = (char)*param_1;
        param_1 = param_1 + 1;
      }
      uVar3 = esp_rom_spiflash_erase_sector(uVar1 >> 0xc);
      uVar4 = esp_rom_spiflash_write(uVar1,auStack_98,uVar6);
      phy_printf("FLASH WRITE OK %x %x\r\n",uVar3,uVar4);
      return;
    }
    pcVar2 = "ERROR:ADDR MUST BE 4 BYTES ALIGNED\r\n";
  }
  else {
    pcVar2 = "ERROR:LENGTH EXCEED 120 BYTES\r\n";
  }
  phy_printf(pcVar2);
  return;
}

