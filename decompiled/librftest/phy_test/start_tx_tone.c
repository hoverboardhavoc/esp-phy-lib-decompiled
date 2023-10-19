/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> phy_test.o -> start_tx_tone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void start_tx_tone(undefined1 param_1,int param_2,undefined1 param_3,undefined1 param_4,int param_5,
                  undefined1 param_6)

{
  ushort uVar1;
  ushort uVar2;
  
  if (_DAT_600a0420 << 2 < 0) {
    uVar1 = (ushort)((param_2 << 7) / 5) & 0xfff;
    uVar2 = (ushort)((param_5 << 7) / 5) & 0xfff;
  }
  else {
    uVar1 = (ushort)((param_2 << 5) / 5) & 0x3ff;
    uVar2 = (ushort)((param_5 << 5) / 5) & 0x3ff;
  }
  start_tx_tone_step(param_1,uVar1,param_3,param_4,uVar2,param_6);
  return;
}

