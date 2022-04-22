/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_ana.o -> wait_rfpll_cal_end
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_rfpll_cal_end(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\0';
  do {
    ets_delay_us(0x14);
    iVar2 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,7,1,1,*(code **)(_g_phyFuns + 0x1b8));
    if (iVar2 != 0) {
      return;
    }
    if (cVar1 == 'c') {
      phy_printf("error: pll_cal exceeds 2ms!!!\n");
    }
    cVar1 = cVar1 + '\x01';
  } while (cVar1 != 'd');
  return;
}

