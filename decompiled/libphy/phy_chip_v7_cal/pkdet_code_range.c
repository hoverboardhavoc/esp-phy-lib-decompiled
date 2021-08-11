/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> pkdet_code_range
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint pkdet_code_range(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  undefined1 auStack_140 [16];
  ushort local_130 [8];
  ushort auStack_120 [135];
  ushort uStack_12;
  
  puVar7 = local_130;
  puVar9 = local_130;
  puVar3 = local_130;
  puVar4 = local_130;
  do {
    pkdet_vol_start();
    puVar5 = (undefined1 *)((int)puVar4 + 0xc);
    read_sar_dout(puVar4);
    puVar4 = (ushort *)puVar5;
  } while (puVar5 != &stack0xfffffff0);
  uVar8 = 1;
  uVar6 = uVar8;
  do {
    for (; (uVar8 & 0xffff) != 0x90; uVar8 = uVar8 + 1) {
      uVar1 = *puVar7;
      uVar2 = local_130[uVar8];
      if (uVar2 < uVar1) {
        *puVar7 = uVar2;
        local_130[uVar8] = uVar1;
      }
    }
    uVar8 = uVar6 + 1;
    puVar7 = puVar7 + 1;
    uVar6 = uVar8;
  } while (uVar8 != 0x91);
  uVar6 = 0;
  do {
    puVar4 = (ushort *)((int)puVar9 + 0x11e);
    puVar9 = (ushort *)((int)puVar9 + -2);
    uVar6 = uVar6 + *puVar4 & 0xffff;
  } while ((ushort *)auStack_140 != puVar9);
  uVar8 = 0;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    uVar8 = uVar8 + uVar1 & 0xffff;
  } while (auStack_120 != puVar3);
  return (uVar6 >> 3) - (uVar8 >> 3) & 0xffff;
}

