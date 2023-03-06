/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_rfpll.o -> rfpll_cap_correct
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int rfpll_cap_correct(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = false;
  iVar2 = 0;
  iVar7 = 0;
  for (iVar6 = 0; param_1 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = i2c_readReg(0x62,1,0xc);
    uVar5 = uVar4 >> 2 & 3;
    uVar4 = iVar2 + 1;
    if (uVar5 != 1) {
      if (uVar5 != 2) break;
      uVar4 = iVar2 - 1;
    }
    iVar2 = (int)(short)uVar4;
    if (!bVar1) {
      sVar3 = read_pll_cap();
      iVar7 = (int)sVar3;
    }
    uVar4 = (uVar4 & 0xffff) + iVar7;
    write_pll_cap(uVar4 & 0xffff);
    ets_delay_us(10);
    if (param_2 != 0) {
      phy_printf("%d,%d,%d,%d\n",iVar6,iVar2,iVar7,(int)(short)uVar4);
    }
    bVar1 = true;
  }
  if (iVar2 != 0) {
    pll_cap_mem_update(iVar2);
  }
  return iVar2;
}

