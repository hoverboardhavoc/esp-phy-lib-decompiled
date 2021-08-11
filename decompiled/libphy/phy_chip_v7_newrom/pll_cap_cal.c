/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> pll_cap_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char pll_cap_cal(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 uStack_11;
  
  uVar2 = _DAT_6000e168 >> 0x18;
  cVar1 = '\0';
  do {
    iVar3 = pll_correct_dcap(uVar2 & 0x7f,&uStack_11);
    if (iVar3 == 0) goto _L124;
    i2c_writeReg(0x62,1,1,uStack_11);
    i2c_writeReg(0x62,1,0,0x58);
    i2c_writeReg(0x62,1,0,0x78);
    cVar1 = cVar1 + '\x01';
    ets_delay_us(1);
  } while (cVar1 != '\x14');
  cVar1 = '\x14';
_L124:
  return cVar1 + -1;
}

