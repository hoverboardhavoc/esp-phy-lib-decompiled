/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> gen_rx_gain_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint gen_rx_gain_table(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = 0;
  uVar1 = 0;
  uVar3 = 0;
  do {
    if (uVar4 == (int)*(char *)(param_4 + uVar1) - 1U) {
      uVar4 = 0;
      if ((int)uVar1 < (int)(param_6 - 1U)) {
        uVar1 = uVar1 + 1 & 0xff;
      }
    }
    else {
      uVar4 = uVar4 + 1 & 0xff;
    }
    if ((uVar1 == param_6 - 1U) && (param_2 - 1U == uVar4)) break;
    uVar2 = (uVar4 & 1) << 6 | (int)(uVar4 + 1) >> 1 | (uint)*(byte *)(param_3 + uVar1) << 8 |
            (uint)*(byte *)(param_5 + uVar1) << 4;
    puVar5 = (uint *)((uVar3 >> 1) * 4 + param_1);
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar2 * 0x10000 + *puVar5;
    }
    *puVar5 = uVar2;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 != 0x55);
  return uVar3 - 1 & 0xff;
}

