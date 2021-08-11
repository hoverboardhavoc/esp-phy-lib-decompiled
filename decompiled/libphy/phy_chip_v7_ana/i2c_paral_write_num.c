/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> i2c_paral_write_num
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void i2c_paral_write_num(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                        int param_7,undefined4 param_8)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != param_7; iVar1 = iVar1 + 1) {
    i2c_paral_write(*(undefined1 *)(param_1 + iVar1),*(undefined1 *)(param_2 + iVar1),
                    *(undefined1 *)(param_3 + iVar1),*(undefined1 *)(param_4 + iVar1),
                    *(undefined1 *)(param_5 + iVar1),*(undefined1 *)(param_6 + iVar1),param_8);
  }
  return;
}

