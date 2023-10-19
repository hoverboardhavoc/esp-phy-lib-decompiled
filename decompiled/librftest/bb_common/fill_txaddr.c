/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> fill_txaddr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 fill_txaddr(void)

{
  undefined1 uVar1;
  undefined1 auStack_18 [20];
  
  read_macaddr_from_otp(auStack_18);
  DAT_600123a1 = (char)auStack_18._0_4_;
  DAT_600123a2 = SUB41(auStack_18._0_4_,1);
  DAT_600123a3 = SUB41(auStack_18._0_4_,2);
  DAT_600123a4 = SUB41(auStack_18._0_4_,3);
  uVar1 = DAT_600123a5;
  DAT_600123a5 = (char)auStack_18._4_2_;
  DAT_600123a6 = SUB21(auStack_18._4_2_,1);
  DAT_600123a7 = 0;
  DAT_600123a8 = 0;
  return uVar1;
}

