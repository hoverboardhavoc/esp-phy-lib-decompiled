/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librfate -> ate_test.o -> ate_rfpll_cap_sign
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ate_rfpll_cap_sign(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  chip_v7_set_chan(1,0);
  iVar3 = read_pll_cap();
  (**(code **)(_g_phyFuns + 0x60))(0x62,1,0xb,6,6,1,*(code **)(_g_phyFuns + 0x60));
  iVar6 = 0;
  cVar2 = '\0';
  while( true ) {
    iVar1 = 0;
    do {
      uVar5 = iVar3 - iVar1;
      if (iVar6 != 0) {
        uVar5 = iVar3 + 1 + iVar1;
      }
      write_pll_cap((int)(short)uVar5);
      ets_delay_us(5);
      uVar4 = (**(code **)(_g_phyFuns + 0x50))(0x62,1,0xc,*(code **)(_g_phyFuns + 0x50));
      if ((uVar4 >> 2 & 3) == 0) {
        cVar2 = cVar2 + '\x01';
      }
      if (param_1 != 0) {
        phy_printf("i:%d,cap:%d,cap_set:%d,cap_sign:%d,sign0_num:%d\n",iVar6,iVar3,uVar5 & 0xffff,
                   cVar2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 10);
    if (iVar6 != 0) break;
    iVar6 = 1;
  }
  return;
}

