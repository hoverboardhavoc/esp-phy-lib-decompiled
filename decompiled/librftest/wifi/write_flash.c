/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> write_flash
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_flash(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_98 [128];
  
  uVar2 = *param_1;
  uVar5 = param_1[1];
  memset(auStack_98,0,0x78);
  uVar1 = _DAT_60096018;
  _DAT_60096018 = 5;
  if (uVar5 < 0x79) {
    uVar4 = uVar2 & 3;
    param_1 = param_1 + 2;
    if (uVar4 == 0) {
      for (; uVar5 != uVar4; uVar4 = uVar4 + 1) {
        auStack_98[uVar4] = (char)*param_1;
        param_1 = param_1 + 1;
      }
      esp_rom_spiflash_erase_sector(uVar2 >> 0xc);
      esp_rom_spiflash_write(uVar2,auStack_98,uVar5);
      pcVar3 = "FLASH WRITE OK\r\n";
    }
    else {
      pcVar3 = "ERROR:ADDR MUST BE 4 BYTES ALIGNED\r\n";
    }
  }
  else {
    pcVar3 = "ERROR:LENGTH EXCEED 120 BYTES\r\n";
  }
  phy_printf(pcVar3);
  _DAT_60096018 = uVar1;
  return;
}

