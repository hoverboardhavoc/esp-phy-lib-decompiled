/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
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
  
  if (-1 < (int)(DAT_0001459c << 0x11)) {
    iVar1 = (int)(short)DAT_00014554;
    cVar2 = DAT_00014554;
    if (DAT_00014554 < '\0') {
      cVar2 = '\0';
    }
    rfcal_txiq(0,&DAT_000145a0,&DAT_000145c8,0x80,(int)cVar2,0);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar1 = (iVar1 + -0x14) * 0x10000 >> 0x10;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    rfcal_txiq(0,auStack_18,&DAT_000145de,0x80,(int)(char)iVar1,2);
    DAT_0001459c = DAT_0001459c | 0x4000;
  }
  return;
}

