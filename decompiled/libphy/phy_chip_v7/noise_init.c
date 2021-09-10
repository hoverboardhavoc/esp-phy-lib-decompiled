/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
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
  
  if (-1 < (int)(DAT_00012f18 << 10)) {
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
    if (DAT_00012e1e < noise_array) {
      sVar4 = DAT_00012e1e;
    }
    if (0 < sVar4) {
      sVar4 = 0;
    }
    DAT_00012f34 = DAT_00012e20;
    if (sVar4 < DAT_00012e20) {
      DAT_00012f34 = sVar4;
    }
    DAT_00012f18 = DAT_00012f18 | 0x200000;
    DAT_00012f9a = DAT_00012f34;
  }
  sVar4 = DAT_00012f34;
  if (DAT_00012f34 < -0x188) {
    sVar4 = -0x188;
  }
  if (-0x160 < sVar4) {
    sVar4 = -0x160;
  }
  _DAT_6001c018 = ((int)sVar4 & 0x3ffU) << 5 | _DAT_6001c018 & 0xffff801f | 0x10;
  return;
}

