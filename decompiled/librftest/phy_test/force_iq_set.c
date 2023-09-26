/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> force_iq_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void force_iq_set(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  phy_printf("force_en=%d, tx_en=%d, iq_gain=%d, iq_phase=%d\n",param_1,param_2,param_3,param_4);
  if (param_2 == 0) {
    uVar2 = (param_3 & 0x3f) << 0x10 |
            _DAT_600a0450 & 0xbfc0ffff | 0x20002000 | (uint)(param_1 == 0) << 0x1e;
    uVar1 = (param_4 & 0x7f) << 0x16;
    uVar3 = 0xe03fffff;
  }
  else {
    uVar2 = param_3 & 0x3f | _DAT_600a0450 & 0xffffbfc0 | 0x20002000 | (uint)(param_1 == 0) << 0xe;
    uVar1 = (param_4 & 0x7f) << 6;
    uVar3 = 0xffffe03f;
  }
  _DAT_600a0450 = uVar1 | uVar2 & uVar3;
  return;
}

