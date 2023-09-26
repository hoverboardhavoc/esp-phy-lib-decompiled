/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> force_txon_mode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void force_txon_mode(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_600a00c0;
  if (param_2 != 0) {
    param_3 = param_3 + 0x20 & 0xff;
    phy_dis_hw_set_freq();
    _DAT_600af4b4 = param_2 & param_1 & 1 | _DAT_600af4b4 & 0xfffffffe;
    uVar2 = 0x3000;
    if (param_1 == 0) {
      uVar2 = 0;
    }
    _DAT_600a0910 = _DAT_600a0910 & 0xffffcfff | uVar2;
    ets_delay_us(1);
    uVar2 = 0xc0000000;
    if (param_1 == 0) {
      uVar2 = 0;
    }
    _DAT_600a28a0 = _DAT_600a28a0 & 0x3fffffff | uVar2;
    ets_delay_us(100);
    if (-1 < iVar1 << 5) {
      phy_en_hw_set_freq();
    }
  }
  phy_force_pwr_index(param_1 != 0,param_3);
  force_txon(0);
  force_txon(param_1);
  phy_param = (char)param_1;
  return;
}

