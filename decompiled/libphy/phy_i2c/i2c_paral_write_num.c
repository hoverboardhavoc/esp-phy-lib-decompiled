/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_i2c.o -> i2c_paral_write_num
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void i2c_paral_write_num(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                        int param_7,undefined4 param_8)

{
  int iVar1;
  
  phy_i2c_enter_critical();
  for (iVar1 = 0; iVar1 != param_7; iVar1 = iVar1 + 1) {
    i2c_paral_write(*(undefined1 *)(param_1 + iVar1),*(undefined1 *)(param_2 + iVar1),
                    *(undefined1 *)(param_3 + iVar1),*(undefined1 *)(param_4 + iVar1),
                    *(undefined1 *)(param_5 + iVar1),*(undefined1 *)(param_6 + iVar1),param_8);
  }
  return;
}

