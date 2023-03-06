/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_tx_gain.o -> get_tx_gain_value
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_tx_gain_value(uint param_1,int param_2,undefined2 *param_3,undefined2 *param_4,
                      short *param_5,int param_6,int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  byte in_stack_00000000;
  
  for (uVar1 = 0; psVar3 = (short *)(param_1 * 2 + param_8), uVar1 != in_stack_00000000;
      uVar1 = uVar1 + 1 & 0xff) {
    if (param_2 < *psVar3) {
      if ((param_1 == in_stack_00000000 - 1) || (param_1 = param_1 + 1 & 0xff, psVar3[1] <= param_2)
         ) break;
    }
    else {
      if ((param_1 == 0) || (param_2 < psVar3[-1])) break;
      param_1 = param_1 - 1 & 0xff;
    }
  }
  iVar2 = param_1 * 2;
  *param_3 = *(undefined2 *)(param_6 + iVar2);
  *param_4 = *(undefined2 *)(param_7 + iVar2);
  *param_5 = (short)param_2 - *(short *)(param_8 + iVar2);
  return;
}

