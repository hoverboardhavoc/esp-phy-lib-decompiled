/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> set_spur_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_spur_reg(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0xe) {
    uVar1 = 0x9b4;
  }
  else {
    uVar1 = param_1 * 5 + 0x967;
  }
  iVar2 = spur_cal(uVar1 & 0xffff,10,0x28,1);
  spur_reg_write_one_tone(0,(iVar2 << 10) / 100);
  phy_printf("Spur register set done! Chan frequency = %d \n",uVar1);
  return;
}

