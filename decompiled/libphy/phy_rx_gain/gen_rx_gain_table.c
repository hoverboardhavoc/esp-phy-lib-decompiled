/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_gain.o -> gen_rx_gain_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint gen_rx_gain_table(int param_1,int param_2,int param_3,int param_4,byte *param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte abStack_8 [8];
  
  uVar4 = (uint)*param_5;
  abStack_8[0] = 0;
  abStack_8[1] = 3;
  abStack_8[2] = 3;
  abStack_8[3] = 3;
  abStack_8[4] = 3;
  uVar3 = 0;
  uVar1 = 0;
  do {
    if (uVar4 == ((int)(char)param_5[uVar3] + (int)*(char *)(param_4 + uVar3)) - 1U) {
      if ((int)uVar3 < (int)(param_6 - 1U)) {
        uVar3 = uVar3 + 1 & 0xff;
        uVar4 = (uint)param_5[uVar3];
      }
    }
    else {
      uVar4 = uVar4 + 1 & 0xff;
    }
    if ((uVar3 == param_6 - 1U) && (param_2 - 1U == uVar4)) break;
    uVar2 = (uVar4 & 1) << 6 | (int)(uVar4 + 1) >> 1 | (uint)abStack_8[uVar3] << 4 |
            (uint)*(byte *)(param_3 + uVar3) << 8;
    puVar5 = (uint *)((uVar1 >> 1) * 4 + param_1);
    if ((uVar1 & 1) != 0) {
      uVar2 = uVar2 * 0x10000 + *puVar5;
    }
    *puVar5 = uVar2;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 != 0x55);
  return uVar1 - 1 & 0xff;
}

