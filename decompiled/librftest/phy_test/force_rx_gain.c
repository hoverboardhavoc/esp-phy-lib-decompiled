/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> phy_test.o -> force_rx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void force_rx_gain(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  bt_rx_force(param_1 & param_3);
  uVar1 = (param_1 & 1) << 0x17;
  if (param_3 == 0) {
    _DAT_6001c02c = _DAT_6001c02c & 0x7fffff | param_2 << 0x18 | uVar1;
  }
  else {
    _DAT_60011840 = _DAT_60011840 & 0x7fffff | param_2 << 0x18 | uVar1;
    _DAT_60011054 = (~param_1 & 1) << 0xf | _DAT_60011054 & 0xffff7fff;
  }
  return;
}

