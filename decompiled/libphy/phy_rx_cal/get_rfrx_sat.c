/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_rx_cal.o -> get_rfrx_sat
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char get_rfrx_sat(void)

{
  char cVar1;
  char cVar2;
  
  cVar2 = 'd';
  cVar1 = '\0';
  do {
    cVar2 = cVar2 + -1;
    cVar1 = cVar1 + ((_DAT_6001c08c >> 0xc & 0x7f) == 0x31);
  } while (cVar2 != '\0');
  return cVar1;
}

