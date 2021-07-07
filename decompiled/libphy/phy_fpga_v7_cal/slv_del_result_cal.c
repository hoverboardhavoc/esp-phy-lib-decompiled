/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_cal.o -> slv_del_result_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void slv_del_result_cal(uint param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  short *psVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  for (uVar6 = param_1; uVar6 < param_2; uVar6 = uVar6 + 1) {
    *(undefined2 *)(uVar6 * 2 + param_4) = 0;
  }
  puVar2 = (uint *)(param_3 + 0x1c);
  uVar9 = 0;
  uVar6 = 0;
  uVar8 = 0;
  uVar7 = 0;
  do {
    uVar1 = uVar8 & 0xffff;
    for (uVar4 = param_1; uVar4 < param_2; uVar4 = uVar4 + 1) {
      if ((*puVar2 >> (uVar4 & 0x1f) & 1) != 0) {
        *(short *)(uVar4 * 2 + param_4) = (short)uVar8;
        if (uVar7 == 0) {
          uVar9 = uVar1;
        }
        uVar7 = uVar7 | 1 << (uVar4 & 0x1f);
        if (uVar6 < uVar1) {
          uVar6 = uVar1;
        }
      }
    }
    uVar8 = uVar8 + 1;
    puVar2 = puVar2 + -1;
  } while (uVar8 != 8);
  if (uVar7 != 0) {
    if (3 < (int)(uVar6 - uVar9)) {
      puVar5 = (ushort *)(param_4 + param_1 * 2);
      for (uVar7 = param_1; uVar7 < param_2; uVar7 = uVar7 + 1) {
        if ((int)(*puVar5 - uVar9) < 4) {
          *puVar5 = *puVar5 + 8;
        }
        uVar8 = (uint)*puVar5;
        if (*puVar5 < uVar6) {
          uVar8 = uVar6;
        }
        puVar5 = puVar5 + 1;
        uVar6 = uVar8;
      }
    }
    psVar3 = (short *)(param_4 + param_1 * 2);
    for (; param_1 < param_2; param_1 = param_1 + 1) {
      *psVar3 = (short)uVar6 - *psVar3;
      psVar3 = psVar3 + 1;
    }
  }
  return;
}

