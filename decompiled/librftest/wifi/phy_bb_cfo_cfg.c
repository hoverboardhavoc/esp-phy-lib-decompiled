/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> phy_bb_cfo_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_bb_cfo_cfg(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = (uint)(param_2 << 0x13) / 10;
    iVar2 = 0x500000 / param_2;
  }
  else {
    uVar1 = (uint)(param_2 * 0xc0000) / 0x28;
    iVar2 = 0x2800000 / (param_2 * 3);
  }
  phy_printf("%d,%d,%lld,%lld\n",param_1,param_2,uVar1,0,iVar2,0);
  return;
}

