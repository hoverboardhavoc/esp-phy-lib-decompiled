/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> noise_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void noise_init(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  short sVar4;
  short *psVar5;
  
  if (-1 < (int)(DAT_00014050 << 10)) {
    psVar5 = &noise_array;
    cVar1 = '\0';
    do {
      cVar2 = '\x0e';
      if (cVar1 != '\x02') {
        cVar2 = cVar1 * '\x05' + '\x01';
      }
      chip_v7_set_chan((int)cVar2,0);
      cVar2 = '\x04';
      *psVar5 = 0;
      do {
        iVar3 = ram_check_noise_floor();
        if (0 < iVar3) {
          iVar3 = iVar3 * -0x10000 >> 0x10;
        }
        if (iVar3 < *psVar5) {
          *psVar5 = (short)iVar3;
        }
        cVar2 = cVar2 + -1;
      } while (cVar2 != '\0');
      cVar1 = cVar1 + '\x01';
      psVar5 = psVar5 + 1;
    } while (cVar1 != '\x03');
    sVar4 = noise_array;
    if (DAT_00013f2a < noise_array) {
      sVar4 = DAT_00013f2a;
    }
    if (0 < sVar4) {
      sVar4 = 0;
    }
    DAT_00014094 = DAT_00013f2c;
    if (sVar4 < DAT_00013f2c) {
      DAT_00014094 = sVar4;
    }
    DAT_00014050 = DAT_00014050 | 0x200000;
    DAT_00014128 = DAT_00014094;
  }
                    /* WARNING: Could not recover jumptable at 0x000118c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(g_phyFuns + 0x8c))((int)DAT_00014094);
  return;
}

