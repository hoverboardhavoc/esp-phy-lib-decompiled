/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> rfpll_xpd_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfpll_xpd_test(undefined2 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  _DAT_6000802c = _DAT_6000802c & 0x27ffffff;
  ets_delay_us(10000);
  _DAT_6000802c = _DAT_6000802c | 0xd8000000;
  ets_delay_us(param_1);
  cVar1 = '\n';
  do {
    cVar1 = cVar1 + -1;
    uVar2 = (**(code **)(_g_phyFuns + 0x48))(99,1,0,*(code **)(_g_phyFuns + 0x48));
    phy_printf(&_LC11,uVar2);
  } while (cVar1 != '\0');
  return;
}

