/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  
  phy_printf("force_en=%d, tx_en=%d, iq_gain=%d, iq_phase=%d\n",param_1,param_2,param_3,param_4);
  if (param_2 == 0) {
    uVar1 = (param_4 & 0x3f) << 0x15;
    uVar2 = (param_3 & 0x1f) << 0x10 |
            _DAT_6000607c & 0xe800ffff | 0x8000800 | (uint)(param_1 == 0) << 0x1c;
  }
  else {
    uVar1 = (param_4 & 0x3f) << 5;
    uVar2 = param_3 & 0x1f | _DAT_6000607c & 0xffffe800 | 0x8000800 | (uint)(param_1 == 0) << 0xc;
  }
  _DAT_6000607c = uVar1 | uVar2;
  return;
}

