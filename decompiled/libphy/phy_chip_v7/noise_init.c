/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> noise_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void noise_init(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  short sVar4;
  short *psVar5;
  
  if (-1 < (int)(DAT_00012ea0 << 10)) {
    psVar5 = &noise_array;
    cVar1 = '\0';
    do {
      cVar2 = '\x0e';
      if (cVar1 != '\x02') {
        cVar2 = cVar1 * '\x05' + '\x01';
      }
      chip_v7_set_chan((int)cVar2,0);
      *psVar5 = 0;
      iVar3 = check_noise_floor();
      if (0 < iVar3) {
        iVar3 = iVar3 * -0x10000 >> 0x10;
      }
      if (iVar3 < *psVar5) {
        *psVar5 = (short)iVar3;
      }
      iVar3 = check_noise_floor();
      if (0 < iVar3) {
        iVar3 = iVar3 * -0x10000 >> 0x10;
      }
      if (iVar3 < *psVar5) {
        *psVar5 = (short)iVar3;
      }
      cVar1 = cVar1 + '\x01';
      psVar5 = psVar5 + 1;
    } while (cVar1 != '\x03');
    sVar4 = noise_array;
    if (DAT_00012da6 < noise_array) {
      sVar4 = DAT_00012da6;
    }
    if (0 < sVar4) {
      sVar4 = 0;
    }
    DAT_00012ebc = DAT_00012da8;
    if (sVar4 < DAT_00012da8) {
      DAT_00012ebc = sVar4;
    }
    DAT_00012ea0 = DAT_00012ea0 | 0x200000;
    DAT_00012f22 = DAT_00012ebc;
  }
  sVar4 = DAT_00012ebc;
  if (DAT_00012ebc < -0x188) {
    sVar4 = -0x188;
  }
  if (-0x160 < sVar4) {
    sVar4 = -0x160;
  }
  _DAT_6001c018 = ((int)sVar4 & 0x3ffU) << 5 | _DAT_6001c018 & 0xffff801f | 0x10;
  return;
}

