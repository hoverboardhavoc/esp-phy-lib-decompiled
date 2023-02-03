/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> bb_wdg_test_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 bb_wdg_test_en(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = param_4 << 0x10 | param_3;
  DAT_60012381 = (char)param_3;
  DAT_60012382 = (char)(param_3 >> 8);
  DAT_60012383 = (char)(uVar2 >> 0x10);
  uVar1 = DAT_60012384;
  DAT_60012384 = (byte)((uint)(param_2 << 0x1f) >> 0x18) |
                 (byte)(uVar2 >> 0x18) | (byte)((uint)(param_1 << 0x1e) >> 0x18);
  DAT_60012385 = 0;
  DAT_60012386 = 0;
  DAT_60012387 = 0;
  DAT_60012388 = (byte)((uint)(param_6 << 0x1d) >> 0x18) | (byte)((uint)(param_5 << 0x1f) >> 0x18) |
                 0x40;
  return uVar1;
}

