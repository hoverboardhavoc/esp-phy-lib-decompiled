/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> test_mem_time
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_mem_time(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar1 = phy_time_now();
  cVar3 = 'd';
  if (param_1 == 0) {
    if (param_2 == 0) {
      do {
        cVar3 = cVar3 + -1;
        _DAT_600a0bfc = 0;
      } while (cVar3 != '\0');
    }
    else {
      do {
        cVar3 = cVar3 + -1;
        _DAT_600a0bfc = 0;
      } while (cVar3 != '\0');
    }
  }
  else if (param_2 == 0) {
    do {
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
  }
  else {
    do {
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
  }
  iVar2 = phy_time_now();
  phy_printf("time=%dus\n",iVar2 - iVar1);
  return;
}

