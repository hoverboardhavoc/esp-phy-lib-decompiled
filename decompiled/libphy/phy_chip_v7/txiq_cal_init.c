/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> txiq_cal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txiq_cal_init(void)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_18 [12];
  
  if (-1 < (int)(DAT_00014544 << 0x11)) {
    iVar1 = (int)(short)DAT_000144fc;
    cVar2 = DAT_000144fc;
    if (DAT_000144fc < '\0') {
      cVar2 = '\0';
    }
    rfcal_txiq(0,&DAT_00014548,&DAT_00014570,0x80,(int)cVar2,0);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar1 = (iVar1 + -0x14) * 0x10000 >> 0x10;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    rfcal_txiq(0,auStack_18,&DAT_00014586,0x80,(int)(char)iVar1,2);
    DAT_00014544 = DAT_00014544 | 0x4000;
  }
  return;
}

