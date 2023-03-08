/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  uint uVar3;
  uint uVar4;
  undefined1 auStack_98 [132];
  
  spi_flash_attach(0,0);
  uVar1 = param_1[1];
  uVar4 = *param_1;
  memset(auStack_98,0,0x78);
  if (uVar1 < 0x79) {
    uVar3 = uVar4 & 3;
    param_1 = param_1 + 2;
    if (uVar3 == 0) {
      for (; uVar1 != uVar3; uVar3 = uVar3 + 1) {
        auStack_98[uVar3] = (char)*param_1;
        param_1 = param_1 + 1;
      }
      esp_rom_spiflash_write(uVar4,auStack_98,uVar1);
      pcVar2 = "FLASH WRITE OK\r\n";
    }
    else {
      pcVar2 = "ERROR:ADDR MUST BE 4 BYTES ALIGNED\r\n";
    }
  }
  else {
    pcVar2 = "ERROR:LENGTH EXCEED 120 BYTES\r\n";
  }
  phy_printf(pcVar2);
  return;
}

