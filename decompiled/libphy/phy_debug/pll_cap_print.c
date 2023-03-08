/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libphy -> phy_debug.o -> pll_cap_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pll_cap_print(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    _DAT_6000e0c4 = _DAT_6000e0c4 & 0xffffff00 | iVar1 * 3;
    phy_printf("chan=%d, pll_cap=%d\n",iVar1,_DAT_6000e0c0 >> 4 & 0x100 | _DAT_6000e0c0 & 0xff);
    iVar1 = iVar2;
  } while (iVar2 != 0x55);
  return;
}

