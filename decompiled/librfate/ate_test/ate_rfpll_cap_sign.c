/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librfate -> ate_test.o -> ate_rfpll_cap_sign
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

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
  i2c_writeReg_Mask(0x62,1,0xb,6,6,1);
  iVar6 = 0;
  cVar2 = '\0';
  while( true ) {
    iVar1 = 0;
    do {
      uVar5 = iVar3 - iVar1;
      if (iVar6 != 0) {
        uVar5 = iVar3 + 1 + iVar1;
      }
      write_pll_cap(uVar5 & 0xffff);
      ets_delay_us(5);
      uVar4 = i2c_readReg(0x62,1,0xc);
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

