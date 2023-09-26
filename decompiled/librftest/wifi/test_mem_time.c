/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> test_mem_time
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_mem_time(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = 'd';
  if (param_1 == 0) {
    if (param_2 == 0) {
      do {
        cVar2 = cVar2 + -1;
        _DAT_600a0bfc = 0;
        uVar1 = param_3;
      } while (cVar2 != '\0');
    }
    else {
      do {
        cVar2 = cVar2 + -1;
        _DAT_600a0bfc = 0;
        uVar1 = param_3;
      } while (cVar2 != '\0');
    }
  }
  else {
    uVar1 = _DAT_600a0bfc;
    if (param_2 == 0) {
      do {
        cVar2 = cVar2 + -1;
      } while (cVar2 != '\0');
    }
    else {
      do {
        cVar2 = cVar2 + -1;
      } while (cVar2 != '\0');
    }
  }
  phy_printf("time=%dus\n",0,uVar1);
  return;
}

