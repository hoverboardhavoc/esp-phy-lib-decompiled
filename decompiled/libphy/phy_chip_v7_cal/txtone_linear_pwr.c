/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> txtone_linear_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int txtone_linear_pwr(void)

{
  int iVar1;
  char cVar2;
  short sStack_14;
  short sStack_12;
  
  cVar2 = '\x04';
  iVar1 = 0;
  do {
    get_tone_sar_dout(4);
    get_sar_sig_ref(&sStack_14,&sStack_12);
    if (sStack_12 == 0) {
      sStack_12 = 1;
    }
    cVar2 = cVar2 + -1;
    iVar1 = (iVar1 + ((int)sStack_14 << 10) / (int)sStack_12) * 0x10000 >> 0x10;
  } while (cVar2 != '\0');
  return iVar1;
}

