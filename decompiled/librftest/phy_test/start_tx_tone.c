/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
                    /* WARNING: Could not recover jumptable at 0x0001008c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x98))(param_1,uVar1,param_3,param_4,uVar2,param_6);
  return;
}

