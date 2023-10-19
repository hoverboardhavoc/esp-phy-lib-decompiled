/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> tx_a_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void tx_a_frame(undefined4 param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar1 = (uint *)Plcp0AddrGet();
  puVar2 = (uint *)ConfAddrGet(param_1);
  DAT_60012f85 = DAT_60012f85 | 2;
  uVar3 = (uint)DAT_60012f91;
  DAT_60012f91 = DAT_60012f91 | 3;
  tx_queue = param_1;
  *puVar2 = *puVar2 & 0xffc00fff | 0x1000;
  *puVar1 = *puVar1 | 0xc0000000;
  while( true ) {
    if ((DAT_60012f8d & 2) != 0) break;
    uVar3 = flash_test_run(0x1000,uVar3,DAT_60012f8f,DAT_60012f90);
  }
  return;
}

