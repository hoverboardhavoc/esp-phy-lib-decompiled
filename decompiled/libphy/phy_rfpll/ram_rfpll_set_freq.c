/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
 * Source: libphy -> phy_rfpll.o -> ram_rfpll_set_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ram_rfpll_set_freq(int param_1,int param_2,int param_3,byte *param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0x1a;
  if ((param_2 != 1) && (iVar1 = 0x20, param_2 != 2)) {
    iVar1 = 0x28;
  }
  uVar2 = (uint)((param_3 << 0x14) / 1000 + param_1 * 0x100000) / (uint)(iVar1 * 3) - 0x1000000;
  param_4[4] = (byte)(uVar2 >> 0x1b) & 1;
  param_4[3] = (byte)(uVar2 >> 0x13);
  param_4[2] = (byte)(uVar2 >> 0xb);
  param_4[1] = (byte)(uVar2 >> 3);
  *param_4 = (byte)uVar2 & 7;
  return;
}

