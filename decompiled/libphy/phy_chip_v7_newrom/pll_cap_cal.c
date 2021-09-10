/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
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
    if (iVar3 == 0) goto _L169;
    i2c_writeReg(0x62,1,1,uStack_11);
    i2c_writeReg(0x62,1,0,0x58);
    i2c_writeReg(0x62,1,0,0x78);
    cVar1 = cVar1 + '\x01';
    ets_delay_us(1);
  } while (cVar1 != '\x14');
  cVar1 = '\x14';
_L169:
  return cVar1 + -1;
}

