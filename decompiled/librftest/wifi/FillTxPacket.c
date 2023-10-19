/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> FillTxPacket
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void FillTxPacket(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0 || param_3 != 0) {
    iVar1 = (param_1 & 0xffff) - ((param_2 & 0xffff) + (param_2 >> 0x10) + (param_3 & 0xffff));
  }
  fill_tx_frame(param_1 >> 0x10,param_4,param_1 & 0xffff,param_3 & 0xffff,iVar1,param_5);
  return;
}

