/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> erase_flash
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void erase_flash(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  uVar1 = _DAT_60096018;
  iVar3 = param_1[1];
  iVar5 = *param_1;
  _DAT_60096018 = 5;
  iVar2 = 0;
  if ((uint)(iVar3 + iVar5) < 0x401) {
    for (; iVar3 != iVar2; iVar2 = iVar2 + 1) {
      esp_rom_spiflash_erase_sector(iVar2 + iVar5);
    }
    pcVar4 = "ERASE OK\r\n";
  }
  else {
    pcVar4 = "ERROR:SECTOR OUT OF RANGE\r\n";
  }
  phy_printf(pcVar4);
  _DAT_60096018 = uVar1;
  return;
}

